cmake_minimum_required(VERSION 2.8.0 FATAL_ERROR)

set(SOURCES main.cpp second.cpp)
MESSAGE(STATUS "WEare on a ${CMAKE_SYSTEM_NAME} system")
add_executable(testCpp ${SOURCES})

