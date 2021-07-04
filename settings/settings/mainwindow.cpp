#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
    ui->checkBox_2->setChecked(true);
    ui->checkBox_3->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
     //Поставить тип данных  как в главной программе

    if(ui->checkBox->isChecked())
    {
     //Подключение элементов
    }
    else
    {
      //Подключение элементов
    }

    if(ui->checkBox_2->isChecked())
    {
        //ui->checkBox_2->setText("Даты включены");
     //Подключение элементов
    }
    else
    {
       //ui->checkBox_2->setText("Даты отключены");
      //Подключение элементов
    }

    if(ui->checkBox_3->isChecked())
    {

     //Подключение элементов
    }
    else
    {

      //Подключение элементов
    }
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{

}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{

}

