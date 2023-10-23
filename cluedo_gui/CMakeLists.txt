# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.16)
project(cluedo_gui LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick Test Widgets Network)
enable_testing(true)

qt_add_executable(cluedo_gui
    main.cpp
    client.h client.cpp
    message.cpp message.h
    networkclient.cpp networkclient.h
    TestRunner.qml
    testrunner.h testrunner.cpp
    clientmessagebroker.h clientmessagebroker.cpp
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
    Qt6::Test
    Qt6::Widgets
    Qt6::Network
)

# Resources:
file(GLOB_RECURSE qml_resource_files "*.qml")
file(GLOB_RECURSE image_files "images/*")
file(GLOB_RECURSE other_imports "imports/*")
list(APPEND qml_resource_files ${image_files})
list(APPEND qml_resource_files ${other_imports})

# Dynamically adds
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
