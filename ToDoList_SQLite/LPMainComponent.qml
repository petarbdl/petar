import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import QtQuick.Controls.Styles 1.4
import QtQml.Models 2.13

    ColumnLayout{
        spacing: 5
        Repeater {
            model: mainListModel
            delegate:Rectangle {               
                width: 100
                height: 15
                visible: done === true ? false : true
                CheckBox {
                    id:checkBox
                    anchors.left: parent.left
                    checked:done
                    onClicked: {
                        done = true
                        myPageLoader.active = false
                        myPageLoader.active = true
                    }
                    indicator:Rectangle {
                        anchors.centerIn: parent.Center
                        implicitHeight: 15
                        implicitWidth: 15
                        radius: 3
                        border.color: "lightGray"
                        border.width: 1
                        Rectangle {
                            visible: false
                            color: "lightGray"
                            radius: 3
                            border.color: "gray"
                            border.width: 1
                            anchors.fill: parent
                        }
                    }
                }
                Text {
                   anchors {
                        left: checkBox.right
                        leftMargin: 4
                    }
                    font.pixelSize: 13
                    text: name
                }
            }
        }
        RowLayout {
            spacing: 5
            Layout.leftMargin: 40
            Layout.topMargin: 10
            Layout.bottomMargin: 10
            MyText {
                id:addItemText
                text: "Add another item"
                onClicked: {
                    addItem.visible = true;
                    addItemText.visible = false
                    localComponentLoader.visible = false
                }
            }
            Loader {
                id:localComponentLoader
                active: modelList.itemsLeft(currentListIndex) === 0 ? true : false
                source: "DeleteList.qml"
            }
        }
        LPMainCAddItem {
            id:addItem
            Layout.bottomMargin: 10
            Layout.topMargin: 10
            width: 140
            height: 13
        }
        Repeater {
            model: mainListModel
            Rectangle {
                width: 200
                height: 15
                visible:done === true ? true : false
                CheckBox {
                    id:checkBoxSecond
                    anchors.left: parent.left
                    checked: true
                    onClicked: {
                        done = false
                        myPageLoader.active = false
                        myPageLoader.active = true
                    }
                    indicator:Rectangle {
                        anchors.centerIn: parent.Center
                        implicitHeight: 15
                        implicitWidth: 15
                        radius: 3
                        border.color: "lightGray"
                        border.width: 1
                        Rectangle {
                            visible: true
                            color: "lightGray"
                            radius: 3
                            border.color: "gray"
                            border.width: 1
                            anchors.fill: parent
                        }
                    }
                }
                Text {
                    anchors.left: checkBoxSecond.right
                    anchors.leftMargin: 4
                    font.pixelSize: 13
                    text:name
                }
            }
        }
    }
