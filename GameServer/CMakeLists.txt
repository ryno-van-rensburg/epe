cmake_minimum_required(VERSION 3.14)

project(GameServer LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(GameServer
  main.cpp
  player.h player.cpp
  roomcard.h roomcard.cpp
  gameboard.h gameboard.cpp
  charactercard.h charactercard.cpp
  weaponcard.h weaponcard.cpp
  suggestion.h suggestion.cpp
  move.h move.cpp
  gameserver.h gameserver.cpp
  envelope.h envelope.cpp
  accusation.h accusation.cpp
  room.h room.cpp

)
target_link_libraries(GameServer Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS GameServer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
