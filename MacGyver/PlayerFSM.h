#pragma once
#include "Component.h"
#include "Velocity.h"
#include "ComponentManager.h"
#include "ComponentData.h"
namespace DemoProject {

	enum PlayerFSMstates {
		LAUNCH,
		IDLE,
		WALK,
		RUN
	};

	struct PlayerFSMData {
		PlayerFSMData(Macgyver::Components::Physics2DData* phys);
		Macgyver::Gameobjects::Component* PlayerRenderable;
		Macgyver::Components::Physics2DData* physics;
		PlayerFSMstates currState;

		unsigned int internal_animId;

	};

	struct PlayerFSM {
		static void update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime);
		static void attachNew(Macgyver::Gameobjects::Component* comp);
	};
}
