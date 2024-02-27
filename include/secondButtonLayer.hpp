#pragma once

#include <QPushButton>
#include <QWidget>

class SecondButtonLayer : public QWidget{
    Q_OBJECT

public:
    explicit SecondButtonLayer(QWidget *parent = nullptr);

private:
    QPushButton *returnButton;

public:
    QPushButton *getGetRerurnButton() const;

};
