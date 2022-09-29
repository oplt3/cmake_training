# Define the source code you want to build 
# it makes it easier to search for all source .h .cpp

# this function will search for all header and source files
# the list of files will be stored in a variable *header_list* and *source_list* 

file( GLOB_RECURSE header_list *.h* )
file( GLOB_RECURSE source_list *.cpp )

# define your include directories
# in this examlpe, I would use the current directory as include directory
# to do this, we use the CMake function *include_directories* and the CMake variable *${CMAKE_CURRENT_SOURCE_DIR}* 
# *${CMAKE_CURRENT_SOURCE_DIR}* content is depending from which CMakeLists.txt we are
# in our example: *${CMAKE_CURRENT_SOURCE_DIR}* will return the parent directory of the current CMakeLists.txt
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# creates an executable 
# CMake allows to create 2 kind of target - target means output
# - executable
# - library 
# Whatever the kind of output, you must define the target name. This name will be reuse in all other project:
# e.g: *myExe* will be the name of our target
add_executable( myExe ${header_list} ${source_list})