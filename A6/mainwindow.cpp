#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect lines heres
    connect(ui->redButton,
            &QPushButton::pressed,
            this,
            &MainWindow::onRedButtonPressed);
    connect(ui->redButton,
            &QPushButton::released,
            this,
            &MainWindow::onRedButtonReleased);
    connect(ui->blueButton,
            &QPushButton::pressed,
            this,
            &MainWindow::onBlueButtonPressed);
    connect(ui->blueButton,
            &QPushButton::released,
            this,
            &MainWindow::onBlueButtonReleased);
}

void MainWindow::onRedButtonPressed() {
    ui->redButton->move(250, 275);
}

void MainWindow::onRedButtonReleased() {
    ui->redButton->move(250, 260);
    ui->indicator0->setChecked(true);
    ui->indicator0->setStyleSheet(R""""(QRadioButton {
                                            color:                  white;
                                        }

                                        QRadioButton::indicator {
                                            width:                  10px;
                                            height:                 10px;
                                            border-radius:          7px;
                                        }

                                        QRadioButton::indicator:checked {
                                            background-color:       red;
                                            border:                 2px solid white;
                                        }

                                        QRadioButton::indicator:unchecked {
                                            background-color:       transparent;
                                            border:                 2px solid white;
                                        })"""");
}

void MainWindow::onBlueButtonPressed() {
    ui->blueButton->move(450, 275);
}

void MainWindow::onBlueButtonReleased() {
    ui->blueButton->move(450, 260);
    ui->indicator0->setChecked(true);
    ui->indicator0->setStyleSheet(R""""(QRadioButton {
                                            color:                  white;
                                        }

                                        QRadioButton::indicator {
                                            width:                  10px;
                                            height:                 10px;
                                            border-radius:          7px;
                                        }

                                        QRadioButton::indicator:checked {
                                            background-color:       blue;
                                            border:                 2px solid white;
                                        }

                                        QRadioButton::indicator:unchecked {
                                            background-color:       transparent;
                                            border:                 2px solid white;
                                        })"""");}

MainWindow::~MainWindow()
{
    delete ui;
}
