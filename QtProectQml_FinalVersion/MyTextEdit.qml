import QtQuick 2.0
import QtQuick.Controls 2.13

    TextEdit {
        id: textEditMessage
        property string placeholderText: "Enter message here"
        anchors.fill:parent
        horizontalAlignment: Text.AlignLeft
        focus: true
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



