import QtQuick
Rectangle
{
    id: root
    width: 1920; height: 1080
    color: "Transparent"




    Image {
        id: image
        x: 0
        y: 0
        width: 1920
        height: 1080
        source: "images/GameBoard.png"
        fillMode: Image.PreserveAspectFit
    }

    Column {
        id: c_player
        x: 19
        y: 109
        width: 312
        height: 857
        spacing: 10

        FontLoader {
            id: customFontLoader
            source: "imports/space.ttf" // for some reason other font loads automatically but not this one
        }

        Text{width: c_player.width; color: "#2dc0d3"; font.pointSize: 39; text:"Player  1"; font.family: customFontLoader.name}

        Text {
            width: c_player.width
            color: "#2dc0d3"
            text: "Player 2"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: "#2dc0d3"
            text: "Player 3"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: "#2dc0d3"
            text: "Player 4"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: "#2dc0d3"
            text: "Player 5"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: "#2dc0d3"
            text: "Player 6"
            font.family: "Space Age"
            font.pointSize: 39
        }
    }
    property bool panelState: false // open: true
    onPanelStateChanged: {
              slidingPanel.x = panelState ? (parent.width - slidingPanel.width) : parent.width;
    }

    Image {
        id: panelIcon
        x: 1792
        y: 8
        width: 128
        height: 120
        source: "images/icon-out.png"
        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseArea
            anchors.fill: parent
            onClicked: {
                            panelState = !panelState; // Toggle the panel state
                        }
        }
    }
   Rectangle{
        id: slidingPanel
        y: 0
        width: 258
        height: 1080
        x: panelState ? (parent.width - width) : parent.width
        // Animate the panel's position
        Behavior on x {
            NumberAnimation {
                duration: 500 // Animation duration in milliseconds
                easing.type: Easing.InOutQuad // Easing function
            }
        }


        Image {
            id: panel
            x: -24
            y: 0
            width: 282
            height: 1080
            source: "images/panel.png"
            fillMode: Image.Stretch
        }
   }
}
