cmake_minimum_required(VERSION 3.10)

project(CPPMetaprogramming VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BUILD_TYPE Debug)


include_directories(include)

file(GLOB SOURCES
    src/*.cpp
)

add_executable(CPPMetaprogramming ${SOURCES})
target_compile_options(CPPMetaprogramming PRIVATE -Wall -Wextra)


