cmake_minimum_required(VERSION 3.8)

project(skyroom)

set(SOURCE_EXE application/main.cpp)
set(SOURCE_EXE_HEADERS skyroom/include)
set(SOURCE_EXE_SRC skyroom/src)
include_directories(${SOURCE_EXE_HEADERS} ${SOURCE_EXE_SRC})
add_subdirectory(libs/libskyroom)
add_library(libskyroom STATIC libs/libskyroom/libskyroom.cpp)
add_executable(skyroom ${SOURCE_EXE})
#add_subdirectory(libs/libskyroom)
target_link_libraries(skyroom libskyroom)