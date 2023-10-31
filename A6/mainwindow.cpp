#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // BUTTON ANIMATION (USER)

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
    connect(ui->startGameButton,
            &QPushButton::pressed,
            this,
            &MainWindow::onStartGamePressed);
    connect(ui->startGameButton,
            &QPushButton::released,
            this,
            &MainWindow::onStartGameReleased);


    // BUTTON ANIMATION (CPU)

    connect(&model,
            &model::pressRedButton,
            this,
            &MainWindow::onCpuRedButton);
    connect(&model,
            &model::pressBlueButton,
            this,
            &MainWindow::onCpuBlueButton);


    // START GAME STATE SETTING

    connect(ui->startGameButton,
            &QPushButton::clicked,
            &model,
            &model::startGame);
    connect(&model,
            &model::setGameStarted,
            this,
            &MainWindow::onStartGame);


    // USER/CPU TURN STATES

    connect(&model,
            &model::setCpuTurn,
            this,
            &MainWindow::onCpuTurn);
    connect(&model,
            &model::setUserTurn,
            this,
            &MainWindow::onUserTurn);


    // BUTTON SELECTIONS (USER)

    connect(ui->redButton,
            &QPushButton::clicked,
            &model,
            [&model]() { model.userTurn(1);});
    connect(ui->blueButton,
            &QPushButton::clicked,
            &model,
            [&model]() { model.userTurn(0);});


    // END OF GAME STATES

    connect(&model,
            &model::setWonGame,
            this,
            &MainWindow::onUserWonGame);
    connect(&model,
            &model::setLostGame,
            this,
            &MainWindow::onUserLostGame);


    // BUTTON MOVEMENT

    connect(&model,
            &model::moveRedButton,
            this,
            &MainWindow::onRedButtonMove);
    connect(&model,
            &model::moveBlueButton,
            this,
            &MainWindow::onBlueButtonMove);


    // PROGRESS BAR ADJUSTING

    connect(&model,
            &model::correctGuess,
            ui->progressBar,
            &QProgressBar::setValue);
}


// SLOTS

void MainWindow::onRedButtonPressed() {
    animateButtonPress(ui->redButton);
}

void MainWindow::onRedButtonReleased() {
    animateButtonRelease(ui->redButton);
}

void MainWindow::onCpuRedButton() {
    // Press it in
    animateButtonPress(ui->redButton);

    // Unpress it with a delay
    QTimer::singleShot(500, this, [this]() {
        animateButtonRelease(ui->redButton);
    });
}

void MainWindow::onBlueButtonPressed() {
    animateButtonPress(ui->blueButton);
}

void MainWindow::onBlueButtonReleased() {
    animateButtonRelease(ui->blueButton);
}

void MainWindow::onCpuBlueButton() {
    // Press it in
    animateButtonPress(ui->blueButton);

    // Unpress it with a delay
    QTimer::singleShot(500, this, [this]() {
        animateButtonRelease(ui->blueButton);
    });
}

void MainWindow::onStartGamePressed() {
    // move button downward to simulate a "press"
    ui->startGameButton->move(ui->startGameButton->pos().x(),
                         ui->startGameButton->pos().y() + 3);
}

void MainWindow::onStartGameReleased() {
    // move button back to default position (unpressed)
    ui->startGameButton->move(ui->startGameButton->pos().x(),
                              ui->startGameButton->pos().y() - 3);
}

void MainWindow::onStartGame() {
    // remove the start game button
    ui->startGameButton->setVisible(false);
    ui->startGameButtonShadow->setVisible(false);

    // remove the "how to play" information
    ui->howToPlay->setVisible(false);
    ui->howToPlayShadow->setVisible(false);
    ui->howToPlayTitle->setVisible(false);
    ui->howToPlayTitleShadow->setVisible(false);

    // remove the end of game text from previous game (if there was one)
    ui->endGameState->setText("");
    ui->endGameStateShadow->setText("");

    // move buttons back to default position
    MainWindow::onRedButtonMove(250, 260);
    MainWindow::onBlueButtonMove(450, 260);
}

void MainWindow::onCpuTurn(int score) {
    // disable user input
    ui->redButton->setEnabled(false);
    ui->blueButton->setEnabled(false);

    // set the progress back to zero with some delay
    QTimer::singleShot(750, this, [this](){
        ui->progressBar->setValue(0);
    });

    // if the passed in score is the new highest, set it
    if (ui->score->text().toInt() < score) {
        ui->score->setText(QString::number(score));
        ui->scoreShadow->setText(QString::number(score));
    }
}

void MainWindow::onUserTurn() {
    // enable user input
    ui->redButton->setEnabled(true);
    ui->blueButton->setEnabled(true);
}

void MainWindow::onUserWonGame() {
    // display a message
    ui->endGameState->setText("USER WON");
    ui->endGameState->setStyleSheet("color: yellow; font: bold 20px;");
    ui->endGameStateShadow->setText("USER WON");

    onEndOfGame();
}

void MainWindow::onUserLostGame() {
    // display a message
    ui->endGameState->setText("USER LOST");
    ui->endGameState->setStyleSheet("color: red; font: bold 20px;");
    ui->endGameStateShadow->setText("USER LOST");

    onEndOfGame();
}

void MainWindow::onRedButtonMove(int x, int y) {
    // set both the button and its base to the new coordinates
    ui->redButton->move(x, y);
    ui->redButtonBase->move(x, y + 15);
}

void MainWindow::onBlueButtonMove(int x, int y) {
    // set both the button and its base to the new coordinates
    ui->blueButton->move(x, y);
    ui->blueButtonBase->move(x, y + 15);
}


// HELPERS

void MainWindow::animateButtonPress(QPushButton* button) {
    // Move the button downward to simulate a "press"
    button->move(button->pos().x(), button->pos().y() + 15);
}

void MainWindow::animateButtonRelease(QPushButton* button) {
    // Move the button back to the default position (unpressed)
    button->move(button->pos().x(), button->pos().y() - 15);
}

void MainWindow::onEndOfGame() {
    // disable user input on red/blue buttons
    ui->redButton->setEnabled(false);
    ui->blueButton->setEnabled(false);

    // allow for a new game to start
    ui->startGameButton->setVisible(true);
    ui->startGameButtonShadow->setVisible(true);

    // show the "how to play" information
    ui->howToPlay->setVisible(true);
    ui->howToPlayShadow->setVisible(true);
    ui->howToPlayTitle->setVisible(true);
    ui->howToPlayTitleShadow->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
