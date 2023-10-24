#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(model& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connect lines heres
}

MainWindow::~MainWindow()
{
    delete ui;
}
