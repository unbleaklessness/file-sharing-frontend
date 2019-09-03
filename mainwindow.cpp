#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600, 400);
    central->addWidget(login);
    setCentralWidget(central);
}

MainWindow::~MainWindow() {}
