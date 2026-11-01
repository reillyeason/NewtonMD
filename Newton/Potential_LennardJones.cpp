#include "Potential_LennardJones.h"

Vector3 Potential_LennardJones::calculate(Atom* atoms, double r)
{
	Vector3 force;
	//calculate r
	double pre = sigma / r;
	//double fr = 4 * eps * (std::pow(pre, 12) - std::pow(pre, 6));
	double dfdr = (24 / r) * (std::pow(2 * pre, 12) - std::pow(pre, 6));

	return force;
}
