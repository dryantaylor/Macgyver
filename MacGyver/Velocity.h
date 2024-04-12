#pragma once
#include "Physics2D.h"
#include "ComponentManager.h"
#include "Component.h"
namespace Macgyver::Components {

	/**
	Struct to handle velocity of an Object
	*/
	struct Velocity {
		/**
		Velocity's update method, does nothing.

		@param self pointer to the Component which the Velocity is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self ,unsigned int deltaTime);
		
		/**
		Velocity's physics update, updates the parent GameObject's
		transform by velocity * physicsDeltaTime units each call.

		@param self pointer to the Component which the Velocity is part of
		*/
		static void physicsUpdate(Gameobjects::Component* self);
		
	};
}