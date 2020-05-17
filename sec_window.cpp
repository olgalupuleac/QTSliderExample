#include "sec_window.h"

sec_window::sec_window(QWidget *parent, QLineEdit* edit) : QDialog(parent), widget(new MyWidget(nullptr, edit)), layout(new QVBoxLayout)
{
    layout->addWidget(widget.get());
    setLayout(layout.get());
}
