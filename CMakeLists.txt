cmake_minimum_required(VERSION 3.9)

project(skyroom)

set(SOURCE_EXE main.cpp)

add_subdirectory(libs/libskyroom)

set(SKYROOM_LIB libs/libskyroom/src/skyroom.cpp)

add_library(libskyroom STATIC ${SKYROOM_LIB})

add_executable(skyroom ${SOURCE_EXE})

