#include "SpecificAlgorithmA.hpp"
#include "SpecificAlgorithmB.hpp"
#include "PlanarSolid.hpp"
#include "CylindricalSolid.hpp"
#include <vector>

int main(){

    PlanarSolid ps;
    CylindricalSolid cs;

    // But both objects of derived class into a common container of the base class
    std::vector<Solid*> solids{&ps, &cs};

    // Two algorithms which are derived from SolidAlgorithm
    SpecificAlgorithmA algoA;
    SpecificAlgorithmB algoB;

    // We know which algorithm we want to call, but we don't know which
    // solid it will be called on.
    for(const auto& solid : solids){
        algoA(*solid);
        algoB(*solid);
    }

}
