/****************************************************************************
** Config_General meta object code from reading C++ file 'config_general.h'
**
** Created: Sat May 3 12:50:45 2003
**      by: The Qt MOC ($Id: moc_config_general.cpp,v 1.1 2003/06/25 21:57:03 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "config_general.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Config_General::className() const
{
    return "Config_General";
}

QMetaObject *Config_General::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Config_General( "Config_General", &Config_General::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Config_General::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_General", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Config_General::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_General", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Config_General::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"selectColour", 0, 0 };
    static const QUMethod slot_1 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "selectColour()", &slot_0, QMetaData::Public },
	{ "languageChange()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Config_General", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Config_General.setMetaObject( metaObj );
    return metaObj;
}

void* Config_General::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Config_General" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Config_General::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: selectColour(); break;
    case 1: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Config_General::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Config_General::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Config_General::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
