#pragma once
#include "SDL.h"
#include "Force2D.h"
#include "ComponentData.h"
namespace Macgyver::Components {
	/**
	Contains constants for the physics
	*/
	static struct PhysicsConstants {
		/// time between physics frames in seconds (0.02 seconds)
		static const float physicsDeltaTime;
	};
	/**
	Struct to hold Physics data for a component
	*/
	struct Physics2DData: ComponentData {
		Physics2DData();
		/// pointer to a Rect to represent a collider
		b2Body* body;
		b2PolygonShape* shape;

		/// velocity of the Object
		Math::Force2D velocity;
		/// acceleration of the Object
		Math::Force2D acceleration;
		/// forces applied to the Object
		Math::Force2D forces;

		/// mass of the object
		float mass; 
		bool isMoveable;
#ifdef _DEBUG
		/*
		* Overridden function to print Physics2DData to string
		* \returns all properties of Physics2DData formatted to string
		*/
		 const std::string toString();
#endif
	};
}