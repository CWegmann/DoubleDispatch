add_library(namespace1
    Class1.cpp
    )

target_include_directories(namespace1
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    )

add_subdirectory(test)
