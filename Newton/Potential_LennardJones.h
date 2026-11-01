#pragma once
#include "IPotential.h"
class Potential_LennardJones :
    public IPotential
{
    Vector3 calculate(Atom*, double);

private:
    double eps{ 0.0 };
    double sigma{ 0.0 };
};

