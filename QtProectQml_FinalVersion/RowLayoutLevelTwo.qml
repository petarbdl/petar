import QtQuick 2.0
import QtQuick.Layouts 1.13
import QtQuick.Controls 2.13

RowLayout {
    id: rowLayoutSecond
    width: 310
    height: 43
    //Frame for ComboBox and TextInput
    FrameComboBoxTextInput {
        Layout.minimumHeight: 25
        Layout.minimumWidth: 225
        Layout.preferredHeight: 0
        Layout.preferredWidth: 0
    }
    //Send Button
    MyButton {
        id: myButton
    }
}
