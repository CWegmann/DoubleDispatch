#include "PlanarSolid.hpp"
#include "SolidAlgorithm.hpp"

void
PlanarSolid::accept(SolidAlgorithm& algorithm) const{
    algorithm(*this);
}
