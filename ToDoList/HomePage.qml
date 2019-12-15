import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import "qrc:/"

Page {
    id: page
    width: 640
    height: 480
    header: HomePageHeader {
        anchors{
            left: parent.left
            leftMargin: 10
            top: parent.top
            topMargin: 10
        }
    }
    ColumnLayout{
        anchors{
            topMargin: 30
            top: parent.top
            left: parent.left
            leftMargin: 10
        }
        Text {
            width: 44
            height: 13
            text: "MY LISTS"
        }
        ColumnLayout {
            spacing: 12
            Rectangle {
                height: 1
                width: 620
                color: "#EFEFEF"
            }
            Repeater {
                model:modelList
                delegate: HomePageDelegateUncompleted {}
            }
            RowLayout {
                Label {
                    text: "Completed lists:"
                    font.bold: true
                }
                Repeater {
                    model:modelList
                    delegate: HomePageDelegateCompleted {}
                }
            }
        }
        Rectangle {
            height: 1
            width: 620
            color: "#EFEFEF"
            Layout.topMargin: 50
        }
    }
}
