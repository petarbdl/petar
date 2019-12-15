#include "itemlist.h"

ItemList::ItemList(QObject *parent): QObject(parent){}

QList<Item> ItemList::items() const //Return list of items
{
    return _items;
}

int ItemList::getCurrentListIndex() const //Returns Database index of the list
{
    return _currentListIndex;
}

void ItemList::setCurrentListIndex(int value)
{
    _currentListIndex = value;
}

QString ItemList::getDescription() const//Returns list description
{
    return _listDescription;
}

void ItemList::setDescription(const QString &value)
{
    _listDescription = value;
}

QString ItemList::getName() const //Returns List Name
{
    return _listName;
}

void ItemList::setName(const QString &value)
{
    _listName = value;
}

int ItemList::itemsUnchecked()//Return quantity of unchecked items, goes to MyMainListModel class, function itemsLeft()
{
    if(_items.isEmpty())
        return -1;
    int tmpNumber = 0;
    int size = _items.size();
    for(int i=0;i<size;i++)
    {
        if(_items.at(i).Done == false)
        {
            tmpNumber++;
        }
    }
    return tmpNumber;
}

//With swapItemsAt function, items are reordered according to user input
void ItemList::swapItems(int ind1, int ind2)
{
    _items.swapItemsAt(ind1,ind2);
}
//This function reorders items in the database, first it deletes all items from the list then it adds repositioned items back in the database
void ItemList::reorderItems()
{
    QSqlQuery query;
    int listIndex = getCurrentListIndex();
    query.prepare("DELETE FROM ItemTable WHERE ItemId = :index");
    query.bindValue(":index", listIndex);
    query.exec();
    for(int i=0;i<_items.size();i++)
    {
        query.prepare("INSERT INTO ItemTable (ItemId, ItemName, ItemDone, ItemPosition) VALUES (:index, :itemName, :itemDone, :itemPosition)");
        query.bindValue(":index", listIndex);
        query.bindValue(":itemName", _items.at(i).Name);
        query.bindValue(":itemDone", _items.at(i).Done);
        query.bindValue(":itemPosition", _items.at(i).position);
        query.exec();
    }
}

//This function is called from virtual function(setData) from class MyModel
bool ItemList::setItemAt(int index, const Item &item, int listIndex)
{
    if(index < 0 || index>_items.size())
        return false;

    const Item &oldItem = _items.at(index);

    if(item.Done == oldItem.Done && item.Name == oldItem.Name && item.position == oldItem.position)//Check if new values are different from old ones
        return false;

    _items[index] = item;//Updates and Sets new item values in the list

    //Update values of the item in the Database
    QSqlQuery query;
    query.prepare("UPDATE ItemTable SET ItemDone = :value WHERE ItemId = :listIndex AND ItemPosition = :itemIndex" );
    query.bindValue(":value", item.Done);
    query.bindValue(":itemIndex", index);
    query.bindValue(":listIndex", listIndex);
    query.exec();

    query.prepare("UPDATE ItemTable SET ItemName = :value WHERE ItemId = :listIndex AND ItemPosition = :itemIndex" );
    query.bindValue(":value", item.Name);
    query.bindValue(":itemIndex", index);
    query.bindValue(":listIndex", listIndex);
    query.exec();

    return true;
}

void ItemList::appendItemFromSql(QString name, bool done,int position)//This function is used at the beginning, it sets items from database in the list
{
    Item *item = new Item();
    item->Done = done;
    item->Name = name;
    item->position = position;
    _items.append(*item);
}

void ItemList::appendItem(QString itemName)//This function is called when user adds new item from UI
{
    emit preItemAppend();
    //Insert new Item in List
    Item *item = new Item();
    item->Done = false;
    item->Name = itemName;
    item->position = _items.size();
    _items.append(*item);

    int id = getCurrentListIndex();

    //Insert new item in Database
    QSqlQuery query;
    query.prepare("INSERT INTO ItemTable (ItemId, ItemName, ItemDone, ItemPosition) VALUES(:itemId, :itemName, '0', :itemPosition)");
    query.bindValue(":itemId",id);
    query.bindValue(":itemName",itemName);
    query.bindValue(":itemPosition", item->position);
    query.exec();

    emit postItemAppend();
}
//this fuction is called from UI to delete item in list and database
void ItemList::deleteItem(int modelIndex,int databaseIndex)
{
    emit preItemRemoved(modelIndex);

    int tmp = getCurrentListIndex();
    QSqlQuery query;
    query.prepare("DELETE FROM ItemTable WHERE ItemId = :index AND ItemPosition = :itemPosition");
    query.bindValue(":index", tmp);
    query.bindValue(":itemPosition", databaseIndex);
    query.exec();

    _items.removeAt(modelIndex);

    emit postItemRemoved();
}
