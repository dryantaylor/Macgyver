#pragma once
#include <string>

#include "SDL_image.h"
#include "SDL.h"

#include "ComponentManager.h"
#include "Component.h"

namespace Macgyver::Components {
	/**
	Struct to hold data needed for a component to render data.
	*/
	struct RenderableData: ComponentData {
		/**
		Creates a RenderableData struct
		
		@param self pointer to the Component this will be attacheed to
		@param path path to the image relatve to the exe directory
		@param width width to display the image at
		@param height height to display the image at
		*/
		RenderableData(Gameobjects::Component* self, std::string path, int width, int height);
		
		/**
		Destructor for RenderableData, closes the texture if one is present
		*/
		~RenderableData();

		/// Pointer to internal SDL texture
		SDL_Texture* texture;
		/// SDL rect to contain the width and height to render the 
		/// texture at on screen
		SDL_Rect rect;
	};

	/**(
	Struct to hold a Renderable Component
	*/
	struct Renderable {
		COMPONENT_TYPE flags = RENDERABLE;
		/**
		Renderables update method, does nothing.

		@param self pointer to the Component which the renderable is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		
		/**
		Attaches a new Renderable to an existing Component.
		Note: a Component should only have one thing attached to it

		@param comp pointer to the component to attach the Renderable to
		*/
		static void AttachNew(Gameobjects::Component* comp, std::string path, int width, int height);
	};
}