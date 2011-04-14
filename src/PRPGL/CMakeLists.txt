set(INCROOT ${CMAKE_SOURCE_DIR}/include/PRPGL)
set(SRCROOT ${CMAKE_SOURCE_DIR}/src/PRPGL)

set(SRC
	${SRCROOT}/namegen.cpp
	${INCROOT}/namegen.h
)

add_library(prpgl ${SRC})

include_directories(${CMAKE_SOURCE_DIR}/src)

set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")
