#ifndef SPECIFICALGORITHMA_HPP
#define SPECIFICALGORITHMA_HPP

#include "SolidAlgorithm.hpp"

class SpecificAlgorithmA
        : public SolidAlgorithm{

public:
    void operator()(const Solid& solid);
    void operator()(const CylindricalSolid& solid) override;
    void operator()(const PlanarSolid& solid) override;

};

#endif
