#include "../include/guestObjectPrototype.hpp"

GuestObjectPrototype::GuestObjectPrototype()
    : _name{"unknwon"}
    , _count{0}
    , _price{0}
    , _finalPrice{0}
{
}

GuestObjectPrototype::GuestObjectPrototype(const QString &name, unsigned int count, unsigned int price)
    : _name(name)
    , _count{count}
    , _price(price)
    , _finalPrice{_count * _price}
{
}

QString GuestObjectPrototype::getName() const
{
    return _name;
}

unsigned int GuestObjectPrototype::getCount() const
{
    return _count;
}

unsigned int GuestObjectPrototype::getPrice() const
{
    return _price;
}

unsigned int GuestObjectPrototype::getFinalPrice() const
{
    return _finalPrice;
}

void GuestObjectPrototype::setCount(unsigned int count)
{
    _count = count;
}

