import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

ColumnLayout {
    id:addItem
    spacing: 5
    visible: false
    Layout.topMargin: 15
    Rectangle {
        id:textInputRect2
        width: 400
        height: 22
        border.width: 1
        border.color: textInput1.focus ? "lightBlue" : "gray"
        TextInput {
            id:textInput1
            anchors.fill: parent
            padding: 3
            font.pixelSize: 15
            wrapMode: TextInput.Wrap
            layer.enabled: true
            Component.onCompleted: {
                forceActiveFocus()
            }
        }
    }
    RowLayout {
        Image {
            source: "qrc:/ta-daList/b-add_this_item.gif"
            MouseArea {
                cursorShape: Qt.PointingHandCursor
                anchors.fill: parent
                onClicked: {
                    textInput1.text === "" || textInput1.text === " " ? model1234.list.appendItem("Default Item") : model1234.list.appendItem(textInput1.text);
                    textInput1.text="";
                    myPageLoader.active= false;
                    myPageLoader.active= true;
                }
            }
        }
        Text {
            font.underline: true
            text: "Close"
            color: "red"
            MouseArea {
                cursorShape: Qt.PointingHandCursor
                anchors.fill: parent
                onClicked:{
                    addItemText.visible = true;
                    addItem.visible=false;
                }
            }
        }
    }
}
