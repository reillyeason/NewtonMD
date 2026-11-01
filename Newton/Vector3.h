#pragma once
#include <iostream>

struct Vector3
{
	friend std::ostream& operator<<(std::ostream&, const Vector3&);
	Vector3 operator-(const Vector3&) const;

	double x{ 0 };
	double y{ 0 };
	double z{ 0 };
};