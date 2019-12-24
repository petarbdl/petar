#include "mymainlistmodel.h"

MyMainListModel::MyMainListModel(QObject *parent)
    : QAbstractListModel(parent)
{
    _database = new DBConnection();
    //Connects to Database
    if(_database->createConnection())
    {
        //Reads data from Database
        readDataFromDB();
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
//This function should be set in DBConnection class, I choosed this solution because it uses one QList and append directly to the list thats used in UI
void MyMainListModel::readDataFromDB()
{
    //Reads data from Database
    QSqlQuery query;
    query.exec("SELECT ListId, ListName, Description FROM ListTable");
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
    int listIndex = _mainList.at(index)->getCurrentListIndex();
    //Delete list from database and Delete list items from database
    _database->deleteListInDB(listIndex);
    //Delete List from local list
    _mainList.removeAt(index);
    //Reset model
    beginResetModel();
    endResetModel();
}

void MyMainListModel::setListName(QString name, int index)
{
    int listIndex = _mainList.at(index)->getCurrentListIndex();
    //Update List name in Database
    _mainList.at(index)->setName(name);
    _database->setListNameInDB(name, listIndex);
}

void MyMainListModel::setListDescription(QString description, int index)
{
    int listIndex = _mainList.at(index)->getCurrentListIndex();
    _mainList.at(index)->setDescription(description);
    //Update List Description in database
    _database->setListDescriptionInDB(description,listIndex);
}

void MyMainListModel::appendList(QString newList)
{
    ItemList *newItem = new ItemList();
    int size = _mainList.size();
    int listIndex;
    if(_mainList.isEmpty())
    {
        listIndex=1;
    }
    else
    {
        listIndex = _mainList.at(size-1)->getCurrentListIndex()+1;
    }
    newItem->setName(newList);
    newItem->setCurrentListIndex(listIndex);
    //Add new list in local list
    _mainList.append(newItem);
    //Add new list in Database
    _database->appendListInListTable(newList, listIndex);
    //Reset model
    beginResetModel();
    endResetModel();
}
