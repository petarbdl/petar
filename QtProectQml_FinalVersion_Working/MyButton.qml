import QtQuick 2.0
import QtQuick.Controls 2.13
import QtQuick.Layouts 1.13

Button {
    id: sendButton
    height: 25
    width: 75
    text: "Send"
    Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
    Layout.preferredHeight: 25
    Layout.preferredWidth: 80
    property string  source:"qrc:/btn_white_down.png"
    property string  source1:"qrc:/btn_white_normal.png"
    //In this Rectangle normal and hover button images are set
    background: Rectangle {
        id: imageRect
        width: sendButton.width
        height: sendButton.height
        border.width: 0
        radius: 5
        anchors.centerIn: parent
        //Getting the images
        Image {
            id: imageButton
            height: imageRect.height
            width: imageRect.width
            source: sendButton.pressed ? sendButton.source : sendButton.source1
        }
    }
}
