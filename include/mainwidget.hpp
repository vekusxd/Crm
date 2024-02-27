#pragma once

#include <QGroupBox>
#include <QMainWindow>
#include <QWidget>
#include <QStackedWidget>

#include "guestObjectWidgetPrototype.hpp"
#include "mainButtons.hpp"
#include "secondButtonLayer.hpp"

class MainWidget : public QWidget{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);

private:
    GuestObjectWidgetPrototype *guestObjectPrototype;
    MainButtons *mainbuttons;
    QGroupBox *buttonGroup;
    SecondButtonLayer *secondButtons;
    QPushButton *guestAddButton;
    QStackedWidget *stackedWidget;

public slots:
    void ReturnFrame();

    void changeFrame();

    void onMakeGuest();

    // QWidget interface
};
