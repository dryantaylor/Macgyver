#pragma once
#include <iostream>

namespace Macgyver::Math {
	class Force2D;
	/*
	Class to represent a 3 dimensional vector
	x -> represents horizontal
	y -> represents vertical
	z -> represents distance to the camera
	*/
	class Vector3{
	public:
		float x, y, z;
		/*
		Contrustor for the class
		@param x x-value for the vector, default 0
		@param y y-value for the vector, default 0
		@param z z-value for the vector, default 0
		*/
		Vector3(float x = 0, float y = 0, float z = 0);
		Vector3 operator+(const Vector3& a);
		Vector3 operator-(const Vector3& a);
		Vector3 operator*(const float b);
		Vector3 operator/(const float b);
		Vector3& operator+=(const Vector3& a);
		Force2D copyToForce2D();
		//friend std::ostream& operator<<(std::ostream& os, const Vector3& v);

	};
}