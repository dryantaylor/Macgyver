#pragma once
#include "SDL.h"
#include "SDL_ttf.h"
#include <string>

namespace Macgyver::UI {
	class Font {
	public:
		/**
		* Constructor for the Font class
		*/
		Font(SDL_Renderer* renderer,std::string fontName, unsigned int ptSize);
		~Font();
		/**
		 * increments the usage count by 1
		 */
		void addUsage();
		/**
		 * decrements the usage count by 1, if it reaches 0,
		 * the font is removed
		 * \return true if the font is still open, false if it was closed
		 */
		bool removeUsage();

		/// how many symbols are in the font, currently 70
		static const int numSymbols;
		/// the symbols in the font in the same order as other arrays
		static const char* letters[70];

		///the location and size of the symbols in the font
		SDL_Rect symbolRects[70];
		/// single SDL_texture containing all the symbols
		SDL_Texture* fontMap;
		/// the pt size the font was rendered at for scaling
		unsigned int storedRenderSize;

	private:
		/// how many times the font is used currently
		int usageCount;
	};
}
