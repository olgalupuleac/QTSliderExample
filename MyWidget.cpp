#include "MyWidget.h"
#include "ui_mainwindow.h"

MyWidget::MyWidget(QWidget *parent, QLineEdit* e)
    : QWidget(parent),
      slider(new QSlider),
     button(new QPushButton("Print")),  edit(e), layout(new QVBoxLayout)
{
    layout->addWidget(button.get());
   // layout->addWidget(edit.get());
    layout->addWidget(slider.get());
    setLayout(layout.get());
    connect(button.get(), SIGNAL(clicked()), this, SLOT(printValue()));
    connect(slider.get(), &QSlider::valueChanged, this, &MyWidget::printValue);
}

void MyWidget::printValue() {
    int value = slider->value();
    edit->setText("hjj" + QString::number(value));
}

