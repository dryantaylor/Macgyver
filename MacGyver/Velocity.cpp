#include "Velocity.h"

using namespace Macgyver;
void Components::Velocity::update(Gameobjects::Component* self,unsigned int deltaTime)
{

}

void Components::Velocity::physicsUpdate(Gameobjects::Component* self)
{
	Physics2DData* data = (Physics2DData*)self->getData(typeid(Physics2DData).hash_code());
	self->getParent()->transform += data->velocity * PhysicsConstants::physicsDeltaTime;

}

