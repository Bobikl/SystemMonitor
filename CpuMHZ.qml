import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import Date 1.0

Item {
    id: item
    property var allCoreMHZ: dateToQml.test()

    Timer {
        repeat: true
        interval: 1000
        running: true
        triggeredOnStart: true
        onTriggered: {
            allCoreMHZ = dateToQml.test()
        }
    }

    DateToQml {
        id: dateToQml
    }

    ListView {
        anchors.fill: parent
        model: dateToQml.coreNumber()
        delegate: component
        clip: true
    }
    Component {
        id: component
        Rectangle {
            width: item.width
            height: 30
            color: "lightGrey"
            Text {
                anchors.fill: parent
                text: getCoreMHZ(index)
                font.pixelSize: 25
                horizontalAlignment: Text.AlignHCenter
            }
        }


    }

    function getCoreMHZ(i){
        var str = new Array()
        str = allCoreMHZ.split(",")
        return str[i]
    }

}
