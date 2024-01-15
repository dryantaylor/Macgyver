#pragma once
#include "SDL.h"
#include "SDL_ttf.h"
#include <string>
#include <map>

#include "Font.h"

#define getTextRenderer Macgyver::UI::TextRenderer::getInstance()
namespace Macgyver::UI {

	class TextRenderer {
	public:
		static TextRenderer& getInstance() {
			static TextRenderer instance;
			return instance;
		}
		TextRenderer(const TextRenderer&) = delete;
		void addFont(std::string textureName, Font* font);
		void addFontUsage(std::string fontName);
		void removeFontUsage(std::string fontName);

		/*
		* TODO: ADD SCALING OF SIZE OF OUTPUT TEXT FROM SINGLE FONT
		*/
		SDL_Texture* displayText(SDL_Renderer* renderer,std::string fontName , std::string text, SDL_Rect* dstRect,
			SDL_Color displayColour = { 255,255,255 }, int ptSize = -1);
	private:
		std::map<std::string, Font*> fonts;
		TextRenderer();
		~TextRenderer();
	};
}