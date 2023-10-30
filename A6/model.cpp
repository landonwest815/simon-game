#include "model.h"
#include <random>
#include <iostream>
#include <QTimer>

model::model(QObject *parent) : QObject(parent) {
    patternLength = 100;
    pattern = nullptr;
}

void model::startGame() {
    emit updateGameStarted();
    createPattern();

    emit setCPUTurn(currentPatternLength - 1);
    QTimer::singleShot(1000, this, &model::cpuTurn);
}

void model::createPattern() {
    if (pattern != nullptr)
        delete[] pattern;

    pattern = new int[patternLength];

    currentPatternLength = 1;
    cpuIndex = 0;
    userIndex = 0;

    // random number generation from https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<int> dist1(0, 1); // Distribution in range [0, 1]

    for (int i = 0; i < patternLength; i++) {
        pattern[i] = dist1(rng); // Generate random 1 or 0
    }
}

void model::cpuTurn() {

    if (cpuIndex < currentPatternLength) {

        if (pattern[cpuIndex])
            emit pressRedButton();
        else
            emit pressBlueButton();

        cpuIndex++;

        QTimer::singleShot(1500, this, &model::cpuTurn);
    }
    else {
        cpuIndex = 0;

        // random number generation from https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<int> redX(50, 650);
        std::uniform_int_distribution<int> blueX(50, 650);
        std::uniform_int_distribution<int> Y(150, 400);

        int redButtonX, blueButtonX;
        int redButtonY = Y(rng);
        int blueButtonY = Y(rng);

        // ensure that the new locations are spaced out from each other; not overlapping
        do {
            redButtonX = redX(rng);
            blueButtonX = blueX(rng);
        }
        while (abs((redButtonX + 50) - (blueButtonX - 50)) < 250
                 && abs((redButtonX + 50) - (blueButtonX - 50)) > 1000);

        emit moveRedButton(redButtonX, redButtonY);
        emit moveBlueButton(blueButtonX, blueButtonY);

        emit setUserTurn();
    }
}

void model::userTurn(int buttonPressed) {
    if (pattern[userIndex] != buttonPressed) {
        emit userLostGame();
        emit setCPUTurn(currentPatternLength - 1);
        return;
    }

    if (userIndex < currentPatternLength - 1) {
        userIndex++;
    }
    else {
        userIndex = 0;

        if (currentPatternLength < patternLength) {
            currentPatternLength++;
            emit setCPUTurn(currentPatternLength - 1);
            QTimer::singleShot(1000, this, &model::cpuTurn);
        } else {
            emit userWonGame();
            emit setCPUTurn(currentPatternLength - 1);
        }
    }
}

model::~model()
{
    delete[] pattern;
}
