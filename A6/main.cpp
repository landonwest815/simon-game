/**
 * This project was created by Landon West.
 * No other persons were involved in the development.
 *
 * GitHub Username: landonwest815
 *
 * For the creative element I decided to have the button locations move after each turn.
 * This helps give more of a challenge to the user as they have to really pay attention
 * to the colors and not just the location (left and right). This is randomly generated.
 **/

#include <QApplication>
#include "model.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    model model;
    MainWindow w(model);
    w.show();
    return a.exec();
}
