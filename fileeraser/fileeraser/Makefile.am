####### kdevelop will overwrite this part!!! (begin)##########
bin_PROGRAMS = fileeraser

## INCLUDES were found outside kdevelop specific part

fileeraser_SOURCES = fileeraserimpl.cpp fileeraser.ui config_erasing.ui config_general.ui config_frame.cpp manual_dialogimpl.cpp info_dialog.ui manual_dialog.ui config_dialog.ui main.cpp 
SOURCES = console/main.cpp config_api/utils.c config_api/find.c config_api/config_api.c fileeraserimpl.cpp config_frame.cpp manual_dialogimpl.cpp main.cpp 
INTERFACES = fileeraser.ui config_erasing.ui config_general.ui info_dialog.ui manual_dialog.ui config_dialog.ui 
TRANSLATIONS = fileeraser_de.ts manual_dialog_de.ts 
KDE_OPTIONS = qtonly
fileeraser_LDADD   = ./config_api/libconfig_api.a ./console/libconsole.a -lqt-mt $(LIBSOCKET)

SUBDIRS = docs images manuals translations config_api console 

EXTRA_DIST = main.cpp Makefile config_dialog.ui fileeraser.pro manual_dialog.ui info_dialog.ui manual_dialog_de.ts fileeraser_de.ts manual_dialogimpl.cpp manual_dialogimpl.h config_frame.cpp config_frame.h config_general.ui config_erasing.ui fileeraser.htm fileeraser.ui fileeraserimpl.cpp fileeraserimpl.h settings.h 

####### kdevelop will overwrite this part!!! (end)############

# set the include path for X, qt and KDE
INCLUDES= $(all_includes)

fileeraser_METASOURCES = AUTO

# the library search path. 
fileeraser_LDFLAGS = $(all_libraries) 

# them while "make clean", use CLEANFILES
DISTCLEANFILES = $(fileeraser_METASOURCES)

