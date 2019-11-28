import QtQuick 2.12
import QtQuick.Controls 2.13
import QtQuick.Layouts 1.13

ComboBox {
    id: comboBox
    x: 0
    y: 0
    width: focusscope.width
    height: 20
    anchors.right: parent.right
    anchors.bottom: parent.bottom
    anchors.left: parent.left
    anchors {
        rightMargin: -12
        leftMargin: -12
        bottomMargin: -12
    }
    currentIndex: 0
    model: myModel
    //Changing the arrow image of ComboBox
    MyIndicator {
        id: myIndicator
    }
    indicator: myIndicator
    textRole: "display"
    //Slot, sends prefix, from selected item in combo box to text Input
    onActivated: {
        textInput.text = "+" + model[comboBox.currentIndex].prefix
    }
    background: Rectangle {
        id:comboBoxRectangle
        width: 54
        height: 25
        implicitHeight: 150
        anchors.fill: comboBox
        color: "transparent"
        radius: 4
    }
    //Image of combo box
    Image {
        width: 25
        height: 15
        anchors.verticalCenterOffset: 0
        anchors {
            verticalCenter: parent.verticalCenter
            left: parent.left
            leftMargin: 9
        }
        source: "qrc:/flags/flags/"+myModel[comboBox.currentIndex].icon+".jpg"
    }
    //delegate to show items in correct way
    delegate:ItemDelegate {
        id: myDelegate
        //Background and highlight
        background: Rectangle {
            anchors.fill: myDelegate
            width: comboBox.width
            color: myDelegate.hovered ? "lightgray" : "transparent"
        }
        padding: 0
        //RowLayout, here image, name and prefix of every country is created and arranged
        contentItem: RowLayout {
            //Image
            Rectangle {
                height: 25
                width:25
                color:"transparent"
                Image {
                    id: name
                    height: 15
                    width: 20
                    anchors {
                        verticalCenter: parent.verticalCenter
                        right: parent.right
                        rightMargin: 1
                    }
                    horizontalAlignment: Image.AlignRight
                    source: "/flags/flags/"+modelData.icon
                }
            }
            //Name
            Rectangle {
                height: 25
                width: 60
                color:"transparent"
                Text {
                    anchors{
                        verticalCenter: parent.verticalCenter
                        left: parent.left
                        leftMargin: 3
                    }
                    text: modelData.name
                }
            }
            //Prefix
            Rectangle {
                id:prefixRect
                height: 25
                width: 130
                color:"transparent"
                Text {
                    anchors {
                        verticalCenter: parent.verticalCenter
                        right: parent.right
                        rightMargin: 10
                    }
                    text: "+"+modelData.prefix
                    color: myDelegate.hovered ? "black" : "gray"
                }
            }
        }
    }
}
