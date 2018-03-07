cmake_minimum_required(VERSION 3.6)
project(Chapter_8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        "Practicepro 3.cpp"
#        "PracticePro4.cpp"
        PracticePro5.cpp
#        PracticePro7.cpp
#        "ProgrammingPro 6.cpp"
        )
add_executable(Chapter_8 ${SOURCE_FILES})