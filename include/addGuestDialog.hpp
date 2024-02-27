#pragma once

#include <QDialog>
#include <QCheckBox>
#include <QLineEdit>
#include <QPushButton>
#include <QSpinBox>


class AddGuestDialog : public QDialog{
    Q_OBJECT

public:
    explicit AddGuestDialog(QWidget *parent = nullptr);

private:
    QCheckBox *haveCardBox;
    QLineEdit *cardIdEdit;
    QLineEdit *tableEdit;
    QSpinBox *countPersonBox;
    QPushButton *addButton;
};
