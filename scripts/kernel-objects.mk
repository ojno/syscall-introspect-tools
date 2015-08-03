-include config.mk

LINUX_ZIMAGE ?= /boot/vmlinuz-$(shell uname -r)
LINUX_SYSTEM_MAP ?= /boot/System.map-$(shell uname -r)
LINUX_IMAGE ?= vmlinux
LINUX_IMAGE_DWARF ?= /usr/lib/debug/$(shell echo $(LINUX_ZIMAGE) | sed 's/vmlinuz/vmlinux/' )
DWARFHPP ?= dwarfhpp
#IFACETYPES ?= ifacetypes

IFACETYPES := ../../liballocs/tools/ifacetypes
LD_LIBRARY_PATH := $$HOME/prefix/lib:../../trap-syscalls/contrib/dwarfidl/lib:../../trap-syscalls/contrib/dwarfidl/contrib/libcxxgen/lib:../../trap-syscalls/contrib/dwarfidl/contrib/libdwarfpp/lib:$$LD_LIBRARY_PATH

.PHONY: default
default: linux-syscalls.h

$(LINUX_IMAGE): $(LINUX_ZIMAGE)
	start_row="$$( sudo od -t x1 -A d "$<" | grep "1f 8b 08" | head -n1 )"; \
	octal_row_off="$$( echo "$$start_row" | tr -s '[:blank:]' '\t' | cut -f1 )"; \
	octal_char_off="$$( echo "$$start_row" | sed 's/1f 8b 08.*//' | wc -c )"; \
	octal_byte_off="$$( expr $$( expr $$octal_char_off - 8 ) / 3 )"; \
	echo "octal_row_off is $$octal_row_off" 1>&2; \
	echo "octal_byte_off is $$octal_byte_off" 1>&2; \
	sudo dd if="$<" bs=1 skip=$$( expr $$octal_row_off + $$octal_byte_off ) | ( gunzip > "$@" || true )
	test -s "$@" || rm -f "$@"

# How can we get an honest list of the actual set of system calls 
# implemented by a kernel binary? Ideally we wouldn't need the source.
# The answer: System.map contains the address of system_call_table.
# (It's not in the actual __ksymtab.)
# We read words from this address until we hit a maximum or see a 
# value that's *not* some address in the System.map.

linux-syscall-table.raw-objdump: $(LINUX_IMAGE) $(LINUX_SYSTEM_MAP)
	table_addr=$$( sudo cat "$(LINUX_SYSTEM_MAP)" | grep '[[:blank:]]sys_call_table' | tr -s '[:blank:]' '\t' | cut -f1 ); \
	echo "table addr is $$table_addr" 1>&2; \
	objdump -rs --start-address=0x$${table_addr} "$(LINUX_IMAGE)" > "$@"

# We need to reverse the byte order in the objdump words we get out. 
# Also, egregiously guess that there won't be more than 1000 syscalls.
linux-syscall-table.dump: linux-syscall-table.raw-objdump
	cat "$<" | \
	egrep '^ *([a-f0-9]{16})' | sed -r 's/^ *([a-f0-9]{16}) ([a-f0-9]{8}) ([a-f0-9]{8}) ([a-f0-9]{8}) ([a-f0-9]{8}).*/\2\3\n\4\5/' | \
	sed -r 's/([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})([0-9a-f]{2})/\8\7\6\5\4\3\2\1/' | \
	head -n 1000 > "$@"

linux-syscall-addrs: linux-syscall-table.dump $(LINUX_SYSTEM_MAP)
	cat "$<" | \
	(ctr=0; while read addr; do \
		echo -n "$$ctr "; sudo cat "$(LINUX_SYSTEM_MAP)" | grep "^$$addr" | egrep -v '[[:blank:]]+(compat_)?SyS_[a-zA-Z0-9_]+$$' | uniq -w16 ; \
		ctr=`expr $$ctr + 1`; \
	done ) | tr -s '[:blank:]' '\t' | sed -r '/0{16}/ q' > "$@"

# Delete weak symbols, since these aren't actually implemented syscalls.
# Delete the last line, because it's a terminator
linux-syscalls.list: linux-syscall-addrs
	cat "$<" | grep -v '\tW\t' | cut -f4 | head -n-1 > "$@"

linux-syscalls-dwarf.list: $(LINUX_IMAGE_DWARF)
	readelf -wi "$<" | sed 's/^ <1></\f&/g' | sed 's/^ <[^1][0-9]*></\v&/g' | \
	tr -d '\n' | tr '\f' '\n' | sed 's/\v.*//' | \
	grep DW_TAG_subprogram | grep 'DW_AT_name.*sys_' | \
	sed 's/.* \(sys_[a-zA-Z0-9_]*\).*/\1/' | grep '^sys_[a-zA-Z0-9_]*$$' | \
	sort | uniq > "$@"

linux-syscall-macros.h: linux-syscalls.list linux-syscall-addrs
	(cat linux-syscall-addrs | cut -f4,1 | sed 's/\(.*\)\t\(.*\)/#ifndef __NUM_\2\n#define __NUM_\2 \1\n#endif/'; \
	cat "$<" | sed 's/^\(.*\)/SYSCALL(\1)/') > "$@" 

# The unistd list lacks some obscure calls, so is inferior for our purposes
linux-syscalls-unistd.raw.list: /usr/include/asm-generic/unistd.h
	/usr/bin/cpp -E -D"__SYSCALL(num,decl)=decl" \
	-D__ARCH_WANT_SYNC_FILE_RANGE2 \
	-D__ARCH_WANT_SYSCALL_NO_AT -D__ARCH_WANT_SYSCALL_NO_FLAGS \
	-D__ARCH_WANT_SYSCALL_NO_FLAGS -D__ARCH_WANT_SYSCALL_OFF_T \
	-D__ARCH_WANT_SYSCALL_DEPRECATED \
	-include /usr/include/asm-generic/unistd.h \
	    - </dev/null > "$@" || rm -f "$@"

linux-syscalls-unistd.list: linux-syscalls-unistd.raw.list
	cat "$<" | sed -r '/^(#.*)?$$/ d' | sort | uniq > "$@"

linux-syscalls.h: linux-syscalls.list $(LINUX_IMAGE_DWARF)
	$(DWARFHPP) $(LINUX_IMAGE_DWARF) < linux-syscalls.list > "$@"

linux-syscall-ifacetypes.c: linux-syscalls.list $(LINUX_IMAGE_DWARF)
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH) $(IFACETYPES) $(LINUX_IMAGE_DWARF) < linux-syscalls.list > "$@"
