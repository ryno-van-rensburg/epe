cmake_minimum_required(VERSION 3.5)

project(UnitTest LANGUAGES CXX)

enable_testing()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Test)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Test)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(UnitTest tst_unittest.cpp
    gameboard.h gameboard.cpp
    player.h player.cpp
    gameserver.h gameserver.cpp
    move.h move.cpp
    suggestion.h suggestion.cpp
    accusation.h accusation.cpp
    charactercard.h charactercard.cpp
    roomcard.h roomcard.cpp
    weaponcard.h weaponcard.cpp
    envelope.h envelope.cpp
    room.h room.cpp
    signalsender.h signalsender.cpp)
add_test(NAME UnitTest COMMAND UnitTest)

target_link_libraries(UnitTest PRIVATE Qt${QT_VERSION_MAJOR}::Test)

