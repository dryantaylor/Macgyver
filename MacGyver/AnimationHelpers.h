#pragma once
#include <string>
#include <fstream>
#include "SDL.h"
#include "Component.h"

namespace Macgyver::HelperFunctions {
	void ReadAnimation(std::string folderPath, SDL_Renderer* renderer,
		unsigned int** outFrameTimes, SDL_Texture*& outFrameSprite, 
		std::size_t& outNumFrames, bool* doesLoop, SDL_Rect* size);

	
}
