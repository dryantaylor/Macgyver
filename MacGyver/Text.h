#pragma once
#include "Component.h"
#include "ComponentManager.h"
#include "ComponentData.h"
#include "SDL.h"
namespace Macgyver::Components::UI {

	struct Text {
		/*
		Text's update method, calls the draw method.

		@param self pointer to the Component which the Velocity is part of
		@param deltaTime time in milliseconds since last frame and this one
		*/
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		static void attachNew(Gameobjects::Component* comp, std::string font, std::string text,
			unsigned int ptSize, SDL_Rect size);
	
	};

	struct TextData {
		TextData(SDL_Renderer* renderer, std::string txt, 
			std::string fnt, unsigned int ptSize, SDL_Rect rect);

		std::string text;
		std::string font;
		unsigned int ptSize;
		std::string INTERNAL_cachedText;
		std::string INTERNAL_cachedFont;
		unsigned int INTERNAL_cachedPtSize;

		SDL_Rect textBoundries;
	};
}


