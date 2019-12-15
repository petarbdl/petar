import QtQuick 2.0
import QtQuick.Layouts 1.13

RowLayout{
    height: 50
    Rectangle {
        id:headerRectangle
        width: 280
        height: 37
        color: "#EFEFEF"
        radius:20
        Layout.leftMargin: 10
        HeaderImage {
            id:headerImage
            anchors {
                bottom: parent.bottom
                bottomMargin: -2
                left: parent.left
            }
        }
        Text {
            id:headerText
            font {
                bold:true
                pixelSize: 20
            }
            anchors {
                verticalCenter: parent.verticalCenter
                left: headerImage.right
                leftMargin: 20
            }
            text: "My Lists"
        }
        MyText {
            id:createText
            anchors {
                bottom: parent.bottom
                bottomMargin: 6
                left: headerText.right
                leftMargin: 20
            }
            text: "Create new list"
            onClicked: {
                myPageLoader.source = "CreatePage.qml";
            }
        }
    }
}
