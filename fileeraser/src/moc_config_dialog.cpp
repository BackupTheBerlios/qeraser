/****************************************************************************
** Config_Dialog meta object code from reading C++ file 'config_dialog.h'
**
** Created: Sat May 3 12:50:55 2003
**      by: The Qt MOC ($Id: moc_config_dialog.cpp,v 1.1 2003/06/25 21:57:04 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "config_dialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Config_Dialog::className() const
{
    return "Config_Dialog";
}

QMetaObject *Config_Dialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Config_Dialog( "Config_Dialog", &Config_Dialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Config_Dialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_Dialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Config_Dialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_Dialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Config_Dialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Config_Dialog", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Config_Dialog.setMetaObject( metaObj );
    return metaObj;
}

void* Config_Dialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Config_Dialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool Config_Dialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Config_Dialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Config_Dialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool Config_Dialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
