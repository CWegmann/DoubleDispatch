cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(GTestWithCMake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(3rd_party)
add_subdirectory(namespace1)
add_subdirectory(namespace2)
add_subdirectory(all_tests)

