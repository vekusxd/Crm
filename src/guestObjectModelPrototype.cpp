#include "../include/guestObjectModelPrototype.hpp"

#include <QFont>


GuestObjectModelPrototype::GuestObjectModelPrototype(QObject *parent)
    : QAbstractTableModel(parent)
{
    objects.push_back(GuestObjectPrototype());
    objects.push_back(GuestObjectPrototype());
    objects.push_back(GuestObjectPrototype());
}

int GuestObjectModelPrototype::rowCount(const QModelIndex &parent) const
{
    if(parent.isValid()){
        return 0;
    }
    return objects.size();
}

int GuestObjectModelPrototype::columnCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant GuestObjectModelPrototype::data(const QModelIndex &index, int role) const
{
    if(!index.isValid()){
        return QVariant();
    }

    int indexRow = index.row();
    switch(role){
    case Qt::DisplayRole:
        switch(index.column()){
        case 0:
            return objects.at(indexRow).getName();
        case 1:
            return objects.at(indexRow).getCount();
        case 2:
            return objects.at(indexRow).getPrice();
        case 3:
            return objects.at(indexRow).getName();
        }
    }

    return QVariant();
}

QVariant GuestObjectModelPrototype::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role == Qt::DisplayRole && orientation == Qt::Horizontal){
        switch(section){
        case 0:
            return "Наименование";
        case 1:
            return "Количество";
        case 2:
            return "Цена";
        case 3:
            return "Итого";
        }
    }

    if(role == Qt::FontRole && orientation == Qt::Horizontal){
        QFont font("Arial", 10, QFont::Bold);
        return font;
    }

    return QVariant();
}

bool GuestObjectModelPrototype::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(role == Qt::EditRole && index.column() == 1){
        if(!checkIndex(index)){
            return false;
        }
        objects[index.row()].setCount(value.toUInt());
        emit dataChanged(index, index);
        return true;
    }
    return false;
}

Qt::ItemFlags GuestObjectModelPrototype::flags(const QModelIndex &index) const
{
    if(index.column() == 1){
        return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
    }
    return QAbstractTableModel::flags(index);
}
