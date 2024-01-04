#include "Font.h"
#include <iostream>

const int Macgyver::UI::Font::numSymbols = 70;
const char* Macgyver::UI::Font::letters[70] =
{ "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",
  " ",".",",",":",";","@","#","!",
  "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
  "0","1","2","3","4","5","6","7","8","9"
};

Macgyver::UI::Font::Font(SDL_Renderer* renderer, std::string fontName, unsigned int ptSize)
{
	this->usageCount = 0;
	this->storedRenderSize = ptSize;

	//creates the symbols as SDL_Surfaces and stores their native width/height
	symbolRects = new SDL_Rect[numSymbols];


	//TODO: ALLOW THE SIZE OPENED AT TO BE SCALED
	TTF_Font* ttfFont = TTF_OpenFont(fontName.c_str(), 128);
	std::cout << ttfFont;
	SDL_Surface* symbols[numSymbols];
	int maxHeight = 0;
	int currWidth = 0;
	for (int i = 0; i < numSymbols; i++) {
		char* chrPtr = new char[2] {*(letters[i]), '\0'};
		symbols[i] = TTF_RenderUTF8_Blended(ttfFont, letters[i], {255,255,255});
		symbolRects[i] = SDL_Rect();
		symbolRects[i].x = currWidth;
		symbolRects[i].y = 0;
		symbolRects[i].w = symbols[i]->w;
		symbolRects[i].h = symbols[i]->h;
		currWidth += symbols[i]->w;
		maxHeight = symbols[i]->h > maxHeight ? symbols[i]->h : maxHeight;
		delete[] chrPtr;
	}

	//create a texture to store the texture in
	SDL_RendererInfo info;
	SDL_GetRendererInfo(renderer, &info);
	Uint32 format = info.texture_formats[0];
	fontMap = SDL_CreateTexture(renderer, format,
		SDL_TEXTUREACCESS_TARGET, currWidth, maxHeight);

	//convert all surfaces to a texture and render them to the font map Texture
	SDL_SetRenderTarget(renderer, fontMap);
	for (int i = 0; i < numSymbols; i++) {

		SDL_Texture* tempTexture = SDL_CreateTextureFromSurface(renderer, symbols[i]);

		SDL_RenderCopy(renderer, tempTexture, NULL, &symbolRects[i]);
		symbolRects[i].h = maxHeight;
		SDL_FreeSurface(symbols[i]);
		SDL_DestroyTexture(tempTexture);
	}
	SDL_SetRenderTarget(renderer, NULL);
	TTF_CloseFont(ttfFont);
}

Macgyver::UI::Font::~Font()
{
	delete[] symbolRects;
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
