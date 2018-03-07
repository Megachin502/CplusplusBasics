cmake_minimum_required(VERSION 3.5)
project(Chapter_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        PracticePro9.cpp
#        PracticePro2.cpp
#        ProgrammingPro1.cpp
#        ProgrammingPro4.cpp
        test.cpp
        )
add_executable(Chapter_5 ${SOURCE_FILES})