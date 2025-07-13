cmake_minimum_required(VERSION 3.5)
project(OopCpp)

set(HEADERS
        include/Employee.h,
        include/Developer.h,
        include/Manager.h,
        include/Project.h
)

set(SOURCES
        src/Employee.cpp,
        src/Developer.cpp,
        src/Manager.cpp,
        src/Project.cpp,
        src/main.cpp
)

add_executable(OopCpp ${HEADERS} ${SOURCES})

set_target_properties(OopCpp PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
