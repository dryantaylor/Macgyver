#pragma once
#include <iostream>
#include "box2d.h"

namespace Macgyver::Math {
	class Force2D;
	/**
	Class to represent a 3 dimensional vector \n
	x -> represents horizontal \n
	y -> represents vertical \n
	z -> represents distance to the camera \n
	*/
	class Vector3{
	public:
		//static const float physicsScale;
		float x, y, z;
		
		/**
		Contructor for the class
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
		Vector3& operator= (const Vector3& a);
		Vector3& operator= (const b2Vec2& a);
		/**
		Creates a new force 2D object with the same x and y components as this
		object

		\return a Force2D object which has the same x and y components as this
		vector but an under the hood z component of 0.
		*/
		Force2D copyToForce2D();

		const b2Vec2 toPhysicsScale();
#ifdef _DEBUG
		/**
		Converts the vector to a string
		\return a string representation of the vector
		*/
		const std::string toString();
#endif // DEBUG

	};
}