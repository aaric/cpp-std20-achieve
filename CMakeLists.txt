cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_COMPILER "${CXX_HOME}\\bin\\clang++.exe")
#set(CMAKE_CXX_COMPILER "${CXX_HOME}\\bin\\clang-cpp.exe")

project(cpp_std20_achieve VERSION 0.1.0 DESCRIPTION "demo")

set(SRC_LIST src/main.cpp src/lang.cpp src/lang.h)

add_executable(${CMAKE_PROJECT_NAME} ${SRC_LIST})