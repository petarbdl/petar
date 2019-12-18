#ifndef LISTOFLISTS_H
#define LISTOFLISTS_H

#include <QObject>
#include <QDebug>
#include "mymodellist.h"
#include "itemlist.h"

class ListOfLists : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<MyModelList*>* mainList READ mainList WRITE setMainList NOTIFY mainListChanged)
    //Q_PROPERTY(QString listName READ listName WRITE setListName NOTIFY listNameChanged)
public:
    explicit ListOfLists(QObject *parent = nullptr);

    QList<MyModelList*>* mainList();
    void setMainList(QList<MyModelList *>* newListName);

    Q_INVOKABLE QString getListName(int index);
    Q_INVOKABLE QList<QObject*> getList(int index);
    Q_INVOKABLE void setNewList(QString);
//    QString listName();
//    void setListName(QString);

signals:
    void mainListChanged();
public slots:

private:
    QList<MyModelList*> *_list;
};

#endif // LISTOFLISTS_H
