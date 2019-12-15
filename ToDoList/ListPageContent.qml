import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import QtQuick.Controls.Styles 1.4
import QtQml.Models 2.13

ColumnLayout{
    property alias mainComponent: mainComp
    property alias secondComponent: secComp
    spacing: 5
    height: 400
    ColumnLayout {
        id:titleAndDesc
        Layout.topMargin: 40
        Layout.leftMargin: 20
        Layout.alignment: Qt.AlignTop
        spacing: 5
        Text {
            id:headText
            font.pixelSize: 24
            font.bold: true
            text: mineTitle
        }
        Text {
            id:desc
            font.pixelSize: 15
            text: mineDesc
        }
    }
    LPMainComponent {
        id:mainComp
    }
    LPSecondComponent{
        id:secComp
    }
}
