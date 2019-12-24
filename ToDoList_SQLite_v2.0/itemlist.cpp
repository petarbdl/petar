#include "itemlist.h"

ItemList::ItemList(QObject *parent): QObject(parent){}
//Return list of items
QList<Item> ItemList::items() const
{
    return _items;
}
//Returns Database index of the list
int ItemList::getCurrentListIndex() const
{
    return _currentListIndex;
}

void ItemList::setCurrentListIndex(int value)
{
    _currentListIndex = value;
}
//Returns list description
QString ItemList::getDescription() const
{
    return _listDescription;
}

void ItemList::setDescription(const QString &value)
{
    _listDescription = value;
}
//Returns List Name
QString ItemList::getName() const
{
    return _listName;
}

void ItemList::setName(const QString &value)
{
    _listName = value;
}
//Return quantity of unchecked items, goes to MyMainListModel class, function itemsLeft()
int ItemList::itemsUnchecked() const
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

//With swapItemsAt function, items are reordered according to user input, its called by LPOrderComponent.qml
void ItemList::swapItems(int index1, int index2)
{
    _items.swapItemsAt(index1,index2);
}
//Deletes all items in ItemTable and adds the items again with the new order, its called by ListPageHeader.qml
void ItemList::reorderItemsInDB()
{
    int listIndex = getCurrentListIndex();

    _database.deleteItemsInDB(listIndex);

    for(int i=0;i<_items.size();i++)
    {
        _database.reorderItems(listIndex,_items.at(i).Done,_items.at(i).Name, _items.at(i).position);
    }
}
//This function is called from virtual function(setData) in the MyModel class
bool ItemList::setItemAt(int index, const Item &item)
{
    if(index < 0 || index>_items.size())
        return false;

    const int listIndex = getCurrentListIndex();

    const Item &oldItem = _items.at(index);

    if(item.Done == oldItem.Done && item.Name == oldItem.Name && item.position == oldItem.position)//Check if new values are different from old ones
        return false;

    _items[index] = item;//Updates and Sets new item values in the list

    _database.updateItemInDB(listIndex, item.Name, item.Done, item.position);

    return true;
}
//This function is used at the beginning, it sets items from database in the list, its called by readDataFromDB function in MyMainListModel class
void ItemList::appendItemFromSql(QString name, bool done,int position)
{
    Item *item = new Item();

    item->Done = done;
    item->Name = name;
    item->position = position;

    _items.append(*item);
}
//This function is called when user adds new item from UI
void ItemList::appendItem(QString itemName)
{
    emit preItemAppend();
    //Insert new Item in List
    //If the list is empty, item position is 0
    int newPosition = 1;
    if(_items.isEmpty())
        newPosition = 0;
    else
        newPosition = (_items.at(_items.count()-1).position+1);

    Item *item = new Item();

    item->Done = false;
    item->Name = itemName;
    item->position = newPosition;

    _items.append(*item);

    //Insert new item in Database
    int listIndex = getCurrentListIndex();
    _database.appendItemInItemTable(listIndex,itemName,newPosition);

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
