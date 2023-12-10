#pragma once
#include "SDL.h"
#include "Force2D.h"
namespace Macgyver::Components {
	/*
	Contains constants for the physics
	*/
	static struct PhysicsConstants {
		/// time between physics frames in seconds (0.02 seconds)
		static const float physicsDeltaTime;
	};
	/*
	Struct to hold Physics data for a component
	*/
	struct Physics2DData {
		Physics2DData();
		/// pointer to a Rect to represent a collider
		SDL_Rect* collider;
		/// velocity of the Object
		Math::Force2D velocity;
		/// mass of the object
		float mass; 
	};
}