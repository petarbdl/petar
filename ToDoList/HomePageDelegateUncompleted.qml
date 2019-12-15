import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

RowLayout {
    id:delegate
    spacing: 17
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
        id:rowDel
        spacing: 0
        Rectangle {
            id:te
            height: text1.height+2
            width: text1.width+2
            color: mouseTextHome.containsMouse ? "blue":"transparent"
            Text {
                id:text1
                font.pixelSize: 15
                font.underline: mouseTextHome.containsMouse ? false : true
                anchors.verticalCenter: parent.verticalCenter
                text: if(completed===0){
                          rowDel.visible = false
                          delegate.visible = false
                          circle.visible = false
                          te.visible=false
                          mouseTextHome.visible=false
                          leftItems.visible = false
                      }
                      else
                      {
                          text:name
                      }

                font.family: "Lucida Grande"
                font.bold: true
                color: mouseTextHome.containsMouse ? "white":"blue"
                MouseArea {
                    id:mouseTextHome
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
        Text {
            id:leftItems
            color: "gray"
            text: modelList.itemsLeft(model.index) === -1 ? "" : " — "+modelList.itemsLeft(model.index)+" left"
        }
    }
}
