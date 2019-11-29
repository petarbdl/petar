import QtQuick 2.0
import QtQuick.Controls 2.5

Popup {
        id:myPopup
        y:comboBox.height-1
        width: parent.width
        clip:true
        padding: 0
        spacing: 1
        height: 150
        contentItem: ListView {
            model: comboBox.popup.visible ? comboBox.delegateModel : null

            ScrollBar.vertical: ScrollBar {
            }
        }
        background: Rectangle {
            radius:4
            border.color: "#007DCC"
            border.width: 1
        }
    }
