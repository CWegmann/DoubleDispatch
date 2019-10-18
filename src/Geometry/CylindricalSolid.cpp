#include "CylindricalSolid.hpp"
#include "SolidAlgorithm.hpp"

void
CylindricalSolid::accept(SolidAlgorithm& algorithm) const{
    algorithm(*this);
}
