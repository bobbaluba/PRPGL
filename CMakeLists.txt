cmake_minimum_required(VERSION 2.6)
project(PRPGL)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src/PRPGL)
add_subdirectory(examples/nameprinter)
