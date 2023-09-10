# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.16)
project(cluedo_gui LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick)

qt_add_executable(cluedo_gui
    main.cpp
)

set_target_properties(cluedo_gui PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(cluedo_gui PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
)

# Resources:
set(qml_resource_files
    "main.qml"
    "StartScreen.qml"
    "GameScreen.qml"
    "imports/Constants.qml"
    "imports/space.ttf"
    "imports/pixel.ttf"
    "imports/qmldir"
    "images/AI-active.png"
    "images/AI-inactive.png"
    "images/Game-Background.jpg"
    "images/GameBoard.png"
    "images/loading.gif"
    "images/Menu-Background.jpg"
    "images/Start-active.png"
    "images/Start-inactive.png"
    "images/Title.png"
    "images/panel.png"
    "images/icon-out.png"
    )

qt_add_resources(cluedo_gui "qml"
    PREFIX
        "/"
    FILES
        ${qml_resource_files}
)

install(TARGETS cluedo_gui
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}

)
