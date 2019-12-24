import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

Rectangle {
    visible: modelList.itemsLeft(model.index) === 0 ? true:false
    height: delegateText.height+2
    width: delegateText.width+2
    color: delegateMouseArea.containsMouse ? "blue":"transparent"
    Text {
        id:delegateText
        anchors.verticalCenter: parent.verticalCenter
        font{
            pixelSize: 15
            underline: delegateMouseArea.containsMouse ? false : true
            family: "Lucida Grande"
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
