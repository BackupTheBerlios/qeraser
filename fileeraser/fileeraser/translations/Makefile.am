####### kdevelop will overwrite this part!!! (begin)##########


EXTRA_DIST = qt_de.qm fileeraser_de.qm Makefile 

install-data-local:
	$(mkinstalldirs) $(datadir)/fileeraser/translations/
	$(INSTALL_DATA) $(srcdir)/qt_de.qm $(datadir)/fileeraser/translations/qt_de.qm
	$(mkinstalldirs) $(datadir)/fileeraser/translations/
	$(INSTALL_DATA) $(srcdir)/fileeraser_de.qm $(datadir)/fileeraser/translations/fileeraser_de.qm

uninstall-local:
	-rm -f $(datadir)/fileeraser/translations/qt_de.qm
	-rm -f $(datadir)/fileeraser/translations/fileeraser_de.qm

####### kdevelop will overwrite this part!!! (end)############
