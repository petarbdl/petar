#include "mymainlistmodel.h"

MyMainListModel::MyMainListModel(QObject *parent)
    : QAbstractListModel(parent)
{
    //Connects to Database
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("PETAR-PC\\SQLEXPRESS");
    db.setDatabaseName("mydsn64");
    if(db.open())
    {
        //Reads data from Database
        QSqlQuery query("SELECT ListId, ListName, Description FROM ListTable");
        while(query.next())
        {
            int index = query.value("ListId").toInt();

            ItemList *itemlist = new ItemList();

            itemlist->setName(query.value("ListName").toString());
            itemlist->setDescription(query.value("Description").toString());
            itemlist->setCurrentListIndex(index);

            QSqlQuery query2;
            query2.prepare("SELECT ItemName,ItemDone,ItemPosition FROM ItemTable WHERE ItemID = :index");
            query2.bindValue(":index", index);
            query2.exec();

            while(query2.next())
            {
                //Set incoming data in item
                itemlist->appendItemFromSql(query2.value("ItemName").toString(),query2.value("ItemDone").toBool(),query2.value("ItemPosition").toInt());
            }
            //Append that item to list
            _mainList.append(itemlist);
        }
    }
}

int MyMainListModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.
    if (parent.isValid() || _mainList.isEmpty())
        return 0;

    return _mainList.size();
}

QVariant MyMainListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() && _mainList.isEmpty())
        return QVariant();

    const ItemList *item = _mainList.at(index.row());

    switch (role) {
    case NameRole:
        return QVariant(item->getName());
    case CompletedRole:
        return QVariant(itemsLeft(index.row()));
    case CurrentIndexRole:
        return QVariant(item->getCurrentListIndex());
    }

    return QVariant();
}

bool MyMainListModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(_mainList.isEmpty())
        return false;
    ItemList *item = _mainList.at(index.row());
    switch (role) {
    case NameRole:
        item->setName(value.toString());
        break;
    }
    if (data(index, role) != value) {
        emit dataChanged(index, index, QVector<int>() << role);
        return true;
    }
    return false;
}

Qt::ItemFlags MyMainListModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    return Qt::ItemIsEditable;
}

QHash<int, QByteArray> MyMainListModel::roleNames() const
{
    QHash<int,QByteArray> roles;

    roles[NameRole] = "name";
    roles[CompletedRole] = "completed";
    roles[CurrentIndexRole] = "cIndex";

    return roles;
}

ItemList* MyMainListModel::getItems(int index)
{
    return _mainList.at(index);
}

int MyMainListModel::itemsLeft(int index) const
{
    if(_mainList.isEmpty())
        return -1;
    return _mainList.at(index)->itemsUnchecked();
}

void MyMainListModel::deleteList(int index)
{
    int tmp = _mainList.at(index)->getCurrentListIndex();
    //Delete list from database
    QSqlQuery query;
    query.prepare("DELETE FROM ListTable WHERE ListId = :index");
    query.bindValue(":index", tmp);
    query.exec();
    //Delete List from local list
    _mainList.removeAt(index);
    //Delete list items from database
    query.prepare("DELETE FROM ItemTable WHERE ItemId = :index");
    query.bindValue(":index", tmp);
    query.exec();
    //Reset model
    beginResetModel();
    endResetModel();
}

void MyMainListModel::setListName(QString name, int index)
{
    int listIndex = _mainList.at(index)->getCurrentListIndex();
    //Update List name in Database
    QSqlQuery query;
    query.prepare("UPDATE ListTable SET ListName = :value WHERE ListId = :listIndex" );
    query.bindValue(":value", name);
    query.bindValue(":listIndex", listIndex);
    query.exec();
}

void MyMainListModel::setListDescription(QString description, int index)
{
    int listIndex = _mainList.at(index)->getCurrentListIndex();
    //Update List Description in database
    QSqlQuery query;
    query.prepare("UPDATE ListTable SET Description = :value WHERE ListId = :listIndex" );
    query.bindValue(":value", description);
    query.bindValue(":listIndex", listIndex);
    query.exec();
}

void MyMainListModel::appendList(QString newList)
{
    ItemList *newItem = new ItemList();
    int size = _mainList.size();
    int tmp;
    if(_mainList.isEmpty())
    {
        tmp=1;
    }
    else
    {
        tmp = _mainList.at(size-1)->getCurrentListIndex()+1;
    }
    newItem->setName(newList);
    newItem->setCurrentListIndex(tmp);
    //Add new list in local list
    _mainList.append(newItem);
    //Add new list in Database
    QSqlQuery query;
    query.prepare("INSERT INTO ListTable (ListId, ListName) VALUES(:listIndex, :newList)");
    query.bindValue(":listIndex", tmp);
    query.bindValue(":newList", newList);
    query.exec();
    //Reset model
    beginResetModel();
    endResetModel();
}
