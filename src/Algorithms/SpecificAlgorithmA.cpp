#include "SpecificAlgorithmA.hpp"
#include <iostream>

void
SpecificAlgorithmA::operator()(const Solid& solid){
    solid.accept(*this);
}

void
SpecificAlgorithmA::operator()(const CylindricalSolid&){
    std::cout << "apply specific algorithm A to spherical solid."
              << std::endl;
}

void
SpecificAlgorithmA::operator()(const PlanarSolid&){
    std::cout << "apply specific algorithm A to planar solid."
              << std::endl;
}
