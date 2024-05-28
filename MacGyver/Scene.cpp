#include "Scene.h"
#include "GameObject.h"
#include "Component.h"

using namespace Macgyver;
Gameobjects::Scene::Scene(std::string name)
{
	objects = std::vector<GameObject*>();
	this->name = name;
	physicsVelocityCache = std::vector<Component*>();
	this->world = new b2World({0,0});

}

Gameobjects::Scene::Scene(std::string name, Math::Force2D gravity)
{
	objects = std::vector<GameObject*>();
	this->name = name;
	physicsVelocityCache = std::vector<Component*>();
	this->world = new b2World( (b2Vec2) gravity);
	
}

void Gameobjects::Scene::addObject(GameObject* obj)
{
	objects.push_back(obj);
	obj->parentScene = this;
}

std::vector<Gameobjects::Component*> Gameobjects::Scene::getComponentsInWorldByType(Components::COMPONENT_TYPES type)
{
	std::vector<Component*> comps;
	for (GameObject* obj: objects)
	{
		std::vector<Component*> objComps = obj->getComponentsWithProperty(type);
		comps.insert(comps.end(), objComps.begin(), objComps.end());
	}
	return comps;
}

b2Body* Macgyver::Gameobjects::Scene::createPhysicsBody(const b2BodyDef* def) const
{
	return world->CreateBody(def);
}

void Gameobjects::Scene::update(uint32_t deltaTime)
{
	physicsVelocityCache.clear();
	physicsGravImpactedCache.clear();
	physicsColliderCache.clear();

	for (GameObject* obj : objects) {
		if (obj->enabled) {
			obj->update(deltaTime);
		}
	}
}

void Macgyver::Gameobjects::Scene::physicsUpdate(uint32_t deltaTime)
{
	physicsTick += deltaTime;
	//while loop used to account for sudden frame spikes
	while (true){
		//20 ticks = 1/50th of a second, physics update runs 50 times per second
 		if (physicsTick < 20) {
			return;
		}
		physicsTick -= 20;
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

Macgyver::Gameobjects::Scene::~Scene()
{
	for (GameObject* obj : objects) {
		delete obj;
	}
	//delete world;
}
