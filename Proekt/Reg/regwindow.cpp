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

void regWindow::on_PushButton_clicked()
{
    emit register_button_clicked2();
}

QString regWindow::getNum()
{
    return m_userNum;
}

QString regWindow::getPass()
{
    return m_userPass;
}
void regWindow::on_lineName_textEdited(const QString &arg1)
{
    regWindow::m_userName = arg1;
}
void regWindow::on_lineFam_textEdited(const QString &arg1)
{
    regWindow::m_userFam = arg1;
}
void regWindow::on_lineOtch_textEdited(const QString &arg1)
{
    regWindow::m_userOtch = arg1;
}
void regWindow::on_lineNum_textEdited(const QString &arg1)
{
    regWindow::m_userNum = arg1;
}
void regWindow::on_linePocht_textEdited(const QString &arg1)
{
    regWindow::m_userPocht = arg1;
}
void regWindow::on_linePass_textEdited(const QString &arg1)
{
    regWindow::m_userPass = arg1;
}
void regWindow::on_linePass2_textEdited(const QString &arg1)
{
    regWindow::m_userPass2 = arg1;
}
bool regWindow::checkPass()
{
    return (m_userPass2 == m_userPass);
}
