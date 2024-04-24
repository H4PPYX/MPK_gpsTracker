cmake_minimum_required(VERSION 3.15)

project(MPK_gpsTracker)

include_directories(src/ include/)

add_executable(tracker src/config.cpp include/config.h main.cpp)
