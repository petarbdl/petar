#include "countries.h"

Countries::Countries(QString string)
{
    QStringList tmp = string.split(",");

    QIcon icon(":/MyFiles/"+tmp.at(0).trimmed());//Icon for country flag
    QString countryName = tmp.at(2).trimmed();//Country Name
    QString countryPrefix = "+"+tmp.at(1);//Country Prefix

    QStandardItem *item = new QStandardItem();
    item->setIcon(icon);//Creating Flag Icon
    //Putting and setting above created items
    Countries::_item=item;
    Countries::_countryName=countryName;
    Countries::_countryPrefix=countryPrefix;
}
//Return Country Flag
QStandardItem* Countries::getCountryFlag()
{
    return _item;
}
//Return Country Name
QString Countries::getCountryName()
{
    return _countryName;
}
//Return Country Prefix
QString Countries::getCountryPrefix()
{
    return _countryPrefix;
}
