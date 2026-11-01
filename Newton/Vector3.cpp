#include "Vector3.h"

std::ostream& operator<<(std::ostream& osObject, const Vector3& vec)
{
	osObject << "Vector3 x: " << vec.x << " y: " << vec.y << " z: " << vec.z << std::endl;
	return osObject;
}

Vector3 Vector3::operator-(const Vector3& rhs) const
{
	Vector3 tv;
	tv.x = x - rhs.x;
	tv.y = y - rhs.y;
	tv.z = z - rhs.z;
	return tv;
}