#pragma once
#include <iostream>

namespace Macgyver::Math{

	class Vector3 {
	public:
		float x, y, z;
		Vector3(int x = 0, int y = 0, int z = 0);
		Vector3 operator+(const Vector3& a);
		Vector3 operator-(const Vector3& a);
		Vector3 operator*(const float b);
		Vector3 operator/(const float b);
		Vector3& operator+=(const Vector3& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector3& v);

	};
}