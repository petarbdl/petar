import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import QtQuick.Controls.Styles 1.4
import QtQml.Models 2.13

Page {
    id:listPage
    property alias resetLoader: localLoader
    width: 640
    height: 480
    header: ListPageHeader{
        anchors {
            left: parent.left
            leftMargin: 10
            top: parent.top
            topMargin: 10
        }
    }
    ColumnLayout {
        ListPageContent {
            id:content
        }
        Loader {
            id:localLoader
            width: 85
            height: 34
            Layout.leftMargin: 20
            Layout.topMargin: 10
            sourceComponent: content.mainComponent
        }
        Rectangle {
            height: 1
            width: 620
            color: "#EFEFEF"
            Layout.topMargin: 50
            Layout.leftMargin: -20
        }
    }
}


