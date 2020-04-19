#include "mainwindow.h"
#include "MyWidget.h"
#include <QApplication>
#include<QDebug>
#include <QtGui>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MyWidget widget;
    w.setCentralWidget(&widget);
    w.show();

    return a.exec();
}
