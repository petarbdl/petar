import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

ColumnLayout{
    property alias mainComponent: mainComp
    property alias secondComponent: secComp
    spacing: 5
    height: 400
    ColumnLayout {
        Layout.topMargin: 40
        Layout.leftMargin: 20
        Layout.alignment: Qt.AlignTop
        spacing: 5
        Text {
            font.pixelSize: 24
            font.bold: true
            text: listTitle
        }
        Text {
            font.pixelSize: 15
            text: listDescription
        }
    }
    LPMainComponent {
        id:mainComp
        Layout.leftMargin: 20
        Layout.topMargin: 10
    }
    LPOrderComponent{
        id:secComp
        Layout.leftMargin: 20
        visible: false
    }
}
