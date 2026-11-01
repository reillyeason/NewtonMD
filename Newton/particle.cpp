#include "particle.h"

Particle::Particle(double x, double y, double z, double vx, double vy, double vz, double m)
{
	setPosition(x, y, z);
	setVelocity(vx, vy, vz);
	mass = m;
}

void Particle::setPosition(double x, double y, double z) 
{
	position = Vector3{ x, y, z };
}

void Particle::setPosition(Vector3 pos)
{
	position = pos;
}

Vector3 Particle::getPosition() const
{
	return position;
}

void Particle::setVelocity(double vx, double vy, double vz)
{
	velocity = Vector3{ vx, vy, vz };
}

Vector3 Particle::getVelocity() const
{
	return velocity;
}

void Particle::setMass(double m)
{
	mass = m;
}

double Particle::getMass()
{
	return mass;
}
