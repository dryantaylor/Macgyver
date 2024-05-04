
#include "GravityImpacting.h"
#include "ComponentManager.h"
#include "Physics2D.h"
void Macgyver::Components::GravityImpacting::
update(Gameobjects::Component* self, unsigned int deltaTime)
{

}

void Macgyver::Components::GravityImpacting::
physicsUpdate(Gameobjects::Component* self)
{
	const auto data = componentGetData(self, GravityImpactingData);

	for (const auto comp: 
		self->getWorldScene()->getPhysicsGravImpactedCache())
	{
		const auto physicsData = componentGetData(comp, Components::Physics2DData);
		physicsData->forces.y = physicsData->mass * data->gravity;
		
	}
}

void Macgyver::Components::GravityImpacting::attachNew(Gameobjects::Component* comp, float g)
{
	comp->setComponentProperties(COMPONENT_TYPES::GRAV_IMPACTING);
	const auto data = new GravityImpactingData();
	data->gravity = g;

	comp->addData((ComponentData*) data,typeHash(GravityImpactingData));
	comp->update = GravityImpacting::update;
	comp->physicsUpdate = GravityImpacting::physicsUpdate;

}


