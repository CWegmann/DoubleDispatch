#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "CylindricalSolid.hpp"
#include "PlanarSolid.hpp"

class SolidAlgorithm{

public:
    virtual ~SolidAlgorithm() = default;

    virtual void operator()(const Solid& solid) = 0;
    virtual void operator()(const CylindricalSolid& solid) = 0;
    virtual void operator()(const PlanarSolid& solid) = 0;

};

#endif
