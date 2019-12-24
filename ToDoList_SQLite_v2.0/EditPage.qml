import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13

Page {
    id:editPage
    width: 640
    height: 480
    property alias getTextInputDescription: editPageContent.textInputDesc
    property alias getTextInputTitle: editPageContent.textInputTit
    header: EditPageHeader {
        anchors.left: parent.left
        anchors.leftMargin: 10
    }
    ColumnLayout {
        EditPageContent {
            id:editPageContent
            Layout.topMargin: 10
            Layout.leftMargin: 10
        }
        EditPageFooter {
            Layout.topMargin: 10
        }
    }
}
