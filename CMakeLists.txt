set(CMAKE_CXX_COMPILER "cl.exe")

cmake_minimum_required(VERSION 4.1.1)
project(Cpp_top LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(SOURCES
    src/main.cpp
    src/my_math.cpp
)

add_executable(cpp_top ${SOURCES})

target_include_directories(cpp_top PUBLIC include/)