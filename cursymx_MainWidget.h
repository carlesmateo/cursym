#ifndef CURSYMX_MAINWIDGET_H
#define CURSYMX_MAINWIDGET_H

#include <QWidget>

class cursymx_MainWidget : public QWidget
{
    Q_OBJECT
    public:
        cursymx_MainWidget();

    public slots:
        void bQuit_clicked();

};

#endif // CURSYMX_MAINWIDGET_H