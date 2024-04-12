#pragma once
#include "Component.h"
#include "ComponentManager.h"
#include "ComponentData.h"
#include "SDL.h"
namespace Macgyver::Components::UI {

	/**
	* Component to handle UI text
	*/
	struct Text {
		/**
		Text's update method.

		@param self pointer to the Component which the Velocity is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		static void attachNew(Gameobjects::Component* comp, std::string font, std::string text,
			unsigned int ptSize, SDL_Rect size);
	
	};

	/**
	* Struct to hold data about text being rendered to the screen
	*/
	struct TextData {
		TextData(SDL_Renderer* renderer, std::string txt, 
			std::string fnt, unsigned int ptSize, SDL_Rect rect);

		/// Text currently being rendered
		std::string text;
		/// name of font being used to render text
		std::string font;
		/// size the text is being rendered at
		unsigned int ptSize;
		/// following data is used for tracking changes
		/// between frames
		std::string INTERNAL_cachedText;
		std::string INTERNAL_cachedFont;
		unsigned int INTERNAL_cachedPtSize;

		/// boundry for the text to be rendered in 
		SDL_Rect textBoundries;
	};
}


