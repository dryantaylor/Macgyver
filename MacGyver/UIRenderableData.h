#pragma once
#include "SDL_image.h"
#include "SDL.h"

#include "ComponentManager.h"
#include "Component.h"

namespace Macgyver::Components::UI {

	struct UIRenderableData {
		UIRenderableData(Gameobjects::Component* self, std::string path, int width, int height);
		UIRenderableData(SDL_Texture* texture, int width, int height);
		~UIRenderableData();

		/// Pointer to internal SDL texture
		SDL_Texture* texture;
		/// SDL rect to contain the width and height to render the 
		/// texture at on screen
		SDL_Rect rect;
	};
}
