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
    void patternLengthChanged(int patternLength);

signals:
    void updateScore(QString);
    void updateGameStarted();
    void pressRedButton();
    void pressBlueButton();
    void setCPUTurn();
    void setUserTurn();
    void userWonGame();
    void userLostGame();

private:
    bool gameStarted;
    int patternLength;
    int cpuIndex;
    int userIndex;
    int currentPatternLength;
    int* pattern;
};

#endif // MODEL_H
