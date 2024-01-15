#pragma once
#include "SDL.h"
#include "SDL_ttf.h"
#include <string>

namespace Macgyver::UI {
	class Font {
	public:
		Font(SDL_Renderer* renderer,std::string fontName, unsigned int ptSize);
		~Font();
		void addUsage();
		bool removeUsage();

		static const int numSymbols;
		static const char* letters[70];

		SDL_Rect* symbolRects;
		SDL_Texture* fontMap;
		unsigned int storedRenderSize;

	private:
		int usageCount;
	};
}
