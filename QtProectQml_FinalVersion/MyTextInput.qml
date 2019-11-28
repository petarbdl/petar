import QtQuick 2.0
import QtQuick.Layouts 1.13
import QtQuick.Controls 2.13

import GetIndex 1.0//c++ function

TextInput {
    id: textInput
    focus: true
    property string placeholderText: "enter phone number"
    x: 54
    y: 0
    width: 171
    height: 20
    verticalAlignment: Text.AlignHCenter
    layer.enabled: true
    wrapMode: TextInput.Wrap
    font.pixelSize: 14
    //Default text
    Text {
        y: 17
        width: 118
        height: 20
        anchors {
            top: parent.top
            topMargin: 0
            left: parent.left
            leftMargin: 0
        }
        text: textInput.placeholderText
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
