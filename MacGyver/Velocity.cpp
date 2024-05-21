#include "Velocity.h"

using namespace Macgyver;
void Components::Velocity::update(Gameobjects::Component* self,unsigned int deltaTime)
{

}

void Components::Velocity::physicsUpdate(Gameobjects::Component* self)
{
	
	const auto data = componentGetData(self, Physics2DData);
	/*
#ifdef _DEBUG<
	std::cout << data->toString() << std::endl;
#endif // DEBUG
	data->acceleration = data->forces / data->mass;
	data->velocity += data->acceleration * PhysicsConstants::physicsDeltaTime;
	const float drag = copysignf(0.05f * data->velocity.x * data->velocity.x, -data->velocity.x);
	data->forces.x += drag;
	*/
	data->velocity = data->forces;
	self->getParent()->transform += data->velocity * PhysicsConstants::physicsDeltaTime;

}

