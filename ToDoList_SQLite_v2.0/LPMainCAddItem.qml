import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

ColumnLayout {
    spacing: 5
    visible: false
    Layout.topMargin: 15
    Rectangle {
        width: 400
        height: 22
        border.width: 1
        border.color: textInput.focus ? "lightBlue" : "gray"
        TextInput {
            id:textInput
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
                    textInput.text === "" || textInput.text === " " ? mainListModel.list.appendItem("Default Item") : mainListModel.list.appendItem(textInput.text);
                    textInput.text="";
                    setVisibleHeader()
                }
            }
        }
        MyText {
            text: "Close"
            onClicked:{
                addItemText.visible = true;
                addItem.visible=false;
            }
        }
    }
    function setVisibleHeader()
    {
        if(modelList.itemsLeft(currentListIndex) >= 2)
        {
            textOrderVisible = true;
            textSpacerVisible = true;
            rootWidth = 350
        }
        else
        {
            textOrderVisible = false;
            textSpacerVisible = false;
            rootWidth = 295
        }
    }
}
