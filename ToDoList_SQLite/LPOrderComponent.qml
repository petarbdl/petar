import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import QtQuick.Controls.Styles 1.4
import QtQml.Models 2.1

Component {
    ColumnLayout{
        spacing: 5
        Repeater {
            id:root
            model:DelegateModel{
                id:visualModel
                model: mainListModel
                delegate: DropArea {
                    visible: done === true ? false : true
                    width: 25; height: 25
                    MouseArea {
                        id: mouseArea
                        anchors.fill: parent
                        cursorShape: Qt.SizeAllCursor
                    }
                    onExited: {
                        visualModel.items.move(drag.source.visualIndex, icon.visualIndex)
                        mainListModel.list.swapItems(drag.source.visualIndex, icon.visualIndex)
                    }
                    property int visualIndex: DelegateModel.itemsIndex
                    Binding { target: icon; property: "visualIndex"; value: visualIndex }
                    Rectangle {
                        id: icon
                        property int visualIndex: 0
                        width: 25; height: 10
                        anchors {
                            horizontalCenter: parent.horizontalCenter;
                            verticalCenter: parent.verticalCenter
                        }
                        Image {
                            anchors.top: parent.top
                            anchors.topMargin: 2
                            id:dragImage
                            source:"qrc:/ta-daList/drag.gif"
                        }
                        CheckBox {
                            anchors.left: dragImage.right
                            anchors.leftMargin: 10
                            id:chechBox
                            checked: done
                            onClicked: {
                                done = true
                            }
                            indicator:Rectangle {
                                anchors.centerIn: parent.Center
                                implicitHeight: 15
                                implicitWidth: 15
                                radius: 3
                                border.color: "lightGray"
                                border.width: 1
                                Rectangle {
                                    visible: chechBox.checked
                                    color: "lightGray"
                                    radius: 3
                                    border.color: "gray"
                                    border.width: 1
                                    anchors.fill: parent
                                }
                            }
                        }
                        Text {
                            anchors.left: chechBox.right
                            font.pixelSize: 13
                            text: name
                        }
                        DragHandler {
                            id: dragHandler
                            xAxis.enabled: false

                        }
                        Drag.active: dragHandler.active
                        Drag.source: icon
                        opacity: dragHandler.active ? 0.6 : 1
                        states: [
                            State {
                                when: icon.Drag.active
                                ParentChange {
                                    target: icon
                                    parent: root
                                }

                                AnchorChanges {
                                    target: icon
                                    anchors.horizontalCenter: undefined
                                    anchors.verticalCenter: undefined
                                }
                            }
                        ]
                    }
                }
            }
        }
    }
}
