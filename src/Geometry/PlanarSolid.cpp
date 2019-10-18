#include "PlanarSolid.hpp"
#include "SolidAlgorithm.hpp"

void
PlanarSolid::accept(SolidAlgorithm& algorithm) const{
    // here, the compiler knows that the type of *this is PlanarSolid,
    // so the correct function void operator()(const PlanarSolid&) is called!
    algorithm(*this);
}
