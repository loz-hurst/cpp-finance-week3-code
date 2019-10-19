cmake_minimum_required(VERSION 3.12)
project(week_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(week_3 main.cpp VasicekFunctions.cpp VasicekFunctions.hpp BlackScholes.cpp BlackScholes.hpp mathutils.cpp mathutils.hpp)
