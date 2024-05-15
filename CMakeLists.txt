cmake_minimum_required(VERSION 3.15)

project(MPK_gpsTracker)

include_directories(src/ include/ SIM7000X/)

add_executable(tracker src/config.cpp include/config.h src/gps.cpp include/gps.h main.cpp SIM7000X/arduPi.h SIM7000X/arduPi.cpp SIM7000X/sim7x00.h SIM7000X/sim7x00.cpp)

SET(GCC_COVERAGE_COMPILE_FLAGS "pthread")
