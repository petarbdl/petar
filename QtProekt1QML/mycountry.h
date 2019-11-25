#ifndef MYCOUNTRY_H
#define MYCOUNTRY_H

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QImage>

class MyCountry : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString icon READ icon NOTIFY iconChanged)//Holds country icon url
    Q_PROPERTY(QString name READ name NOTIFY nameChanged)//Holds country name
    Q_PROPERTY(QString prefix READ prefix NOTIFY prefixChanged)//Holds country prefix
public:
    explicit MyCountry(QObject *parent = nullptr);
    MyCountry(const QString &item, const QString &countryName, const QString &countryPrefix, QObject *parent = nullptr);
    QString icon() const;//Returns country flag
    QString name() const;//Returns country name
    QString prefix() const;//Returns country Prefix

signals:
    void iconChanged();

    void nameChanged();

    void prefixChanged();

public slots:

private:
    QString _item;
    QString _name;
    QString _prefix;
};

#endif // MYCOUNTRY_H
