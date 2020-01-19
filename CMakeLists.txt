cmake_minimum_required(VERSION 3.15)
project(myfirstgitpro)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(myfirstgitpro
    first.cpp
    first.h
    main.cpp)
