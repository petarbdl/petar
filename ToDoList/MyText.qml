import QtQuick 2.0

Rectangle {
    property alias text: rectangleText.text
    property alias color: textRectangle.color
    property alias fontSize: rectangleText.font.pixelSize
    property alias textColor: rectangleText.color
    property alias mouse: rectangleMouse
    signal clicked()
    id:textRectangle
    height: rectangleText.height
    width: rectangleText.width
    color: rectangleMouse.containsMouse ? "red":"transparent"
    Text {
        id:rectangleText
        font.underline:  rectangleMouse.containsMouse ? false : true
        color: rectangleMouse.containsMouse ? "white":"red"
        font.family: "Verdana"
        MouseArea {
            id:rectangleMouse
            cursorShape: Qt.PointingHandCursor
            hoverEnabled: true
            anchors.fill: parent
            onClicked: {
                textRectangle.clicked()
            }
        }
    }
}
