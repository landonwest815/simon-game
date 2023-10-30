#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "model.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(model& model, QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    // button animations for user
    void onRedButtonPressed();
    void onRedButtonReleased();

    void onBlueButtonPressed();
    void onBlueButtonReleased();

    void onStartGamePressed();
    void onStartGameReleased();

    // button animation for cpu (reuse user animations within cpp)
    void pressRedButton();
    void pressBlueButton();

    // state changes from model signals
    void onStartGame();
    void onCpuTurn(int); //takes in the current score since this indicates a successful user turn
    void onUserTurn();
    void onUserWonGame();
    void onUserLostGame();
    void onRedButtonMove(int, int); // takes in x and y coordinates; moves elements accordingly
    void onBlueButtonMove(int, int); // same as above

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
