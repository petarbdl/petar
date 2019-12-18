import QtQuick 2.0
import QtQuick.Controls 2.12

CheckBox {
    id:checkBox
    signal clicked()
    anchors.left: parent.left
    checked: done
    onClicked: {
        checkBox.clicked()
    }
   indicator:Rectangle {
        anchors.centerIn: parent.Center
        implicitHeight: 15
        implicitWidth: 15
        radius: 3
        border.color: "lightGray"
        border.width: 1
        Rectangle {
            visible: checkBox.checked
            color: "lightGray"
            radius: 3
            border.color: "gray"
            border.width: 1
            anchors.fill: parent
        }
    }
}
