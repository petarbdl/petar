import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

Page {
    id:editPage
    width: 640
    height: 480
    header: EditPageHeader {}
    ColumnLayout {
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.top: parent.top
        spacing: 7
        anchors.topMargin: 10
        ColumnLayout {
            Layout.topMargin: 20
            spacing: 3
            Text {
                color: "brown"
                text: "TITLE"
            }
            Rectangle {
                id:textInputRectTitle
                height: 30
                width: 400
                border.width: 1
                border.color: textInputTitle.focus ? "lightBlue" : "gray"
                TextInput {
                    id:textInputTitle
                    anchors.fill: parent
                    text: mineTitle
                    font.pointSize: 15
                    maximumLength: 30
                    padding: 3
                    wrapMode: TextInput.Wrap
                    layer.enabled: true
                    onTextEdited: {
                        mineTitle = textInputTitle.text
                        modelList.setListName(mineTitle, currentListIndex);
                    }
                }
            }
        }
        ColumnLayout {
            Text {
                color: "brown"
                text: "Items"
            }
            Repeater {
                id:localListView
                model: model1234
                delegate: Rectangle {
                    id:textInputRectD
                    height: 25
                    width: 400
                    border.width: 1
                    border.color: textInputD.focus ? "lightBlue" : "gray"

                    TextInput {
                        id:textInputD
                        padding: 3
                        Layout.fillWidth: true
                        width: 400
                        text: if(done === true){

                                  textInputRectD.visible = false
                              }
                              else
                              {
                                  text = name
                              }

                        wrapMode: TextInput.Wrap
                        maximumLength: 50
                        function loclaF(){
                            if(done === true)
                                textInputRectD.visible = false;
                        }

                        onTextEdited: {
                            name = text
                        }
                    }
                    EditPageDeleteCircle{}
                }
            }
        }
        ColumnLayout{
            spacing: 3
            Text {
                color: "brown"
                text: "DESCRIPTION/NOTES(optional)"
            }
            Rectangle {
                id:textInputRectDesc
                height: 100
                width: 400
                border.width: 1
                border.color: textInputDesc.focus ? "lightBlue" : "gray"
                TextArea {
                    id:textInputDesc
                    anchors.fill: parent
                    text: mineDesc
                    wrapMode: TextInput.Wrap
                    layer.enabled: true
                    onTextChanged: {
                        mineDesc = textInputDesc.text
                        modelList.setListDescription(mineDesc, currentListIndex);
                    }
                }
            }
        }
        EditPageFooter {
            Layout.topMargin: 10
        }
    }
}
