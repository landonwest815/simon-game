/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QPushButton *redButton;
    QPushButton *blueButton;
    QLabel *title;
    QLabel *titleShadow;
    QPushButton *redButtonBase;
    QPushButton *blueButtonBase;
    QLabel *author;
    QLabel *authorShadow;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        redButton = new QPushButton(centralwidget);
        redButton->setObjectName("redButton");
        redButton->setGeometry(QRect(250, 260, 110, 110));
        redButton->setCursor(QCursor(Qt::PointingHandCursor));
        redButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
" border-style: solid;\n"
" border-width:5px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        blueButton = new QPushButton(centralwidget);
        blueButton->setObjectName("blueButton");
        blueButton->setGeometry(QRect(450, 260, 110, 110));
        blueButton->setCursor(QCursor(Qt::PointingHandCursor));
        blueButton->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
" border-style: solid;\n"
" border-width:5px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(320, 156, 161, 41));
        title->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 50px;"));
        titleShadow = new QLabel(centralwidget);
        titleShadow->setObjectName("titleShadow");
        titleShadow->setGeometry(QRect(320, 150, 161, 41));
        titleShadow->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 50px;"));
        redButtonBase = new QPushButton(centralwidget);
        redButtonBase->setObjectName("redButtonBase");
        redButtonBase->setEnabled(false);
        redButtonBase->setGeometry(QRect(250, 275, 110, 110));
        redButtonBase->setStyleSheet(QString::fromUtf8("background-color: red;\n"
" border-style: solid;\n"
" border-width:5px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        blueButtonBase = new QPushButton(centralwidget);
        blueButtonBase->setObjectName("blueButtonBase");
        blueButtonBase->setGeometry(QRect(450, 275, 110, 110));
        blueButtonBase->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
" border-style: solid;\n"
" border-width:5px;\n"
" border-radius:50px;\n"
" border-color: black;\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;"));
        author = new QLabel(centralwidget);
        author->setObjectName("author");
        author->setGeometry(QRect(350, 200, 101, 16));
        author->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 10px;"));
        authorShadow = new QLabel(centralwidget);
        authorShadow->setObjectName("authorShadow");
        authorShadow->setGeometry(QRect(350, 204, 101, 16));
        authorShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 10px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 440, 121, 21));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent; \n"
"border: 0px"));
        MainWindow->setCentralWidget(centralwidget);
        authorShadow->raise();
        blueButtonBase->raise();
        redButtonBase->raise();
        redButton->raise();
        blueButton->raise();
        title->raise();
        titleShadow->raise();
        author->raise();
        pushButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        redButton->setText(QString());
        blueButton->setText(QString());
        title->setText(QCoreApplication::translate("MainWindow", "SIMON", nullptr));
        titleShadow->setText(QCoreApplication::translate("MainWindow", "SIMON", nullptr));
        redButtonBase->setText(QString());
        blueButtonBase->setText(QString());
        author->setText(QCoreApplication::translate("MainWindow", "BY LANDON WEST", nullptr));
        authorShadow->setText(QCoreApplication::translate("MainWindow", "BY LANDON WEST", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
