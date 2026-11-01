

#include "particle.h"
#include "Atom.h"
#include "Force.h"
#include "Integrator.h"
#include "Config.h"
using namespace std;

int main() 
{
	// init()
	// 
	//Integrator integrator;
	Atom* atoms = new Atom[2];
	atoms[0].setPosition(0.0, 0.0, 0.0);
	atoms[1].setPosition(1.0, 1.0, 1.0);
	//p.setPosition(1.0, 2.0, 3.0);
	//Vector3 pos;
	//pos = p.getPosition();

	//integrator.integrate(p);
	//cout << "after integration  " << p.getPosition() << endl;

	Force force;
	force.calculate(atoms);
	// integrate
}