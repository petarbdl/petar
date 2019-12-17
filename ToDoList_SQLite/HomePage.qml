import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import "qrc:/"

Page {
    id: homePage
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
    HomePageContent {
        anchors{
            topMargin: 30
            top: parent.top
            left: parent.left
            leftMargin: 10
        }
    }
}
