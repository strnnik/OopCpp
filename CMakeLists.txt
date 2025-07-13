cmake_minimum_required(VERSION 3.10)
project(OopCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OopCpp
    src/main.cpp
    src/Employee.cpp
    src/Manager.cpp
    src/Developer.cpp
    src/Project.cpp
)

target_include_directories(OopCpp PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)