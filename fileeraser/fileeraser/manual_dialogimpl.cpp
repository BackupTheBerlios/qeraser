#include "manual_dialogimpl.h"

#include <qtextbrowser.h>
#include <qpaintdevice.h>
#include <qpaintdevicemetrics.h>
#include <qpainter.h>
#include <qprinter.h>
#include <qsimplerichtext.h>

void Manual_DialogImpl::print()
{
#ifndef QT_NO_PRINTER
    QPrinter printer;
    printer.setFullPage(true);
    if ( printer.setup() ) {
	QPainter p( &printer );
	QPaintDeviceMetrics metrics(p.device());
	int dpix = metrics.logicalDpiX();
	int dpiy = metrics.logicalDpiY();
	const int margin = 72; // pt
	QRect body(margin*dpix/72, margin*dpiy/72,
		   metrics.width()-margin*dpix/72*2,
		   metrics.height()-margin*dpiy/72*2 );
	QFont font("times", 10);
	QSimpleRichText richText( manualbrowser->text(), font, manualbrowser->context(), manualbrowser->styleSheet(),
				  manualbrowser->mimeSourceFactory(), body.height() );
	richText.setWidth( &p, body.width() );
	QRect view( body );
	int page = 1;
	do {
	    p.setClipRect( body );
	    richText.draw( &p, body.left(), body.top(), view, colorGroup() );
	    p.setClipping( FALSE );
	    view.moveBy( 0, body.height() );
	    p.translate( 0 , -body.height() );
	    p.setFont( font );
	    p.drawText( view.right() - p.fontMetrics().width( QString::number(page) ),
			view.bottom() + p.fontMetrics().ascent() + 5, QString::number(page) );
	    if ( view.top()  >= richText.height() )
		break;
	    printer.newPage();
	    page++;
	} while (TRUE);
    }
#endif
}
