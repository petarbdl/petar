import QtQuick 2.0
import QtQuick.Layouts 1.12

RowLayout{
    spacing: 4
    Text {
        id:tmp2
        height: 12
        text: "or"
    }
    MyText {
        text: "Delete this list"
        onClicked: {
            modelList.deleteList(currentListIndex)
        }
    }
}

