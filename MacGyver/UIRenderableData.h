#pragma once
#include "SDL_image.h"
#include "SDL.h"

#include "ComponentManager.h"
#include "Component.h"

namespace Macgyver::Components::UI {

	struct UIRenderableData: public ComponentData{
		/**
		* Constructor to create a UIRenderableDataStruct
		* 
		* @param self component to attach this to
		* @param path path to the image relative to the base path
		* @param width width to render image at
		* @param height height to render image at
		*/
		UIRenderableData(Gameobjects::Component* self, std::string path, int width, int height);
		/**
		* Constructor to create a UIRenderableDataStruct
		*
		* @param texture texture to render
		* @param width width to render image at
		* @param height height to render image at
		*/
		UIRenderableData(SDL_Texture* texture, int width, int height);
		~UIRenderableData();

		/// Pointer to internal SDL texture
		SDL_Texture* texture;
		/// SDL rect to contain the width and height to render the 
		/// texture at on screen
		SDL_Rect rect;

		void outputAlive() {
			std::cout << " UI RENDERABLE Alive" << std::endl;
			std::cout << rect.x << std::endl;
		}
	};
}
