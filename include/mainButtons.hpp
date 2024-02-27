#pragma once

#include <QPushButton>
#include <QWidget>

class MainButtons : public QWidget{
    Q_OBJECT

public:
    explicit MainButtons(QWidget *parent = nullptr);

private:
    QPushButton *categoryButton;


public:
    QPushButton* getCategoryButton() const;
};
