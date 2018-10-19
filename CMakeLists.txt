cmake_minimum_required(VERSION 3.12)
project(Lista2)

set(CMAKE_CXX_STANDARD 98)

add_executable(Lista2 main.cpp CMenuItem/CMenuItem.h CMenu/CMenu.cpp CMenu/CMenu.h CMenuCommand/CMenuCommand.cpp CMenuCommand/CMenuCommand.h CCommand/CCommand.h CCommand/CCommand.cpp)