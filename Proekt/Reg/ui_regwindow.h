/********************************************************************************
** Form generated from reading UI file 'regwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineOtch;
    QLineEdit *lineFam;
    QLabel *label_7;
    QLineEdit *lineNum;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *lineName;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *linePass2;
    QLabel *label_4;
    QLineEdit *linePocht;
    QLineEdit *linePass;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *regWindow)
    {
        if (regWindow->objectName().isEmpty())
            regWindow->setObjectName(QString::fromUtf8("regWindow"));
        regWindow->resize(581, 602);
        centralwidget = new QWidget(regWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineOtch = new QLineEdit(centralwidget);
        lineOtch->setObjectName(QString::fromUtf8("lineOtch"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        lineOtch->setFont(font);

        gridLayout->addWidget(lineOtch, 2, 2, 1, 1);

        lineFam = new QLineEdit(centralwidget);
        lineFam->setObjectName(QString::fromUtf8("lineFam"));
        lineFam->setFont(font);

        gridLayout->addWidget(lineFam, 1, 2, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        lineNum = new QLineEdit(centralwidget);
        lineNum->setObjectName(QString::fromUtf8("lineNum"));
        lineNum->setFont(font);

        gridLayout->addWidget(lineNum, 3, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 6, 0, 1, 2);

        lineName = new QLineEdit(centralwidget);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setFont(font);

        gridLayout->addWidget(lineName, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        linePass2 = new QLineEdit(centralwidget);
        linePass2->setObjectName(QString::fromUtf8("linePass2"));
        linePass2->setFont(font);

        gridLayout->addWidget(linePass2, 6, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        linePocht = new QLineEdit(centralwidget);
        linePocht->setObjectName(QString::fromUtf8("linePocht"));
        linePocht->setFont(font);

        gridLayout->addWidget(linePocht, 4, 2, 1, 1);

        linePass = new QLineEdit(centralwidget);
        linePass->setObjectName(QString::fromUtf8("linePass"));
        linePass->setMinimumSize(QSize(182, 27));
        linePass->setFont(font);
        linePass->setCursor(QCursor(Qt::IBeamCursor));

        gridLayout->addWidget(linePass, 5, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 7, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        regWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(regWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 581, 21));
        regWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(regWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        regWindow->setStatusBar(statusbar);

        retranslateUi(regWindow);

        QMetaObject::connectSlotsByName(regWindow);
    } // setupUi

    void retranslateUi(QMainWindow *regWindow)
    {
        regWindow->setWindowTitle(QCoreApplication::translate("regWindow", "regWindow", nullptr));
        label_7->setText(QCoreApplication::translate("regWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_6->setText(QCoreApplication::translate("regWindow", "\320\230\320\274\321\217", nullptr));
        label->setText(QCoreApplication::translate("regWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("regWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("regWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("regWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("regWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("regWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regWindow: public Ui_regWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
