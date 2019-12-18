import QtQuick 2.12
import QtQuick.Controls 2.12

Page {
    id:createPage
    width: 640
    height: 480
    header: CreatePageHeader {
        anchors {
            left: parent.left
            leftMargin: 10
            top: parent.top
            topMargin: 10
        }
    }
    CreatePageContent {
        anchors {
            top: parent.top
            topMargin: 30
            left: parent.left
            leftMargin: 30
        }
    }
}
