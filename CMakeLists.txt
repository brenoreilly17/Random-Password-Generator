cmake_minimum_required(VERSION 3.20)
project(Random_Password_Generator)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Random_Password_Generator
        include/RandomPasswordGenerator.h
        src/RandomPasswordGenerator.cpp)
