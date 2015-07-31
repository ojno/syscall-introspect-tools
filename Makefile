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
independent:

# where are we?
THIS_MAKEFILE := $(realpath $(lastword $(MAKEFILE_LIST)))
PREFIX := $(dir $(THIS_MAKEFILE))
CFLAGS += -I$(PREFIX)/include -fPIC -DPIC
CPPFLAGS += -I$(PREFIX)/include
CXXFLAGS += -I$(PREFIX)/include -fPIC -DPIC
LDFLAGS += -L$(PREFIX)/lib
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

# remember to touch configure to stop make from continually re-extracting tarballs
contrib/%/configure:: contrib/%.tar.gz
	tar -xvz -C contrib -f "$<"
	cd "$(dir $@)" && test -e ./configure && touch ./configure

contrib/%/configure:: contrib/%.tar.xz
	tar -xvJ -C contrib -f "$<"
	cd "$(dir $@)" && test -e ./configure && touch ./configure

contrib/%/configure:: contrib/%.tar.bz2
	tar -xvj -C contrib -f "$<"
	cd "$(dir $@)" && test -e ./configure && touch ./configure

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
	git submodule update --init --recursive
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

libantlr3c-3.4_CONFIGURE_FLAGS += --enable-64bit --enable-shared --enable-static
CONTRIB_NAMES := libantlr3c-3.4 glib-2.44.1

$(foreach name,$(CONTRIB_NAMES),$(eval $(call contrib_rules,$(name))))

############################################################ Submodules

libantlr3cxx_DEPENDENCIES := install_contrib_libantlr3c-3.4 
libsrk31cxx_DEPENDENCIES := install_submodules_libcxxfileno
libdwarfpp_DEPENDENCIES := install_submodules_libsrk31cxx install_submodules_libdwarf
libcxxgen_DEPENDENCIES := install_submodules_libdwarfpp
dwarfidl_DEPENDENCIES := install_submodules_libdwarfpp install_submodules_libcxxgen install_submodules_libantlr3cxx install_contrib_libantlr3c-3.4
liballocs_DEPENDENCIES := install_submodules_dwarfidl
libfootprints_DEPENDENCIES := install_submodules_liballocs
trap-syscalls_DEPENDENCIES := install_submodules_libfootprints


# not libdwarf because it doesn't have a 'make install'
SUBMODULE_NAMES := libantlr3cxx libcxxfileno libsrk31cxx libdwarfpp dwarfidl libcxxgen liballocs libfootprints trap-syscalls

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

independent: submodules/libdwarf/configure


