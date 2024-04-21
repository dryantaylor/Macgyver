#include "GameObject.h"
#include "Component.h"
#include "Scene.h"
#include "ComponentManager.h"

using namespace Macgyver;

Gameobjects::GameObject::GameObject(const int x, const int y, const int z)
{
	transform = Macgyver::Math::Vector3(x, y, z);
	
}

void Gameobjects::GameObject::addComponent(Component* comp)
{
	components.push_back(comp);
	comp->parent = this;
}

std::vector<Gameobjects::Component*> Gameobjects::GameObject::getComponentsWithProperty(Components::COMPONENT_TYPES type) const
{
	std::vector<Component*> comps;
	for (Component* comp : components) {
		if (Components::hasProperty(type, comp->componentProperties)) {
			comps.push_back(comp);
		}
	}
	return comps;
}

void Gameobjects::GameObject::update(const unsigned int deltaTime)
{
	Scene* parentScene = this->getParentScene();
	for (Component* comp : components)
	{
		if (comp->enabled) {
			comp->update(comp, deltaTime);
			if (Components::hasProperty(Components::GRAV_IMPACTED, comp->componentProperties)) {
				parentScene->physicsGravImpactedCache.push_back(comp);
			}
			else if (Components::hasProperty(Components::VELOCITY, comp->componentProperties)) {
				parentScene->physicsVelocityCache.push_back(comp);
			}
			else if (Components::hasProperty(Components::COLLIDER, comp->componentProperties)) {
				parentScene->physicsColliderCache.push_back(comp);
			}
			else if (Components::hasProperty(Components::GRAV_IMPACTING, comp->componentProperties)) {
				parentScene->physicsGravImpactingCache = comp;
			}
		}
	}
}

Gameobjects::Scene* Gameobjects::GameObject::getParentScene()
{
	return parentScene;
}
