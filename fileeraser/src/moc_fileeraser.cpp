/****************************************************************************
** fileeraser meta object code from reading C++ file 'fileeraser.h'
**
** Created: Sat May 3 12:50:52 2003
**      by: The Qt MOC ($Id: moc_fileeraser.cpp,v 1.1 2003/06/25 21:57:04 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "fileeraser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *fileeraser::className() const
{
    return "fileeraser";
}

QMetaObject *fileeraser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_fileeraser( "fileeraser", &fileeraser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString fileeraser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "fileeraser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString fileeraser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "fileeraser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* fileeraser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"browse_files", 0, 0 };
    static const QUMethod slot_1 = {"clear_list", 0, 0 };
    static const QUMethod slot_2 = {"fit_droping", 0, 0 };
    static const QUMethod slot_3 = {"remove_item", 0, 0 };
    static const QUMethod slot_4 = {"handle_file_erasing", 0, 0 };
    static const QUMethod slot_5 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "browse_files()", &slot_0, QMetaData::Public },
	{ "clear_list()", &slot_1, QMetaData::Public },
	{ "fit_droping()", &slot_2, QMetaData::Public },
	{ "remove_item()", &slot_3, QMetaData::Public },
	{ "handle_file_erasing()", &slot_4, QMetaData::Public },
	{ "languageChange()", &slot_5, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"fileeraser", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_fileeraser.setMetaObject( metaObj );
    return metaObj;
}

void* fileeraser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "fileeraser" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool fileeraser::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: browse_files(); break;
    case 1: clear_list(); break;
    case 2: fit_droping(); break;
    case 3: remove_item(); break;
    case 4: handle_file_erasing(); break;
    case 5: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool fileeraser::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool fileeraser::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool fileeraser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
