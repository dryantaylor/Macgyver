#include "Vector3.h"

using namespace Macgyver::Math;

Vector3::Vector3(int x , int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Macgyver::Math::Vector3::operator+(const Vector3& a)
{
	Vector3 temp;
	temp.x = this->x + a.x;
	temp.y = this->y + a.y;
	temp.z = this->z + a.z;
	return temp;
}

Vector3 Macgyver::Math::Vector3::operator-(const Vector3& a)
{
	Vector3 temp;
	temp.x = this->x - a.x;
	temp.y = this->y - a.y;
	temp.z = this->z - a.z;
	return temp;
}

Vector3 Macgyver::Math::Vector3::operator*(const float b)
{
	Vector3 temp;
	temp.x = this->x * b;
	temp.y = this->y * b;
	temp.z = this->z * b;
	return temp;
}

Vector3 Macgyver::Math::Vector3::operator/(const float b)
{
	Vector3 temp;
	temp.x = this->x / b;
	temp.y = this->y / b;
	temp.z = this->z / b;
	return temp;
}

Vector3& Macgyver::Math::Vector3::operator+=(const Vector3& a)
{
	this->x += a.x;
	this->y += a.y;
	this->z += a.z;
	return *this;
}

std::ostream& Macgyver::Math::operator<<(std::ostream& os, const Vector3& v)
{
	os << "x: " << v.x << ", y: " << v.y << ", z: " << v.z;
	return os;
}
