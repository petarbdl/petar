import QtQuick 2.0

Image{
    x: 213
    y: 24
    width: 7
    height: 4
    anchors {
        verticalCenter: parent.verticalCenter
        leftMargin: 40
        bottomMargin: 5
        left: comboBox.left
    }
    source: "qrc:/combo_arrow.png"
}
