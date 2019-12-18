import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import QtQuick.Controls.Styles 1.4
import QtQml.Models 2.13

Page {
    id:listPage
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
        Rectangle {
            height: 1
            width: 620
            color: "#EFEFEF"
            Layout.topMargin: 50
            Layout.leftMargin: -20
        }
    }
}


