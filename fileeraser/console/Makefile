#############################################################################
# Makefile for building: ../bin/feraser
# Generated by qmake (1.04a) (Qt 3.1.1) on: Mon May  5 14:32:20 2003
# Project:  console.pro
# Template: app
# Command: $(QMAKE) -o Makefile console.pro
#############################################################################

####### Compiler, tools and options

CC       = gcc
CXX      = g++
LEX      = flex
YACC     = yacc
CFLAGS   = -pipe -Wall -W -O2 -fomit-frame-pointer -pipe -march=i586 -mcpu=pentiumpro  
CXXFLAGS = -pipe -Wall -W -O2 -fomit-frame-pointer -pipe -march=i586 -mcpu=pentiumpro  
LEXFLAGS = 
YACCFLAGS= -d
INCPATH  = -I$(QTDIR)/mkspecs/default -I.
LINK     = g++
LFLAGS   = 
LIBS     = $(SUBLIBS)  
AR       = ar cqs
RANLIB   = 
MOC      = $(QTDIR)/bin/moc
UIC      = $(QTDIR)/bin/uic
QMAKE    = qmake
TAR      = tar -cf
GZIP     = gzip -9f
COPY     = cp -f
COPY_FILE= $(COPY) -p
COPY_DIR = $(COPY) -pR
DEL_FILE = rm -f
SYMLINK  = ln -sf
DEL_DIR  = rmdir
MOVE     = mv -f
CHK_DIR_EXISTS= test -d
MKDIR    = mkdir -p

####### Output directory

OBJECTS_DIR = ./

####### Files

HEADERS = feraser.h \
		filelib.h
SOURCES = main.cpp
OBJECTS = main.o
FORMS = 
UICDECLS = 
UICIMPLS = 
SRCMOC   = 
OBJMOC = 
DIST	   = console.pro
QMAKE_TARGET = feraser
DESTDIR  = ../bin/
TARGET   = ../bin/feraser

first: all
####### Implicit rules

.SUFFIXES: .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules

all: Makefile $(TARGET)

$(TARGET): $(UICDECLS) $(OBJECTS) $(OBJMOC) 
	test -d ../bin/ || mkdir -p ../bin/
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJMOC) $(LIBS)

mocables: $(SRCMOC)

$(MOC): 
	( cd $(QTDIR)/src/moc ; $(MAKE) )

Makefile: console.pro  $(QTDIR)/mkspecs/default/qmake.conf 
	$(QMAKE) -o Makefile console.pro
qmake: 
	@$(QMAKE) -o Makefile console.pro

dist: 
	@mkdir -p .tmp/feraser && $(COPY_FILE) --parents $(SOURCES) $(HEADERS) $(FORMS) $(DIST) .tmp/feraser/ && ( cd `dirname .tmp/feraser` && $(TAR) feraser.tar feraser && $(GZIP) feraser.tar ) && $(MOVE) `dirname .tmp/feraser`/feraser.tar.gz . && $(DEL_FILE) -r .tmp/feraser

uiclean:

yaccclean:
lexclean:
clean:
	-$(DEL_FILE) $(OBJECTS) 
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) ../bin/$(TARGET) $(TARGET)


FORCE:

####### Compile

main.o: main.cpp filelib.h \
		feraser.h \
		commands.h

####### Install

install: all 

uninstall: 

