#pragma once
#include <SDL.h>


namespace Macgyver {
	class Input {
	public:
		static void update();
		static bool isKeyDown(SDL_KeyCode key);
		static bool isKeyDown(SDL_Scancode key);
	private:
		static Uint8* keyboardState;

	};
}