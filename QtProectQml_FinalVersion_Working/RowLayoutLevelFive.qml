import QtQuick 2.0
import QtQuick.Layouts 1.13
import QtQuick.Controls 2.13

RowLayout {
    property alias textInLabelC: labelCharacters.text
    property alias textInLabelM: labelMessages.text
    //Label for Counting Characters
    Label {
        id: labelCharacters
        x: 266
        text: "160"
    }
    //Label for counting number of messages
    Label {
        id: labelMessages
        x: 290
        y: 174
        width: 13
        height: 15
        text: "/ 1"
    }
}
