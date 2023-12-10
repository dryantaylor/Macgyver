#pragma once
#include <SDL.h>


namespace Macgyver {
	/**
	Static class to handle checking for input in the engine
	*/
	class Input {
	public:
		/**
	    Called once each frame in the main game loop
		Note: Must be called after SDL's pump
		WARNING: ONLY CALL IN MAIN GAME LOOP
		*/
		static void update();
		/**
		Gets if the passed in key is held.
		(NOTE: key will be converted to SDL_Scancode 
		representation internally)
		
		@param key SDL_KeyCode representing the selected key
		@returns true if presed down currently, false if not
		*/
		static bool isKeyDown(SDL_KeyCode key);
		/**
		Gets if the passed in key is held.
		@param key SDL_Scancode representing the selected key
		@returns true if presed down currently, false if not
		*/
		static bool isKeyDown(SDL_Scancode key);
	private:
		//pointer to the internal SDL keyboard array
		static Uint8* keyboardState;

	};
}