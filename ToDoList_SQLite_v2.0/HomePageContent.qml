import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

ColumnLayout{
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
            Text {
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
