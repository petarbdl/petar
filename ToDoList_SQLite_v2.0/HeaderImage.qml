import QtQuick 2.0

Image {
    width: 55
    height: 46
    source:"qrc:/ta-daList/tada-mark-bg.gif"
    MouseArea {
        anchors.fill: parent
        cursorShape: Qt.PointingHandCursor
        onClicked:{
            pageLoader.source = "HomePage.qml";
        }
    }
}
