#ifndef GETINDEX_H
#define GETINDEX_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QTextStream>

class GetIndex : public QObject
{
    Q_OBJECT
public:
    explicit GetIndex(QObject *parent = nullptr);

    Q_INVOKABLE int getIndex(QString arg1);//Fuction that is called in
                                            //main.qml, returns Index of the right element.

signals:

public slots:

private:
    QStringList *_list;//List of country prefixes
};

#endif // GETINDEX_H
