cmake_minimum_required(VERSION 3.10)

project(GraphProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DLOCAL -fsanitize=leak,address -Wall -Wextra -Wpedantic") # -Werror

add_executable(GraphProject main.cpp)

target_include_directories(GraphProject PRIVATE ${CMAKE_SOURCE_DIR})
