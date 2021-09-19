cmake_minimum_required( VERSION 3.13 FATAL_ERROR )

project( ftxui-cradle
    LANGUAGES CXX )

# Build external dependencies
add_subdirectory( extern )

# Main executable
add_executable( ${PROJECT_NAME} "" )
set_target_properties( ${PROJECT_NAME}
    PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO )
target_link_libraries( ${PROJECT_NAME}
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component )
add_subdirectory( src )
