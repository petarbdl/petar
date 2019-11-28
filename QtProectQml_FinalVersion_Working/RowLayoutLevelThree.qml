import QtQuick 2.0
import QtQuick.Layouts 1.13
import QtQuick.Controls 2.13

Frame {
    id:textEditFrame
    width: columnLayout.width-18
    height: 180
    //Message text edit
    MyTextEdit {
        id:myTextEdit
        //anchors.fill:parent
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
    //Label for Counting Characters
    Label {
        id: labelCharacters
        x: 266
        text: "160"
        anchors.top: parent.bottom
        anchors.topMargin: 18
        anchors.right: labelMessages.left
        anchors.rightMargin: 3
    }
    //Label for counting number of messages
    Label {
        id: labelMessages
        x: 290
        y: 174
        width: 13
        height: 15
        text: "/ 1"
        anchors.right: parent.right
        anchors.rightMargin: -12
        anchors.bottom: parent.bottom
        anchors.bottomMargin: -33
    }
}
