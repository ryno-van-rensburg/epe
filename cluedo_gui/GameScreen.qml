import QtQuick
Rectangle
{
    id: root
    width: 1920; height: 1080
    color: "Transparent"

    signal switchToStartScreen()




    Image {
        id: background
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

            MouseArea {
                id: btnSuggest
                x: 91
                y: 194
                width: 144
                height: 121
                onClicked: {
                    console.log("Clicked on btnSuggest" )
                    panelState = !panelState;
                    suggestionPrompt.visible = true

                }

                HoverHandler {
                    id: mouse_sugg
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }
            }

            MouseArea {
                id: btnAccuse
                x: 91
                y: 328
                width: 144
                height: 121
                onClicked: {
                    console.log("Clicked on btnAccuse" )
                }

                HoverHandler {
                    id: mouse_acc
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }
            }

            MouseArea {
                id: btnMove
                x: 91
                y: 455
                width: 144
                height: 121
                onClicked: {
                    console.log("Clicked on btnMove" )
                }

                HoverHandler {
                    id: mouse_mov
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }
            }

            MouseArea {
                id: btnNotebook
                x: 99
                y: 582
                width: 144
                height: 121
                onClicked: {
                    console.log("Clicked on btnNotebook" )
                }

                HoverHandler {
                    id: mouse_note
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }
            }

            MouseArea {
                id: btnEndTurn
                x: 99
                y: 728
                width: 144
                height: 121
                onClicked: {
                    console.log("Clicked on btnEndTurn" )
                }

                HoverHandler {
                    id: mouse_endturn
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }
            }
            MouseArea {
                id: btnExit
                x: 99
                y: 932
                width: 144
                height: 121
                onClicked: {
                    console.log("Clicked on btnExit" )
                    switchToStartScreen()
                }

                HoverHandler {
                    id: mouse_exit
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }
            }
        }
    }

    Image {
      id: suggestionPrompt
      x: 0
      y: 0
      width: 1920
      height: 1080
      visible: false
      source: "images/Suggestion_Prompt.jpeg"
      fillMode: Image.PreserveAspectFit

      MouseArea {
        id:btnCancelSuggetion
        x: 359
        y: 700
        width: 153
        height: 151
        onClicked: {
              console.log("Clicked on btnCancelSuggestion" )
              suggestionPrompt.visible = false

        }

        HoverHandler {
              id: mouse_cancel_sugg
              acceptedDevices: PointerDevice.Mouse
              cursorShape: Qt.PointingHandCursor
        }
      }

      MouseArea {
        id: btnConfirmSuggestion
        x: 1449
        y: 692
        width: 153
        height: 151
        onClicked: {
              console.log("Clicked on btnConfirmSuggestion" )
              suggestionPrompt.visible = false

        }

        HoverHandler {
              id: mouse_confirm_sugg
              acceptedDevices: PointerDevice.Mouse
              cursorShape: Qt.PointingHandCursor
        }
      }
    }
}
