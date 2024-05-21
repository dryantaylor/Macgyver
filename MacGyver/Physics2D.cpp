#include "Physics2D.h"
#include "Force2D.h"

using namespace Macgyver;
const float Components::PhysicsConstants::physicsDeltaTime   = float(1) / 50;

Components::Physics2DData::Physics2DData()
{
	collider = nullptr;
	velocity = Math::Force2D(0, 0);
	mass = 0;
}

#ifdef _DEBUG
#include <string>
const std::string Macgyver::Components::Physics2DData::toString()
{
	std::string output = "Physics2DData: \n";
	output += "Velocity: " + velocity.toString() + "\n";
	output += "Acceleration: " + acceleration.toString() + "\n";
	output += "Forces: " + forces.toString() + "\n";
	output += "Mass: " + std::to_string(mass) + "\n";
	return output;

}
#endif // DEBUG
