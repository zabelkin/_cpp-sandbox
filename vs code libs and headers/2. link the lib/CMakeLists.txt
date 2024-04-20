cmake_minimum_required(VERSION 3.15.0)
project(draw_line_linked VERSION 1.2.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include(CTest)
#enable_testing()

link_directories("${CMAKE_CURRENT_SOURCE_DIR}/lib")

add_executable(draw_line_linked main.cxx)
target_link_libraries(draw_line_linked PRIVATE draw_line)


#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
