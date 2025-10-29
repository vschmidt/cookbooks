cmake_minimum_required(VERSION 3.10)
project(project_name CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

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
target_link_libraries(project_name_app project_name_lib)

# Add unit tests
add_executable(unit_tests tests/unit_tests/unit_test.cpp)
target_link_libraries(unit_tests project_name_lib)

# Enable testing
enable_testing()
add_test(NAME run_unit_tests COMMAND unit_tests)
