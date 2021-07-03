#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class regWindow; }
QT_END_NAMESPACE

class regWindow : public QMainWindow
{
    Q_OBJECT

public:
    regWindow(QWidget *parent = nullptr);
    ~regWindow();
    QString getName();
    QString getFam();
    QString getOtch();
    QString getNum();
    QString getPocht();
    QString getPass();
    QString getPass2();
    bool checkPass();

   signals:
       void register_button_clicked2();

   private slots:
       void on_lineName_textEdited(const QString &arg1);
       void on_lineFam_textEdited(const QString &arg1);
       void on_lineOtch_textEdited(const QString &arg1);
       void on_lineNum_textEdited(const QString &arg1);
       void on_linePocht_textEdited(const QString &arg1);
       void on_linePass_textEdited(const QString &arg1);
       void on_linePass2_textEdited(const QString &arg1);
       void on_PushButton_clicked();

   private:
       Ui::regWindow *ui;
       QString m_userName;
       QString m_userFam();
       QString m_userOtch();
       QString m_userNum();
       QString m_userPocht();
       QString m_userPass;
       QString m_userPass2;
   };
#endif // REGWINDOW_H
