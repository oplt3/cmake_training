file( GLOB_RECURSE header_list *.h* )
file( GLOB_RECURSE source_list *.cpp )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

# We will choose to create a library *animals*
# The target *animals* will be able to referenced in other target
add_library( animals ${header_list} ${source_list})