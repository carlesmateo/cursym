#include <QtGui>
#include <QtCore>
#include <QLabel>
//#include <QLineEdit>
#include <QTextBrowser>
#include <QDialogButtonBox>
#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include "cursymx_MainWidget.h"

cursymx_MainWidget::cursymx_MainWidget()
{

    QString s_signs="Pound: " + QString(163) + "\nEuro: " + QChar(8364) + "\nDollar: " + QString(36) + "\nCent: " + QString(162) +
                    "\n\nCopyright: " + QString(169)+ QString(174) + "\n\n"
                    "Catalan characters: " + QString(231) + QString(199) + "\n";

	//QLabel *o_lb_signs=new QLabel(ss,0);
	//QLineEdit *o_le_signs=new QLineEdit ( ss, 0);

	QTextBrowser *o_tb_signs=new QTextBrowser(0);
    o_tb_signs->setText(s_signs);

    /*buttonBox = new QDialogButtonBox(0);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setGeometry(QRect(30, 240, 341, 32));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);*/

    QPushButton *quitButton = new QPushButton("Quit");
    QObject::connect(quitButton, SIGNAL(clicked()), this, SLOT(bQuit_clicked()));

    //QVBoxLayout *mainLayout = new QVBoxLayout;
    //QLayout *mainLayout = new QLayout;
    QFormLayout *mainLayout = new QFormLayout();
    //mainLayout->setMenuBar(menuBar);
    //mainLayout->addWidget(o_tb_signs);
    //mainLayout->addWidget(buttonBox);
    mainLayout->addRow(o_tb_signs);
    //mainLayout->addRow(buttonBox);
    mainLayout->addRow(quitButton);

    //QWidget *window = new QWidget();
    //window->setLayout(mainLayout);

	this->setLayout(mainLayout);

    //x.setCentralWidget(window);
	//this->setCentralWidget(window);

    //x.setCentralWidget(o_tb_signs);
    //x.setCentralWidget(mainLayout);
    //x.setLayout(mainLayout);

    //x.show();


}

void cursymx_MainWidget::bQuit_clicked()
{
    this->close();
}