#include "Collider.h"

void Macgyver::Components::Collider::update(Gameobjects::Component* self, unsigned int deltaTime)
{

}

void Macgyver::Components::Collider::physicsUpdate(Gameobjects::Component* self)
{
	
}

void Macgyver::Components::Collider::AttachNew(Gameobjects::Component* comp, bool moveable)
{
	comp->setComponentProperties(Macgyver::Components::COLLIDER);
	comp->update = Collider::update;
	comp->physicsUpdate = Collider::physicsUpdate;
	Macgyver::Components::Physics2DData* data = new Macgyver::Components::Physics2DData();
	data->isMoveable = moveable;
	b2BodyDef bodyDef;
	bodyDef.position = comp->getWorldTransform().toPhysicsScale();
	data->body = comp->getWorldScene()->createPhysicsBody(&bodyDef);
	
}
