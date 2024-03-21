#pragma once
#include "PlayerController.h"
#include "Input.h"
#include "AnimationHandler.h"
#include "Force2D.h"
#include "ComponentManager.h"

#include "Messenger.h"

#include "GameInputs.h"

namespace DemoProject {
	struct InputBufferData {
		InputBufferData();
		std::deque<uint16_t> buffer;
		unsigned int ticks;
		uint16_t currHeld;
	};

	struct InputBuffer {
		static void update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime);
		static void attachNew(Macgyver::Gameobjects::Component* comp);
	};
}
