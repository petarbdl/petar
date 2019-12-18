#include <QApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QList>
#include <QStyleFactory>

#include "itemlist.h"
#include "mymodel.h"
#include "mymainlistmodel.h"

int main(int argc, char *argv[])
{
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    QApplication app(argc, argv);

    qmlRegisterType<MyModel>("ItemModel",1,0,"MyItemModel");
    qmlRegisterUncreatableType<ItemList>("ItemModel",1,0,"ItemList", QStringLiteral("ItemList shouldnt be created in QML"));

    MyMainListModel model;
    QQuickView view;
    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("modelList", &model);

    view.setTitle("To-Do List");
    QIcon icon;
    icon.addFile(":/ta-daList/tada-mark-bg.gif");
    view.setIcon(icon);
    view.setSource(QUrl("qrc:main.qml"));
    view.show();

    return app.exec();
}
