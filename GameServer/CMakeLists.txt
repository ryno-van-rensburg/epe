cmake_minimum_required(VERSION 3.14)

project(GameServer LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)

add_executable(GameServer
  main.cpp
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
)

target_link_libraries(GameServer Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network)

include(GNUInstallDirs)
install(TARGETS GameServer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
