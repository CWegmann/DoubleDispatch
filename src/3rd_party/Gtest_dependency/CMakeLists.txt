# before using this, define a system environment variable
# containing the root directory of gtest

add_library(gtest
    $ENV{GTEST_ROOT}/src/gtest-all.cc
    )

target_include_directories(gtest
    PUBLIC
    $ENV{GTEST_ROOT}
    $ENV{GTEST_ROOT}/include
    )
