#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QtSql>

class DBConnection
{
public:
    DBConnection();
    //This function is called when user is finished Reordering, it deletes all items of the given list
    void deleteItemsInDB(int &index);
    //Updates items
    void updateItemInDB(int listIndex, const QString name, const bool done, const int position);
    //Appends new item in Item Table
    void appendItemInItemTable(int &listIndex, const QString name, const int position);
    //Deletes item in Item Table
    void deleteItemInDB(int &listIndex, const int position);
    //Deletes list in List Table
    void deleteListInDB(int &listIndex);
    //Sets List name in Database
    void setListNameInDB(QString &name, int &listIndex);
    //Sets List description in Database
    void setListDescriptionInDB(QString &description, int &listIndex);
    //Appends new list in List Table
    void appendListInListTable(QString &listName, int &listIndex);
    //Connects to SQLite Database
    bool createConnection();
    //Inserts Item in database after reordering, This function is called when user is finished Reordering, it enters one List item at a time
    void reorderItems(int listIndex, bool done, QString name, int position);
};

#endif // DBCONNECTION_H
