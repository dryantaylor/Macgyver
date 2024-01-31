#pragma once
#include <vector>

#include "Component.h"
#include "ComponentManager.h"
#include "ComponentData.h"
#include "Vector3.h"

namespace Macgyver::Components::UI {

	/*
	* Component to handle UI renderable Components
	* draws them above the normal Renderable Components
	*/
	struct UICamera {
		/*
		* Draws components to the screen based off their
		* absoloute position (0,0) top left to (720,1280)
		* bottom right
		* 
		* NOTE: this behaviour may change in future to
		* be based off the UI camera's position
		*/
		static void draw(Gameobjects::Component* self);

		/*
		UI Camera's update method, calls the draw function at the end.

		@param self pointer to the Component which the UI camera is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self, unsigned int deltaTime);

		/*
		Attaches a new UICamera to an existing Component.
		Note: a Component should only have one thing attached to it

		@param comp pointer to the component to attach the UICamera to
		*/ 
		static void AttachNew(Gameobjects::Component* comp);

	};
}
