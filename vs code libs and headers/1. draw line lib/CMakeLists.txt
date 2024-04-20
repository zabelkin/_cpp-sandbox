cmake_minimum_required(VERSION 3.29.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(draw_line VERSION 1.0.0 LANGUAGES CXX)

include(CTest)
enable_testing()

add_library(draw_line SHARED draw_line.cxx)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
