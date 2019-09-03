#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

#include "login.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QStackedWidget *central = new QStackedWidget;
    Login *login = new Login;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

#endif // MAINWINDOW_H
