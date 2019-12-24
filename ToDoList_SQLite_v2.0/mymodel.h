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
    //Returns list items
    ItemList* list() const;
    //Sets new List
    void setList(ItemList *list);

    Q_INVOKABLE void resetModel();

signals:

private:
    ItemList *_list;//Array pointers of ItemList Object
};

#endif // MYMODEL_H
