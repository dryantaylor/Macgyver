#pragma once
#include <SDL.h>
#include <string>
namespace Macgyver {
	class Input {
	public:
		static  Uint8* keyboardState;
		static void init();
		static void update();
		static bool isKeyDown(SDL_KeyCode key);
		static bool isKeyDown(SDL_Scancode key);


	};
}