#ifndef SPECIFICALGORITHMB_HPP
#define SPECIFICALGORITHMB_HPP

#include "SolidAlgorithm.hpp"

class SpecificAlgorithmB
        : public SolidAlgorithm{

public:
    void operator()(const Solid& solid);
    void operator()(const CylindricalSolid& solid) override;
    void operator()(const PlanarSolid& solid) override;

};

#endif
