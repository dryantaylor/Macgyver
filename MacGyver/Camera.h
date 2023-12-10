#pragma once
//#include "Component.h"
#include <vector>

#include "Component.h"
#include "ComponentManager.h"
#include "Vector3.h"

namespace Macgyver::Components {
	/*
	Component to handle drawing renderable Components
	*/
	struct Camera {
		/*
		Draws renderable components to the screen based off of their
		positions and the camera's position
		@param self the Component which Camera is a part of
		*/
		static void Draw(Gameobjects::Component* self);
		
		/*
		Camera's update method, calls the draw function at the end.

		@param self pointer to the Component which the camera is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self, unsigned int deltaTime);

		/*
		Converts the co-ordinates of another Components to co-ordinates on screen.
		This may be negative numbers or numbers greater than the width/height of
		the camera
		
		@param self pointer to the Component is part of
		@param comp pointer to the Component to find the camera co-ordinates of

		@returns a Math::Vector3 object with the camera co-ordinates of the comp
		object
		*/
		static Math::Vector3 convertToCameraSpace(Gameobjects::Component* self, Gameobjects::Component* comp);
		
		/*
		Attaches a new Camera to an existing Component.
		Note: a Component should only have one thing attached to it

		@param comp pointer to the component to attach the Camera to
		*/
		static void AttachNew(Gameobjects::Component* comp);
	};

	
}