import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
Window {
    id :root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    RowLayout {
        anchors.fill: parent
        anchors.rightMargin: 10
        Rectangle {
            Layout.fillWidth: true
        }

        CpuMHZ {
            id: cpuM
            Layout.fillHeight: true
            Layout.fillWidth: true
        }
        Rectangle {
            Layout.fillWidth: true
        }
        Switch {
            id: switchTest
            text: "Test"
            checked: switchTest.pressed
        }
    }
}
