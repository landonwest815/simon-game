#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "model.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The main user interface (UI) window for the game.
 *
 * The `MainWindow` class represents the main user interface window for the game application.
 * It handles UI elements, animations, and interactions with the `model` class.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructs the main UI window.
     *
     * @param model - A reference to the game model.
     * @param parent - The parent widget.
     */
    MainWindow(model& model, QWidget *parent = nullptr);

    /**
     * @brief Destructor for the main UI window.
     */
    ~MainWindow();

public slots:

    // BUTTON PRESS ANIMATION HANDLING (USER)

    /**
     * @brief Handle the user's interaction when the red button is pressed.
     *
     * This slot is simply used for button press animation. The model is not contacted.
     */
    void onRedButtonPressed();

    /**
     * @brief Handle the user's interaction when the red button is released (after a press).
     *
     * This slot is simply used for button press animation. The model is not contacted.
     */
    void onRedButtonReleased();

    /**
     * @brief Handle the user's interaction when the blue button is pressed.
     *
     * This slot is simply used for button press animation. The model is not contacted.
     */
    void onBlueButtonPressed();

    /**
     * @brief Handle the user's interaction when the blue button is released (after a press).
     *
     * This slot is simply used for button press animation. The model is not contacted.
     */
    void onBlueButtonReleased();

    /**
     * @brief Handle the user's interaction when the start button is pressed.
     *
     * This slot is simply used for button press animation. The model is not contacted.
     */
    void onStartGamePressed();

    /**
     * @brief Handle the user's interaction when the start button is released (after a press).
     *
     * This slot is simply used for button press animation. The model is not contacted.
     */
    void onStartGameReleased();


    // BUTTON PRESS ANIMATIONS HANDLING (CPU)

    /**
     * @brief Display a press of the red button in response to CPU actions.
     *
     * This slot is activated from a model signal. This slot simply calls the same slots the User button animation uses above.
     */
    void pressRedButton();

    /**
     * @brief Display a press of the blue button in response to CPU actions.
     *
     * This slot is activated from a model signal. This slot simply calls the same slots the User button animation uses above.
     */
    void pressBlueButton();


    // STATES

    /**
     * @brief Handle the start of the game in response to a model signal.
     *
     * This will change the visibility of certain UI elements and
     * enable buttons to throw the player into gameplay.
     */
    void onStartGame();

    /**
     * @brief Handle the CPU's turn in the game.
     *
     * This will disable buttons to avoid unwanted user inputs.
     * This will also update the displayed high score if applicable.
     *
     * @param score - the current score.
     */
    void onCpuTurn(int); //takes in the current score since this indicates a successful user turn

    /**
     * @brief Handle the user's turn in the game.
     *
     * This will re-enable both buttons for user input.
     */
    void onUserTurn();

    /**
     * @brief Handle the user's victory in the game.
     *
     * Will display a message and prompt for the start of a new game.
     * All other UI is disabled.
     */
    void onUserWonGame();

    /**
     * @brief Handle the user's loss in the game.
     *
     * Will display a message and prompt for the start of a new game.
     * All other UI is disabled.
     */
    void onUserLostGame();


    void onRedButtonMove(int, int); // takes in x and y coordinates; moves elements accordingly
    void onBlueButtonMove(int, int); // same as above

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
