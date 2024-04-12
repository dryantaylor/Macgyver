#pragma once
#include "Physics2D.h"
#include "Component.h"
namespace Macgyver::Components {
	struct Collider {
		/**
		Colliders update method, does nothing.

		@param self pointer to the Component which the Collider is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
	
		/**
		Collider's physics update, updates the parent GameObject's
		transform by velocity * physicsDeltaTime units each call.

		@param self pointer to the Component which the Velocity is part of
		*/
		static void physicsUpdate(Gameobjects::Component* self);

		/**
		Attaches a new Collider to an existing Component.
		Note: a Component should only have one thing attached to it

		@param comp pointer to the component to attach the Collider to
		@param moveable if the component is moveable or not
		*/
		static void AttachNew(Gameobjects::Component* comp, bool moveable);
	};
}
