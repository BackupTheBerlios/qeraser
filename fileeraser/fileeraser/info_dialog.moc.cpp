/****************************************************************************
** Info_Dialog meta object code from reading C++ file 'info_dialog.h'
**
** Created: Thu Aug 1 01:20:33 2002
**      by: The Qt MOC ($Id: info_dialog.moc.cpp,v 1.1 2003/04/16 15:48:11 tobgle Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "info_dialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 19)
#error "This file was generated using the moc from 3.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Info_Dialog::className() const
{
    return "Info_Dialog";
}

QMetaObject *Info_Dialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Info_Dialog;

#ifndef QT_NO_TRANSLATION
QString Info_Dialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Info_Dialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Info_Dialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Info_Dialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Info_Dialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Info_Dialog", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Info_Dialog.setMetaObject( metaObj );
    return metaObj;
}

void* Info_Dialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Info_Dialog" ) ) return (Info_Dialog*)this;
    return QDialog::qt_cast( clname );
}

bool Info_Dialog::qt_invoke( int _id, QUObject* _o )
{
    return QDialog::qt_invoke(_id,_o);
}

bool Info_Dialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Info_Dialog::qt_property( int _id, int _f, QVariant* _v)
{
    return QDialog::qt_property( _id, _f, _v);
}
#endif // QT_NO_PROPERTIES
