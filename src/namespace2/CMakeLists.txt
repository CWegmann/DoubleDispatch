add_library(namespace2
    Class2.cpp
    )

target_link_libraries(namespace2
    PUBLIC
    namespace1
    )

target_include_directories(namespace2
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    )

add_subdirectory(test)
