#pragma once
#include <string>
#include <typeindex>
#include <typeinfo>
#include <map>
#include <functional>
#include <vector>


#include "ComponentData.h"
#include "ComponentManager.h"
#include "Vector3.h"

//#include "GameObject.h"


namespace Macgyver::Gameobjects{
	class Scene;
	class GameObject;
	class Component {
		friend GameObject;
	public:
		Component();
		Component(COMPONENT_TYPE* types, size_t typesSize, 
			std::function<void(Component*,unsigned int)> updateFunction);
		GameObject* getParent();
		void addData(Components::ComponentData* data);
		virtual void debug() {}
		COMPONENT_TYPE getComponentProperties();
		void setComponentProperties(COMPONENT_TYPE types);
		Macgyver::Math::Vector3 getWorldTransform();
		Scene* getWorldScene();

		Macgyver::Math::Vector3 localTransform;

		std::function<void(Component*, unsigned int)> update;
		std::function<void(Component*)> physicsUpdate;
		Components::ComponentData* data;
	private:
		GameObject* parent;
		COMPONENT_TYPE componentProperties = 0x0000;

		
	
	};
}