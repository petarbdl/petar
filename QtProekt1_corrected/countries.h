#ifndef COUNTRIES_H
#define COUNTRIES_H

#include <QStandardItem>

class Countries
{
public:
    Countries(QString string);//Constructor with String
    QStandardItem *getCountryFlag();//Returns country flag
    QString getCountryName();//Returns country name
    QString getCountryPrefix();//Returns country Prefix
private:
    QStandardItem *_item;//StandardItem for flag
    QString _countryName;//String for country Name
    QString _countryPrefix;//String for country Prefix
};

#endif // COUNTRIES_H
