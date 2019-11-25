#include "mycountry.h"


MyCountry::MyCountry(QObject *parent) : QObject(parent)
{
    //default constructor
}

MyCountry::MyCountry(const QString &item, const QString &countryName, const QString &countryPrefix, QObject *parent) : QObject(parent)
{
    _name = countryName;
    _prefix = countryPrefix;
    _item = item;
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

QVariant MyCountry::country()
{


    return _item +" "+_name+" "+_prefix;
}

QVariant MyCountry::itemIcon()
{
    QImage tmpIcon(":/" +_item+".jpg");
    if(tmpIcon.isNull())
        qDebug()<<"is null";
    QVariant item;
    item = tmpIcon;

    return item;

}

