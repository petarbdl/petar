import QtQuick 2.0
import QtQuick.Layouts 1.13
import QtQuick.Controls 2.13

RowLayout {
    id: rowLayoutFourth
    width: 310
    height: 16
    //Label for Rates
    Label {
        id: labelRates
        text: '<html><a href="http://google.com">See Rates</a></html>'
        onLinkActivated: Qt.openUrlExternally("http://google.com")
    }
    //Label for online help link
    Label {
        id: labelOnlineHelp
        text: '<html><a href="http://google.com">Online Help</a></html>'
        Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
        onLinkActivated: Qt.openUrlExternally("http://google.com")
    }
}
