default: install

############################################################ Setup

.SUFFIXES:
.POSIX:

# don't delete intermediates
.SECONDARY:

#.PHONY: SUBMODULES
#SUBMODULES:
#	git submodule update --init --recursive

.SECONDEXPANSION:

.PHONY: FORCE
FORCE:

.PHONY: all
all:

.PHONY: clean
clean:

.PHONY: distclean
distclean:

.PHONY: independent
independent: ;

# where are we?
THIS_MAKEFILE := $(realpath $(lastword $(MAKEFILE_LIST)))
PREFIX := $(dir $(THIS_MAKEFILE))
CFLAGS += -I$(PREFIX)/include -fPIC -DPIC
CPPFLAGS += -I$(PREFIX)/include
CXXFLAGS += -I$(PREFIX)/include -fPIC -DPIC
LDFLAGS += -L$(PREFIX)/lib -fPIC -DPIC
PATH := $(PREFIX)/bin:$(PATH)
LD_LIBRARY_PATH := $(PREFIX)/lib:$(PATH)
PKG_CONFIG_PATH := $(PREFIX)/lib/pkgconfig:$(PATH)
export CFLAGS
export CPPFLAGS
export CXXFLAGS
export LDFLAGS
export PATH
export LD_LIBRARY_PATH
export PKG_CONFIG_PATH

# preserve timestamps when installing
INSTALL := $(shell which install) -p
export INSTALL
# defaults for some variables
SO_SUFFIX := .so
A_SUFFIX := .a
LA_SUFFIX := .la
CONFIGURE_FLAGS := --prefix=$(PREFIX)

DOWNLOAD := wget
DOWNLOAD_BASE := https://ojno.github.io/syscall-introspect-deps

############################################################ Utility functions

expand_lib = $(1)$(LA_SUFFIX) $(1)$(SO_SUFFIX) $(1)$(A_SUFFIX)
map = $(foreach a,$(2),$(call $(1),$(a)))
expand_libs = $(call map,expand_lib,$(1))
in_lib_dir = $(foreach x,$(1),lib/$(x))
libs_from_names = $(call in_lib_dir,$(call expand_libs,$(1)))
firstdir = $(firstword $(subst /, ,$(dir $(firstword $(1)))))

############################################################ Pattern rules

define contrib_rules

ifdef $(1)_DEPENDENCIES
contrib/$(1)/configure.ac: $($(1)_DEPENDENCIES)
contrib/$(1)/configure.in: $($(1)_DEPENDENCIES)
endif

ifdef $(1)_CONFIGURE_FLAGS
contrib/$(1)/Makefile: CONFIGURE_FLAGS += $($(1)_CONFIGURE_FLAGS)
endif

contrib/$(1)/Makefile: contrib/$(1)/configure
	cd "$$(dir $$@)" && ./configure $$(CONFIGURE_FLAGS)

.PHONY: all_contrib_$(1)
all_contrib_$(1): contrib/$(1)/Makefile
	$(MAKE) -C "contrib/$(1)" all
all: all_contrib_$(1)

.PHONY: install_contrib_$(1)
install_contrib_$(1): all_contrib_$(1)
	$(MAKE) -C "contrib/$(1)" install
install: install_contrib_$(1)

.PHONY: clean_contrib_$(1)
clean_contrib_$(1):
	-$(MAKE) -C "contrib/$(1)" clean
clean: clean_contrib_$(1)

.PHONY: distclean_contrib_$(1)
distclean_contrib_$(1):
	-$(MAKE) -C "contrib/$(1)" distclean
distclean: distclean_contrib_$(1)

independent: contrib/$(1)/configure


endef

contrib/%.tar.gz:
	$(DOWNLOAD) -O "$@" "$(DOWNLOAD_BASE)/$*.tar.gz"

contrib/%.tar.bz2:
	$(DOWNLOAD) -O "$@" "$(DOWNLOAD_BASE)/$*.tar.bz2"

contrib/%.tar.xz:
	$(DOWNLOAD) -O "$@" "$(DOWNLOAD_BASE)/$*.tar.xz"

# remember to touch configure to stop make from continually re-extracting tarballs
contrib/%/configure: contrib/%.tar.gz
	tar -xvz -C contrib -f "$<"
	cd "$(dir $@)" && test -e ./configure && touch ./configure

contrib/%/configure: contrib/%.tar.xz
	tar -xvJ -C contrib -f "$<"
	cd "$(dir $@)" && test -e ./configure && touch ./configure

contrib/%/configure: contrib/%.tar.bz2
	tar -xvj -C contrib -f "$<"
	cd "$(dir $@)" && test -e ./configure && touch ./configure

independent: contrib/glib-2.44.1.tar.xz
independent: contrib/libantlr3c-3.4.tar.gz


submodules:
	mkdir -p "$@"

define submodule_rules

ifdef $(1)_DEPENDENCIES
submodules/$(1)/configure.ac: $($(1)_DEPENDENCIES)
endif

ifdef $(1)_CONFIGURE_FLAGS
submodules/$(1)/Makefile: CONFIGURE_FLAGS += $($(1)_CONFIGURE_FLAGS)
endif

