#pragma once
#include "Component.h"
#include "PhysicsData.h"
#include "ComponentData.h"
#include "Force2D.h"
namespace Macgyver::Components {

	struct StaticPhysics {
		static void update(Macgyver::Gameobjects::Component* self, uint32_t deltaTime);
		static void physicsUpdate(Macgyver::Gameobjects::Component* self);

		static void attachNew(Macgyver::Gameobjects::Component* comp, int32_t width, int32_t height);
	};

	struct DynamicPhysics  {
		static void update(Macgyver::Gameobjects::Component* self, uint32_t deltaTime);
		static void physicsUpdate(Macgyver::Gameobjects::Component* self);

		static void attachNew(Macgyver::Gameobjects::Component* comp, int32_t width, int32_t height,
			float friction, float mass);
	};
};