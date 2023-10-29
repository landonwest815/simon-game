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
    void onCpuTurn();
    void onUserTurn();
    void onUserWonGame();
    void onUserLostGame();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
