#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QSlider>
#include "sec_window.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QLineEdit* edit;
    Ui::MainWindow *ui;
    QPushButton* button;
    sec_window* window;
    QVBoxLayout* layout;
};
#endif // MAINWINDOW_H
