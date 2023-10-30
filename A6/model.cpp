#include "model.h"
#include <random>
#include <iostream>
#include <QTimer>

model::model(QObject *parent) : QObject(parent) {
    patternLength = 10;
    pattern = nullptr; // will be created in createPattern();
    currentScore = 0;
    gameSpeed = 1000;
}

void model::startGame() {
    // let ui know the game has been started and generate pattern data
    emit updateGameStarted();
    createPattern();

    // start the first cpu turn
    emit setCPUTurn(currentScore);
    QTimer::singleShot(750, this, &model::cpuTurn); // added small delay after start game was pressed
}

void model::createPattern() {

    // check for previous game data
    if (pattern != nullptr)
        delete[] pattern;

    // initialize the pattern array
    pattern = new int[patternLength];

    // initialzie looping data
    currentPatternLength = 1;
    cpuIndex = 0;
    userIndex = 0;

    // random number generation from https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<int> dist1(0, 1); // Distribution in range [0, 1]

    // fill array with 1s and 0s randomly
    for (int i = 0; i < patternLength; i++) {
        pattern[i] = dist1(rng); // Generate random 1 or 0
    }
}

void model::cpuTurn() {

    // repeat this until the correct number of button presses has been met
    if (cpuIndex < currentPatternLength) {

        // red button if 1; blue button if 0
        if (pattern[cpuIndex])
            emit pressRedButton();
        else
            emit pressBlueButton();

        // increment looping index
        cpuIndex++;

        // call this method again
        QTimer::singleShot(gameSpeed, this, &model::cpuTurn);
    }

    // reset the index, move the buttons to random locations, and switch the users turn
    else {
        cpuIndex = 0;

        // make the cpu faster
        if (currentPatternLength % 5 == 0)
            gameSpeed -= 50;
        else
            gameSpeed -= 20;

        // random number generation from https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<int> redX(50, 650);   // Distribution in range [50, 650]
        std::uniform_int_distribution<int> blueX(50, 650);  // Distribution in range [50, 650]
        std::uniform_int_distribution<int> Y(150, 400);     // Distribution in range [150, 400]

        int redButtonX, blueButtonX;
        int redButtonY = Y(rng);
        int blueButtonY = Y(rng);

        // ensure that the new locations are spaced out from each other; no overlapping
        do {
            redButtonX = redX(rng);
            blueButtonX = blueX(rng);
        }
        while (abs((redButtonX) - (blueButtonX)) < 250
                 || abs((redButtonX) - (blueButtonX)) > 750);

        // tell the ui to move the buttons
        emit moveRedButton(redButtonX, redButtonY);
        emit moveBlueButton(blueButtonX, blueButtonY);

        // switch turns
        emit setUserTurn();
    }
}

void model::userTurn(int buttonPressed) {

    // check for incorrect guess
    if (pattern[userIndex] != buttonPressed) {
        emit userLostGame();
        emit setCPUTurn(currentScore);
        return;
    }

    // increment the index until enough button presses have been read
    if (userIndex < currentPatternLength - 1) {
        userIndex++;
    }
    else {
        userIndex = 0; // reset looping tracker for next turn
        currentScore = currentPatternLength; // update the score

        // if the player reaches the max pattern length, tell them they won
        if (currentPatternLength < patternLength) {
            currentPatternLength++; // increment current number of button presses
            emit setCPUTurn(currentScore);
            QTimer::singleShot(1000, this, &model::cpuTurn);
        } else {
            emit userWonGame();
            emit setCPUTurn(currentScore);
            return;
        }
    }
}

model::~model()
{
    delete[] pattern;
}
