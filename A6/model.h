#ifndef MODEL_H
#define MODEL_H

#include <QObject>

class model : public QObject
{
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);
    ~model();

    void createPattern();   // creates a pattern of 1s and 0s in an array of length 100
    void cpuTurn();         // game logic for the cpu turn
    void userTurn(int);     // game logic for the user turn
    int generateRandomNumber(int, int);    // generates a random number within the provided bounds

public slots:
    void startGame();       // sets up the game upon signal from the ui (start button)

signals:
    void updateGameStarted();
    void pressRedButton();
    void pressBlueButton();
    void setCPUTurn(int);   // sends with the current score since this signal is only triggered after a successful user turn
    void setUserTurn();
    void userWonGame();
    void userLostGame();
    void invertButtons();
    void moveRedButton(int, int);   // sends with x and y coordinates randomly generated within a bounded region
    void moveBlueButton(int, int);

private:
    int cpuIndex;   // keeps track of how many moves to make each turn
    int userIndex;  // same function as cpuIndex
    int patternLength;  // allows us to change this value; set to 100 in cpp
    int currentPatternLength;   // after 4 turns, this would be 4; let's cpu know how many buttons to press, and how many presses to accept from user
    int currentScore;   // displayed on UI if it is the new highest
    int* pattern;   // length of 100; randomly generated with 1s or 0s
    int gameSpeed;  // sets the speed at which the cpu presses buttons
    int initialGameDelay;   // the time inbetween when the user presses start game and the cpu starts pressing buttons
};

#endif // MODEL_H
