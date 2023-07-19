set(SOURCE_CODE
    test.c 
    src/source.c)
file(GLOB_RECURSE SRC "*.c")
message(STATUS "SOURCE: ${SRC}")
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

##################################################################################################
# specify the minimum required version cmake_minimum_required(VERSION <version>)
# set the project name project(<project_name>)
# specify the source code files add_executable(<target_name> <source_files>)
# specify the include directories target_include_directories(<target_name> PUBLIC <include_dirs>)
##################################################################################################

##################################################################################################
# there are a lot of useful pre-defined variables in cmake to be used
##################################################################################################

##################################################################################################
# to add another cmakefile add_subdirectory(<bath_of_the_added_file>)
# you can use math(EXPR <equation>) to perform mathimatical expresions
##################################################################################################

##################################################################################################
# to make a library add_library(<lib_name> <lib_src_and_inc_files>)
# to link the library target_link_library(<target_name> PUBLIC <library_name>)
##################################################################################################

##################################################################################################
# to generate a config.h file configure_file(<config_in_name.h.in> <config_name.h>)
# the config inpput file should define variables that will take its value from the cmake file
# we can set these varibales values by set() command or by the cli with -D<variable_name>=<val>
##################################################################################################

##################################################################################################
# you can use if(), elseif(), else(), endif()
# you can use foreach(<iterator> in <list>), endforeach()
# while(), endwhile() 
# function(<name> <arg ...>), endfunction(), argn (for extra args), argc=(arg count)
##################################################################################################

##################################################################################################
# option(<variable_name> "<comment>" <its_value>) this command to set a variable in the cach file
# set(<variable_name> <value> CACHE <data_type> "<comment>") it is equivelant to the last command
##################################################################################################

####################################
# install(FILES "<files_paths>" DESTINATION "<estination_dir_path>")
# copy the file from dir to anouther
# this install line runs by "cmake --install" command in the terminal
##############