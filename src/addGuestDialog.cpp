#include "../include/addGuestDialog.hpp"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QLabel>

AddGuestDialog::AddGuestDialog(QWidget *parent)
    : QDialog(parent)
{

    QVBoxLayout *mainlayout = new QVBoxLayout(this);



    QFormLayout *layout = new QFormLayout;

    QLabel *addLabel = new QLabel("Добавить гостя");
    addLabel->setAlignment(Qt::AlignCenter);
    QFont font("Arial", 12, QFont::Bold);
    addLabel->setFont(font);
    mainlayout->addWidget(addLabel);

    haveCardBox = new QCheckBox;
    layout->addRow("Карта лояльности:", haveCardBox);

    cardIdEdit = new QLineEdit;
    layout->addRow("ID-карты клиента:", cardIdEdit);

    tableEdit = new QLineEdit;
    layout->addRow("Номер стола:", tableEdit);

    countPersonBox = new QSpinBox;
    countPersonBox->setRange(1, 20);

    layout->addRow("Количество персон:", countPersonBox);

    mainlayout->addLayout(layout);

    addButton = new QPushButton("Добавить");

    mainlayout->addWidget(addButton);

    connect(addButton, &QPushButton::clicked, this, &AddGuestDialog::accepted);
}
