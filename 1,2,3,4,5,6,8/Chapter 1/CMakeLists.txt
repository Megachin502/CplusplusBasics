cmake_minimum_required(VERSION 3.5)
project(Chapter_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#    Coins.cpp
#    Fence.cpp
    "Peas and pods.cpp")

add_executable(Chapter_1 ${SOURCE_FILES})