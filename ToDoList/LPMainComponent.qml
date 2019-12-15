import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import QtQuick.Controls.Styles 1.4
import QtQml.Models 2.13

Component {
    id:mainComp
    ColumnLayout{
        height: 150
        spacing: 5
        Repeater {
            model: model1234
            delegate:Rectangle {
                id:myDelegate
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
                    anchors.left: checkBox.right
                    anchors.leftMargin: 4
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
                    localLoader2.visible = false
                }
            }
            Loader {
                id:localLoader2
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
            id:repeter1
            model: model1234
            Rectangle {
                id:myDelegate1
                width: 200
                height: 15
                visible:done === true ? true : false
                CheckBox {
                    id:checkBox1
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
                    id:checkBoxText1
                    anchors.left: checkBox1.right
                    anchors.leftMargin: 4
                    font.pixelSize: 13
                    text:name
                }
            }
        }
    }
}
