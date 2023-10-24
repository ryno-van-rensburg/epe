import QtQuick

Rectangle
{
    id: root
    width: 1920; height: 1080
    color: "Transparent"

    signal switchToStartScreen
    property int prompt_state: 0 // 0 is suggest, 1 is accusse
    property int dice_radius: 50 // pixels
    property int dice_moves: 1

    Image {
        id: background
        x: 0
        y: 0
        width: 1920
        height: 1080
        source: "images/GameBoard.png"
        fillMode: Image.PreserveAspectFit
    }
    
    Item {
        x: 457
        y: 199
        width: 1006
        height: 677

        MouseArea{
            anchors.fill: parent
            onClicked: {
                console.debug("x: " +mouseX + " y: " +mouseY + " Room: " + client.getRoomNumber(mouseX, mouseY))
                var room = client.getRoomNumber(mouseX, mouseY)
                console.debug(client.getXY(room))

            }
        }


        Player {
            id: player1
            playerId : 1
            x: 551
            y: 253
            initial_x : x
            initial_y: y
            dragEnable: false
            color: "#00fefefe"
            clip: false
            //anchors.centerIn: parent
            playerIcon: "images/player1_icon.png"
        }
        Player {
            id: player2
            playerId : 2
            x: 389
            y: 359
            initial_x : x
            initial_y: y
            dragEnable: false
            color: "#00fefefe"
            clip: false
            //anchors.centerIn: parent
            playerIcon: "images/player2_icon.png"
        }

        Player {
            id: player3
            playerId : 3
            x: 544
            y: 359
            initial_x : x
            initial_y: y
            dragEnable: false
            color: "#00ffffff"
            playerIcon: "images/player3_icon.png"
            //anchors.centerIn: parent
        }

        Player {
            id: player4
            playerId : 4
            x: 389
            y: 264
            initial_x : x
            initial_y: y
            dragEnable: false
            visible: true
            color: "#00ffffff"
            //anchors.centerIn: parent
            playerIcon: "images/player4_icon.png"
        }

        Player {
            id: player5
            playerId : 5
            x: 464
            y: 191
            initial_x : x
            initial_y: y

            dragEnable: false
            color: "#00ffffff"
            //anchors.centerIn: parent
            playerIcon: "images/player5_icon.png"
        }

        Player {
            id: player6
            playerId : 6
            x: 464
            y: 304
            initial_x : x
            initial_y: y
            dragEnable: false
            color: "#00ffffff"
            //anchors.centerIn: parent
            playerIcon: "images/player6_icon.png"
        }


        Connections {
            target: client
            ignoreUnknownSignals: true
            function onPromptRequested(){
                prompt_state = 2;
                suggestionPrompt.visible = true;
            }

            function onGameEndedSignal(){
                console.debug("Game Ended");
                switchToStartScreen();
            }

            function onPlayerPositionUpdated(playerId,newX,newY){
                console.debug(newX+" "+newY);
                switch(playerId){
                case 1:
                    player1.x = newX;
                    player1.y = newY;
                    break;
                case 2:
                    player2.x = newX;
                    player2.y = newY;
                    break;
                case 3:
                    player3.x = newX;
                    player3.y = newY;
                    break;
                case 4:
                    player4.x = newX;
                    player4.y = newY;
                    break;
                case 5:
                    player5.x = newX;
                    player5.y = newY;
                    break;
                case 6:
                    player6.x = newX;
                    player6.y = newY;
                    break;
                }
                
                // if (playerIndex !== null) {
                //     player.xGrid = newX;
                //     player.yGrid = newY;
                // }else {
                //     console.debug("Player with ID", playerId, "not found in the model.");
                // }
                //}
                //handleUpdate(playerId, newX, newY);
            }
        }
    }


    Column {
        id: c_player
        x: 19
        y: 109
        width: 312
        height: 857
        spacing: 10

        Text{
            width: c_player.width;
            color: client.getPlayerTurn === 1 ? "white" : "#7eacbb"
            font.pointSize: 39;
            text:{
                client.getPlayerID(1);
            }

            font.family: "Pixel"
        }

        Text {
            width: c_player.width
            color: client.getPlayerTurn === 2 ? "white" : "#7eacbb"
            text:{
                client.getPlayerID(2);
            }
            font.family: "Pixel"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.getPlayerTurn === 3? "white" : "#7eacbb"
            text:{
                client.getPlayerID(3);
            }
            font.family: "Pixel"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.getPlayerTurn === 4 ? "white" : "#7eacbb"
            text:{
                client.getPlayerID(4);
            }
            font.family: "Pixel"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.getPlayerTurn === 5 ? "white" : "#7eacbb"
            text:{
                client.getPlayerID(5);
            }
            font.family: "Pixel"
            font.pointSize: 39
        }

        Text {
            width: c_player.width
            color: client.getPlayerTurn === 6 ? "white" : "#7eacbb"
            text:{
                client.getPlayerID(6);
            }
            font.family: "Pixel"
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
                noteBook.visible = false;
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
                    prompt_state = 0;
                    if(client.isMyTurn === true) {
                        suggestionPrompt.visible = true
                    }
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
                    prompt_state = 1;
                    panelState = !panelState;
                    if(client.isMyTurn === true) {
                        suggestionPrompt.visible = true
                    }
                    
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
                    if(client.isMyTurn === true) {
                        dice_moves = client.getCurrentDiceValue()
                        panelState = !panelState; // Toggle the panel state
                        // This ensures only the current player can be moved
                        player1.dragEnable = false;
                        player2.dragEnable = false;
                        player3.dragEnable = false;
                        player4.dragEnable = false;
                        player5.dragEnable = false;
                        player6.dragEnable = false;
                        if(client.isMyTurn === true){
                            switch(client.getPlayerTurn){
                            case 1:
                                player1.dragEnable = true;
                                break;
                            case 2:
                                player2.dragEnable = true;
                                break;
                            case 3:
                                player3.dragEnable = true;
                                break;
                            case 4:
                                player4.dragEnable = true;
                                break;
                            case 5:
                                player5.dragEnable = true;
                                break;
                            case 6:
                                player6.dragEnable = true;
                                break;
                            }
                        }
                    }
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
                    noteBook.visible = true;
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
                    if(client.isMyTurn === true) {
                        client.onTurnEnded();
                    }
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
        }



        Rectangle {
            id: noteBook
            x: -16
            y: 0
            width: 274
            height: 1080
            visible: false
            color: "#3b4252"
            radius: 20
            border.width: 0

            Text {
                id: text1
                x: 11
                y: 109
                color: "#5e81ac"
                text: qsTr("NOTEBOOK")
                font.pixelSize: 41
                font.family: "Pixel"
            }

            ListView {
                anchors.fill: parent
                anchors.rightMargin: 29
                anchors.bottomMargin: 44
                anchors.leftMargin: 11
                anchors.topMargin: 162
                model: ListModel {
                    ListElement { item_name: "Courtyard"; clicked: false }
                    ListElement { item_name: "Garage"; clicked: false }
                    ListElement { item_name: "Game Room"; clicked: false }
                    ListElement { item_name: "Bedroom"; clicked: false }
                    ListElement { item_name: "Bathroom"; clicked: false }
                    ListElement { item_name: "Study"; clicked: false }
                    ListElement { item_name: "Kitchen"; clicked: false }
                    ListElement { item_name: "Dining Room"; clicked: false }
                    ListElement { item_name: "Living Room"; clicked: false }
                    ListElement { item_name: "Candlestick"; clicked: false }
                    ListElement { item_name: "Dagger"; clicked: false }
                    ListElement { item_name: "Lead Pipe"; clicked: false }
                    ListElement { item_name: "Pistol"; clicked: false }
                    ListElement { item_name: "Rope"; clicked: false }
                    ListElement { item_name: "Wrench"; clicked: false }
                    ListElement { item_name: "Mr. Green"; clicked: false }
                    ListElement { item_name: "Mustard"; clicked: false }
                    ListElement { item_name: "Mrs. Peacock"; clicked: false }
                    ListElement { item_name: "Proff Plum"; clicked: false }
                    ListElement { item_name: "Miss Scarlet"; clicked: false }
                    ListElement { item_name: "Mrs. White"; clicked: false }


                    // Add more elements as needed
                }

                delegate: Item {
                    width: 200
                    height: 50

                    property string item_name: model.item_name
                    property bool clicked: model.clicked

                    Text {
                        anchors.centerIn: parent
                        text: item_name
                        font.pointSize: 20
                        font.family: "Pixel"
                        color: clicked ? "white" : "#7eacbb"

                        MouseArea {
                            anchors.fill: parent
                            onClicked: {
                                model.clicked = !model.clicked

                            }
                        }
                    }
                }
            }

        }

        Image {
            id: image
            x: 83
            y: 19
            width: 113
            height: 95
            source: mouse_panel.hovered? "images/panel_close_active.png":"images/panel_close_inactive.png"
            fillMode: Image.PreserveAspectFit
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
            // something: mouse_.hovered? "prop":"prop"
            onClicked: {
                if (prompt_state === 0){ // prompt state shows acc/suggest since i reuse menus
                    console.log("Suggesting")
                    client.onSuggestionMade(tRoom.text,tPerson.text, tWeapon.text)
                } else if (prompt_state ==1) {
                    console.log("Accusing")
                    client.onAccusationMade(tRoom.text,tPerson.text, tWeapon.text)
                } else if (prompt_state ==2){
                    console.log("Responding")
                    client.onRequestAnswered(tRoom.text,tPerson.text,tWeapon.text)
                }

                suggestionPrompt.visible = false
                tRoom.text = "ROOM";
                tPerson.text = "PERSON";
                tWeapon.text = "WEAPON";
            }

            HoverHandler {
                id: mouse_confirm_sugg
                acceptedDevices: PointerDevice.Mouse
                cursorShape: Qt.PointingHandCursor
            }
        }

        TextInput {
            id: tPerson
            x: 531
            y: 751
            width: 273
            height: 50
            color: "#5e81ab"
            text: qsTr("PERSON")
            font.pixelSize: 50
            font.family: "Pixel"
        }

        TextInput {
            id: tWeapon
            x: 845
            y: 751
            width: 273
            height: 50
            color: "#5e81ab"
            text: qsTr("WEAPON")
            font.pixelSize: 50
            font.family: "Pixel"
        }

        TextInput {
            id: tRoom
            x: 1170
            y: 751
            width: 273
            height: 50
            color: "#5e81ab"
            text: qsTr("ROOM")
            font.pixelSize: 50
            font.family: "Pixel"
        }

        Text {
            id: prompt_type
            x: 531
            y: 245
            width: 901
            height: 86
            color: "#d2d9e3"
            text: {
                switch(prompt_state)
                {
                case 0:
                    return qsTr("SUGGESTION");
                case 1:
                    return qsTr("ACCUSATION");
                case 2:
                    return qsTr("RESPOND TO SUGGESTION");
                default:
                    break;
                }
            }
            font.pixelSize: 70
            horizontalAlignment: Text.AlignHCenter
            font.weight: Font.Normal
            font.family: "Pixel"
        }
    }

}
