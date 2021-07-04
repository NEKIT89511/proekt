#include "regwindow.h"
#include "mainwindow.h"
#include "ui_regwindow.h"
#include <QtDebug>
#include "regwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display(); // прототип пользовательской функции отображения
    bool connectDB(); // прототип метода подключения к БД

private:
    Ui::MainWindow *ui_Main;
    regWindow ui_Reg;

    QString m_userName;
    QString m_userFam;
    QString m_userOtch;
    QString m_userNum;
    QString m_userPocht;
    QString m_userPass;
    QString m_userPass2;

    QString db_input;

    QSqlDatabase mw_db;

    int user_counter;
    bool m_loginSuccesfull;
private slots:
    void authorizeUser();
    void registerWindowShow();
    void registerUser();
};

bool MainWindow::connectDB()
{
    mw_db = QSqlDatabase::addDatabase("QSQLITE");
    mw_db.setDatabaseName("D:/Proekt/db.sqlite");
    if(!mw_db.open())
    {
        qDebug() << "Cannot open database: " << mw_db.lastError();
        return false;
    }
    return true;
}
void MainWindow::registerUser()
{
    if(ui_Reg.checkPass())
    {
        QSqlQuery query;
        QSqlRecord rec;
        QString str_t = "SELECT COUNT(*) "
                        "FROM userlist;";
        db_input = str_t;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to get number " << query.lastError() << " : " << query.lastQuery();
            return;
        }
        else
        {
            query.next();
            rec = query.record();
            user_counter = rec.value(0).toInt();
            qDebug() << user_counter;
        }

        m_userName = ui_Reg.getName();
        m_userFam = ui_Reg.getFam();
        m_userOtch = ui_Reg.getOtch();
        m_userNum = ui_Reg.getNum();
        m_userPocht = ui_Reg.getPocht();
        m_userPass = ui_Reg.getPass();

        user_counter++;
        str_t = "INSERT INTO userlist(Name, Fam, Otch, Num, Pass, xpos, ypos, width, length)"
                "VALUES(%1, '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9');";
        db_input = str_t
                         .arg(m_userName)
                         .arg(m_userFam)
                         .arg(m_userOtch)
                         .arg(m_userNum)
                         .arg(m_userPocht)
                         .arg(m_userPass)  
                         .arg(0)
                         .arg(0)
                         .arg(800)
                         .arg(400);

        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_Reg.hide();
        }
    }
    else
    {
        qDebug() << "Confirm password coorectly";
    }

}
