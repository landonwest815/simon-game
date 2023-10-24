#include "mainwindow.h"

#include <QApplication>
#include "model.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    model model;
    MainWindow w(model);
    w.show();
    return a.exec();
}
