# File generated by kdevelop's qmake manager. 
# ------------------------------------------- 
# Subdir relative project main directory: ./src
# Target is an application:  ../bin/fileeraser

config_general.cpp.path = /usr/local/rin
config_general.cpp.files = ./
config_general.h.path = /usr/local/sin
config_general.h.files = config_general.h
config_general.ui.path = /usr/local/sin
config_general.ui.files = config_general.ui
bla.path = /usr/local/sin
bla.files = sdfa
target.path = /usr/local/nin
INSTALLS += target
SOURCES += manual_dialogimpl.cpp \
           main.cpp \
           config_frame.cpp \
           fileeraserimpl.cpp 
HEADERS += fileeraserimpl.h \
           manual_dialogimpl.h \
           settings.h \
           config_frame.h 
FORMS += config_erasing.ui \
         config_general.ui \
         info_dialog.ui \
         fileeraser.ui \
         config_dialog.ui \
         manual_dialog.ui 
TEMPLATE = app 
CONFIG += release \
          warn_on \
          qt \
          thread 
TARGET = ../bin/fileeraser 
LIBS += ../config_api/libconfig_api.a 
