import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

RowLayout{
    spacing: 4
    height: 50
    property alias setVisibleText: textReorder.visible
    Rectangle {
        id:root
        width: modelList.itemsLeft(currentListIndex) > 1 ? 350 : 295
        height: 37
        color: "#EFEFEF"
        radius:20
        HeaderImage {
            id:headerImage2
            anchors {
                bottom: parent.bottom
                bottomMargin: -2
                left: parent.left
            }
        }
        MyText {
            id:myListsText
            anchors {
                verticalCenter: parent.verticalCenter
                left: headerImage2.right
                leftMargin: 20
            }
            text: "My Lists"
            fontSize: 15
            textColor: mouse.containsMouse ? "white":"blue"
            color: mouse.containsMouse ? "blue":"transparent"
            onClicked: {
                pageLoader.source = "HomePage.qml";
            }
        }
        Text {
            id:thisListText
            anchors{
                left: myListsText.right
                leftMargin: 10
                verticalCenter: parent.verticalCenter
            }
            font.pixelSize: 15
            text: "This list: "
        }
        MyText {
            id:editText
            anchors {
                verticalCenter: parent.verticalCenter
                left: thisListText.right
                leftMargin: 5
            }

            text: "Edit"
            onClicked: {
                pageLoader.source = "EditPage.qml";
            }
        }
        Text {
            id:tmp1
            height: 12
            text: "|"
            anchors {
                left: editText.right
                leftMargin: 4
                verticalCenter: parent.verticalCenter
            }
        }
        MyText {
            id:textReorder
            visible: modelList.itemsLeft(currentListIndex) > 1 ? true : false
            anchors {
                left: editText.right
                leftMargin: 12
                verticalCenter: parent.verticalCenter
            }
            text: "Reorder"
            onClicked: {
                localLoader.sourceComponent = content.secondComponent;
                root.width = 420
                textReorder.visible = false
                rectHide.visible = true
            }
        }
        MyText {
            id:rectHide
            visible: false
            anchors {
                left: editText.right
                leftMargin: 12
                verticalCenter: parent.verticalCenter
            }
            color: mouse.containsMouse ? "red":"yellow"
            text: "I'm done reordering"
            onClicked: {
                rectHide.visible = false
                textReorder.visible = true
                model1234.list.reorderItems();
                localLoader.sourceComponent = content.mainComponent
                root.width = 350
            }
        }
        Text {
            id:tmp2
            height: 12
            visible: modelList.itemsLeft(currentListIndex) > 1 ? true : false
            text: "|"
            anchors.right: shareText.left
            anchors.rightMargin: 4
            anchors.verticalCenter: parent.verticalCenter
        }
        MyText {
            id:shareText
            text: "Share"
            anchors.right: parent.right
            anchors.rightMargin: 14
            anchors.verticalCenter: parent.verticalCenter
            onClicked: {
                pageLoader.source = "HomePage.qml"
            }
        }
    }
}
