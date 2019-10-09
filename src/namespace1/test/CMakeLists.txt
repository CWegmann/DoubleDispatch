# define object library which contains all tests for namespace 1
add_library(test_namespace1
    OBJECT
    Test_Class1.cpp
    )

target_include_directories(test_namespace1
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

target_link_libraries(test_namespace1
    PUBLIC
    namespace1
    gtest
    )

# define actual executable to run the tests for namespace 1
add_executable(test_namespace1_runner
    $ENV{GTEST_ROOT}/src/gtest_main.cc
    $<TARGET_OBJECTS:test_namespace1>
    )

target_link_libraries(test_namespace1_runner
    test_namespace1
    )
