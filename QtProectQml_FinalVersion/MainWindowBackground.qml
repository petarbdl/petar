import QtQuick 2.0

Rectangle {
    height: parent.height
    width: parent.width
    //Backgraund Gradient
    MyGradient {
        id:myGradient
    }
    gradient: myGradient
    //Background Image
    Image {
        id: bubblesImage
        width: parent.width
        height: parent.height
        anchors.fill: parent
        source: "qrc:/bgd_bubbles.png"
    }
}
