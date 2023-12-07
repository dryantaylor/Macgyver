#include "Scene.h"
#include "GameObject.h"
#include "Component.h"
Macgyver::Gameobjects::Scene::Scene()
{
	objects = std::vector<GameObject*>();
}

void Macgyver::Gameobjects::Scene::addObject(GameObject* obj)
{
	objects.push_back(obj);
	obj->parentScene = this;
}

std::vector<Macgyver::Gameobjects::Component*> Macgyver::Gameobjects::Scene::getComponentsInWorldByType(Components::COMPONENT_TYPES type)
{
	std::vector<Component*> comps;
	for (GameObject* obj: objects)
	{
		std::vector<Component*> objComps = obj->getComponentsWithProperty(type);
		comps.insert(comps.end(), objComps.begin(), objComps.end());
	}
	return comps;
}

void Macgyver::Gameobjects::Scene::update(unsigned int deltaTime)
{
	physicsGravImpactingCache = nullptr;
	physicsVelocityCache.clear();
	physicsGravImpactedCache.clear();
	physicsColliderCache.clear();
	for (GameObject* obj : objects) {
		obj->update(deltaTime);
	}
}

void Macgyver::Gameobjects::Scene::physicsUpdate(unsigned int deltaTime)
{
	//TODO: check if caching the physics objects each frame in update
	//is more performant than a second loop through
	physicsTick += deltaTime;
	if (physicsTick >= 20) {
		physicsTick -= 20;
		if (physicsGravImpactingCache != nullptr) {
			physicsGravImpactingCache->physicsUpdate(physicsGravImpactingCache);
		}
		for (Component* comp : physicsVelocityCache) {
			comp->physicsUpdate(comp);
		}
		for (Component* comp : physicsGravImpactedCache) {
			comp->physicsUpdate(comp);
		}
		for (Component* comp : physicsColliderCache) {
			comp->physicsUpdate(comp);
		}

	}
	
}
