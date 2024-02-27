#include "../include/mainwidget.hpp"
#include "../include/mainButtons.hpp"
#include "../include/addGuestDialog.hpp"

#include <QGroupBox>
#include <QButtonGroup>
#include <QHBoxLayout>
#include <QResizeEvent>
#include <QVBoxLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QStackedWidget>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(980, 540);

    QVBoxLayout *mainlayout = new QVBoxLayout(this);
    guestObjectPrototype = new GuestObjectWidgetPrototype;

    QButtonGroup *group = new QButtonGroup(this);

    group->addButton(new QPushButton("first"));

    group->addButton(new QPushButton("second"));
    group->addButton(new QPushButton("third"));

   //buttonGroup->set

    buttonGroup = new QGroupBox;

    QHBoxLayout *anotherLayout = new QHBoxLayout;

    QHBoxLayout *forButton = new QHBoxLayout;

    for(size_t i = 0; i <= 10; ++i){
        QPushButton *temp = new QPushButton("гость");
        temp->resize(60, 60);
        temp->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        temp->setCheckable(true);
        group->addButton(temp);
        forButton->addWidget(temp);
    }


    group->setExclusive(true);

    //buttonGroup->setLayout(group);
    buttonGroup->setLayout(forButton);

    guestAddButton = new QPushButton("+");
    guestAddButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    anotherLayout->addWidget(guestAddButton, 1);
    anotherLayout->addWidget(buttonGroup, 10);

    mainlayout->addLayout(anotherLayout);


    QHBoxLayout *horizontal = new QHBoxLayout;

    stackedWidget = new QStackedWidget;

    secondButtons = new SecondButtonLayer;
    mainbuttons = new MainButtons;

    stackedWidget->addWidget(mainbuttons);
    stackedWidget->addWidget(secondButtons);

    horizontal->addWidget(guestObjectPrototype);
    horizontal->addWidget(stackedWidget);

    mainlayout->addLayout(horizontal);

    connect(secondButtons->getGetRerurnButton(), &QPushButton::clicked, this, &MainWidget::ReturnFrame);
    connect(mainbuttons->getCategoryButton(), &QPushButton::clicked, this, &MainWidget::changeFrame);
    connect(guestAddButton, &QPushButton::clicked, this, &MainWidget::onMakeGuest);
}

void MainWidget::ReturnFrame()
{
    stackedWidget->setCurrentIndex(0);
}

void MainWidget::changeFrame()
{
    stackedWidget->setCurrentIndex(1);
}

void MainWidget::onMakeGuest()
{
    AddGuestDialog dialog;
    dialog.exec();
}


