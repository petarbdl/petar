import QtQuick 2.0
import QtQuick.Controls 2.13
import QtQuick.Layouts 1.13

Frame {
    id:focusscope
    width: 225
    height: 25
    property string  sourceNormal:"qrc:/field_normal.png"
    property string  sourceFocused:"qrc:/field_focus.png"
    //background of the frame, normal and focused image
    Image {
        id: imageFocusScope
        width: 225
        height: 25
        anchors {
            topMargin: -12
            leftMargin: -12
            rightMargin: -12
            bottomMargin: -12
            fill: parent
        }
        source: textInput.activeFocus ? focusscope.sourceNormal : focusscope.sourceFocused
    }
    background: Rectangle {
        height: 25
        width: 225
        anchors.fill: parent
        radius: 4
        anchors.topMargin: 0
    }
    //Combo Box
    MyComboBox {
        id: comboBox
        anchors {
            top: parent.top
            topMargin: -7
        }
    }
    //Text Input for Numbers
    MyTextInput {id: textInput
        anchors {
            bottom: parent.bottom
            bottomMargin: -12
            top: parent.top
            topMargin: -7
            left: parent.left
            leftMargin: 42
            right: parent.right
            rightMargin: -12
        }
    }
}
