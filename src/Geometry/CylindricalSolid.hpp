#ifndef CYLINDRICALSOLID_HPP
#define CYLINDRICALSOLID_HPP

#include "Solid.hpp"

class CylindricalSolid
        : public Solid{

public:
    void accept(SolidAlgorithm& algorithm) const override;

};

#endif