submodules/$(1)/configure.ac: ;

submodules/$(1)/configure: submodules/$(1)/configure.ac
	git submodule update --init --recursive submodules/$(1)
	cd "$$(dir $$@)" && libtoolize && autoreconf -i

submodules/$(1)/Makefile: submodules/$(1)/configure
	cd "$$(dir $$@)" && ./configure $$(CONFIGURE_FLAGS)

.PHONY: all_submodules_$(1)
all_submodules_$(1): submodules/$(1)/Makefile
	$(MAKE) -C "submodules/$(1)" all
all: all_submodules_$(1)

.PHONY: install_submodules_$(1)
install_submodules_$(1): all_submodules_$(1)
	$(MAKE) -C "submodules/$(1)" install
install: install_submodules_$(1)

.PHONY: clean_submodules_$(1)
clean_submodules_$(1):
	-$(MAKE) -C "submodules/$(1)" clean
clean: clean_submodules_$(1)

.PHONY: distclean_submodules_$(1)
distclean_submodules_$(1):
	-$(MAKE) -C "submodules/$(1)" distclean
distclean: distclean_submodules_$(1)

independent: submodules/$(1)/configure

endef

############################################################ Contrib

ANTLR := libantlr3c-3.4
# not antlr because patching, not boost because special build system
# ... actually it's only glib, apparently
CONTRIB_NAMES := glib-2.44.1

$(foreach name,$(CONTRIB_NAMES),$(eval $(call contrib_rules,$(name))))

contrib/$(ANTLR)/Makefile: contrib/$(ANTLR)/configure
	cd "$(dir $@)" && ./configure $(CONFIGURE_FLAGS) --enable-64bit --enable-shared --enable-static --enable-debuginfo

.PHONY: all_contrib_$(ANTLR)
all_contrib_$(ANTLR): contrib/$(ANTLR)/Makefile
	$(MAKE) -C "contrib/$(ANTLR)" all
all: all_contrib_$(ANTLR)

.PHONY: install_contrib_$(ANTLR)
install_contrib_$(ANTLR): all_contrib_$(ANTLR)
	$(MAKE) -C "contrib/$(ANTLR)" install
install: install_contrib_$(ANTLR)

.PHONY: clean_contrib_$(ANTLR)
clean_contrib_$(ANTLR):
	-$(MAKE) -C "contrib/$(ANTLR)" clean
clean: clean_contrib_$(ANTLR)

.PHONY: distclean_contrib_$(ANTLR)
distclean_contrib_$(ANTLR):
	-$(MAKE) -C "contrib/$(ANTLR)" distclean
distclean: distclean_contrib_$(ANTLR)

contrib/$(ANTLR)/configure.ac: contrib/$(ANTLR).tar.gz
	tar -xvz -C contrib -f "$<"
	cd "$(dir $@)" && patch -p1 < ../$(ANTLR)-configure.ac.patch

contrib/$(ANTLR)/configure: contrib/$(ANTLR)/configure.ac
	cd "$(dir $@)" && libtoolize -cfi && autoreconf -i

independent: contrib/$(ANTLR)/configure

BOOST := boost_1_58_0
BOOST_SONAME := 1.58.0
independent: contrib/$(BOOST).tar.bz2

contrib/$(BOOST)/bootstrap.sh: contrib/$(BOOST).tar.bz2
	tar -xvj -C contrib -f "$<"
	cd "$(dir $@)" && test -e ./bootstrap.sh && touch ./bootstrap.sh

contrib/$(BOOST)/b2: contrib/$(BOOST)/bootstrap.sh
	cd "$(dir $@)" && ./bootstrap.sh --prefix=$(PREFIX)

.PHONY: build_boost
build_boost: contrib/$(BOOST)/b2
	cd "$(dir $<)" && ./b2 -s NO_BZIP2=1 --with-filesystem --with-iostreams --with-regex stage

install_boost: include/boost lib/libboost_regex.a lib/libboost_regex.so lib/libboost_regex.so.$(BOOST_SONAME)

include/boost: build_boost
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/contrib/$(BOOST)/boost" "`pwd`/$@"

contrib/$(BOOST)/stage/lib/%: build_boost ;

lib/libboost_%: contrib/$(BOOST)/stage/lib/libboost_%
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/$<" "`pwd`/$@"


############################################################ Submodules

scripts/%: install_submodules_libdwarfpp install_submodules_liballocs
	$(MAKE) -C scripts -f kernel-objects.mk "$*"

submodules/libfootprints/src/linux-syscall-ifacetypes.c: scripts/linux-syscall-ifacetypes.c
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/$<" "`pwd`/$@"

submodules/trap-syscalls/src/linux-syscall-macros.h: scripts/linux-syscall-macros.h
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/$<" "`pwd`/$@"

submodules/trap-syscalls/src/dynamic-list: scripts/dynamic-list
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/$<" "`pwd`/$@"


submodules/dwarfidl/parser/dwarfidlSimpleCParser.c:
	$(MAKE) -C submodules/dwarfidl parser/dwarfidlSimpleCParser.c

