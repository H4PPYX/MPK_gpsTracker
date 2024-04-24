cmake_minimum_required(VERSION 3.15)

project(MPK_gpsTracker)

target_include_directories(tracker src/ include/)

add_executable(tracker main.cpp)
