cmake_minimum_required(VERSION 3.2)
project(CPP_RegexTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(CPP_RegexTest ${SOURCE_FILES} SimpleRegex/SimpleRegex.h SimpleRegex/SimpleRegex.cpp)