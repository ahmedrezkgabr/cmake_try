set(SOURCE_CODE
    test.c 
    src/source.c)

set(TARGET 
    testbinary)
cmake_minimum_required(VERSION 3.22)
message(STATUS "all things are right")
project(TESTING)
add_executable(${TARGET} ${SOURCE_CODE})
target_include_directories(${TARGET} PUBLIC inc/)