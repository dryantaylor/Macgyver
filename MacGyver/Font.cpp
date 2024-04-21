#include "Font.h"
#include <iostream>


const int Macgyver::UI::Font::numSymbols = 70;
const char* Macgyver::UI::Font::letters[70] =
{ "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",
  " ",".",",",":",";","@","#","!",
  "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
  "0","1","2","3","4","5","6","7","8","9"
};

//TODO: Memory leak here possibly, figure out
Macgyver::UI::Font::Font(SDL_Renderer* renderer, std::string fontName, unsigned int ptSize)
{
	this->usageCount = 0;
	this->storedRenderSize = ptSize;

	//TODO: split rows not when reaching 8192 pixels but evenly along the horizontal
	//creates the symbols as SDL_Surfaces and stores their native width/height
	//symbolRects = new SDL_Rect[numSymbols];
	TTF_Font* ttfFont = TTF_OpenFont((std::string(SDL_GetBasePath()) + fontName).c_str(), ptSize);
#ifdef _DEBUG
	if (ttfFont == NULL)
	{
		std::cout << "Error: TTF: " << TTF_GetError() << std::endl;
		throw std::runtime_error("Failed to load font");
	}
#endif
	SDL_Surface* symbols[numSymbols];

	int maxHeight = 0;
	int currWidth = 0;
	int rows = 1;
	int maxWidth = 0;
	for (int i = 0; i < numSymbols; i++) {
		
		symbols[i] = TTF_RenderUTF8_Blended(ttfFont, letters[i], {255,255,255});
#ifdef _DEBUG
		if (symbols[i] == NULL)
		{
			std::cout << "Error: TTF: " << TTF_GetError() << std::endl;
			throw std::runtime_error("Failed to render font");
		}
#endif
		symbolRects[i] = SDL_Rect();
		if (currWidth + symbols[i]->w > 8192) {
			maxWidth = currWidth > maxHeight ? currWidth : maxWidth;
			symbolRects[i].x = 0;
			rows++;
			currWidth = symbols[i]->w;
		}
		else {
			symbolRects[i].x = currWidth;
			currWidth += symbols[i]->w;
		}
		symbolRects[i].y = rows - 1;
		symbolRects[i].w = symbols[i]->w;
		symbolRects[i].h = symbols[i]->h;
		
		maxHeight = symbols[i]->h > maxHeight ? symbols[i]->h : maxHeight;
	}

	for (int i = 0; i < numSymbols; i++) 
	{
		symbolRects[i].y *= maxHeight+1;
	}

	//create a texture to store the texture in
	SDL_RendererInfo info;
	SDL_GetRendererInfo(renderer, &info);
	Uint32 format = info.texture_formats[0];
	fontMap = SDL_CreateTexture(renderer, format,
		SDL_TEXTUREACCESS_TARGET, maxWidth, (maxHeight +1) * rows);
#ifdef _DEBUG
	if (fontMap == NULL)
	{
		std::cout << "error creating texture" << std::endl;
		throw std::runtime_error("Error with texture");
	}
#endif 
	
	//convert all surfaces to a texture and render them to the font map Texture
	SDL_SetRenderTarget(renderer, fontMap);
	for (int i = 0; i < numSymbols; i++) {
		SDL_Texture* tempTexture = SDL_CreateTextureFromSurface(renderer, symbols[i]);

		SDL_RenderCopy(renderer, tempTexture, NULL, &symbolRects[i]);
		SDL_FreeSurface(symbols[i]);
		SDL_DestroyTexture(tempTexture);
	}
	
	SDL_SetRenderTarget(renderer, NULL);
	TTF_CloseFont(ttfFont);

	
}

Macgyver::UI::Font::~Font()
{
	//delete[] symbolRects;
	SDL_DestroyTexture(fontMap);
}

void Macgyver::UI::Font::addUsage()
{
	usageCount++;
}

bool Macgyver::UI::Font::removeUsage()
{
	usageCount--;
	if (usageCount <= 0) {
		delete this;
		return false;
	}
	return true;
}