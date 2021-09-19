cmake_minimum_required( VERSION 3.13 FATAL_ERROR )

# Configure and build FXTUI
set( FTXUI_BUILD_DOCS OFF CACHE BOOL "Don't build docs" FORCE )
set( FTXUI_BUILD_EXAMPLES OFF CACHE BOOL "Don't build examples" FORCE )
set( FTXUI_BUILD_TESTS OFF CACHE BOOL "Don't run tests" FORCE )
set( FTXUI_BUILD_TESTS_FUZZER OFF CACHE BOOL "Disable fuzzing" FORCE )
set( FTXUI_ENABLE_INSTALL OFF CACHE BOOL "Don't generate the install target" FORCE )
add_subdirectory( FTXUI )
