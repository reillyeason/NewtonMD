#pragma once
#include "Atom.h"

class IPotential
{
public:
	virtual ~IPotential() = default;

	virtual Vector3 calculate(Atom*) = 0;
};

