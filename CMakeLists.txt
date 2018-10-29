cmake_minimum_required(VERSION 3.12)
project(Lista2)

set(CMAKE_CXX_STANDARD 98)

add_executable(Lista2 main.cpp ApplicationRunner/ApplicationRunner.h ApplicationRunner/ApplicationRunner.cpp CCommand/CCommand.h CCommand/CCommand.cpp Table/CTable/CTable.cpp Table/CTable/CTable.h Tools/Tools.cpp Tools/Tools.h Table/CTableHandler/CTableHandler.cpp Table/CTableHandler/CTableHandler.h Menu/Menu.cpp Menu/Menu.h)