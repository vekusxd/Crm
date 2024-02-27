#pragma once

#include <QPushButton>
#include <QTableView>
#include <QWidget>

#include "guestObjectModelPrototype.hpp"



class GuestObjectWidgetPrototype : public QWidget{
    Q_OBJECT

public:
    explicit GuestObjectWidgetPrototype(QWidget *parent = nullptr);

private:
    GuestObjectModelPrototype *model;
    QTableView *view;

    QPushButton *payButton;
    QPushButton *clearButton;
};

