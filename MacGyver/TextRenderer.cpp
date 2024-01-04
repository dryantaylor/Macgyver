#include "TextRenderer.h"
#include <iostream>


Macgyver::UI::TextRenderer::TextRenderer()
{
	this->fonts = {};
}

Macgyver::UI::TextRenderer::~TextRenderer()
{
}

void Macgyver::UI::TextRenderer::addFont(std::string fontName, Font* font)
{
	this->fonts.insert({ fontName, font });
}

void Macgyver::UI::TextRenderer::addFontUsage(std::string fontName)
{
	this->fonts.at(fontName)->addUsage();
}

void Macgyver::UI::TextRenderer::removeFontUsage(std::string fontName)
{
	this->fonts.at(fontName)->removeUsage();
}

SDL_Texture* Macgyver::UI::TextRenderer::DisplayText(SDL_Renderer* renderer, std::string fontName, std::string text, SDL_Rect* dstRect, SDL_Color displayColour)
{
	Font* font = this->fonts.at(fontName);

	SDL_Rect workingRect;
	workingRect.x = workingRect.y = 0;
	workingRect.h = dstRect->h;
	workingRect.w = dstRect->w;
	//create an output texture
	SDL_RendererInfo info;
	SDL_GetRendererInfo(renderer, &info);

	Uint32 format = info.texture_formats[0];
	SDL_Texture* output = SDL_CreateTexture(renderer, format, SDL_TEXTUREACCESS_TARGET, workingRect.w, workingRect.h);
	SDL_SetTextureBlendMode(output, SDL_BLENDMODE_BLEND);
	//render each symbol to the output texture in order
	SDL_SetRenderTarget(renderer, output);
	SDL_SetTextureColorMod(font->fontMap,
		displayColour.r, displayColour.g, displayColour.b);
	for (auto chr : text) {
		char* chrPtr = new char[2] {chr, '\0'};

		//find the correct symbol
		for (int i = 0; i < font->numSymbols; i++) {
			if (*(font->letters[i]) == *chrPtr) {
				if (workingRect.x + font->symbolRects[i].w > dstRect->w) {
					workingRect.x = 0;
					workingRect.y += font->symbolRects[i].h;
				}
				workingRect.w = font->symbolRects[i].w;
				workingRect.h = font->symbolRects[i].h;
				SDL_RenderCopy(renderer, font->fontMap, &(font->symbolRects[i]), &workingRect);
				workingRect.x += font->symbolRects[i].w;
				break;
			}

		}
		delete[] chrPtr;
	}
	SDL_SetRenderTarget(renderer, NULL);
	//std::cout << output << std::endl;
	return output;
}

