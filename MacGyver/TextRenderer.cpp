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

SDL_Texture* Macgyver::UI::TextRenderer::displayText(SDL_Renderer* renderer, std::string fontName, std::string text,
	SDL_Rect* dstRect, SDL_Color displayColour, int ptSize )
{
	Font* font = this->fonts.at(fontName);

	//e.g font stored at 256, and outputting at 128
	//so to get the w and height to draw the 256 font at we times the passed
	//in values by 2 (256/128)
	double scaleToFontSize = font->storedRenderSize / (double)ptSize;;

	SDL_Rect unscaledOutputRect = { 0,0,dstRect->w * scaleToFontSize, dstRect->h * scaleToFontSize };
	
	SDL_Rect workingRect;
	workingRect.x = workingRect.y = 0;
	workingRect.h = dstRect->h * scaleToFontSize;
	workingRect.w = dstRect->w * scaleToFontSize;
	//create an output texture
	SDL_RendererInfo info;
	SDL_GetRendererInfo(renderer, &info);

	Uint32 format = info.texture_formats[0];
	SDL_Texture* output_unscaled = SDL_CreateTexture(renderer, format, SDL_TEXTUREACCESS_TARGET, unscaledOutputRect.w, unscaledOutputRect.h);
	SDL_SetTextureBlendMode(output_unscaled, SDL_BLENDMODE_BLEND);
	//render each symbol to the output texture in order
	SDL_SetRenderTarget(renderer, output_unscaled);
	SDL_SetTextureColorMod(font->fontMap,
		displayColour.r, displayColour.g, displayColour.b);
	for (auto chr : text) {
		char* chrPtr = new char[2] {chr, '\0'};

		//find the correct symbol
		for (int i = 0; i < font->numSymbols; i++) {
			if (*(font->letters[i]) == *chrPtr) {
				if (workingRect.x + font->symbolRects[i].w > unscaledOutputRect.w) {
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
	SDL_Texture* output_scaled = SDL_CreateTexture(renderer, format, SDL_TEXTUREACCESS_TARGET,
		dstRect->w, dstRect->h);
	SDL_SetTextureBlendMode(output_scaled, SDL_BLENDMODE_BLEND);
	
	SDL_SetRenderTarget(renderer, output_scaled);
	SDL_RenderCopy(renderer, output_unscaled, NULL,NULL);
	
	SDL_DestroyTexture(output_unscaled);
	SDL_SetRenderTarget(renderer, NULL);

	return output_scaled;
}

