#ifndef MYMODEL_H
#define MYMODEL_H

#include <QAbstractListModel>

#include "itemlist.h"

class MyModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(ItemList *list READ list WRITE setList) //Give access to list functions in UI
public:
    explicit MyModel(QObject *parent = nullptr);

    //Setting Model Roles
    enum Roles {
        DoneRole = Qt::UserRole,
        NameRole,
        PositionRole,
    };

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    // Editable:
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;

    Qt::ItemFlags flags(const QModelIndex& index) const override;

    virtual QHash<int, QByteArray> roleNames() const override;

    ItemList* list() const;//Returns list items

    void setList(ItemList *list);//Sets new List

signals:

private:
    ItemList *_list;
};

#endif // MYMODEL_H
