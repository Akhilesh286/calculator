/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn7;
    QLineEdit *MainOutput;
    QPushButton *btn5;
    QPushButton *btn8;
    QPushButton *btn3;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btn6;
    QPushButton *btn9;
    QPushButton *btn4;
    QPushButton *btnAc;
    QPushButton *btnEql;
    QPushButton *btnDot;
    QPushButton *btn0;
    QPushButton *btnAdd;
    QPushButton *btnMinus;
    QPushButton *btnHash;
    QPushButton *btnMultip;
    QPushButton *btnPower;
    QPushButton *btnClear;
    QPushButton *btnDivision;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(293, 504);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::GoHome")));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(20, 240, 51, 41));
        MainOutput = new QLineEdit(centralwidget);
        MainOutput->setObjectName(QString::fromUtf8("MainOutput"));
        MainOutput->setGeometry(QRect(0, 10, 291, 161));
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(80, 290, 51, 41));
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(80, 240, 51, 41));
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(140, 340, 51, 41));
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(80, 340, 51, 41));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(20, 340, 51, 41));
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(140, 290, 51, 41));
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(140, 240, 51, 41));
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(20, 290, 51, 41));
        btnAc = new QPushButton(centralwidget);
        btnAc->setObjectName(QString::fromUtf8("btnAc"));
        btnAc->setGeometry(QRect(20, 190, 51, 31));
        btnEql = new QPushButton(centralwidget);
        btnEql->setObjectName(QString::fromUtf8("btnEql"));
        btnEql->setGeometry(QRect(200, 390, 61, 41));
        btnDot = new QPushButton(centralwidget);
        btnDot->setObjectName(QString::fromUtf8("btnDot"));
        btnDot->setGeometry(QRect(100, 390, 41, 41));
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(20, 390, 71, 41));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(210, 290, 51, 41));
        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));
        btnMinus->setGeometry(QRect(210, 340, 51, 41));
        btnHash = new QPushButton(centralwidget);
        btnHash->setObjectName(QString::fromUtf8("btnHash"));
        btnHash->setGeometry(QRect(150, 390, 41, 41));
        btnMultip = new QPushButton(centralwidget);
        btnMultip->setObjectName(QString::fromUtf8("btnMultip"));
        btnMultip->setGeometry(QRect(210, 240, 51, 41));
        btnPower = new QPushButton(centralwidget);
        btnPower->setObjectName(QString::fromUtf8("btnPower"));
        btnPower->setGeometry(QRect(140, 190, 51, 31));
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(80, 190, 51, 31));
        btnDivision = new QPushButton(centralwidget);
        btnDivision->setObjectName(QString::fromUtf8("btnDivision"));
        btnDivision->setGeometry(QRect(210, 190, 51, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 293, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnAc->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        btnEql->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnHash->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        btnMultip->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnPower->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnDivision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
