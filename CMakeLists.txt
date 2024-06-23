cmake_minimum_required(VERSION 3.28)
project(Rubiks_Cube_Solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubiks_Cube_Solver main.cpp
        RubiksCube.cpp
        RubiksCube.h)
