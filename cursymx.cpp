#include <QtGui/QApplication>
#include "cursymx_MainWidget.h"

// By Carles Mateo V.1.0
//
// To compile create cursymx.pro with:
// TEMPLATE += app
// QT += gui declarative
// HEADERS += cursymx_MainWidget.h
// SOURCES += cursymx.cpp cursymx_MainWidget.cpp
//
// Then from the command-line: qmake cursymx.pro
// This will generate a Makefile
// Then from the command-line: make

int main(int argc,char *argv[])
{
    //QDialogButtonBox *buttonBox;

	QApplication *app=new QApplication(argc,argv);

	cursymx_MainWidget mainWidget;
	mainWidget.setWindowTitle("Currency Symbols by Carles Mateo");
	mainWidget.setFixedSize(350,250);
	mainWidget.show();

	return app->exec();
}
