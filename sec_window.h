#ifndef SEC_WINDOW_H
#define SEC_WINDOW_H
#include <QDialog>
#include <memory>
#include <QVBoxLayout>
#include "MyWidget.h"


class sec_window : public QDialog
{
private:
    std::unique_ptr<MyWidget> widget;
    std::unique_ptr<QVBoxLayout> layout;
public:
    sec_window(QWidget *parent, QLineEdit* edit);
};

#endif // SEC_WINDOW_H
