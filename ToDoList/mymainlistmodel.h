#ifndef MYMAINLISTMODEL_H
#define MYMAINLISTMODEL_H

#include <QAbstractListModel>
#include <QList>
#include <QtSql>
#include <QSqlQuery>

#include "itemlist.h"

class MyMainListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit MyMainListModel(QObject *parent = nullptr);

    enum Roles {
        NameRole = Qt::UserRole,
        CompletedRole,
        CurrentIndexRole
    };

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    // Editable:
    bool setData(const QModelIndex &index, const QVariant &value,
                 int role = Qt::EditRole) override;

    Qt::ItemFlags flags(const QModelIndex& index) const override;

    virtual QHash<int,QByteArray> roleNames() const override;


    Q_INVOKABLE ItemList *getItems(int index);//Return the item list

    Q_INVOKABLE int itemsLeft(int index) const;//Returns number of unchecked items

    Q_INVOKABLE void deleteList(int index);//Deletes list on position index

    Q_INVOKABLE void setListName(QString name, int index);//Set Name changes from UI to Database

    Q_INVOKABLE void setListDescription(QString description, int index);//Sets Description changes from UI to Database

public slots:
    void appendList(QString);//Appends item list to this object's list
signals:
    void preListAppend();
    void postListAppend();

    void preListRemoved(int index);
    void postListRemoved();

private:
    QList<ItemList*> _mainList;
};

#endif // MYMAINLISTMODEL_H
