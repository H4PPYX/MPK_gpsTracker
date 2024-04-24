cmake_minimum_required(VERSION 3.15)

project(MPK_gpsTracker)

add_subdirectory(src)
add_subdirectory(include)
add_executable(demo main.cpp)
