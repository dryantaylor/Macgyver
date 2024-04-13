#pragma once
#include "SDL.h"
#include "SDL_ttf.h"
#include <string>
#include <map>

#include "Font.h"

/// shortcut for getting the singleton instance of the TextRenderer
#define getTextRenderer Macgyver::UI::TextRenderer::getInstance()


namespace Macgyver::UI {
	/**
	 * \brief Singleton class for rendering text to the screen
	 */
	class TextRenderer {
	public:
		static TextRenderer& getInstance() {
			static TextRenderer instance;
			return instance;
		}
		TextRenderer(const TextRenderer&) = delete;

		/**
		 * \brief add a Font object to the text renderer with a given name
		 * \param fontName string to refer to the font by
		 * \param font reference to the Font object to use with this name
		 */
		void addFont(std::string fontName, Font* font);

		/**
		 * \brief increment the usage count of a font by 1
		 * \param fontName name given to the font when it was added
		 */
		void addFontUsage(std::string fontName);
		/**
		 * \brief decrement the usage count of a font by 1,
		 *   delete the font if the usage count reaches 0
		 * \param fontName name given to the font when it was added
		 */
		void removeFontUsage(std::string fontName);

		/**
		 * \brief render a string of text to the screen in a given font
		 * \param renderer renderer of the screen
		 * \param fontName name given to the font when it was added
		 * \param text text to render
		 * \param dstRect width and height of the text box, x and y are ignored
		 * \param displayColour SDL_Color of the text
		 * \param ptSize ptSize to render at
		 * \return texture of the rendered text to be drawn to the screen
		 */
		SDL_Texture* displayText(SDL_Renderer* renderer,std::string fontName , std::string text, const SDL_Rect* dstRect,
		                         SDL_Color displayColour = { 255,255,255 }, int ptSize = -1);
	private:
		/// map of font names to Font objects
		std::map<std::string, Font*> fonts;
		///hide constructor and destructor
		TextRenderer();
		~TextRenderer();
	};
}