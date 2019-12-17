#include "mymodellist.h"

MyModelList::MyModelList(QObject *parent) : QObject(parent)
{
}

MyModelList::MyModelList(QString itemName, bool itemDone)
{
}

void MyModelList::insertItem(QString name, bool done)
{
    MyModel *newModel = new MyModel(done,name);
    _list.append(newModel);
}

QString MyModelList::desc()
{
    return _description;
}

void MyModelList::setDesc(QString des)
{
    _description = des;
}

QString MyModelList::listName()
{
    return _listName;
}

void MyModelList::setListName(QString lname)
{
    _listName = lname;
}

QList<QObject *> MyModelList::itemList()
{
    return _list;
}

void MyModelList::setItemList(QList<QObject*> newList)
{
    _list = newList;
}

