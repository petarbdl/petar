#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QList>

#include "itemlist.h"
#include "mymodel.h"
#include "mymainlistmodel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<MyModel>("ItemModel",1,0,"MyItemModel");
    qmlRegisterUncreatableType<ItemList>("ItemModel",1,0,"ItemList", QStringLiteral("ItemList shouldnt be created in QML"));

    MyMainListModel model;
    QQuickView view;
    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("modelList", &model);
    view.setSource(QUrl("qrc:main.qml"));
    view.show();

    return app.exec();
}
