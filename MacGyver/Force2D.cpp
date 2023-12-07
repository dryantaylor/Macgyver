#include "Force2D.h"
#include <math.h>


using namespace Macgyver;
Math::Force2D::Force2D(float x, float y):
	Vector3(x,y,0)
{

}

float Math::Force2D::magnitude()
{
	return std::sqrtf(x * x + y * y);
}

void Math::Force2D::normalise()
{
	float magnitude = this->magnitude();
	x /= magnitude;
	y /= magnitude;
}

void Math::Force2D::normalize() {
	this->normalise();
}

void Math::Force2D::scaleToMagnitude(float magnitude)
{
	//magnitude of 0 == division by 0 == illegal
	if (this->magnitude() != 0) { 
		float scale = magnitude / this->magnitude();
		x *= scale;
		y *= scale;
	}
}

void Macgyver::Math::Force2D::scalerMultiply(float num)
{
	x *= num;
	y *= num;
}
