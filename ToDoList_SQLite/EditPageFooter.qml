import QtQuick 2.0
import QtQuick.Layouts 1.12

Rectangle {
    width: editPage.width
    height: 30
    color: "#EFEFEF"
    RowLayout{
        anchors {
            verticalCenter: parent.verticalCenter
            left: parent.left
            leftMargin: 5
        }
        Rectangle {
            width: 100
            height: 20
            border.width: 1
            border.color: mouseAreaSaveList.containsMouse ? "darkGray":"gray"
            color: "#EFEFEF"
            Text {
                anchors.centerIn: parent
                font.bold: true
                text: "Save this list"
            }
            MouseArea {
                id:mouseAreaSaveList
                anchors.fill: parent
                hoverEnabled: true
                onClicked: {
//                    listDescription = getTextInputDescription.text
//                    listTitle = getTextInputTitle.text
                    listTitle = getTextInputTitle.text
                    listDescription = getTextInputDescription.text
                    modelList.setListDescription(getTextInputDescription.text, currentListIndex)
                    modelList.setListName(getTextInputTitle.text, currentListIndex)
                    myPageLoader.source = "ListPage.qml"
                }
            }
        }
        Text {
            text: "or"
        }
        MyText {
            text: "Cancel"
            onClicked: pageLoader.source = "ListPage.qml"
        }
    }
}
