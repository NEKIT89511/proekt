#include "regwindow.h"
#include "ui_regwindow.h"

regWindow::regWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::regWindow)
{
    ui->setupUi(this);
}

regWindow::~regWindow()
{
    delete ui;
}

