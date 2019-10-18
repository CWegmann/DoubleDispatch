#ifndef PLANARSOLID_HPP
#define PLANARSOLID_HPP

#include "Solid.hpp"

class PlanarSolid
        : public Solid{

public:
    void accept(SolidAlgorithm& algorithm) const override;

};

#endif
