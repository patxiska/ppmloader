cmake_minimum_required(VERSION 2.4)
project(ppmloader)

set(SOURCE_FILES
        main.cpp
        ppmloader.cpp
        ppmloader.h)

add_executable(ppmloader ${SOURCE_FILES})
