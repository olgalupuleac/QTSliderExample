#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QSlider>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
private slots:
    void printValue();
private:
    std::unique_ptr<QSlider> slider;
    std::unique_ptr<QPushButton> button;
    std::unique_ptr<QLineEdit> edit;
    std::unique_ptr<QVBoxLayout> layout;
};

#endif // MYWIDGET_H
