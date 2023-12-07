#pragma once
#include "Component.h"
#include "Velocity.h"
#include "ComponentManager.h"
#include "ComponentData.h"
namespace DemoProject {
	struct PlayerController {
		static void update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime);
		static void attachNew(Macgyver::Gameobjects::Component* comp);
	};

	
}