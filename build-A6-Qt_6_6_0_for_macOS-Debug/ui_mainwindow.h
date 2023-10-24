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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *correctInputs;
    QRadioButton *indicator0;
    QRadioButton *indicator1;
    QRadioButton *indicator2;
    QRadioButton *indicator3;
    QRadioButton *indicator4;
    QRadioButton *indicator5;
    QRadioButton *indicator6;
    QRadioButton *indicator7;
    QRadioButton *indicator8;
    QRadioButton *indicator9;
    QLabel *highScoreTitle;
    QLabel *highScoreTitleShadow;
    QLabel *score;
    QLabel *scoreShadow;
    QLabel *howToPlayTitle;
    QLabel *howToPlayTitleShadow;
    QLabel *howToPlay;
    QLabel *howToPlayShadow;
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 500, 121, 21));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent; \n"
"border: 0px"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(260, 120, 281, 80));
        correctInputs = new QHBoxLayout(horizontalLayoutWidget);
        correctInputs->setObjectName("correctInputs");
        correctInputs->setContentsMargins(0, 0, 0, 0);
        indicator0 = new QRadioButton(horizontalLayoutWidget);
        indicator0->setObjectName("indicator0");
        indicator0->setEnabled(false);
        QFont font1;
        font1.setBold(false);
        indicator0->setFont(font1);
        indicator0->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator0->setChecked(false);
        indicator0->setAutoExclusive(false);

        correctInputs->addWidget(indicator0);

        indicator1 = new QRadioButton(horizontalLayoutWidget);
        indicator1->setObjectName("indicator1");
        indicator1->setEnabled(false);
        indicator1->setFont(font1);
        indicator1->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator1->setChecked(false);
        indicator1->setAutoExclusive(false);

        correctInputs->addWidget(indicator1);

        indicator2 = new QRadioButton(horizontalLayoutWidget);
        indicator2->setObjectName("indicator2");
        indicator2->setEnabled(false);
        indicator2->setFont(font1);
        indicator2->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator2->setChecked(false);
        indicator2->setAutoExclusive(false);

        correctInputs->addWidget(indicator2);

        indicator3 = new QRadioButton(horizontalLayoutWidget);
        indicator3->setObjectName("indicator3");
        indicator3->setEnabled(false);
        indicator3->setFont(font1);
        indicator3->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator3->setChecked(false);
        indicator3->setAutoExclusive(false);

        correctInputs->addWidget(indicator3);

        indicator4 = new QRadioButton(horizontalLayoutWidget);
        indicator4->setObjectName("indicator4");
        indicator4->setEnabled(false);
        indicator4->setFont(font1);
        indicator4->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator4->setChecked(false);
        indicator4->setAutoExclusive(false);

        correctInputs->addWidget(indicator4);

        indicator5 = new QRadioButton(horizontalLayoutWidget);
        indicator5->setObjectName("indicator5");
        indicator5->setEnabled(false);
        indicator5->setFont(font1);
        indicator5->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator5->setChecked(false);
        indicator5->setAutoExclusive(false);

        correctInputs->addWidget(indicator5);

        indicator6 = new QRadioButton(horizontalLayoutWidget);
        indicator6->setObjectName("indicator6");
        indicator6->setEnabled(false);
        indicator6->setFont(font1);
        indicator6->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator6->setChecked(false);
        indicator6->setAutoExclusive(false);

        correctInputs->addWidget(indicator6);

        indicator7 = new QRadioButton(horizontalLayoutWidget);
        indicator7->setObjectName("indicator7");
        indicator7->setEnabled(false);
        indicator7->setFont(font1);
        indicator7->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator7->setChecked(false);
        indicator7->setAutoExclusive(false);

        correctInputs->addWidget(indicator7);

        indicator8 = new QRadioButton(horizontalLayoutWidget);
        indicator8->setObjectName("indicator8");
        indicator8->setEnabled(false);
        indicator8->setFont(font1);
        indicator8->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator8->setChecked(false);
        indicator8->setAutoExclusive(false);

        correctInputs->addWidget(indicator8);

        indicator9 = new QRadioButton(horizontalLayoutWidget);
        indicator9->setObjectName("indicator9");
        indicator9->setEnabled(false);
        indicator9->setFont(font1);
        indicator9->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  10px;\n"
"    height:                 10px;\n"
"    border-radius:          7px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background-color:       transparent;\n"
"    border:                 2px solid white;\n"
"}"));
        indicator9->setChecked(false);
        indicator9->setAutoExclusive(false);

        correctInputs->addWidget(indicator9);

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
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        howToPlay->setFont(font2);
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
        MainWindow->setCentralWidget(centralwidget);
        howToPlayShadow->raise();
        howToPlayTitleShadow->raise();
        scoreShadow->raise();
        highScoreTitleShadow->raise();
        authorShadow->raise();
        blueButtonBase->raise();
        redButtonBase->raise();
        redButton->raise();
        blueButton->raise();
        title->raise();
        titleShadow->raise();
        author->raise();
        pushButton->raise();
        horizontalLayoutWidget->raise();
        highScoreTitle->raise();
        score->raise();
        howToPlayTitle->raise();
        howToPlay->raise();
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
        indicator0->setText(QString());
        indicator1->setText(QString());
        indicator2->setText(QString());
        indicator3->setText(QString());
        indicator4->setText(QString());
        indicator5->setText(QString());
        indicator6->setText(QString());
        indicator7->setText(QString());
        indicator8->setText(QString());
        indicator9->setText(QString());
        highScoreTitle->setText(QCoreApplication::translate("MainWindow", "HIGH SCORE", nullptr));
        highScoreTitleShadow->setText(QCoreApplication::translate("MainWindow", "HIGH SCORE", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        scoreShadow->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        howToPlayTitle->setText(QCoreApplication::translate("MainWindow", "HOW TO PLAY", nullptr));
        howToPlayTitleShadow->setText(QCoreApplication::translate("MainWindow", "HOW TO PLAY", nullptr));
        howToPlay->setText(QCoreApplication::translate("MainWindow", "WATCH THE ORDER OF WHICH BUTTONS ARE PRESSED AND REPEAT IT", nullptr));
        howToPlayShadow->setText(QCoreApplication::translate("MainWindow", "WATCH THE ORDER OF WHICH BUTTONS ARE PRESSED AND REPEAT IT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
