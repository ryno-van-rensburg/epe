// Copyright (C) 2017 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause


pragma Singleton
import QtQuick

QtObject {
    property FontLoader fontLoader: FontLoader {
        id: fontLoader
        source: "pixel.ttf"
    }
    readonly property alias fontFamily: fontLoader.name
    readonly property int width: 1920 
    readonly property int height: 1080
}
