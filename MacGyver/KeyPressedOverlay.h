#pragma once
#include "Component.h"
#include "ComponentManager.h"
#include "ComponentData.h"
#include "Text.h"
namespace DemoProject {
	struct KeyPressedOverlay {
		static void update(Macgyver::Gameobjects::Component* self, uint32_t deltaTime);
		static void attachNew(Macgyver::Gameobjects::Component* comp, Macgyver::Gameobjects::Component* target);
	};

	struct KeyPressedOverlayData {
		Macgyver::Components::UI::TextData* targetData;
	};
}
