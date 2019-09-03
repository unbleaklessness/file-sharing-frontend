#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLineEdit>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

class Login : public QWidget
{
    Q_OBJECT

private:
    QFormLayout *form = new QFormLayout;
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QHBoxLayout *buttonsLayout = new QHBoxLayout;

    QLabel *usernameLabel = new QLabel("Username:");
    QLineEdit *username = new QLineEdit;

    QLabel *passwordLabel = new QLabel("Password:");
    QLineEdit *password = new QLineEdit;

    QPushButton *loginButton = new QPushButton("Login");
    QPushButton *exitButton = new QPushButton("Exit");

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
};

#endif // LOGIN_H
