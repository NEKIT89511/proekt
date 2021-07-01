#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string.h>

using namespace std;
QString gen_captcha(int);
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

    ui->setupUi(this);

    ui->label_2->setText(gen_captcha(5));
}

MainWindow::~MainWindow()
{
    delete ui;
}


QString gen_captcha(int n){
   time_t t;
   srand((unsigned)time(&t));

   char chrs[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
   QString captcha = "";
   while (n--)
      captcha.push_back(chrs[rand()%62]);
   return QString(captcha);
}




void MainWindow::on_pushButton_clicked()
{
    QString user=ui->lineEdit->text();
    QString captcha=ui->label_2->text();
    int result=captcha.compare(user);
    ui->label->setText(QString::number(result));
}

