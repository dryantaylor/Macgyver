#pragma once
#include "Vector3.h"

namespace Macgyver::Math {
	class Force2D : public Vector3 {
	public:
		Force2D(float x = 0, float y = 0);
		float magnitude();
		void normalise();
		void normalize();
		void scaleToMagnitude(float magnitude);
		void scalerMultiply(float num);
	};
}