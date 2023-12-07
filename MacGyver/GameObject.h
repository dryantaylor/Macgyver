#pragma once
#include <typeinfo>
#include <typeindex>
#include <vector>

#include "Vector3.h"
#include "ComponentManager.h"

namespace Macgyver::Gameobjects {
	class Component;
	class Scene;
	class GameObject {
		friend Scene;
	public:
		Math::Vector3 transform;
	    std::vector<Macgyver::Gameobjects::Component*> components = {};
		
		GameObject(int x = 0, int y = 0, int z = 0);
		void addComponent(Component* comp);

		std::vector<Component*> getComponentsWithProperty(Components::COMPONENT_TYPES type);
		void update(unsigned int deltaTime);
		Scene* getParentScene();
	private:
		Scene* parentScene;
	};
}