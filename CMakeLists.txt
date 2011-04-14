cmake_minimum_required(VERSION 2.6)
project(PRPGL)

set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src/PRPGL)
add_subdirectory(examples/nameprinter)
