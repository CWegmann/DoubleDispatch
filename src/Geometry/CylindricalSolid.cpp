#include "CylindricalSolid.hpp"
#include "SolidAlgorithm.hpp"

void
CylindricalSolid::accept(SolidAlgorithm& algorithm) const{
    // here, the compiler knows that the type of *this is CylindricalSolid,
    // so the correct function void operator()(const CylindricalSolid&) is called!
    algorithm(*this);
}
