#pragma once
#include "Vector3.h"

class Particle
{
public:
	Particle() = default;
	Particle(double, double, double, double, double, double, double);

	void setPosition(double, double, double);
	void setPosition(Vector3);
	Vector3 getPosition() const;

	void setVelocity(double, double, double);
	Vector3 getVelocity() const;
	void setMass(double);
	double getMass();

private:
	Vector3 position{ 0.0, 0.0, 0.0 };
	Vector3 velocity{ 0.0, 0.0, 0.0 };
	double mass{ 0 };
};

