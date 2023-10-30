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
    QPushButton *startGameButton;
    QLabel *highScoreTitle;
    QLabel *highScoreTitleShadow;
    QLabel *score;
    QLabel *scoreShadow;
    QLabel *howToPlayTitle;
    QLabel *howToPlayTitleShadow;
    QLabel *howToPlay;
    QLabel *howToPlayShadow;
    QLabel *startGameButtonShadow;
    QLabel *endGameState;
    QLabel *endGameStateShadow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
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
        title->setGeometry(QRect(320, 55, 161, 41));
        title->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 50px;"));
        titleShadow = new QLabel(centralwidget);
        titleShadow->setObjectName("titleShadow");
        titleShadow->setGeometry(QRect(320, 50, 161, 41));
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
        author->setGeometry(QRect(350, 100, 101, 16));
        author->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 10px;"));
        authorShadow = new QLabel(centralwidget);
        authorShadow->setObjectName("authorShadow");
        authorShadow->setGeometry(QRect(350, 103, 101, 16));
        authorShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 10px;"));
        startGameButton = new QPushButton(centralwidget);
        startGameButton->setObjectName("startGameButton");
        startGameButton->setGeometry(QRect(345, 529, 121, 21));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        startGameButton->setFont(font);
        startGameButton->setCursor(QCursor(Qt::PointingHandCursor));
        startGameButton->setStyleSheet(QString::fromUtf8("background-color: transparent; \n"
"border: 0px"));
        highScoreTitle = new QLabel(centralwidget);
        highScoreTitle->setObjectName("highScoreTitle");
        highScoreTitle->setGeometry(QRect(610, 50, 121, 20));
        highScoreTitle->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 20px;"));
        highScoreTitleShadow = new QLabel(centralwidget);
        highScoreTitleShadow->setObjectName("highScoreTitleShadow");
        highScoreTitleShadow->setGeometry(QRect(610, 54, 121, 20));
        highScoreTitleShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 20px;"));
        score = new QLabel(centralwidget);
        score->setObjectName("score");
        score->setGeometry(QRect(650, 85, 31, 16));
        score->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 15px;"));
        score->setAlignment(Qt::AlignCenter);
        scoreShadow = new QLabel(centralwidget);
        scoreShadow->setObjectName("scoreShadow");
        scoreShadow->setGeometry(QRect(650, 89, 31, 16));
        scoreShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 15px;"));
        scoreShadow->setAlignment(Qt::AlignCenter);
        howToPlayTitle = new QLabel(centralwidget);
        howToPlayTitle->setObjectName("howToPlayTitle");
        howToPlayTitle->setGeometry(QRect(60, 50, 131, 20));
        howToPlayTitle->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 20px;"));
        howToPlayTitleShadow = new QLabel(centralwidget);
        howToPlayTitleShadow->setObjectName("howToPlayTitleShadow");
        howToPlayTitleShadow->setGeometry(QRect(60, 54, 131, 20));
        howToPlayTitleShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 20px;"));
        howToPlay = new QLabel(centralwidget);
        howToPlay->setObjectName("howToPlay");
        howToPlay->setGeometry(QRect(52, 90, 141, 41));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        howToPlay->setFont(font1);
        howToPlay->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 10px;"));
        howToPlay->setLineWidth(1);
        howToPlay->setMidLineWidth(0);
        howToPlay->setAlignment(Qt::AlignCenter);
        howToPlay->setWordWrap(true);
        howToPlay->setMargin(0);
        howToPlayShadow = new QLabel(centralwidget);
        howToPlayShadow->setObjectName("howToPlayShadow");
        howToPlayShadow->setGeometry(QRect(52, 93, 141, 41));
        howToPlayShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 10px;"));
        howToPlayShadow->setAlignment(Qt::AlignCenter);
        howToPlayShadow->setWordWrap(true);
        startGameButtonShadow = new QLabel(centralwidget);
        startGameButtonShadow->setObjectName("startGameButtonShadow");
        startGameButtonShadow->setGeometry(QRect(345, 535, 141, 16));
        startGameButtonShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 20px;"));
        endGameState = new QLabel(centralwidget);
        endGameState->setObjectName("endGameState");
        endGameState->setEnabled(true);
        endGameState->setGeometry(QRect(340, 300, 131, 20));
        endGameState->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold 20px;"));
        endGameState->setAlignment(Qt::AlignCenter);
        endGameStateShadow = new QLabel(centralwidget);
        endGameStateShadow->setObjectName("endGameStateShadow");
        endGameStateShadow->setEnabled(true);
        endGameStateShadow->setGeometry(QRect(340, 304, 131, 20));
        endGameStateShadow->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: bold 20px;"));
        endGameStateShadow->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        redButtonBase->raise();
        redButton->raise();
        blueButtonBase->raise();
        blueButton->raise();
        endGameStateShadow->raise();
        startGameButtonShadow->raise();
        howToPlayShadow->raise();
        howToPlayTitleShadow->raise();
        scoreShadow->raise();
        highScoreTitleShadow->raise();
        authorShadow->raise();
        title->raise();
        titleShadow->raise();
        author->raise();
        startGameButton->raise();
        highScoreTitle->raise();
        score->raise();
        howToPlayTitle->raise();
        howToPlay->raise();
        endGameState->raise();
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
        startGameButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        highScoreTitle->setText(QCoreApplication::translate("MainWindow", "HIGH SCORE", nullptr));
        highScoreTitleShadow->setText(QCoreApplication::translate("MainWindow", "HIGH SCORE", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        scoreShadow->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        howToPlayTitle->setText(QCoreApplication::translate("MainWindow", "HOW TO PLAY", nullptr));
        howToPlayTitleShadow->setText(QCoreApplication::translate("MainWindow", "HOW TO PLAY", nullptr));
        howToPlay->setText(QCoreApplication::translate("MainWindow", "WATCH THE ORDER OF WHICH BUTTONS ARE PRESSED AND REPEAT IT", nullptr));
        howToPlayShadow->setText(QCoreApplication::translate("MainWindow", "WATCH THE ORDER OF WHICH BUTTONS ARE PRESSED AND REPEAT IT", nullptr));
        startGameButtonShadow->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        endGameState->setText(QString());
        endGameStateShadow->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
