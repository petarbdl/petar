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
    int listIndex = getCurrentListIndex();
    _database.deleteItemsInDB(listIndex);
    if(!_items.isEmpty())
    {
        for(int i=0;i<_items.size();i++)
        {
            _database.reorderListInDB(listIndex,_items.at(i).Name, _items.at(i).Done, _items.at(i).position);
        }
    }
    else
        qDebug()<<"Item List is empty !!!";
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
    _database.updateItemInDB(listIndex, _items.at(index).Name, _items.at(index).Done, index);

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

    int listIndex = getCurrentListIndex();

    //Insert new item in Database
    _database.appendItemInItemTable(listIndex,itemName,item->position);

    emit postItemAppend();
}
//this fuction is called from UI to delete item in list and database
void ItemList::deleteItem(int modelIndex,int position)
{
    emit preItemRemoved(modelIndex);

    int listIndex = getCurrentListIndex();

    _items.removeAt(modelIndex);
    //Removing item from Database
    _database.deleteItemInDB(listIndex,position);

    emit postItemRemoved();
}
