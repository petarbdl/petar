import QtQuick 2.12

Rectangle {
    width: 12
    height: 12
    radius: 6
    border.width: 1
    border.color: "lightGray"
    color: "gray"
    Text {
        anchors {
            left: parent.left
            leftMargin: 3
            bottom: parent.bottom
            bottomMargin: 1
        }
        font.pixelSize: 11
        text: "x"
        color: "white"
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            mainListModel.list.deleteItem(model.index, model.position)
        }
    }
}
