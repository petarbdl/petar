import QtQuick 2.0
import QtQuick.Layouts 1.13
import QtQuick.Controls 2.13

Frame {
    id:textEditFrame
    width: columnLayout.width-18
    height: 180
    property alias textMyTextEdit: myTextEdit.text
    property alias idMyTextEdit: myTextEdit
    //Message text edit
    MyTextEdit {
        id:myTextEdit
    }
    //Setting up textEditMessage background
    background: Rectangle {
        id:textEdit1Rectangle
        anchors.fill: parent
        color: "white"
        border.width: 1
        border.color: "gray"
        radius:4
    }
    Rectangle {
        width: textEdit1Rectangle.width-2
        height: textEdit1Rectangle.radius
        color: "white"
        anchors {
            left: parent.left
            leftMargin: -11
            bottom: parent.bottom
            bottomMargin: -12
        }
    }
}
