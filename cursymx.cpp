#include <QtGui>
#include <QtCore>
#include <QLabel>
//#include <QLineEdit>
#include <QTextBrowser>

// By Carles Mateo V.1.0
//
// To compile create cursymx.pro with:
// TEMPLATE += app
// QT += gui declarative
// SOURCES += cursymx.cpp
//
// Then from the command-line: qmake cursymx.pro
// This will generate a Makefile
// Then from the command-line: make

int main(int argc,char *argv[])
{
	QApplication *my=new QApplication(argc,argv);
	QMainWindow x;

	QString ss="Pound: " + QString(163) + "\nEuro: " + QChar(8364) + "\nDollar: " + QString(36) + "\nCent: " + QString(162) +
				"\n\nCopyright: " + QString(169)+ QString(174) + "\n\n"
				"Catalan characters: " + QString(231) + QString(199) + "\n";

	//QLabel *o_lb_signs=new QLabel(ss,0);
	//QLineEdit *o_le_signs=new QLineEdit ( ss, 0);

	QTextBrowser *o_tb_signs=new QTextBrowser(0);
	o_tb_signs->setText(ss);

	x.setCentralWidget(o_tb_signs);
	x.show();

	return my->exec();
}
