 #ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>

namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();

public slots:
    void on_pushButton_clicked();


private:
    Ui::settings *ui;

};

#endif // SETTINGS_H
