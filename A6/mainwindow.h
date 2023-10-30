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

    // button animations user
    void onRedButtonPressed();
    void onRedButtonReleased();
    void onBlueButtonPressed();
    void onBlueButtonReleased();
    void onStartGamePressed();
    void onStartGameReleased();

    // button animation cpu
    void pressRedButton();
    void pressBlueButton();

    // visual/interactive state changes
    void onStartGame();
    void onCpuTurn(int);
    void onUserTurn();
    void onUserWonGame();
    void onUserLostGame();
    void onRedButtonMove(int, int);
    void onBlueButtonMove(int, int);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
