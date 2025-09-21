cmake_minimum_required(VERSION 4.0)

project(debugger_cwd VERSION 0.0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(debugger_cwd main.cpp)
# WARNING: VS and VS Code do not respect this variable
# GitHub Issue: https://github.com/microsoft/vscode-cmake-tools/issues/771
# CMake: 		https://cmake.org/cmake/help/latest/prop_tgt/DEBUGGER_WORKING_DIRECTORY.html
set_target_properties(debugger_cwd PROPERTIES
	DEBUGGER_WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
	)
