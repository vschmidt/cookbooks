cmake_minimum_required(VERSION 3.10)
project(project_name VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Aditional libraries
include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 12.0.0
)

FetchContent_MakeAvailable(fmt)

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Source files for the main library
set(PROJECT_SOURCES
    src/module_a/module_a.cpp
)

# Create a library
add_library(project_name_lib ${PROJECT_SOURCES})

# Add the main executable
add_executable(project_name_app src/main.cpp)

target_link_libraries(project_name_app PRIVATE fmt::fmt project_name_lib)
