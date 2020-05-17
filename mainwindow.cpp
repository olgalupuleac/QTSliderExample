#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , edit(new QLineEdit), ui(new Ui::MainWindow), button(new QPushButton("button")), window(new sec_window(nullptr, edit)), layout(new QVBoxLayout)
{
    ui->setupUi(this);
    connect(button, SIGNAL(clicked()), window, SLOT(show()));
    layout->addWidget(button);
    layout->addWidget(edit);
    //window->show();
    //set
    setCentralWidget(new QWidget);
    centralWidget()->setLayout(layout);
}


MainWindow::~MainWindow()
{
    delete ui;
    delete button;
    delete window;
}

