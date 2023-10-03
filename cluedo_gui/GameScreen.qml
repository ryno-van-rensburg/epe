import QtQuick

Rectangle
{
    id: root
    width: 1920; height: 1080
    color: "Transparent"

    signal switchToStartScreen

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

        Text{
            width: c_player.width;
            color: client.playerTurn === 1 ? "white" : "cyan";
            font.pointSize: 39;
            text:"Player  1";
            font.family: customFontLoader.name}

        Text {
            width: c_player.width
            color: client.playerTurn === 2 ? "white" : "cyan";
            text: "Player 2"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.playerTurn === 3 ? "white" : "cyan";
            text: "Player 3"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.playerTurn === 4 ? "white" : "cyan";
            text: "Player 4"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.playerTurn === 5 ? "white" : "cyan";
            text: "Player 5"
            font.family: "Space Age"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.playerTurn === 6 ? "white" : "cyan";
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
        source: mouse_panel.hovered? "images/icon_out_active.png":"images/icon-out.png"
        fillMode: Image.PreserveAspectFit

        MouseArea {
            id: mouseArea
            anchors.fill: parent
            onClicked: {
                panelState = !panelState; // Toggle the panel state
            }
        }
        HoverHandler {
                    id: mouse_panel
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
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
                width: 166
                height: 155
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

                Image {
                    id: img_sugg
                    x: 0
                    y: 0
                    width: 134
                    height: 121
                    source: mouse_sugg.hovered ? "images/panel_suggest_active.png":"images/panel_suggest_inactive.png"
                    fillMode: Image.PreserveAspectFit
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

                Image {
                    id: image4
                    x: 0
                    y: 0
                    width: 144
                    height: 121
                    source:mouse_acc.hovered? "images/panel_accuse_active.png":"images/panel_accuse_inactive.png"
                    fillMode: Image.PreserveAspectFit
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

                Image {
                    id: image3
                    x: 0
                    y: 0
                    width: 156
                    height: 131
                    source:mouse_mov.hovered? "images/panel_move_active.png":"images/panel_move_inactive.png"
                    fillMode: Image.PreserveAspectFit
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

                Image {
                    id: image2
                    x: 0
                    y: 0
                    width: 136
                    height: 159
                    source: mouse_note.hovered? "images/panel_notebook_active.png":"images/panel_notebook_inactive.png"
                    fillMode: Image.PreserveAspectFit
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
                    client.onTurnEnded();
                }

                HoverHandler {
                    id: mouse_endturn
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }

                Image {
                    id: image1
                    x: 0
                    y: 0
                    width: 144
                    height: 127
                    source: mouse_endturn.hovered? "images/panel_endturn_active.png":"images/panel_endturn_inactive.png"
                    fillMode: Image.PreserveAspectFit
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
                    switchToStartScreen();
                }

                HoverHandler {
                    id: mouse_exit
                    acceptedDevices: PointerDevice.Mouse
                    cursorShape: Qt.PointingHandCursor
                }

                Image {
                    id: img_exit
                    x: 0
                    y: 0
                    width: 144
                    height: 121
                    source: mouse_exit.hovered? "images/panel_quit_active.png":"images/panel_quit_inactive.png"
                    fillMode: Image.PreserveAspectFit
                }
            }

            Image {
                id: image
                x: 107
                y: 19
                width: 113
                height: 95
                source: mouse_panel.hovered? "images/panel_close_active.png":"images/panel_close_inactive.png"
                fillMode: Image.PreserveAspectFit
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
        signal onSuggestButtonClicked()
        MouseArea {
            id: btnConfirmSuggestion
            x: 1449
            y: 692
            width: 153
            height: 151
            // something: mouse_.hovered? "prop":"prop" 
            onClicked: {
                onSuggestButtonClicked()
                console.log("Clicked on btnConfirmSuggestion" )
                suggestionPrompt.visible = false
                client.onSuggestionMade("ROOM","PERSON","ITEM")
            }

            HoverHandler {
                id: mouse_confirm_sugg
                acceptedDevices: PointerDevice.Mouse
                cursorShape: Qt.PointingHandCursor
            }
        }
    }
}
