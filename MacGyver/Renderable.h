#pragma once
#include "SDL_image.h"
#include "SDL.h"

#include <string>
#include "ComponentManager.h"
#include "Component.h"

namespace Macgyver::Components {
	struct Renderable {
		COMPONENT_TYPE flags = RENDERABLE;
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		static Gameobjects::Component* CreateNew(std::string path, int width, int height);
		static void AttachNew(Gameobjects::Component* comp, std::string path, int width, int height);
	};
	
	struct RenderableData {
		RenderableData(Gameobjects::Component* self,std::string path,int width, int height);
		~RenderableData();
		SDL_Texture* texture;
		SDL_Rect rect;
	};
}