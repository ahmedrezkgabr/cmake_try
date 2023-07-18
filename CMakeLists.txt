set(SOURCE_CODE
    test.c 
    src/source.c)

set(TARGET 
    testbinary)

set(INC
    inc/
    newlib/
    ${CMAKE_BINARY_DIR}/)

cmake_minimum_required(VERSION 3.22)
message(STATUS "all things are right")

#if(EXISTS ${CMAKE_SOURCE_DIR}/test.c)
#    message(STATUS "the source file is found")
#else()
#    message(FATAL_ERROR "the source file is not found")
#endif()
message(STATUS "cmake source")
project(TESTING)
add_subdirectory(${CMAKE_SOURCE_DIR}/newlib)
add_executable(${TARGET} ${SOURCE_CODE})
target_include_directories(${TARGET} PUBLIC ${INC})
target_link_libraries(${TARGET} PUBLIC newlib)
set(TEST 333)
configure_file(config.h.in config.h)

# important variables
# source dir = the path for the main cmakefile
# source current dir = the path for the current cmake file
# dinary dir = where the generated file from the main cmake file
# binary current dir = where the the output files of the current file will be generated
# 