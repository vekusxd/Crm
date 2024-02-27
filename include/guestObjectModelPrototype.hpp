#pragma once

#include <QAbstractTableModel>

#include "guestObjectPrototype.hpp"

class GuestObjectModelPrototype : public QAbstractTableModel{
    Q_OBJECT

public:
    explicit GuestObjectModelPrototype(QObject *parent = nullptr);

private:
    QList<GuestObjectPrototype> objects;

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    // QAbstractItemModel interface
public:
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;
};
