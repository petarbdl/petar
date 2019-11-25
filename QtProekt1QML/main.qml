import QtQuick 2.12
import QtQuick.Window 2.2
import QtQuick.Controls 2.13
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.13


import GetIndex 1.0//c++ function

Window {
    id: window
    width: 333
    height: 308
    visible: true
    //Backgraund Gradient
    Rectangle {
        anchors.fill: parent
        gradient: Gradient {
            GradientStop {position: 0.167; color: "#AFD6FF"}
            GradientStop {position: 0.333;color: "#B8DBFF";}
            GradientStop {position: 0.500;color: "#BDE2FF";}
            GradientStop {position: 0.833;color: "#FFFFFF";}
            GradientStop {position: 0.667;color: "#DAECFF";}
            GradientStop {position: 1.000;color: "#B0D7FF";}
        }
        //Background Image
        Image {
            id: bubblesImage
            anchors.fill: parent
            source: "qrc:/bgd_bubbles.png"
        }
    }
    //Credit Label
    Label {
        id: creditLabel
        text: qsTr("Credit")
        anchors.top: parent.top
        anchors.topMargin: 2
        anchors.bottomMargin: 4
        anchors.right: kontoLabel.left
        anchors.rightMargin: -2
        anchors.left: parent.left
        anchors.leftMargin: 9
    }
    //Konto Label
    Label {
        id: kontoLabel
        x: 49
        width: 28
        text: '<html><a href="http://google.com">0.00$</a></html>'
        anchors.bottomMargin: 5
        anchors.top: parent.top
        anchors.topMargin: 1

        onLinkActivated: Qt.openUrlExternally("http://google.com")
    }
    //BuyCredit label
    Label {
        id: buyCreditLabel
        x: 280
        width: 53
        height: 13
        text: qsTr("Buy Credit")
        anchors.right: parent.right
        anchors.rightMargin: 12
        anchors.top: parent.top
        anchors.topMargin: 2
    }
    //Spacer
    Item {
        id: spacer1
        x: 73
        y: 1
        width: 201
        height: 13
    }
    //Spacer n.2
    Item {
        id: spacer2
        x: 240
        y: 20
        width: 20
        height: 25
    }
    //Send Button
    Button {
        id: sendButton
        height: 25
        text: "Send"
        anchors.right: parent.right
        anchors.rightMargin: 9
        property string  source:"qrc:/btn_white_down.png"
        property string  source1:"qrc:/btn_white_normal.png"
        x: 260
        y: 20
        width: 64
        //In this Rectangle normal and hover button images are set
        background: Rectangle {
            id:imageRect
            width:sendButton.width
            height: sendButton.height
            border.width: 0
            radius: 5
            opacity: 1
            Layout.minimumWidth: 50
            Layout.minimumHeight: 50
            anchors.centerIn: parent
            //Getting the images
            Image {
                id: imageButton
                height: imageRect.height
                width: imageRect.width
                source: sendButton.pressed ? sendButton.source : sendButton.source1
            }
        }
    }
    //Frame for the text edit
    Frame {
        id:textEditFrame
        anchors.right: parent.right
        anchors.rightMargin: 9
        anchors.left: parent.left
        anchors.leftMargin: 9
        anchors.top: parent.top
        anchors.topMargin: 57
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 56
        enabled: true
        //Message text edit
        TextEdit {
            id: textEditMessage
            property string placeholderText: "Enter message here"
            x: 0
            y: -6
            width: 291
            height: 179
            anchors.fill:parent
            horizontalAlignment: Text.AlignLeft
            focus: true
            layer.enabled: true
            font.pixelSize: 14
            wrapMode: TextInput.Wrap
            //Deafult text
            Text {
                text: textEditMessage.placeholderText
                color: "#aaa"
                visible: !textEditMessage.text && !textEditMessage.activeFocus
            }
            //Slot for counting characters and messages, sends the info to Labels
            onTextChanged: {
                labelCharacters.text = 160 - (text.length % 160)
                labelMessages.text = "/" + (parseInt(text.length / 160) + 1)
            }
        }
        //Setting up textEditMessage background
        background: Rectangle {
            id:textEdit1Rectangle
            anchors.fill: parent
            color: "white"
            border.width: 1
            border.color: "gray"
            radius:4
        }
        Rectangle {
            x: -11
            y: 179
            width: textEdit1Rectangle.width-2
            height: textEdit1Rectangle.radius
            color: "white"
            anchors.bottomMargin: -11
        }
    }
    //Label that shows number of characters entered
    Label {
        id: labelCharacters
        x: 291
        y: 259
        text: "160"
        anchors.right: labelMessages.left
        anchors.rightMargin: 2
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 36
    }
    //Label that shows number of messages written
    Label {
        id: labelMessages
        x: 311
        text: qsTr("/ 1")
        anchors.right: parent.right
        anchors.rightMargin: 9
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 36
    }
    //Label for online help link
    Label {
        id: labelOnlineHelp
        y: 278
        width: 58
        height: 13
        text: '<html><a href="http://google.com">Online Help</a></html>'
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 17
        anchors.left: parent.left
        anchors.leftMargin: 9

        onLinkActivated: Qt.openUrlExternally("http://google.com")
    }
    //Label for Rates
    Label {
        id: labelRates
        x: 272
        y: 278
        text: '<html><a href="http://google.com">See Rates</a></html>'
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 17
        anchors.right: parent.right
        anchors.rightMargin: 9

        onLinkActivated: Qt.openUrlExternally("http://google.com")
    }
    //Frame for ComboBox and TextInput
    Frame {
        id:focusscope
        y: 20
        width: 225
        height: 25
        anchors.left: parent.left
        anchors.leftMargin: 9
        property string  sourceNormal:"qrc:/field_normal.png"
        property string  sourceFocused:"qrc:/field_focus.png"
        //background of the frame, normal and focused image
        Image {
            id: imageFocusScope
            x: -12
            y: -12
            height: focusscope.height
            width: focusscope.width
            source: textInput.activeFocus ? focusscope.sourceNormal : focusscope.sourceFocused
        }
        //Rectangle with curved angles for the images
        background: Rectangle {
            id:textInputRectangle
            width: 254
            height: 25
            y: focusscope.y
            anchors.fill:focusscope
            radius: 4
        }
        //Combo Box
        ComboBox {
            id: comboBox
            y: -10
            height: 23
            width: 220
            wheelEnabled: true
            flat: true
            anchors.left: parent.left
            anchors.leftMargin: -7
            currentIndex: 0
            model: myModel
            //Changing the arrow image of ComboBox
            indicator:Image{
                x: 213
                y: 24
                width: 7
                height: 4
                anchors.verticalCenter: parent.verticalCenter
                anchors.leftMargin: 40
                anchors.bottomMargin: 5
                anchors.left: comboBox.left
                source: "qrc:/combo_arrow.png"
            }
            //Background rectangle with courved angles
            background: Rectangle {
                id:comboBoxRectangle
                width: 54
                height: 20
                implicitHeight: 150
                anchors.fill: comboBox
                color: "transparent"
                radius: 4
            }

            textRole: "display"

            //Slot, sends prefix, from selected item in combo box to text Input
            onActivated: {textInput.text = "+" + model[comboBox.currentIndex].prefix}

            //Image of combo box
            Image {
                anchors {
                    verticalCenter: parent.verticalCenter
                    left: parent.left
                    leftMargin: 5
                }
                source: "qrc:/"+myModel[comboBox.currentIndex].icon+".jpg"
            }
            //delegate to show items in correct way
            delegate: ItemDelegate {
                id: myDelegate

                //Background and highlight
                background: Rectangle {
                    anchors.fill: myDelegate
                    color: myDelegate.hovered ? "lightgray" : "transparent"
                }
                padding: 0
                height: 25
                width: 220
                //RowLayout, here image, name and prefix of every country is created and arranged
                contentItem: RowLayout {
                    spacing: 5
                    //Image
                    Rectangle {
                        height: 25
                        width:25
                        color:"transparent"
                        Image {
                            id: name
                            height: 15
                            width: 20
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.right: parent.right
                            anchors.rightMargin: 1
                            horizontalAlignment: Image.AlignRight
                            source: modelData.icon
                        }
                    }
                    //Name
                    Rectangle {
                        height: 25
                        width: 60
                        color:"transparent"
                        Text {
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.left: parent.left
                            anchors.leftMargin: 3
                            text: modelData.name
                        }
                    }
                    //Prefix
                    Rectangle {
                        id:prefixRect
                        height: 25
                        width: 100

                        color:"transparent"
                        Text {
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.right: parent.right
                            anchors.rightMargin: 10
                            Text {
                                anchors.right:parent.right
                                text: "+"+modelData.prefix
                                color: myDelegate.hovered ? "black" : "gray"
                            }
                        }
                    }
                }
            }

            //Text Input for Numbers
            TextInput {
                id: textInput
                focus: true
                property string placeholderText: "enter phone number"
                x: 56
                y: 2
                width: 156
                height: 20
                verticalAlignment: Text.AlignHCenter
                layer.enabled: true
                wrapMode: TextInput.Wrap
                font.pixelSize: 14
                //Default text
                Text {
                    y: 17
                    width: 99
                    height: 20
                    text: textInput.placeholderText
                    anchors.top: parent.top
                    anchors.topMargin: 0
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    color: "#aaa"
                    visible: !textInput.text && !textInput.activeFocus
                }
                //Instance of function class
                IndexOfCountry{
                    id:countryIndex
                }
                //Calling c++ function getIndex() and setting ComboBox current index to getIndex return value
                onTextChanged:{ comboBox.currentIndex = countryIndex.getIndex(textInput.text.trim())}
            }
        }
    }
}
