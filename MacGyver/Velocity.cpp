#include "Velocity.h"

using namespace Macgyver;
void Components::Velocity::update(Gameobjects::Component* self,unsigned int deltaTime)
{

}

void Components::Velocity::physicsUpdate(Gameobjects::Component* self)
{
	Physics2DData* data = componentGetData(self, Physics2DData);
	self->getParent()->transform += data->velocity * PhysicsConstants::physicsDeltaTime;

}

