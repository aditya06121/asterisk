cmake_minimum_required(VERSION 3.31)
project(asterisk)

set(CMAKE_CXX_STANDARD 23)

add_executable(ast src/main.cpp
        include/fileUtils.h)

