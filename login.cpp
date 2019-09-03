#include "login.h"

Login::Login(QWidget *parent) : QWidget(parent)
{
    form->setFormAlignment(Qt::AlignCenter);

    form->addRow(usernameLabel, username);
    form->addRow(passwordLabel, password);
    mainLayout->addLayout(form);

    buttonsLayout->addWidget(loginButton);
    buttonsLayout->addWidget(exitButton);
    mainLayout->addLayout(buttonsLayout);

    setLayout(mainLayout);
}

Login::~Login() {}
