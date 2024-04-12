#pragma once
#include "Vector3.h"

namespace Macgyver::Math {
	/**
	Class to represent a 2D force being applied to an object.
	Inherrits from Vector3, and will always set 
	the z component to 0 by default.
	*/
	class Force2D : public Vector3 {
	public:
		/**
		Contrustor for the class
		@param x x-value for the vector, default 0
		@param y y-value for the vector, default 0
		*/
		Force2D(float x = 0, float y = 0);

		Force2D operator+(const Force2D& a);
		/**
		Gets the magnitude of the vector 
		(i.e the length if a direct line was drawn 
		from the start to the end of the vector)
		@returns the magnitude of the vector
		*/
		float magnitude();
		/**
		Normalises the vector.
		(i.e modifies the x and y components so they maintain the same 
		ratio to eachother but have a magnitude of 1)
		*/
		void normalise();
		// making programming accessible to the wrongungs
		/**
		Normalizes the vector.
		(i.e modifies the x and y components so they maintain the same
		ratio to eachother but have a magnitude of 1)
		*/
		void normalize();
		/**
		Scales the x and y component so that they maintain the same
		ratio to eachother but have a magnitude of <magnitude>
		
		(Note: a value of 0 for the magnitude argument will result in
		the vector being unchanged) 

		@param magnitude the magnitude to scale the vector to,
		can be any non-zero number
		*/
		void scaleToMagnitude(float magnitude);
		/**
		multiplies the x and y components by <num>, leaves
		any z component untouched

		@param num number to multiply the vector by
		*/
		void scalarMultiply(float num);

		/**
		Multiplies the current vectors x and y components by
		num. Does not mutate this object.
		
		@param num a scalar float to multiply by

		@returns a new Force2D with the components of this Force2D
		         multiplied by num
		*/
		Math::Force2D returnScalarMultiply(float num);
		
	};
}