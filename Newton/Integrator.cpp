#include "Integrator.h"

void Integrator::integrate(Atom& atom)
{
	Vector3 current = atom.getPosition();
	current.x = current.x + 1;
	//std::cout << "In integrator, pos = " << current.x << std::endl;
	atom.setPosition(current);
}