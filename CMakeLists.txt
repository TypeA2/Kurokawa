# SPDX-License-Identifier: GPL-3.0-only
cmake_minimum_required(VERSION 3.16)
project(Kurokawa LANGUAGES CXX)

include(qt.cmake)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Core
        Gui
        Widgets
)
qt_standard_project_setup()

set(PROJECT_SOURCES
    "src/main.cpp"
    "src/kurokawa.ui"
    "src/kurokawa.h"
    "src/kurokawa.cpp"
    "src/Kurokawa.rc"
)

qt_add_executable(Kurokawa ${PROJECT_SOURCES})

set_target_properties(Kurokawa
    PROPERTIES
        WIN32_EXECUTABLE TRUE
)

target_link_libraries(Kurokawa
    PUBLIC
        Qt::Core
        Qt::Gui
        Qt::Widgets
)
