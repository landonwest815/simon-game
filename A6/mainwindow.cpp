#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect lines heres

    // button animations
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

    // start game animations
    connect(ui->startGameButton,
            &QPushButton::pressed,
            this,
            &MainWindow::onStartGamePressed);
    connect(ui->startGameButton,
            &QPushButton::released,
            this,
            &MainWindow::onStartGameReleased);

    // start game
    connect(ui->startGameButton,
            &QPushButton::clicked,
            &model,
            &model::startGame);
    connect(&model,
            &model::updateGameStarted,
            this,
            &MainWindow::onStartGame);

    // cpu animations
    connect(&model,
            &model::pressRedButton,
            this,
            &MainWindow::pressRedButton);
    connect(&model,
            &model::pressBlueButton,
            this,
            &MainWindow::pressBlueButton);

    // turns
    connect(&model,
            &model::setCPUTurn,
            this,
            &MainWindow::onCpuTurn);
    connect(&model,
            &model::setUserTurn,
            this,
            &MainWindow::onUserTurn);

    // user button selections
    connect(ui->redButton,
            &QPushButton::clicked,
            &model,
            [&model]() { model.userTurn(1);});
    connect(ui->blueButton,
            &QPushButton::clicked,
            &model,
            [&model]() { model.userTurn(0);});

    // end game states
    connect(&model,
            &model::userWonGame,
            this,
            &MainWindow::onUserWonGame);
    connect(&model,
            &model::userLostGame,
            this,
            &MainWindow::onUserLostGame);
}

void MainWindow::onRedButtonPressed() {
    ui->redButton->move(ui->redButton->pos().x(),
                        ui->redButton->pos().y() + 15);
}

void MainWindow::onRedButtonReleased() {
    ui->redButton->move(ui->redButton->pos().x(),
                        ui->redButton->pos().y() - 15);
}

void MainWindow::pressRedButton() {
    onRedButtonPressed();
    QTimer::singleShot(500, this, &MainWindow::onRedButtonReleased);
}

void MainWindow::onBlueButtonPressed() {
    ui->blueButton->move(ui->blueButton->pos().x(),
                        ui->blueButton->pos().y() + 15);
}

void MainWindow::onBlueButtonReleased() {
    ui->blueButton->move(ui->blueButton->pos().x(),
                         ui->blueButton->pos().y() - 15);
}

void MainWindow::pressBlueButton() {
    onBlueButtonPressed();
    QTimer::singleShot(500, this, &MainWindow::onBlueButtonReleased);
}

void MainWindow::onStartGamePressed() {
    ui->startGameButton->move(345, 532);
}

void MainWindow::onStartGameReleased() {
    ui->startGameButton->move(345, 529);
}

void MainWindow::onStartGame() {
    ui->startGameButton->setVisible(false);
    ui->startGameButtonShadow->setVisible(false);

    ui->howToPlay->setVisible(false);
    ui->howToPlayShadow->setVisible(false);
    ui->howToPlayTitle->setVisible(false);
    ui->howToPlayTitleShadow->setVisible(false);
}

void MainWindow::onCpuTurn() {
    ui->redButton->setEnabled(false);
    ui->blueButton->setEnabled(false);
}

void MainWindow::onUserTurn() {
    ui->redButton->setEnabled(true);
    ui->blueButton->setEnabled(true);
}

void MainWindow::onUserWonGame() {
    ui->endGameState->setText("USER WON");
}

void MainWindow::onUserLostGame() {
    ui->endGameState->setText("USER LOST");
}

MainWindow::~MainWindow()
{
    delete ui;
}
