#include "dbconnection.h"

DBConnection::DBConnection(){}

void DBConnection::reorderItems(int listIndex,int index1, int index2)
{
    QSqlQuery query;
    query.prepare("UPDATE ItemTable SET ItemPosition = CASE ItemPosition WHEN :itemIndex1 THEN :itemIndex2 WHEN :itemIndex2 THEN :itemIndex1 END WHERE ItemId = :listIndex AND ItemPosition IN(:itemIndex1,:itemIndex2)" );
    query.bindValue(":itemIndex1", index1);
    query.bindValue(":itemIndex2", index2);
    query.bindValue(":listIndex", listIndex);
    query.exec();
}}

void DBConnection::deleteItemsInDB(int &index)
{
    QSqlQuery query;
    query.prepare("DELETE FROM ItemTable WHERE ItemId = :index");
    query.bindValue(":index", index);
    query.exec();
}

void DBConnection::updateItemInDB(int &listIndex, const QString name, const bool done, const int position)
{
    QSqlQuery query;
    query.prepare("UPDATE ItemTable SET ItemDone = :valueDone, ItemName = :valueName WHERE ItemId = :listIndex AND ItemPosition = :itemIndex" );
    query.bindValue(":valueDone", done);
    query.bindValue(":valueName", name);
    query.bindValue(":itemIndex", position);
    query.bindValue(":listIndex", listIndex);
    query.exec();
}

void DBConnection::appendItemInItemTable(int &listIndex, const QString name, const int position)
{
    QSqlQuery query;
    query.prepare("INSERT INTO ItemTable (ItemId, ItemName, ItemDone, ItemPosition) VALUES(:itemId, :itemName, '0', :itemPosition)");
    query.bindValue(":itemId",listIndex);
    query.bindValue(":itemName",name);
    query.bindValue(":itemPosition", position);
    query.exec();
}

void DBConnection::deleteItemInDB(int &listIndex, const int position)
{
    QSqlQuery query;
    query.prepare("DELETE FROM ItemTable WHERE ItemId = :index AND ItemPosition = :itemPosition");
    query.bindValue(":index", listIndex);
    query.bindValue(":itemPosition", position);
    query.exec();
}

void DBConnection::deleteListInDB(int &listIndex)
{
    //Delete list from database
    QSqlQuery query;
    query.prepare("DELETE FROM ListTable WHERE ListId = :index");
    query.bindValue(":index", listIndex);
    query.exec();

    //Delete list from database
    query.prepare("DELETE FROM ListTable WHERE ListId = :index");
    query.bindValue(":index", listIndex);
    query.exec();
}

void DBConnection::setListNameInDB(QString &name, int &listIndex)
{
    QSqlQuery query;
    query.prepare("UPDATE ListTable SET ListName = :value WHERE ListId = :listIndex" );
    query.bindValue(":value", name);
    query.bindValue(":listIndex", listIndex);
    query.exec();
}

void DBConnection::setListDescriptionInDB(QString &description, int &listIndex)
{
    QSqlQuery query;
    query.prepare("UPDATE ListTable SET Description = :value WHERE ListId = :listIndex" );
    query.bindValue(":value", description);
    query.bindValue(":listIndex", listIndex);
    query.exec();
}

void DBConnection::appendListInListTable(QString &listName, int &listIndex)
{
    QSqlQuery query;
    query.prepare("INSERT INTO ListTable (ListId, ListName) VALUES(:listIndex, :newList)");
    query.bindValue(":listIndex", listIndex);
    query.bindValue(":newList", listName);
    query.exec();
}

bool DBConnection::createConnection()
{
    //Connects to Database
    const QString DRIVER("QSQLITE");
    //Check if SQLite driver is available
    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName("LocalDatabase.db");
        //Check if Database is opened
        if(!db.open())
        {
            qDebug()<<"Cannot Connect to Database";
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        qDebug()<<"SQLITE Driver is not available";
        return false;
    }

}
