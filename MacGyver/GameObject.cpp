#include "GameObject.h"
//#include "Scene.h"
#include "Component.h"
#include "ComponentManager.h"
Macgyver::Gameobjects::GameObject::GameObject(int x, int y, int z)
{
	transform = Macgyver::Math::Vector3(x, y, z);
}


void Macgyver::Gameobjects::GameObject::addComponent(Component* comp)
{
	components.push_back(comp);
	comp->parent = this;
}

std::vector<Macgyver::Gameobjects::Component*> Macgyver::Gameobjects::GameObject::getComponentsWithProperty(Components::COMPONENT_TYPES type)
{
	std::vector<Component*> comps;
	for (Component* comp : components) {
		if (Components::hasProperty(type, comp->componentProperties)) {
			comps.push_back(comp);
		}
	}
	return comps;
}

void Macgyver::Gameobjects::GameObject::update(unsigned int deltaTime)
{
	Scene* parentScene = this->getParentScene();
	for (Component* comp : components)
	{
		comp->update(comp,deltaTime);
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



Macgyver::Gameobjects::Scene* Macgyver::Gameobjects::GameObject::getParentScene()
{
	return parentScene;
}
