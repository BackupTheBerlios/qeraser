####### kdevelop will overwrite this part!!! (begin)##########

SUBDIRS = fileeraser 

EXTRA_DIST = fileeraser.kdevprj admin fileeraser.lsm libtool Makefile config.status fileeraser.spec AUTHORS README THANKS COPYING INSTALL 

install-data-local:
	$(mkinstalldirs) $(datadir)/doc/fileeraser/
	$(INSTALL_DATA) $(srcdir)/AUTHORS $(datadir)/doc/fileeraser/AUTHORS
	$(mkinstalldirs) $(datadir)/doc/fileeraser/
	$(INSTALL_DATA) $(srcdir)/README $(datadir)/doc/fileeraser/README
	$(mkinstalldirs) $(datadir)/doc/fileeraser/
	$(INSTALL_DATA) $(srcdir)/THANKS $(datadir)/doc/fileeraser/THANKS
	$(mkinstalldirs) $(datadir)/doc/fileeraser/
	$(INSTALL_DATA) $(srcdir)/COPYING $(datadir)/doc/fileeraser/COPYING
	$(mkinstalldirs) $(datadir)/doc/fileeraser/
	$(INSTALL_DATA) $(srcdir)/INSTALL $(datadir)/doc/fileeraser/INSTALL

uninstall-local:
	-rm -f $(datadir)/doc/fileeraser/AUTHORS
	-rm -f $(datadir)/doc/fileeraser/README
	-rm -f $(datadir)/doc/fileeraser/THANKS
	-rm -f $(datadir)/doc/fileeraser/COPYING
	-rm -f $(datadir)/doc/fileeraser/INSTALL

####### kdevelop will overwrite this part!!! (end)############
# not a GNU package. You can remove this line, if 
# have all needed files, that a GNU package needs
AUTOMAKE_OPTIONS = foreign 

#$(top_srcdir)/configure.in: configure.in.in $(top_srcdir)/subdirs
#	cd $(top_srcdir) && $(MAKE) -f admin/Makefile.common configure.in ;

$(top_srcdir)/subdirs:
	cd $(top_srcdir) && $(MAKE) -f admin/Makefile.common subdirs

$(top_srcdir)/acinclude.m4: $(top_srcdir)/admin/acinclude.m4.in $(top_srcdir)/admin/libtool.m4.in
	@cd $(top_srcdir) && cat admin/acinclude.m4.in admin/libtool.m4.in > acinclude.m4

MAINTAINERCLEANFILES = subdirs configure.in acinclude.m4 configure.files 

package-messages:
	$(MAKE) -f admin/Makefile.common package-messages
	$(MAKE) -C po merge

dist-hook:
	cd $(top_distdir) && perl admin/am_edit -padmin
	cd $(top_distdir) && $(MAKE) -f admin/Makefile.common subdirs
