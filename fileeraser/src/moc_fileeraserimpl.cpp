/****************************************************************************
** fileeraserImpl meta object code from reading C++ file 'fileeraserimpl.h'
**
** Created: Sat May 3 12:50:26 2003
**      by: The Qt MOC ($Id: moc_fileeraserimpl.cpp,v 1.1 2003/06/25 21:57:02 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "fileeraserimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *fileeraserImpl::className() const
{
    return "fileeraserImpl";
}

QMetaObject *fileeraserImpl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_fileeraserImpl( "fileeraserImpl", &fileeraserImpl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString fileeraserImpl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "fileeraserImpl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString fileeraserImpl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "fileeraserImpl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* fileeraserImpl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = fileeraser::staticMetaObject();
    static const QUMethod slot_0 = {"handle_file_erasing", 0, 0 };
    static const QUMethod slot_1 = {"browse_files", 0, 0 };
    static const QUMethod slot_2 = {"clear_list", 0, 0 };
    static const QUMethod slot_3 = {"remove_item", 0, 0 };
    static const QUMethod slot_4 = {"fit_droping", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "handle_file_erasing()", &slot_0, QMetaData::Public },
	{ "browse_files()", &slot_1, QMetaData::Public },
	{ "clear_list()", &slot_2, QMetaData::Public },
	{ "remove_item()", &slot_3, QMetaData::Public },
	{ "fit_droping()", &slot_4, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"fileeraserImpl", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_fileeraserImpl.setMetaObject( metaObj );
    return metaObj;
}

void* fileeraserImpl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "fileeraserImpl" ) )
	return this;
    if ( !qstrcmp( clname, "QThread" ) )
	return (QThread*)this;
    return fileeraser::qt_cast( clname );
}

bool fileeraserImpl::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: handle_file_erasing(); break;
    case 1: browse_files(); break;
    case 2: clear_list(); break;
    case 3: remove_item(); break;
    case 4: fit_droping(); break;
    default:
	return fileeraser::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool fileeraserImpl::qt_emit( int _id, QUObject* _o )
{
    return fileeraser::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool fileeraserImpl::qt_property( int id, int f, QVariant* v)
{
    return fileeraser::qt_property( id, f, v);
}

bool fileeraserImpl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
