/****************************************************************************
** Config_Erasing meta object code from reading C++ file 'config_erasing.h'
**
** Created: Sat May 3 12:50:41 2003
**      by: The Qt MOC ($Id: moc_config_erasing.cpp,v 1.1 2003/06/25 21:57:03 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "config_erasing.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Config_Erasing::className() const
{
    return "Config_Erasing";
}

QMetaObject *Config_Erasing::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Config_Erasing( "Config_Erasing", &Config_Erasing::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Config_Erasing::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_Erasing", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Config_Erasing::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_Erasing", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Config_Erasing::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Config_Erasing", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Config_Erasing.setMetaObject( metaObj );
    return metaObj;
}

void* Config_Erasing::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Config_Erasing" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Config_Erasing::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Config_Erasing::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Config_Erasing::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Config_Erasing::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
