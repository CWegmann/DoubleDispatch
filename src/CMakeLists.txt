cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(DoubleDispatch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(
    Geometry)
add_subdirectory(
    Algorithms)

add_executable(
    demo
    main.cpp
    )

target_link_libraries(
    demo
    PRIVATE
    geometry
    algorithms
    )
