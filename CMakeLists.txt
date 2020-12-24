cmake_minimum_required(VERSION 3.0)

project(MYSTRING)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_definitions(-std=c++11)

add_executable(my_string main.cpp src/MyString.cpp)
