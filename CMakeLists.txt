set(SOURCE_CODE
    test.c 
    src/source.c)

set(TARGET 
    testbinary)

set(INC
    inc/
    newlib/)

cmake_minimum_required(VERSION 3.22)
message(STATUS "all things are right")

#if(EXISTS ${CMAKE_SOURCE_DIR}/test.c)
#    message(STATUS "the source file is found")
#else()
#    message(FATAL_ERROR "the source file is not found")
#endif()

project(TESTING)
add_subdirectory(${CMAKE_SOURCE_DIR}/newlib)
add_executable(${TARGET} ${SOURCE_CODE})
target_include_directories(${TARGET} PUBLIC ${INC})
target_link_libraries(${TARGET} PUBLIC newlib)