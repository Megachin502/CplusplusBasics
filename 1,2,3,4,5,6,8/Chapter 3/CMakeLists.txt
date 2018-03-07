cmake_minimum_required(VERSION 3.5)
project(Chapter_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#        "PracticePro_1.cpp"
#        PracticePro_5.cpp
#        PracticePro_7.cpp
#        ProgramingPro_3.cpp
#        ProgramingPro_4.cpp
#        ProgramingPro_6.cpp
#        ProgramingPro_12.cpp
#        ProgramingPro_13.cpp
        test.cpp)
add_executable(Chapter_3 ${SOURCE_FILES})