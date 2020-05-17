#include "mainwindow.h"
#include "MyWidget.h"
#include <QApplication>
#include<QDebug>
#include <QtGui>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //MyWidget widget;
    //QPushButton button;
    //button.connect(&button, SIGNAL(clicked()), &widget, SLOT(MyWidget::show));
    //w.setCentralWidget(&button);
    w.show();

    return a.exec();
}
