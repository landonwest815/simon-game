#ifndef MODEL_H
#define MODEL_H

#include <QObject>

class model : public QObject
{
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);
    ~model();

    /**
     * @brief Create's a pattern sequence for the current game.
     *
     * This function is called within the class upon game start.
     * An array of size "patternLength" (private data) is created and filled with 1s and 0s randomly.
     * Upon an additional game start, the array will be deleted and recreated with a unique sequence.
     *
     * This function simply modifies existing data and sends signals to the view.
     * No parameters or return data.
     */
    void createPattern();

    /**
     * @brief Handle's the cpu's turn in the game.
     *
     * This function is called within the class after game start or upon the conclusion of a user turn.
     * The current sequence is played out by the cpu with spaced out button presses.
     * This "space" is condensed as the game goes on as "gameSpeed" is decremented every turn.
     *
     * This function simply modifies existing data and sends signals to the view.
     * No parameters or return data.
     */
    void cpuTurn();

    /**
     * @brief Handle the user's turn in the game.
     *
     * This function is responsible for managing the game logic during the user's turn.
     * It is called within the class after the cpu turn has executed.
     * As the user presses buttons, correct inputs are checked for.
     * As soon as a user presses a wrong button, the game is over.
     * If the user selects all the correct buttons, the cpu is then given a turn.
     *
     * @param buttonPressed An integer parameter representing the user's button press (e.g., 0 for blue, 1 for red).
     */
    void userTurn(int);

    /**
     * @brief Generate a random integer number within the given bounds.
     *
     * This function generates a random integer within the specified range [min, max].
     * I have set these bounds in a way that doesn't allow for the buttons to be too close to the edge
     * of the screen or on top of other UI elements.
     * Within this function is a do while loop that will attempt to generate coordinates until the buttons new position values
     * are far enough away from each other. This fixes any issue of buttons being on top of each other.
     *
     * @param min The minimum value of the desired range.
     * @param max The maximum value of the desired range.
     * @return A random integer within the given bounds.
     */
    int generateRandomNumber(int, int);

public slots:
    /**
     * @brief Start the game.
     *
     * This slot function is called in response to a signal from the user interface, sent
     * when the user clicks the "start" button. It sets up the game for play in the model.
     */
    void startGame();

signals:
    /**
     * @brief Signal emitted from the model when the game has started.
     *
     * This signal is emitted to notify the view that the game has started.
     * The model doesn't need to do anything else.
     * Now that the view has been notified it will take care of the rest.
     */
    void setGameStarted();

    /**
     * @brief Signal emitted to indicate it is the CPU's turn; provides the current score.
     *
     * This signal is emitted to inform the view that it's the CPU's turn and includes
     * the current score as a parameter.
     * The score is sent due to the fact that this signal is sent after a successful User turn.
     * The view will decide what to do with the provided score.
     *
     * @param currentScore The current score of the current game.
     */
    void setCpuTurn(int);

    /**
     * @brief Signal emitted to indicate that it's the user's turn.
     *
     * This signal is emitted to inform the view that it's the user's turn to play in the game.
     * The view will update itself accordingly.
     */
    void setUserTurn();

    /**
     * @brief Signal emitted to indicate that the game has been won by the user.
     *
     * This signal is emitted to notify the view that the game has been won and should update the screen accordingly.
     */
    void setWonGame();

    /**
     * @brief Signal emitted to indicate that the game has been lost by the user.
     *
     * This signal is emitted to notify the view that the game has been lost and should update the screen accordingly.
     */
    void setLostGame();

    /**
     * @brief Signal emitted to display a press of the red button.
     *
     * This signal is emitted to tell the view to display red button being pressed.
     */
    void pressRedButton();

    /**
     * @brief Signal emitted to display a press of the blue button.
     *
     * This signal is emitted to tell the view to display blue button being pressed.
     */
    void pressBlueButton();

    /**
     * @brief Signal emitted to move the red button to random coordinates.
     *
     * This signal is emitted to move the red button to random coordinates within a pre-determined bounded region.
     * It includes the randomly generated x and y coordinates as parameters.
     *
     * @param x The x-coordinate for the new position of the red button.
     * @param y The y-coordinate for the new position of the red button.
     */
    void moveRedButton(int, int);

    /**
     * @brief Signal emitted to move the blue button to random coordinates.
     *
     * This signal is emitted to move the blue button to random coordinates within a pre-determined bounded region.
     * It includes the randomly generated x and y coordinates as parameters.
     *
     * @param x The x-coordinate for the new position of the blue button.
     * @param y The y-coordinate for the new position of the blue button.
     */
    void moveBlueButton(int, int);

private:
    int cpuIndex;            // Keeps track of CPU's progress in the current turn.
    int userIndex;           // Keeps track of the User's progress in the current turn.
    int sequenceLength;       // The total length of the game sequence (default: 100).
    int currentSequenceLength; // The current length of the pattern to follow in the game.
    int currentScore;        // The current score (number of successful user turns).
    int* pattern;            // An array consisting of the currrent game sequence (1s or 0s randomly generated).
    int gameSpeed;           // Controls the speed at which the CPU presses buttons.
    int cpuInitialDelay;    // The delay between the user pressing "Start Game" and the CPU's initial action.
};

#endif // MODEL_H
