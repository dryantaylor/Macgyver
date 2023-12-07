#pragma once
#include "Physics2D.h"
#include "ComponentManager.h"
#include "Component.h"
namespace Macgyver::Components {

	struct Velocity {
		static void update(Gameobjects::Component* self ,unsigned int deltaTime);
		static void physicsUpdate(Gameobjects::Component* self);
		
	};
}