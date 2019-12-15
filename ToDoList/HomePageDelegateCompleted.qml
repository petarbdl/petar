import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

Rectangle {
    id:te1
    height: text12.height+2
    width: text12.width+2
    color: mouseTextHome1.containsMouse ? "blue":"transparent"
    Text {
        id:text12
        font.pixelSize: 15
        font.underline: mouseTextHome1.containsMouse ? false : true
        anchors.verticalCenter: parent.verticalCenter
        text: if(completed != 0){
                  te1.visible=false
                  mouseTextHome1.visible=false
              }
              else
              {
                  text:name
              }
        font.family: "Lucida Grande"
        font.bold: true
        color: mouseTextHome1.containsMouse ? "white":"blue"
        MouseArea {
            id:mouseTextHome1
            anchors.fill: parent
            hoverEnabled: true
            cursorShape: Qt.PointingHandCursor
            onClicked: {
                mineModel.list = modelList.getItems(model.index);
                mineTitle = model1234.list.getName();
                mineDesc = model1234.list.getDescription();
                currentListIndex = model.index;
                pageLoader.source = "ListPage.qml";
            }
        }
    }
}
