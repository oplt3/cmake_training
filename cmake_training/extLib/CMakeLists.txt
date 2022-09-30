# The following code aims to list the directories
file(GLOB children LIST_DIRECTORIES true RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)

# For each directory :
# - Display the whole child of the current directory
# - Check if the child is a directory
# - Create a list with the whole child directory
# - Add each child as subdirectory
message ("children=${children}")
foreach(child ${children})
    message ("child=${child}")
    set (dirlist "") # Initilize the list of directory
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${child})
        message ("${child} is a directory.")
        add_subdirectory( ${child} )
        list(APPEND dirlist ${CMAKE_CURRENT_SOURCE_DIR}/${child}) # add to child directory
    endif()
endforeach()