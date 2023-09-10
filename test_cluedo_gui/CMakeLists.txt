cmake_minimum_required(VERSION 3.5)

project(DemoTests LANGUAGES CXX)

enable_testing()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS QuickTest Qml)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS QuickTest Qml)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# no need to copy around qml test files for shadow builds - just set the respective define
add_definitions(-DQUICK_TEST_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB_RECURSE QML_FILES *.qml)
add_custom_target(qmlfiles SOURCES ${QML_FILES})

add_executable(DemoTests main.cpp
               setup.cpp setup.h)
add_test(NAME DemoTests COMMAND DemoTests)

target_link_libraries(DemoTests
                      PRIVATE Qt${QT_VERSION_MAJOR}::QuickTest
                      PRIVATE Qt${QT_VERSION_MAJOR}::Qml)

