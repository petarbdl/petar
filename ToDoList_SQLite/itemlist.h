#ifndef ITEMLIST_H
#define ITEMLIST_H

#include <QObject>
#include <QDebug>
#include <QSqlQuery>

#include "dbconnection.h"

//Structure to keep info about item and then append it to the list
struct Item {
    bool Done;
    QString Name;
    int position;
};

class ItemList: public QObject
{
    Q_OBJECT
public:
    ItemList(QObject *parent = nullptr );
    //Returns the list of items
    QList<Item> items() const;
    //Returns Name of List and Sets Name of List
    Q_INVOKABLE QString getName() const;
    Q_INVOKABLE void setName(const QString &value);
    //Returns Description of List and Sets Description of List
    Q_INVOKABLE QString getDescription() const;
    Q_INVOKABLE void setDescription(const QString &value);
    //Returns Database index of the list and it Sets Database index of the list in local variable
    int getCurrentListIndex() const;
    void setCurrentListIndex(int value);
    //Returns number that represents Unchecked items from the list
    int itemsUnchecked();
    //Function to set Name and Checked status when they are changed in the model
    bool setItemAt(int index, const Item &item, int listIndex);
    //Appends Item to the list, item comes from Database
    void appendItemFromSql(QString name, bool done, int position);
    //Reorders items in the local list
    Q_INVOKABLE void swapItems(int ind1, int ind2);
    //Reorder items in Database
    Q_INVOKABLE void reorderItems();

    //Signals for appending and removing items
signals:
    void preItemAppend();
    void postItemAppend();

    void preItemRemoved(int index);
    void postItemRemoved();

public slots:
    //Adds item in the list
    void appendItem(QString itemName);
    //Removes item from list and database
    void deleteItem(int modelIndex, int position);
private:
    QList<Item> _items;//List of Object 'Item'
    QString _listName;//String to keep List name
    QString _listDescription;//String to keep List description
    int _currentListIndex;//Integer to keep position where _items is kept in _mainList
    DBConnection _database;
};

#endif // MYMODEL_H
