add_library(
    algorithms
    SpecificAlgorithmA.cpp
    SpecificAlgorithmB.cpp
    )

target_include_directories(
    algorithms
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

target_link_libraries(
    algorithms
    PUBLIC
    geometry
    )
