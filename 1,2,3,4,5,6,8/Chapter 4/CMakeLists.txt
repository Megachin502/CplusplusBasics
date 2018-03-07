cmake_minimum_required(VERSION 3.5)
project(Chapter_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        "PracticePro 1.cpp"
#        "PracticePro 2.cpp"
        "PracticePro 6.cpp"
#        "ProgrammingPro 2.cpp"
#        "ProgrammingPro 4.cpp"
#        "ProgrammingPro 6.cpp"
        )
add_executable(Chapter_4 ${SOURCE_FILES})