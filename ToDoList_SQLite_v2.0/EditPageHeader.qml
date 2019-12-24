import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

ColumnLayout {
    Text {
        font{
            pixelSize: 20
            bold: true
        }
        text: "Edit this list"
    }
    Rectangle {
        color: "gray"
        height: 1
        width: parent.width
    }
    RowLayout {
        spacing: 4
        MyText {
            text: "Cancel"
            onClicked: pageLoader.source = "ListPage.qml";
        }
        Text {
            text: "|"
        }
        MyText {
            text: "Delete this list"
            onClicked: {
                modelList.deleteList(currentListIndex)
                pageLoader.source = "HomePage.qml";
            }
        }
    }
}
