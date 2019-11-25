#ifndef MYCOUNTRY_H
#define MYCOUNTRY_H

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QImage>

class MyCountry : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant country READ country NOTIFY countryChanged)//Holds country name, icon and prefix
    Q_PROPERTY(QString icon READ icon NOTIFY iconChanged)//Holds country icon url
    Q_PROPERTY(QString name READ name NOTIFY nameChanged)//Holds country name
    Q_PROPERTY(QString prefix READ prefix NOTIFY prefixChanged)//Holds country prefix
    Q_PROPERTY(QVariant itemIcon READ itemIcon NOTIFY itemIconChanged)//Image of country Icon
public:
    explicit MyCountry(QObject *parent = nullptr);
    MyCountry(const QString &item, const QString &countryName, const QString &countryPrefix, QObject *parent = nullptr);
    QString icon() const;//Returns country flag
    QString name() const;//Returns country name
    QString prefix() const;//Returns country Prefix
    QVariant country();
    QVariant itemIcon();//My qml cannot read this


signals:
    void iconChanged();

    void nameChanged();

    void prefixChanged();

    void countryChanged();

    void itemIconChanged();

public slots:

private:
    QString _item;
    QString _name;
    QString _prefix;
};

#endif // MYCOUNTRY_H
