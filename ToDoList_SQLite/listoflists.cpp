#include "listoflists.h"

ListOfLists::ListOfLists(QObject *parent) : QObject(parent)
{
    _list = new QList<MyModelList*>();
    MyModelList *defaultItem = new MyModelList();
    defaultItem->setListName("Default List");
    _list->append(defaultItem);
}

QList<MyModelList*>* ListOfLists::mainList()
{
    return _list;
}

void ListOfLists::setMainList(QList<MyModelList*>* newList)
{
    _list = newList;
}

QString ListOfLists::getListName(int index)
{
    qDebug()<< index;
    return _list->at(index)->listName();
}

QList<QObject *> ListOfLists::getList(int index)
{
    return  _list->at(index)->itemList();
}

void ListOfLists::setNewList(QString newItemString)
{
    MyModelList *newItem = new MyModelList();
    newItem->setListName(newItemString);
    _list->append(newItem);
}
