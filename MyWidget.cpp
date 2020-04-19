#include "MyWidget.h"
#include "ui_mainwindow.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent),
      slider(new QSlider),
     button(new QPushButton("Print")),  edit(new QLineEdit), layout(new QVBoxLayout)
{
    layout->addWidget(button.get());
    layout->addWidget(edit.get());
    layout->addWidget(slider.get());
    setLayout(layout.get());
    connect(button.get(), SIGNAL(clicked()), this, SLOT(printValue()));
}

void MyWidget::printValue() {
    int value = slider->value();
    edit->setText(QString::number(value));
}

