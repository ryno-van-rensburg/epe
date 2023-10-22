
import QtQuick

Rectangle {
    width: 100
    height: 100
    property int playerId: -1
    // property int xGrid: 0
    // property int yGrid: 0
    property string playerIcon: "" // Path to the player's icon
    property bool dragEnable: false
    property real initial_x :0
    property real initial_y :0

    // Animate x and y properties to move the player

    Behavior on x {
        NumberAnimation {
            duration: 500 // Animation duration in milliseconds
        }
    }
    Behavior on y {
        NumberAnimation {
            duration: 500 // Animation duration in milliseconds
        }
    }
    Image {
        source: playerIcon // Set the icon source dynamically
        anchors.fill: parent
    }

    Drag.active: dragArea.drag.active
    Drag.hotSpot.x: width / 2
    Drag.hotSpot.y: height / 2
    Drag.source: parent
    MouseArea
    {
        id: dragArea
        anchors.fill: parent

        drag.target: dragEnable ? parent : null
        onPressed: {

                    console.debug(dice_moves)
                    drag.minimumX = parent.x - dice_moves * dice_radius
                    drag.maximumX = parent.x + dice_moves * dice_radius
                    drag.minimumY = parent.y - dice_moves * dice_radius
                    drag.maximumY = parent.y + dice_moves * dice_radius
                }
        onReleased:{
            if(dragEnable === true){
                    client.playerPositionSet(playerId,parent.x,parent.y);
                    dragEnable = false;
            }
        }
    }


}
