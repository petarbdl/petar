import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

RowLayout{
    spacing: 4
    height: 50
    property alias setVisibleText: textReorder.visible
    Rectangle {
        id:rootRectangle
        width: modelList.itemsLeft(currentListIndex) > 1 ? 350 : 295
        Layout.alignment: Qt.AlignVCenter
        height: 37
        color: "#EFEFEF"
        radius:20
        HeaderImage {
            id:headerImage
            anchors {
                bottom: parent.bottom
                bottomMargin: -2
                left: parent.left
            }
        }
        RowLayout{
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: headerImage.width + 10
            spacing: 5
            RowLayout{
                spacing: 10

                MyText {
                    text: "My Lists"
                    fontSize: 15
                    textColor: mouse.containsMouse ? "white":"blue"
                    color: mouse.containsMouse ? "blue":"transparent"
                    onClicked: {
                        pageLoader.source = "HomePage.qml";
                    }
                }
                Text {
                    font.pixelSize: 15
                    text: "This list: "
                }
            }
            MyText {
                text: "Edit"
                onClicked: {
                    pageLoader.source = "EditPage.qml";
                }
            }
            Text {
                height: 12
                text: "|"
            }
            MyText {
                id:textReorder
                visible: modelList.itemsLeft(currentListIndex) > 1 ? true : false
                text: "Reorder"
                onClicked: {
                    content.secondComponent.visible = true
                    content.mainComponent.visible = false
                    rootRectangle.width = 420
                    textReorder.visible = false
                    textDoneReordering.visible = true
                }
            }
            MyText {
                id:textDoneReordering
                visible: false
                color: mouse.containsMouse ? "red":"yellow"
                text: "I'm done reordering"
                onClicked: {
                    textDoneReordering.visible = false
                    textReorder.visible = true
                    myPageLoader.active = false
                    myPageLoader.active = true
                    mainListModel.list.reorderItemsInDB()
                    content.secondComponent.visible =false
                    content.mainComponent.visible = true
                    rootRectangle.width = 350
                }
            }
            Text {
                height: 12
                visible: modelList.itemsLeft(currentListIndex) > 1 ? true : false
                text: "|"
            }
            MyText {
                text: "Share"
                onClicked: {
                    pageLoader.source = "HomePage.qml"
                }
            }
        }
    }
}
