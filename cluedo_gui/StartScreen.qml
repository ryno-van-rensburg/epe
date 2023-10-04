import QtQuick
import QtQuick.Controls

// The root element is the Rectangle
Rectangle {
    id: root
    width: 1920; height: 1080
    color: "Transparent"
    signal switchToGameScreen // calling function directly instead of signalling
    property bool validUsername: false;
    Image {
        id: bg
        x: 0
        y: 0
        width: root.width
        height: root.height
        source: "images/Menu-Background.jpg"
        fillMode: Image.PreserveAspectCrop
    }

    Rectangle{
        id: startMenu
        width: root.width; height: root.height
        color: "Transparent"
        Image {
            id: btnAIStart
            x: 1351
            y: 677
            width: 313
            height: 75
            source: mouse1.hovered ? "images/AI-active.png" : "images/AI-inactive.png"
            fillMode: Image.PreserveAspectCrop

            HoverHandler {
                id: mouse1
                acceptedDevices: PointerDevice.Mouse
                cursorShape: Qt.PointingHandCursor
            }
        MouseArea {
            id: aiArea
            x: 1351
            y: 677
            anchors.fill: parent
            onClicked: {
                console.log("Clicked on AI Start")
                btnAIStart.visible = false
                aiArea.enabled = false
                startArea.enabled = false
                btnStart.visible = false
            }
        }

        }

        Image {
            id: btnStart
            x: 1215
            y: 546
            width: 449
            height: 158
            source: mouse2.hovered ? "images/Start-active.png" : "images/Start-inactive.png"
            fillMode: Image.PreserveAspectCrop

            HoverHandler {
                id: mouse2
                acceptedDevices: PointerDevice.Mouse
                cursorShape: Qt.PointingHandCursor
            }
            MouseArea {
            id: startArea
            x: 1215
            y: 546
            anchors.fill: parent
            onClicked: {
                console.log("Clicked on Start")
                btnAIStart.visible = false
                btnStart.visible = false
                namePrompt.visible = true
                aiArea.enabled = false
                startArea.enabled = false
                textInput.focus = true
            }
        }
        }


    }

    Rectangle{
        id: namePrompt
        x: 0
        y: 0
        width: root.width; height: root.height
        opacity: 0.792
        color:"Black"
        visible: false

        Text {
            id: text1
            x: 1208
            y: 501
            width: 567
            height: 59
            color: "#3da29f"
            text: qsTr("ENTER PLAYER NAME")
            font.pixelSize: 34
            font.bold: false
            font.family: "Pixel"
        }

        TextInput {
            id: textInput
            x: 1208
            y: 579
            width: 517
            height: 39
            color: "#89cdd1"
            text: qsTr("PLAYER ID ")
            font.pixelSize: 30
            font.bold: false
            font.family: "Pixel"
            Timer {
                id: blinkTimer
                interval: 500 // 1 second
                repeat: true
                running: true
                onTriggered: {
                    textInput.visible = !textInput.visible;
                }
            }
            onTextEdited: {
                blinkTimer.running = false
                textInput.visible = true
            }
        }
        Connections {
            target: client
            ignoreUnknownSignals: true
            function onValidUsername(){
                validUsername = true
            }
        }

        Text {
            id: confirm
            x: 1208
            y: 746
            width: 118
            height: 59
            color: mouse3.hovered ? "White" : "#4a6261"
            text: qsTr("OK✔️")
            font.pixelSize: 30
            font.family: "Pixel"
            HoverHandler {
                id: mouse3
                acceptedDevices: PointerDevice.Mouse
                cursorShape: Qt.PointingHandCursor
            }
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on Confirm")
                    loading.visible =true
                    namePrompt.visible = false

                    client.onNameEntered(textInput.text);
                    if (validUsername) {
                        closeTimer.running = true
                    }
                }
            }

        }

    }

    Rectangle{
        id: loading
        x: 0
        y: 0
        width: root.width; height: root.height
        opacity: 0.792
        color:"Black"
        visible:false

        AnimatedImage {
            id: animatedImage
            x: 1296
            y: 312
            width: 252
            height: 232
            opacity: 0.95
            source: "images/loading.gif"
        }
        Timer {
               id: closeTimer
               interval:500 //3000// 3 seconds in milliseconds //REMEMBER TO COMPONENT
               running: false
               onTriggered: {
                 // Close the window when the timer triggers
                 //   Qt.quit();
                 switchToGameScreen()
               }
           }

    }

    Image {
        id: start_Title
        x: 1112
        y: 42
        width: 653
        height: 278
        source: "images/Title.png"
        fillMode: Image.PreserveAspectFit
    }
}
