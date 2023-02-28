cmake_minimum_required(VERSION 3.16)

project(MusicPlayer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_CXX_FLAGS -g)
find_package(Qt6 REQUIRED COMPONENTS Multimedia Widgets)

qt_standard_project_setup()

set(CMAKE_AUTORCC ON)

add_executable(MusicPlayer
	mainwindow.ui
	mainwindow.cpp
	main.cpp
	mainwindowRes.qrc
)
target_link_libraries(MusicPlayer PRIVATE
	Qt6::Widgets
	Qt6::Multimedia
)

set_target_properties(MusicPlayer PROPERTIES
	WIN32_EXECUTABLE ON
	MACOSX_BUNDLE ON
)