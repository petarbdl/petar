#include "mycountry.h"


MyCountry::MyCountry(QObject *parent) : QObject(parent)
{
    //default constructor
}

MyCountry::MyCountry(const QString &item, const QString &countryName, const QString &countryPrefix, QObject *parent) : QObject(parent)
{
    _name = countryName;
    _prefix = countryPrefix;
    _item = item.trimmed();
}

//Return Country Flag
QString MyCountry::icon() const
{

    return _item;
}
//Return Country Name
QString MyCountry::name() const
{
    return _name;
}
//Return Country Prefix
QString MyCountry::prefix() const
{
    return _prefix;
}

