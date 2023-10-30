#ifndef MODEL_H
#define MODEL_H

#include <QObject>

class model : public QObject
{
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);
    ~model();

    void createPattern();
    void cpuTurn();
    void userTurn(int);

public slots:
    void startGame();

signals:
    void updateGameStarted();
    void pressRedButton();
    void pressBlueButton();
    void setCPUTurn(int);
    void setUserTurn();
    void userWonGame();
    void userLostGame();
    void invertButtons();
    void moveRedButton(int, int);
    void moveBlueButton(int, int);

private:
    int patternLength;
    int cpuIndex;
    int userIndex;
    int currentPatternLength;
    int* pattern;
};

#endif // MODEL_H
