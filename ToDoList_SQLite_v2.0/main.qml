import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import ItemModel 1.0

Page {
    id:root
    visible: true
    width: 640
    height: 480
    title: qsTr("ToDo List")
    MyItemModel {
        id:mainListModel
    }
    property alias myPageLoader: pageLoader
    property string listTitle:""
    property string listDescription: ""
    property int currentListIndex
    Loader {
        id: pageLoader
        source: "HomePage.qml"
    }
}
