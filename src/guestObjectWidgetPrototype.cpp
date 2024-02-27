#include "../include/guestObjectWidgetPrototype.hpp"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QHeaderView>

#include "../include/guestObjectDelegate.hpp"

GuestObjectWidgetPrototype::GuestObjectWidgetPrototype(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    model = new GuestObjectModelPrototype;
    view = new QTableView;
    view->setModel(model);
    view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    resize(780, 400);

    mainLayout->addWidget(view);


    GuestObjectDelegate *delegate = new GuestObjectDelegate;
    view->setItemDelegate(delegate);

    QLabel *priceLabelleft = new QLabel("15 товаров");
    priceLabelleft->setAlignment(Qt::AlignLeft);

    QLabel *priceLabelRight = new QLabel("6360 руб.");
    priceLabelRight->setAlignment(Qt::AlignRight);

    QHBoxLayout *priceLayout = new QHBoxLayout;
    priceLayout->addWidget(priceLabelleft);
    priceLayout->addWidget(priceLabelRight);

    mainLayout->addLayout(priceLayout);

    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    payButton = new QPushButton("Очистить");
    clearButton = new QPushButton("Оплатить");

    buttonsLayout->addWidget(clearButton);
    buttonsLayout->addWidget(payButton);

    mainLayout->addLayout(buttonsLayout);
}
