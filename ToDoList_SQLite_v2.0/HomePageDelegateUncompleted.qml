import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

RowLayout {
    spacing: 17
    visible: modelList.itemsLeft(model.index) !== 0 ? true : false
    Rectangle {
        id:circle
        Layout.alignment: Qt.AlignLeft | Qt.AlignCenter
        Layout.leftMargin: 20
        width: 2
        height: 2
        border.width: 1
        radius: 2
        color: "gray"
        border.color: "gray"
        scale: 2 + modelList.itemsLeft(model.index)
    }
    RowLayout{
        spacing: 0
        Rectangle {           
            height: delegateText.height+2
            width: delegateText.width+2
            color: delegateMouseArea.containsMouse ? "blue":"transparent"
            Text {
                id:delegateText
                anchors.verticalCenter: parent.verticalCenter
                font {
                    pixelSize: 15
                    underline: delegateMouseArea.containsMouse ? false : true
                    bold: true
                }
                text: name
                color: delegateMouseArea.containsMouse ? "white":"blue"
                MouseArea {
                    id:delegateMouseArea
                    anchors.fill: parent
                    hoverEnabled: true
                    cursorShape: Qt.PointingHandCursor
                    onClicked: {
                        mainListModel.list = modelList.getItems(model.index);
                        listTitle = mainListModel.list.getName();
                        listDescription = mainListModel.list.getDescription();
                        currentListIndex = model.index;
                        pageLoader.source = "ListPage.qml";
                    }
                }
            }
        }
        Text {
            color: "gray"
            text: modelList.itemsLeft(model.index) === -1 ? "" : " — "+modelList.itemsLeft(model.index)+" left"
        }
    }
}
