#pragma once

#include <QDialog>
#include <QLineEdit>
#include <QLabel>

class LoginDialog : public QDialog{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);

private:
    QLabel *authLabel;
    QLabel *loginLabel;
    QLineEdit *loginEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;

    QPushButton *enterButton;


};
