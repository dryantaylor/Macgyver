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
