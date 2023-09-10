// Copyright (C) 2017 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

import QtQuick
import QtQuick.Controls
Window {
    visible: true
    width: 1920
    height: 1080
    title: qsTr("CLUEDO")
    Loader {
      id: screenLoader
      anchors.fill: parent
      sourceComponent: startScreenComponent // Load the StartScreen initially
      }

    Connections { //for switching between screens
            target: screenLoader.item

            // Connect the custom signal from StartScreen to switch to GameScreen
            onSwitchToGameScreen: function(){
                screenLoader.sourceComponent = gameScreenComponent;
            }
            onSwitchToStartScreen: function(){
                screenLoader.sourceComponent = startScreenComponent;
            }
    }

      // Components for StartScreen and GameScreen
      Component {
      id: startScreenComponent
      StartScreen {}
      }
      Component {
      id: gameScreenComponent
      GameScreen {}
      }
}
