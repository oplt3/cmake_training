cmake_minimum_required(VERSION 3.18) # it should always be the first line of your 1st CMakeLists.txt

# here we create a CMake project.
# a CMake project will be made up of many targets
project("sample" VERSION 1.0.0) # set project name and version number

# each subdirectory should contain a CMakeLists.txt ! 
add_subdirectory( app )
add_subdirectory( lib )

# if you set variable here, there will be ignored by subdirectory 
# you should always define the variable you want to use in a sub project before calling its 'add_subdirectory'
