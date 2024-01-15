#pragma once
#include <string>

#include "SDL_image.h"
#include "SDL.h"

#include "ComponentManager.h"
#include "Component.h"

#include "UIRenderableData.h"

namespace Macgyver::Components::UI {

	/*
	Struct to hold a UIRenderable Component
	*/
	struct UIRenderable {
		/*
		UIRenderables update method, does nothing.

		@param self pointer to the Component which the renderable is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self, unsigned int deltaTime);

		/*
		Attaches a new UIRenderable to an existing Component.
		Note: a Component should only have one thing attached to it

		@param comp pointer to the component to attach the UIRenderable to
		*/
		static void AttachNew(Gameobjects::Component* comp, std::string path, int width, int height);
	};
}
