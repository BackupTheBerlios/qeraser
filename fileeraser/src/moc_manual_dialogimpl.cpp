/****************************************************************************
** Manual_DialogImpl meta object code from reading C++ file 'manual_dialogimpl.h'
**
** Created: Sat May 3 12:50:32 2003
**      by: The Qt MOC ($Id: moc_manual_dialogimpl.cpp,v 1.1 2003/06/25 21:57:02 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "manual_dialogimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Manual_DialogImpl::className() const
{
    return "Manual_DialogImpl";
}

QMetaObject *Manual_DialogImpl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Manual_DialogImpl( "Manual_DialogImpl", &Manual_DialogImpl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Manual_DialogImpl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Manual_DialogImpl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Manual_DialogImpl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Manual_DialogImpl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Manual_DialogImpl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Manual_Dialog::staticMetaObject();
    static const QUMethod slot_0 = {"print", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "print()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Manual_DialogImpl", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Manual_DialogImpl.setMetaObject( metaObj );
    return metaObj;
}

void* Manual_DialogImpl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Manual_DialogImpl" ) )
	return this;
    return Manual_Dialog::qt_cast( clname );
}

bool Manual_DialogImpl::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: print(); break;
    default:
	return Manual_Dialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Manual_DialogImpl::qt_emit( int _id, QUObject* _o )
{
    return Manual_Dialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Manual_DialogImpl::qt_property( int id, int f, QVariant* v)
{
    return Manual_Dialog::qt_property( id, f, v);
}

bool Manual_DialogImpl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
