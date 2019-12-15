import QtQuick 2.0
import QtQuick.Layouts 1.12

Rectangle {
    width: editPage.width
    height: 30
    color: "#EFEFEF"
    RowLayout{
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 5
        Rectangle {
            width: 100
            height: 20
            border.width: 1
            border.color: mousearea.containsMouse ? "darkGray":"gray"
            color: "#EFEFEF"
            Text {
                anchors.centerIn: parent
                font.bold: true
                text: "Save this list"
            }
            MouseArea {
                id:mousearea
                anchors.fill: parent
                hoverEnabled: true
                onClicked: {
                    model1234.list.setDescription(textInputDesc.text);
                    model1234.list.setName(textInputTitle.text);
                    myPageLoader.source = "ListPage.qml";
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
