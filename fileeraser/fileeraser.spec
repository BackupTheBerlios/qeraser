Summary: This tool can erase all files
Name: fileeraser
Version: 0.88
Release: 0.88
Copyright: GPL
Group: Utilities/File
Source: fileeraser-0.88.tar.gz
BuildRoot: /var/tmp/%{name}-buildroot

%description
The best program for deleting files and
bring them to the PC god!

%prep

%setup

%build
make RPM_OPT_FLAGS="$RPM_OPT_FLAGS"

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT/usr/bin
mkdir -p $RPM_BUILD_ROOT/usr/share/fileeraser/images
mkdir -p $RPM_BUILD_ROOT/usr/share/fileeraser/translations
mkdir -p $RPM_BUILD_ROOT/usr/share/doc/fileeraser-%{version}
install -s -m 755 fileeraser/fileeraser  $RPM_BUILD_ROOT/usr/bin/fileeraser
install -s -m 755 COPYING  $RPM_BUILD_ROOT/usr/share/doc/fileeraser-%{version}/COPYING
install -s -m 755 AUTHORS  $RPM_BUILD_ROOT/usr/share/doc/fileeraser-%{version}/AUTHORS
install -s -m 755 README  $RPM_BUILD_ROOT/usr/share/doc/fileeraser-%{version}/README
install -s -m 755 THANKS  $RPM_BUILD_ROOT/usr/share/doc/fileeraser-%{version}/THANKS
install -s -m 755 fileeraser/manuals/fileeraser.htm  $RPM_BUILD_ROOT/usr/share/doc/fileeraser-%{version}/fileeraser.htm
install -s -m 755 fileeraser/images/nebit.gif  $RPM_BUILD_ROOT/usr/share/fileeraser/images/nebit.gif
install -s -m 755 fileeraser/images/fileeraser.gif  $RPM_BUILD_ROOT/usr/share/fileeraser/images/fileeraser.gif
install -s -m 755 fileeraser/images/manual.gif  $RPM_BUILD_ROOT/usr/share/fileeraser/images/manual.gif
install -s -m 755 fileeraser/images/info.gif  $RPM_BUILD_ROOT/usr/share/fileeraser/images/info.gif
install -s -m 755 fileeraser/images/info.gif  $RPM_BUILD_ROOT/usr/share/fileeraser/images/print.gif
install -s -m 755 fileeraser/translations/fileeraser_de.qm  $RPM_BUILD_ROOT/usr/share/fileeraser/translations/fileeraser_de.qm
install -s -m 755 fileeraser/translations/qt_de.qm  $RPM_BUILD_ROOT/usr/share/fileeraser/translations/qt_de.qm

%clean

%files
/usr/bin/fileeraser
/usr/share/doc/fileeraser-%{version}/COPYING
/usr/share/doc/fileeraser-%{version}/AUTHORS
/usr/share/doc/fileeraser-%{version}/README
/usr/share/doc/fileeraser-%{version}/THANKS
/usr/share/doc/fileeraser-%{version}/fileeraser.htm
/usr/share/fileeraser/images/nebit.gif
/usr/share/fileeraser/images/fileeraser.gif
/usr/share/fileeraser/images/manual.gif
/usr/share/fileeraser/images/info.gif
/usr/share/fileeraser/images/print.gif
/usr/share/fileeraser/translations/fileeraser_de.qm
/usr/share/fileeraser/translations/qt_de.qm

%defattr(-,root,root)
