cmake_minimum_required(VERSION 3.18) # it should always be the first line of your 1st CMakeLists.txt

# here we create a CMake project.
# a CMake project will be made up of many targets
project("sample" VERSION 1.0.0) # set project name and version number

# each subdirectory should contain a CMakeLists.txt ! 
add_subdirectory( extLib )
add_subdirectory( app )
add_subdirectory( lib )


# if you set variable here, there will be ignored by subdirectory 
# you should always define the variable you want to use in a sub project before calling its 'add_subdirectory'

# The following code aims only to provide a comparaison between macro and function
# Run CMake and look the console to see the results
message( "" )
message( "==============================================" )
message( "Function vs. macro" )
message( "==============================================" )
include( ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FunctionVsMacro.cmake )
set( var "ABC" )
message( "=== Main scope (intial state)   === var=${var}" )

message( "" )
message( "=== Call macro (Moo(\${var})===" )
Moo( ${var} )
message( "=== Main scope (after macro)    === var=${var}" )

message( "" )
message( "=== Call function ===" )
Foo( ${var} )
message( "=== Main scope (after function) === var=${var}" )