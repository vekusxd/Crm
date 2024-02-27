#include "../include/secondButtonLayer.hpp"
#include <QGridLayout>


SecondButtonLayer::SecondButtonLayer(QWidget *parent)
{
    QGridLayout *layout = new QGridLayout(this);

    returnButton = new QPushButton("Вернуться");
    returnButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(returnButton, 0, 0);

    for(size_t i = 0; i < 3; ++i){
        for(size_t j = 0; j < 3; ++j){
            if(i == 0 && j == 0){
                continue;
            }
            QPushButton *temp = new QPushButton("Заглушка");
            temp->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            layout->addWidget(temp, i, j);
        }
    }
}

QPushButton *SecondButtonLayer::getGetRerurnButton() const
{
    return returnButton;
}
