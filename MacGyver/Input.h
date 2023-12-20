#pragma once
#include <SDL.h>


namespace Macgyver {
	/**
	Static class to handle checking for input in the engine
	*/
	class Input{
	public:

		static Input& getInstance() {
			static Input instance;
			return instance;
		}

		Input(const Input&) = delete;
		Input& operator=(const Input&) = delete;
		/**
	    Called once each frame in the main game loop
		Note: Must be called after SDL's pump
		WARNING: ONLY CALL IN MAIN GAME LOOP
		*/
		void update();
		/**
		Gets if the passed in key is held.
		(NOTE: key will be converted to SDL_Scancode 
		representation internally)
		
		@param key SDL_KeyCode representing the selected key
		@returns true if presed down currently, false if not
		*/
		bool isKeyDown(SDL_KeyCode key);
		/**
		Gets if the passed in key is held.
		@param key SDL_Scancode representing the selected key
		@returns true if presed down currently, false if not
		*/
		bool isKeyDown(SDL_Scancode key);
	private:

		Input();
		~Input();
		///pointer to the internal SDL keyboard array
		Uint8* keyboardState;

	};
}