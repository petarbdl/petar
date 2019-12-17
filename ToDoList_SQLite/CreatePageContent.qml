import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

ColumnLayout {
    RowLayout {
        spacing: 0
        Text {
            font.pixelSize: 20
            text: "Name your new list"
        }
        Text {
            font.pixelSize: 8
            text: "(Ex: \"Things I need to do today\")"
            Layout.bottomMargin: 2
            Layout.leftMargin: 4
            Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
        }
    }
    Rectangle {
        id:textInputBackground
        height: 40
        width: 400
        border.width: 1
        border.color: textInput.focus ? "lightBlue" : "gray"
        TextInput {
            id:textInput
            font.pixelSize: 24
            padding: 5
            maximumLength: 30
            anchors.fill: parent
            width: 400
            Component.onCompleted: {
                forceActiveFocus()
            }
        }
    }
    RowLayout {
        spacing: 5
        width: 300
        height: 20
        Layout.topMargin: 30
        Image {
            source: "qrc:/ta-daList/b-create_this_list.gif"
            MouseArea {
                anchors.fill: parent
                cursorShape: Qt.PointingHandCursor
                onClicked:{
                    textInput.text === "" ? modelList.appendList("Default List") : modelList.appendList(textInput.text);
                    textInput.text = "";
                    myPageLoader.source = "HomePage.qml";
                }
            }
        }
        Text {
            text: "or"
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        }
        MyText {
            text: "Cancel"
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
            onClicked: {
                pageLoader.source = "HomePage.qml";
            }
        }
    }
    Rectangle {
        height: 1
        width: 620
        color: "#EFEFEF"
        Layout.topMargin: 50
        Layout.leftMargin: -20
    }
}
