add_library(
    geometry
    PlanarSolid.cpp
    CylindricalSolid.cpp
    )

target_include_directories(
    geometry
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    )
