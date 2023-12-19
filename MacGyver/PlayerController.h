#pragma once
#include "Component.h"
#include "Velocity.h"
#include "ComponentManager.h"
#include "ComponentData.h"
namespace DemoProject {

	struct PlayerControllerData {
		float walkSpeed = 150;
		float sprintSpeed = 300;
		unsigned int id;
	};

	struct PlayerController {
		static void update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime);
		static void attachNew(Macgyver::Gameobjects::Component* comp);
	};

	
}