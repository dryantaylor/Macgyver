#pragma once
//#include "Component.h"
#include <vector>

#include "Component.h"
#include "ComponentManager.h"
#include "Vector3.h"

namespace Macgyver::Components {

	struct Camera {
		static void Draw(Gameobjects::Component* self);
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		static Math::Vector3 convertToCameraSpace(Gameobjects::Component* self, Gameobjects::Component* comp);
		
		static void AttachNew(Gameobjects::Component* comp);
		static Macgyver::Gameobjects::Component* CreateNew();
	};

	
}