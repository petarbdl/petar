import QtQuick 2.12

Rectangle {
    anchors.verticalCenter: parent.verticalCenter
    anchors.left: parent.right
    anchors.leftMargin: 5
    width: 12
    height: 12
    radius: 6
    border.width: 1
    border.color: "lightGray"
    color: "gray"
    Text {
        anchors.left: parent.left
        anchors.leftMargin: 3
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 1
        font.pixelSize: 11
        text: "x"
        color: "white"
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            model1234.list.deleteItem(model.index, model.position)
        }
    }
}
