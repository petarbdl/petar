import QtQuick 2.0

Rectangle {
    property alias text: componentText.text
    property alias color: componentRectangle.color
    property alias fontSize: componentText.font.pixelSize
    property alias textColor: componentText.color
    property alias mouse: componentMouseArea
    signal clicked()
    id:componentRectangle
    height: componentText.height
    width: componentText.width
    color: componentMouseArea.containsMouse ? "red":"transparent"
    Text {
        id:componentText
        font.underline:  componentMouseArea.containsMouse ? false : true
        color: componentMouseArea.containsMouse ? "white":"red"
        font.pixelSize: 12
        MouseArea {
            id:componentMouseArea
            cursorShape: Qt.PointingHandCursor
            hoverEnabled: true
            anchors.fill: parent
            onClicked: {
                componentRectangle.clicked()
            }
        }
    }
}
