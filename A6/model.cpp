#include "model.h"
#include <random>
#include <iostream>
#include <QTimer>

model::model(QObject *parent) : QObject(parent) {
    sequenceLength = 10;
    pattern = nullptr; // will be created in createPattern();
    currentScore = 0;
    gameSpeed = 1000;
    cpuInitialDelay = 750;
}

void model::startGame() {

    // let ui know the game has been started and generate pattern data
    emit setGameStarted();
    createPattern();

    // start the first cpu turn
    emit setCpuTurn(currentScore);
    QTimer::singleShot(cpuInitialDelay, this, &model::cpuTurn); // added small delay after start game was pressed

}

void model::createPattern() {

    // check for previous game data
    if (pattern != nullptr)
        delete[] pattern;

    // initialize the pattern array
    pattern = new int[sequenceLength];

    // initialzie looping data
    currentSequenceLength = 1;
    cpuIndex = 0;
    userIndex = 0;

    // fill array with 1s and 0s randomly
    for (int i = 0; i < sequenceLength; i++) {
        pattern[i] = generateRandomNumber(0, 1); // Generate random 1 or 0
    }

}

void model::cpuTurn() {

    // repeat this until the correct number of button presses has been met
    if (cpuIndex < currentSequenceLength) {

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

        // make the cpu faster; every 5 turns give a bigger speed boost
        if (currentSequenceLength % 5 == 0)
            gameSpeed -= 60;
        else
            gameSpeed -= 20;

        // move the buttons to random locations
        int redButtonY = generateRandomNumber(150, 400);
        int blueButtonY = generateRandomNumber(150, 400);

        // ensure that the new locations are spaced out from each other; no overlapping
        int redButtonX, blueButtonX;
        do {
            redButtonX = generateRandomNumber(50, 650);
            blueButtonX = generateRandomNumber(50, 650);
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
        emit setLostGame();
        emit setCpuTurn(currentScore);
        return;
    }

    float progress = (userIndex + 1.0) / currentSequenceLength;
    emit correctGuess(static_cast<int>(progress * 100));

    // increment the index until enough button presses have been read
    if (userIndex < currentSequenceLength - 1) {
        userIndex++;
    }
    else {
        userIndex = 0; // reset looping tracker for next turn
        currentScore = currentSequenceLength; // update the score

        // if the player reaches the max pattern length, tell them they won
        if (currentSequenceLength < sequenceLength) {
            currentSequenceLength++; // increment current number of button presses
            emit setCpuTurn(currentScore);
            QTimer::singleShot(cpuInitialDelay, this, &model::cpuTurn);
        } else {
            emit setWonGame();
            emit setCpuTurn(currentScore);
            return;
        }
    }

}

int model::generateRandomNumber(int min, int max) {

    // code was used from https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(rng);

}

model::~model()
{
    delete[] pattern;
}
