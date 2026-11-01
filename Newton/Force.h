#pragma once
#include "Vector3.h"
#include "Config.h"
#include "Atom.h"
class Force
{
public:
	Force();

	void calculate(Atom*);

private:
	Config& config{ Config::getInstance() };
	Vector3* forces;
};

