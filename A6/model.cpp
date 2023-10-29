#include "model.h"
#include <random>
#include <iostream>
#include <QTimer>

model::model(QObject *parent) : QObject(parent) {
    gameStarted = false;
    patternLength = 3;
    currentPatternLength = 1;
    cpuIndex = 0;
    userIndex = 0;
    pattern = nullptr;
}

void model::startGame() {
    gameStarted = true;
    emit updateGameStarted();
    createPattern();

    emit setCPUTurn();
    QTimer::singleShot(1000, this, &model::cpuTurn);
}

void model::patternLengthChanged(int length) {
    patternLength = length;
    QString patternLengthString = QString::number(length);
    emit updateScore(patternLengthString);
}

void model::createPattern() {
    if (pattern != nullptr)
        delete[] pattern;

    pattern = new int[patternLength];

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
        emit setUserTurn();
    }
}

void model::userTurn(int buttonPressed) {
    if (pattern[userIndex] != buttonPressed) {
        emit userLostGame();
    }

    if (userIndex < currentPatternLength - 1) {
        userIndex++;
    }
    else {
        userIndex = 0;

        if (currentPatternLength < patternLength - 1) {
            currentPatternLength++;
        } else {
            emit userWonGame();
        }

        emit setCPUTurn();
        QTimer::singleShot(1000, this, &model::cpuTurn);
    }
}

model::~model()
{
    delete[] pattern;
}
