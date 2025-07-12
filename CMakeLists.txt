cmake_minimum_required(VERSION 3.5)
project(oop1)

set(SOURCES
        Employee.cpp,
        Developer.cpp,
        Project.cpp,
        main.cpp
)

set(HEADERS
        Employee.h,
        Developer.h,
        Project.h
)

add_executable(oop1 ${SOURCES} ${HEADERS})

set_target_properties(oop1 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
