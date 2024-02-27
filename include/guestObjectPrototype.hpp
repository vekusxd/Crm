#include <QString>

#pragma once

class GuestObjectPrototype{

public:
    explicit GuestObjectPrototype();
    GuestObjectPrototype(const QString& name, unsigned int count, unsigned int price);

private:
    QString _name;
    unsigned int _count;
    unsigned int _price;
    unsigned int _finalPrice;

public:
    QString getName() const;
    unsigned int getCount() const;
    unsigned int getPrice() const;
    unsigned int getFinalPrice() const;

    void setCount(unsigned int count);
};
