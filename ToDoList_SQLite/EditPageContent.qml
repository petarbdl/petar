import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

ColumnLayout {
    spacing: 7
    ColumnLayout {
        Layout.topMargin: 20
        spacing: 3
        Text {
            color: "brown"
            text: "TITLE"
        }
        Rectangle {
            height: 30
            width: 400
            border.width: 1
            border.color: textInputTitle.focus ? "lightBlue" : "gray"
            TextInput {
                id:textInputTitle
                anchors.fill: parent
                text: listTitle
                font.pointSize: 15
                maximumLength: 30
                padding: 3
                wrapMode: TextInput.Wrap
                layer.enabled: true
                onTextEdited: {
                    listTitle = textInputTitle.text
                    modelList.setListName(listTitle, currentListIndex);
                }
            }
        }
    }
    ColumnLayout {
        Text {
            color: "brown"
            text: "Items"
        }
        Repeater {
            model: mainListModel
            delegate: Rectangle {
                visible: done === true ? false : true
                height: 25
                width: 400
                border.width: 1
                border.color: textInputDelegate.focus ? "lightBlue" : "gray"
                TextInput {
                    id:textInputDelegate
                    padding: 3
                    Layout.fillWidth: true
                    width: 400
                    text: name
                    wrapMode: TextInput.Wrap
                    maximumLength: 50
                    onTextEdited: {
                        name = textInputDelegate.text
                    }
                }
                EditPageDeleteCircle{
                    anchors {
                        verticalCenter: parent.verticalCenter
                        left: parent.right
                        leftMargin: 5
                    }
                }
            }
        }
    }
    ColumnLayout{
        spacing: 3
        Text {
            color: "brown"
            text: "DESCRIPTION/NOTES(optional)"
        }
        Rectangle {
            height: 100
            width: 400
            border.width: 1
            border.color: textInputDescription.focus ? "lightBlue" : "gray"
            TextArea {
                id:textInputDescription
                anchors.fill: parent
                text: listDescription
                wrapMode: TextInput.Wrap
                layer.enabled: true
                onTextChanged: {
                    listDescription = textInputDescription.text
                    modelList.setListDescription(listDescription, currentListIndex);
                }
            }
        }
    }
}
