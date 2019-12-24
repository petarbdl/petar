#ifndef MYMODELLIST_H
#define MYMODELLIST_H

#include <QObject>

#include "itemlist.h"

class MyModelList : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString desc READ desc WRITE setDesc NOTIFY descChanged)
    Q_PROPERTY(QString listName READ listName WRITE setListName NOTIFY listNameChanged)
    Q_PROPERTY(QList<QObject*> itemList READ itemList WRITE setItemList NOTIFY itemListChanged)

public:
    explicit MyModelList(QObject *parent = nullptr);
    MyModelList(QString itemName, bool itemDone);
    void insertItem(QString name, bool done);


    QString desc();
    void setDesc(QString des);

    QString listName();
    void setListName(QString lname);

    QList<QObject*> itemList();
    void setItemList(QList<QObject *>);


signals:
    void descChanged();
    void listNameChanged();
    void itemListChanged();

public slots:

private:
    QString _description;
    QString _listName;
    QList<QObject*> _list;
};

#endif // MYMODELLIST_H
