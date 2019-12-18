#include "mymodel.h"

#include "itemlist.h"

MyModel::MyModel(QObject *parent): QAbstractListModel(parent), _list(nullptr){}

int MyModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.

    if(parent.isValid() || !_list)
        return 0;

    return _list->items().size();
}

QVariant MyModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || !_list)
        return QVariant();

    const Item item = _list->items().at(index.row());

    switch (role) {
    case DoneRole:
        return QVariant(item.Done);
    case NameRole:
        return QVariant(item.Name);
    case PositionRole:
        return QVariant(item.position);
    }

    return QVariant();
}

bool MyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(!_list)
        return false;

    Item item = _list->items().at(index.row());
    int listIndex = _list->getCurrentListIndex();

    switch (role) {
    case DoneRole:
    {
        item.Done = value.toBool();
    }
        break;
    case NameRole:
    {
        item.Name = value.toString();
    }
        break;
    }

    if (_list->setItemAt(index.row(),item, listIndex)) {

        emit dataChanged(index, index, QVector<int>() << role);

        return true;
    }
    return false;
}

Qt::ItemFlags MyModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    return Qt::ItemIsEditable;
}

QHash<int, QByteArray> MyModel::roleNames() const
{
    QHash<int, QByteArray> names;

    names[DoneRole] = "done";
    names[NameRole] = "name";
    names[PositionRole] = "position";

    return names;
}

ItemList *MyModel::list() const
{
    return _list;
}
//Sets local list to list that comes from UI
void MyModel::setList(ItemList *list)
{
    beginResetModel();

    if(_list)
        _list->disconnect(this);

    _list=list;

    if(_list)
    {
        connect(_list, &ItemList::preItemAppend, this, [=]() {
            const int index = _list->items().size();
            beginInsertRows(QModelIndex(), index, index);
        });
        connect(_list, &::ItemList::postItemAppend, this, [=]() {
            endInsertRows();
        });

        connect(_list, &ItemList::preItemRemoved, this, [=](int index) {
            beginRemoveRows(QModelIndex(), index, index);
        });
        connect(_list, &ItemList::postItemRemoved, this, [=]() {
            endRemoveRows();
        });
    }
    endResetModel();
}

void MyModel::resetModel()
{
    beginResetModel();
    endResetModel();
}
