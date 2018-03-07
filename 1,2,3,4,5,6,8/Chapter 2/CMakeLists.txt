cmake_minimum_required(VERSION 3.5)
project(Chapter_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        PracticePro_1.cpp
#        PracticePro_2.cpp
#        PracticePro_5.cpp
#        ProgramingProjects_1.cpp
#        ProgramingProjects_2.cpp
#        ProgramingProjects_3.cpp
#        ProgramingProjects_5.cpp
#        ProgramingProjects_7.cpp
#        ProgramingProjects_9.cpp
#        ProgramingProjects_12.cpp
#        ProgramingProjects_13.cpp
        ProgramingProjects_14.cpp)

add_executable(Chapter_2 ${SOURCE_FILES})