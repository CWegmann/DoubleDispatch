# define object library which contains all tests for namespace 2
add_library(test_namespace2
    OBJECT
    Test_Class2.cpp
    )

target_include_directories(test_namespace2
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

target_link_libraries(test_namespace2
    PUBLIC
    namespace2
    gtest
    )

# define actual executable to run the tests for namespace 2
add_executable(test_namespace2_runner
    $ENV{GTEST_ROOT}/src/gtest_main.cc
    $<TARGET_OBJECTS:test_namespace2>
    )

target_link_libraries(test_namespace2_runner
    test_namespace2
    )
