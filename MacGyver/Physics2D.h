#pragma once
#include "SDL.h"
#include "Force2D.h"
namespace Macgyver::Components {
	static struct PhysicsConstants {
		static const float physicsDeltaTime;
	};
	struct Physics2DData {
		Physics2DData();
		SDL_Rect* collider;
		Math::Force2D velocity;
		float mass; 
	};
}