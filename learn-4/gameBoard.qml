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
        property string player_fonts: "Space Age"
        Text{width: c_player.width; color: "#2dc0d3"; font.pointSize: 39; text:"Player 1" ;font.family: player_fonts}
    }

}
