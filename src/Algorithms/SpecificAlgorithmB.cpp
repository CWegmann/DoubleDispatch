#include "SpecificAlgorithmB.hpp"
#include <iostream>

void
SpecificAlgorithmB::operator()(const Solid& solid){
    solid.accept(*this);
}

void
SpecificAlgorithmB::operator()(const CylindricalSolid&){
    std::cout << "apply specific algorithm B to spherical solid."
              << std::endl;
}

void
SpecificAlgorithmB::operator()(const PlanarSolid&){
    std::cout << "apply specific algorithm B to planar solid."
              << std::endl;
}
