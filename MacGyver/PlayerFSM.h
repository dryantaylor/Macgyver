#pragma once
#include "Component.h"

#include "ComponentManager.h"
#include "ComponentData.h"
namespace DemoProject {

	enum PlayerFSMstates {
		LAUNCH,
		IDLE,
		WALK,
		RUN
	};

	struct PlayerFSMData: Macgyver::Components::ComponentData {
		PlayerFSMData();
		Macgyver::Gameobjects::Component* PlayerRenderable;
		//Macgyver::Components::Physics2DData* physics;
		PlayerFSMstates currState;

		std::uint32_t internal_animId;

	};

	struct PlayerFSM {
		static void update(Macgyver::Gameobjects::Component* self, std::uint32_t deltaTime);
		static void attachNew(Macgyver::Gameobjects::Component* comp);
	};
}
