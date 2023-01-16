cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

cmake_minimum_required(VERSION 3.23)
project(cpp_std20_achieve VERSION 0.1.0)

set(SRC_LIST src/main.cpp)

add_executable(${CMAKE_PROJECT_NAME} ${SRC_LIST})