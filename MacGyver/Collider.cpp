#include "Collider.h"

void Macgyver::Components::Collider::update(Gameobjects::Component* self, unsigned int deltaTime)
{

}

void Macgyver::Components::Collider::physicsUpdate(Gameobjects::Component* self)
{
	std::vector<Gameobjects::Component*> colliders = self->getParent()
		->getComponentsWithProperty(COLLIDER);

	std::size_t physics2DHash = typeid(Physics2DData).hash_code();
	Physics2DData* selfData = (Physics2DData*)(self->getData(physics2DHash));
	Math::Force2D u1 = selfData->velocity;
	float m1 = selfData->mass;
	//Math::Force2D CoM1 = self->getWorldTransform().copyToForce2D();
	float e = 1;
	for (Gameobjects::Component* comp : colliders) {
		if (comp == self) {
			continue;
		}
		Physics2DData* compData =(Physics2DData*) comp->getData(physics2DHash);
		if (SDL_HasIntersection(compData->collider, selfData->collider) 
			== SDL_TRUE) {
			//set position so they just don't touch
			if (selfData->isMoveable) {

			}
			else {

			}
			//comp->getParent()->transform = 
			//self->getParent()->transform = 
			Math::Force2D p2 = comp->getWorldTransform().copyToForce2D();
			float m2 = compData->mass;
			Math::Force2D u2 = compData->velocity;
			selfData->velocity.x = (m1 * u1.x + m2*(u2.x - e * abs(u2.x - u1.x)))
				/ (m1 + m2);
			
			compData->velocity.x = e * abs(u2.x - u1.x) + selfData->velocity.x;
			
		}
	}
}

void Macgyver::Components::Collider::AttachNew(Gameobjects::Component* comp, bool moveable)
{
	comp->setComponentProperties(Macgyver::Components::COLLIDER);
	comp->update = Collider::update;
	comp->physicsUpdate = Collider::physicsUpdate;
	Macgyver::Components::Physics2DData* data = new Macgyver::Components::Physics2DData();
	data->isMoveable = moveable;
	comp->addData((Macgyver::Components::ComponentData*)
		data,
		typeid(Components::Physics2DData).hash_code());
	
}
