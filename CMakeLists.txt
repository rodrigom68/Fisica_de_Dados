cmake_minimum_required(VERSION 3.20)
project(fisica_de_dados LANGUAGES CXX VERSION 0.1.0) 

# Language standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
add_compile_options(
    /W4 # Warning Level 4 (highest level)
    /WX # treat Warnings as errors
    /Zc:__cplusplus # Force use std c++
    /Zc:preprocessor # Force use std pre processor
    /utf-8 # Use UTF-8 for in and out files 
    /external:anglebrackets # treat anglebrackets as external headers
    /external:W0  #Disable Warnings for external headers  
) 

endif()

# CMAKE MODULES
add_subdirectory(app)
