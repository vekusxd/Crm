#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPixmap>
#include <QPushButton>
#include <QResizeEvent>

#include "../include/logindialog.hpp"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    authLabel = new QLabel("Авторизация");
    authLabel->setFont(QFont("Times", 18, QFont::Bold));
    authLabel->setAlignment(Qt::AlignHCenter);

    mainLayout->addWidget(authLabel, Qt::AlignHCenter);

    QHBoxLayout *loginLayout = new QHBoxLayout;
    loginLabel = new QLabel("&Логин");
    loginLabel->setAlignment(Qt::AlignRight);
    loginEdit = new QLineEdit;
    loginLabel->setBuddy(loginEdit);
    loginLayout->addWidget(loginLabel, 1);
    loginLayout->addWidget(loginEdit, 5);

    mainLayout->addLayout(loginLayout);

    QHBoxLayout *passwordLayout = new QHBoxLayout;
    passwordLabel = new QLabel("&Пароль");
    passwordLabel->setAlignment(Qt::AlignRight);
    passwordEdit = new QLineEdit;
    passwordLabel->setBuddy(passwordEdit);
    passwordEdit->setEchoMode(QLineEdit::Password);
    passwordLayout->addWidget(passwordLabel, 1);
    passwordLayout->addWidget(passwordEdit, 5);

    mainLayout->addLayout(passwordLayout);

    enterButton = new QPushButton("&Вход");

    mainLayout->addWidget(enterButton);

    connect(enterButton, &QPushButton::clicked, this, &QDialog::accept);

    setFixedSize(390, 150);

}