libantlr3cxx_DEPENDENCIES := install_contrib_$(ANTLR) 
libsrk31cxx_DEPENDENCIES := install_submodules_libcxxfileno install_boost
libdwarfpp_DEPENDENCIES := install_submodules_libsrk31cxx install_submodules_libdwarf install_boost
libcxxgen_DEPENDENCIES := install_submodules_libdwarfpp
dwarfidl_DEPENDENCIES := install_submodules_libdwarfpp install_submodules_libcxxgen install_submodules_libantlr3cxx install_contrib_$(ANTLR) install_boost
liballocs_DEPENDENCIES := install_submodules_dwarfidl install_boost
libfootprints_DEPENDENCIES := install_submodules_liballocs submodules/libfootprints/src/linux-syscall-ifacetypes.c

independent: submodules/libfootprints/src/linux-syscall-ifacetypes.c
independent: submodules/trap-syscalls/src/linux-syscall-macros.h
independent: submodules/dwarfidl/parser/dwarfidlSimpleCParser.c

# not libdwarf or trap-syscalls because they don't have a 'make install'
SUBMODULE_NAMES := libantlr3cxx libcxxfileno libsrk31cxx libdwarfpp dwarfidl libcxxgen liballocs libfootprints

$(foreach name,$(SUBMODULE_NAMES),$(eval $(call submodule_rules,$(name),$($(name)),$(strip $($(name)_INCLUDES) $($(name)_LIBS)))))





#submodules/libdwarf/configure.ac: ;
submodules/libdwarf/configure:
	git submodule update --init --recursive
#	cd "$(dir $@)" && libtoolize && autoreconf -i
submodules/libdwarf/Makefile: submodules/libdwarf/configure
	cd submodules/libdwarf && ./configure $(CONFIGURE_FLAGS) --enable-shared

.PHONY: clean_libdwarf
clean_libdwarf:
	-$(MAKE) -C "submodules/libdwarf" clean
clean: clean_libdwarf

.PHONY: all_submodules_libdwarf
all_submodules_libdwarf: submodules/libdwarf/Makefile
	$(MAKE) -C "submodules/libdwarf/libdwarf" all
	$(MAKE) -C "submodules/libdwarf/dwarfdump" all
all: all_submodules_libdwarf

.PHONY: install_submodules_libdwarf
install_submodules_libdwarf: all_submodules_libdwarf
	for f in include/libdwarf.h include/dwarf.h lib/libdwarf.so lib/libdwarf.a; do ${INSTALL} -m 644 submodules/libdwarf/libdwarf/`basename $$f` $$f; done
	${INSTALL} submodules/libdwarf/dwarfdump/dwarfdump bin/dwarfdump
	chmod 755 lib/libdwarf.so
install: install_submodules_libdwarf

.PHONY: clean_submodules_libdwarf
clean_submodules_libdwarf:
	-$(MAKE) -C "submodules/libdwarf" clean
clean: clean_submodules_libdwarf

.PHONY: distclean_submodules_libdwarf
distclean_submodules_libdwarf:
	-$(MAKE) -C "submodules/libdwarf" distclean
distclean: distclean_submodules_libdwarf



submodules/trap-syscalls/contrib/liballocs: install_submodules_liballocs
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/submodules/liballocs" "`pwd`/$@"

submodules/trap-syscalls/contrib/dwarfidl: install_submodules_dwarfidl
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/submodules/dwarfidl" "`pwd`/$@"

submodules/trap-syscalls/contrib/libfootprints: install_submodules_libfootprints
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/submodules/libfootprints" "`pwd`/$@"

submodules/trap-syscalls/contrib/$(ANTLR): install_contrib_$(ANTLR)
	test -L "$@" -o ! -e "$@" && ln -sfT "`pwd`/contrib/$(ANTLR)" "`pwd`/$@"

.PHONY: extract_trap_syscalls_contrib
trap_syscalls_contrib_independent:
	$(MAKE) -C submodules/trap-syscalls/contrib independent

independent: trap_syscalls_contrib_independent


.PHONY: trap_syscalls_contrib
trap_syscalls_contrib:
	$(MAKE) -C submodules/trap-syscalls/contrib

.PHONY: all_submodules_trap-syscalls
all_submodules_trap-syscalls: install_submodules_libfootprints submodules/trap-syscalls/contrib/liballocs submodules/trap-syscalls/contrib/dwarfidl submodules/trap-syscalls/contrib/libfootprints submodules/trap-syscalls/contrib/$(ANTLR) submodules/trap-syscalls/src/linux-syscall-macros.h trap_syscalls_contrib
	$(MAKE) -C submodules/trap-syscalls src
all: all_submodules_trap-syscalls
install: all_submodules_trap-syscalls

.PHONY: clean_submodules_trap-syscalls
clean_submodules_trap-syscalls:
	-$(MAKE) -C submodules/trap-syscalls clean

clean: clean_submodules_trap-syscalls
distclean: clean_submodules_trap-syscalls


independent: submodules/libdwarf/configure

