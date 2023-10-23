import QtQuick

Item {
    property string item_name: "Item"
    property bool clicked: false
    Text{
        width: 200
        text: item_name
        font.pointSize: 20
        font.family: "Pixel"
        color: (clicked)? "white":"#7eacbb"
    }
}
