/****************************************************************************
** Config_Frame meta object code from reading C++ file 'config_frame.h'
**
** Created: Sat May 3 12:50:36 2003
**      by: The Qt MOC ($Id: moc_config_frame.cpp,v 1.1 2003/06/25 21:57:02 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "config_frame.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Config_Frame::className() const
{
    return "Config_Frame";
}

QMetaObject *Config_Frame::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Config_Frame( "Config_Frame", &Config_Frame::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Config_Frame::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_Frame", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Config_Frame::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Config_Frame", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Config_Frame::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "page", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"changePage", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "changePage(QListViewItem*)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Config_Frame", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Config_Frame.setMetaObject( metaObj );
    return metaObj;
}

void* Config_Frame::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Config_Frame" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Config_Frame::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: changePage((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Config_Frame::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Config_Frame::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Config_Frame::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
