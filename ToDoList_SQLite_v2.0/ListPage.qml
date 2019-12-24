import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.2
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.13
import QtQuick.Controls.Styles 1.4
import QtQml.Models 2.13

Page {
    id:listPage
    width: 640
    height: 480
    property alias textOrderVisible: listPageHeader.setVisibleText
    property alias textSpacerVisible: listPageHeader.setVisibleSpacer
    property alias rootWidth: listPageHeader.setRootWidth
    header: ListPageHeader{
        id:listPageHeader

        anchors {
            left: parent.left
            leftMargin: 10
            top: parent.top
            topMargin: 10
        }
        Component.onCompleted:
        {
            checkVisible();
            rootWidth = 350;
        }
    }
    ColumnLayout {
        ListPageContent {
            id:content
        }
        Rectangle {
            height: 1
            width: 620
            color: "#EFEFEF"
            Layout.topMargin: 50
            Layout.leftMargin: -20
        }
    }
    function checkVisible()
    {
        if(modelList.itemsLeft(currentListIndex) >= 2)
        {
            textOrderVisible = true;
            textSpacerVisible = true;
        }
        else
        {
            textOrderVisible = false;
            textSpacerVisible = false;
            rootWidth = 295
        }
    }
}


