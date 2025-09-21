cmake_minimum_required(VERSION 3.10.0)

project(use_cmake VERSION 0.0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(fmt CONFIG REQUIRED)

add_executable(use_cmake main.cpp)

target_link_libraries(use_cmake PRIVATE fmt::fmt)
