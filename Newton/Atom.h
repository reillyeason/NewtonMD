#pragma once
#include "particle.h"

class Atom : public Particle
{
public:
	void setElement(char);
	char getElement();

private:
	char element{ 'a' };
};

