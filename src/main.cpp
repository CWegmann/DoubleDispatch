#include "SpecificAlgorithmA.hpp"
#include "SpecificAlgorithmB.hpp"
#include "PlanarSolid.hpp"
#include "CylindricalSolid.hpp"
#include <vector>

int main(){

    PlanarSolid ps;
    CylindricalSolid cs;
    std::vector<Solid*> solids{&ps, &cs};

    SpecificAlgorithmA algoA;
    SpecificAlgorithmB algoB;

    for(const auto& solid : solids){
        algoA(*solid);
        algoB(*solid);
    }

}
