#include <iostream>

#include "Force.h"
#include "Config.h"

Force::Force()
{
	//config = Config::getInstance();
	forces = new Vector3[config.nParticles];
	std::cout << "In force, nparticles: " << config.nParticles << std::endl;
}

void Force::calculate(Atom* atoms)
{
	for (int i{ 0 }; i < config.nParticles-1; i++)
	{
		for (int j{ i + 1 }; j < config.nParticles; j++)
		{
			Vector3 xr = atoms[i].getPosition() - atoms[j].getPosition();
			std::cout << "xr: " << xr << std::endl;
		}
	}
}
