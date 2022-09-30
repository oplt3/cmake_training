file( GLOB_RECURSE header_list *.h* )
file( GLOB_RECURSE source_list *.cpp )

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(others ${header_list} ${source_list})