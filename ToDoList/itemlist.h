#ifndef ITEMLIST_H
#define ITEMLIST_H

#include <QObject>
#include <QDebug>
#include <QSqlQuery>

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

    QList<Item> items() const;//Returns the list of items

    Q_INVOKABLE QString getName() const;//Returns Name of List
    Q_INVOKABLE void setName(const QString &value);//Sets Name of List

    Q_INVOKABLE QString getDescription() const;//Returns Description of List
    Q_INVOKABLE void setDescription(const QString &value);//Sets Description of List

    int getCurrentListIndex() const;//Returns Database index of the list
    void setCurrentListIndex(int value);//Sets Database index of the list in local variable

    int itemsUnchecked();//Returns number that represents Unchecked items from the list

    bool setItemAt(int index, const Item &item, int listIndex);//Function to set Name and Checked status when they are changed in the model

    void appendItemFromSql(QString name, bool done, int position);//Appends Item to the list, item comes from Database

    Q_INVOKABLE void swapItems(int ind1, int ind2);//Reorders items in the local list

    Q_INVOKABLE void reorderItems();//Reorder items in Database

//Signals for appending and removing items
signals:
    void preItemAppend();
    void postItemAppend();

    void preItemRemoved(int index);
    void postItemRemoved();

public slots:
    void appendItem(QString itemName);//Adds item in the list
    void deleteItem(int modelIndex, int databaseIndex);//Removes item from list and database
private:
    QList<Item> _items;
    QString _listName;
    QString _listDescription;
    int _currentListIndex;
};

#endif // MYMODEL_H
