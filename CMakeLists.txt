cmake_minimum_required(VERSION 3.5)

project(soos VERSION 1.0)

INCLUDE_DIRECTORIES(/usr/include/python2.7)

list(APPEND srclist "main.c")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(soos ${srclist})
target_link_libraries(soos python2.7)