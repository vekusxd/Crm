#include "../include/mainButtons.hpp"

#include <QGridLayout>
#include <QSizePolicy>

MainButtons::MainButtons(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *layout = new QGridLayout(this);

   // setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    categoryButton = new QPushButton("Категории");
    categoryButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    layout->addWidget(categoryButton, 0, 0);

    for(size_t i = 0; i < 3; ++i){
        for(size_t j = 0; j < 3; ++j){
            if(i == 0 && j == 0){
                continue;
            }
            else{
                QPushButton *temp = new QPushButton("Пусто");
                temp->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                layout->addWidget(temp , i, j);
            }
        }
    }
}

QPushButton *MainButtons::getCategoryButton() const
{
    return categoryButton;
}
