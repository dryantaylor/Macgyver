#include "Velocity.h"

using namespace Macgyver;
void Components::Velocity::update(Gameobjects::Component* self,unsigned int deltaTime)
{

}

void Components::Velocity::physicsUpdate(Gameobjects::Component* self)
{
	const auto data = componentGetData(self, Physics2DData);
	data->acceleration = data->forces / data->mass;
	data->velocity += data->acceleration * PhysicsConstants::physicsDeltaTime;
	const float drag = copysignf(0.005f * data->velocity.x * data->velocity.x, -data->velocity.x);
	data->forces.x += drag;
	std::cout << "drag is: " << drag << std::endl;
	self->getParent()->transform += data->velocity * PhysicsConstants::physicsDeltaTime;

}

