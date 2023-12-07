#pragma once
#include <string>

#include "SDL_image.h"
#include "SDL.h"

#include "ComponentManager.h"
#include "Component.h"

namespace Macgyver::Components {
	struct RenderableData {
		RenderableData(Gameobjects::Component* self, std::string path, int width, int height);
		~RenderableData();
		SDL_Texture* texture;
		SDL_Rect rect;
	};

	struct Renderable {
		COMPONENT_TYPE flags = RENDERABLE;
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		static void AttachNew(Gameobjects::Component* comp, std::string path, int width, int height);
	};
}