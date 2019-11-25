#include <QGuiApplication>
#include <QFile>
#include <QTextStream>
#include <QQuickView>
#include <QQmlContext>

#include "mycountry.h"
#include "getindex.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QList<QObject*> list;
    QFile myFile(":/countries.txt");
        if(myFile.open(QIODevice::ReadOnly))
        {
            QTextStream inText(&myFile);
            while(!inText.atEnd())
            {
                QString line = inText.readLine();
                QStringList tmp = line.split(",");

                QString icon = tmp.at(0).trimmed();//Icon for country flag
                QString countryName = tmp.at(2).trimmed();//Country Name
                QString countryPrefix =tmp.at(1).trimmed();//Country Prefix

                MyCountry *country = new MyCountry(icon,countryName,countryPrefix);

                list.append(country);
            }
            myFile.close();
        }

        GetIndex index;

        qmlRegisterType<GetIndex>("GetIndex",1,0,"IndexOfCountry");

        QQuickView view;
        view.setResizeMode(QQuickView::SizeRootObjectToView);
        QQmlContext *ctxt = view.rootContext();
        ctxt->setContextProperty("myModel", QVariant::fromValue(list));

        view.setSource(QUrl("qrc:/main.qml"));

    return app.exec();
}
