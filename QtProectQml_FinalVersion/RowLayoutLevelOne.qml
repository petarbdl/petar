import QtQuick 2.0
import QtQuick.Layouts 1.13
import QtQuick.Controls 2.13

RowLayout {
    id: rowLayoutFirst
    x: 9
    width: 300
    height: 27

    RowLayout {
        id: rowLayout4
        width: 61
        height: 14
        //Credit Label
        Label {
            id: creditLabel
            text: "Credit"
        }
        //Konto Label
        Label {
            id: kontoLabel
            text: '<html><a href="http://google.com">0.00$</a></html>'
            horizontalAlignment: Text.AlignLeft
            onLinkActivated: Qt.openUrlExternally("http://google.com")
        }
    }
    //BuyCredit label
    Label {
        id: buyCreditLabel
        text: "Buy Credit"
        Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
    }
}
