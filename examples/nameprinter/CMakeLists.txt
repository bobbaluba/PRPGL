set(SRCROOT ${CMAKE_SOURCE_DIR}/examples/nameprinter)

set(SRC ${SRCROOT}/nameprinter.cpp)

add_executable(nameprinter ${SRC})

target_link_libraries(nameprinter prpgl)
