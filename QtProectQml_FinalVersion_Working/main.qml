import QtQuick 2.12
import QtQuick.Window 2.2
import QtQuick.Layouts 1.13

import GetIndex 1.0//c++ function

Window {
    id: window
    width: 333
    height: 308
    visible: true
    //In this component is Window's background and gradient
    MainWindowBackground {}
    //Components are organised in ColumnLayout
    ColumnLayout {
        id: columnLayout
        anchors.fill: parent
        spacing: 1
        //First Level is composed from three labels
        RowLayoutLevelOne {
            Layout.minimumWidth: columnLayout.width-20
            Layout.rightMargin: 9
            Layout.leftMargin: 9
            Layout.topMargin: 3
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignHCenter | Qt.AlignTop
        }
        //Secound Level is composed from ComboBox, TextInput and Button
        RowLayoutLevelTwo {
            Layout.bottomMargin: 0
            Layout.minimumWidth: columnLayout.width-20
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.topMargin: 10
            Layout.fillHeight: true
            Layout.rightMargin: 9
            Layout.leftMargin: 9
            Layout.fillWidth: true
        }
        //Third Level contains TextEdit and two labels
        RowLayoutLevelThree {
            Layout.bottomMargin: 0
            padding: 12
            Layout.topMargin: 15
            Layout.fillHeight: true
            Layout.rightMargin: 9
            Layout.leftMargin: 9
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignHCenter | Qt.AlignBottom
            //Slot for counting characters and messages, sends the info to Labels
            idMyTextEdit.onTextChanged: {
                levelFiveRow.textInLabelC = 160 - (textMyTextEdit.length % 160)
                levelFiveRow.textInLabelM = "/" + (parseInt(textMyTextEdit.length / 160) + 1)
            }
        }
        RowLayoutLevelFive {
            id:levelFiveRow
            Layout.alignment: Qt.AlignRight | Qt.AlignTop
            Layout.topMargin: 0
            spacing: 3
            Layout.bottomMargin: 30
            Layout.rightMargin: 9
        }
        //Fourt Buttom Level contains two label with links
        RowLayoutLevelFour {
            Layout.minimumWidth: columnLayout.width-20
            Layout.fillWidth: false
            spacing: 0
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.bottomMargin: 3
            Layout.rightMargin: 9
            Layout.leftMargin: 9
        }
    }
}
