#include "Vector3.h"

//using namespace Macgyver::Math;

Macgyver::Math::Vector3::Vector3(float x , float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Macgyver::Math::Vector3 Macgyver::Math::Vector3::operator+(const Macgyver::Math::Vector3& a)
{
	Vector3 temp;
	temp.x = this->x + a.x;
	temp.y = this->y + a.y;
	temp.z = this->z + a.z;
	return temp;
}

Macgyver::Math::Vector3 Macgyver::Math::Vector3::operator-(const Macgyver::Math::Vector3& a)
{
	Vector3 temp;
	temp.x = this->x - a.x;
	temp.y = this->y - a.y;
	temp.z = this->z - a.z;
	return temp;
}

Macgyver::Math::Vector3 Macgyver::Math::Vector3::operator*(const float b)
{
	Vector3 temp;
	temp.x = this->x * b;
	temp.y = this->y * b;
	temp.z = this->z * b;
	return temp;
}

Macgyver::Math::Vector3 Macgyver::Math::Vector3::operator/(const float b)
{
	Vector3 temp;
	temp.x = this->x / b;
	temp.y = this->y / b;
	temp.z = this->z / b;
	return temp;
}

Macgyver::Math::Vector3& Macgyver::Math::Vector3::operator+=(const Macgyver::Math::Vector3& a)
{
	this->x += a.x;
	this->y += a.y;
	this->z += a.z;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Macgyver::Math::Vector3& v)
{
	os << "x: " << v.x << ", y: " << v.y << ", z: " << v.z;
	return os;
}
