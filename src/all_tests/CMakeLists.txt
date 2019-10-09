# executable for running all tests in a row

add_executable(
    all_tests
    $ENV{GTEST_ROOT}/src/gtest_main.cc
    $<TARGET_OBJECTS:test_namespace1>
    $<TARGET_OBJECTS:test_namespace2>
    )

target_link_libraries(
    all_tests
    test_namespace1
    test_namespace2
    )
