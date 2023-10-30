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
            &model::setGameStarted,
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
            &model::setCpuTurn,
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
            &model::setWonGame,
            this,
            &MainWindow::onUserWonGame);
    connect(&model,
            &model::setLostGame,
            this,
            &MainWindow::onUserLostGame);

    // move buttons
    connect(&model,
            &model::moveRedButton,
            this,
            &MainWindow::onRedButtonMove);
    connect(&model,
            &model::moveBlueButton,
            this,
            &MainWindow::onBlueButtonMove);
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

    ui->endGameState->setText("");
    ui->endGameStateShadow->setText("");

    MainWindow::onRedButtonMove(250, 260);
    MainWindow::onBlueButtonMove(450, 260);

}

void MainWindow::onCpuTurn(int score) {
    ui->redButton->setEnabled(false);
    ui->blueButton->setEnabled(false);

    if (ui->score->text().toInt() < score) {
        ui->score->setText(QString::number(score));
        ui->scoreShadow->setText(QString::number(score));
    }
}

void MainWindow::onUserTurn() {
    ui->redButton->setEnabled(true);
    ui->blueButton->setEnabled(true);
}

void MainWindow::onUserWonGame() {
    ui->endGameState->setText("USER WON");
    ui->endGameState->setStyleSheet("color: yellow; font: bold 20px;");
    ui->endGameStateShadow->setText("USER WON");

    ui->startGameButton->setVisible(true);
    ui->startGameButtonShadow->setVisible(true);

    ui->howToPlay->setVisible(true);
    ui->howToPlayShadow->setVisible(true);
    ui->howToPlayTitle->setVisible(true);
    ui->howToPlayTitleShadow->setVisible(true);
}

void MainWindow::onUserLostGame() {
    ui->endGameState->setText("USER LOST");
    ui->endGameState->setStyleSheet("color: red; font: bold 20px;");
    ui->endGameStateShadow->setText("USER LOST");

    ui->startGameButton->setVisible(true);
    ui->startGameButtonShadow->setVisible(true);

    ui->howToPlay->setVisible(true);
    ui->howToPlayShadow->setVisible(true);
    ui->howToPlayTitle->setVisible(true);
    ui->howToPlayTitleShadow->setVisible(true);
}

void MainWindow::onRedButtonMove(int x, int y) {
    ui->redButton->move(x, y);
    ui->redButtonBase->move(x, y + 15);
}

void MainWindow::onBlueButtonMove(int x, int y) {
    ui->blueButton->move(x, y);
    ui->blueButtonBase->move(x, y + 15);
}

MainWindow::~MainWindow()
{
    delete ui;
}
