#pragma once
#include "Component.h"
#include "Velocity.h"
#include "ComponentManager.h"
#include "ComponentData.h"

namespace Macgyver::Components::UI {

	struct UIMouseDetector {
		static void update(Gameobjects::Component* self, unsigned int deltaTime);

		static void attachNew(Gameobjects::Component* comp,
			SDL_Rect location, size_t messageIndex, long long hoverValue = 1);
	};

	struct UIMouseDetectorData {
		UIMouseDetectorData(SDL_Rect collider, 
			                size_t messageIndex, long long hoverValue);
		SDL_Rect collider;
		size_t messageIndex;
		long long hoverValue;
		long long resetValue;

		SDL_Point INTERNAL_mousePoint;
		bool pressedPrevFrame;

		//UIRenderableData* buttonBackgroundSprite;

		
	};
}
