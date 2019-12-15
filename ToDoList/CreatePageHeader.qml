import QtQuick 2.0
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

RowLayout{
    height: 50
    Rectangle {
        id:headerRectangle
        width: 170
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
        MyText {
            anchors {
                verticalCenter: parent.verticalCenter
                left: headerImage.right
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
    }
}
