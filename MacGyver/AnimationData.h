#pragma once
#include <string>
#include <SDL.h>

namespace Macgyver::Animations {
	struct AnimationData {
		AnimationData(SDL_Renderer* renderer, std::string path);
		~AnimationData();

		SDL_Texture** sprites;

		std::size_t numFrames;
		unsigned int* frameTimes;

		bool doesLoop;
		SDL_Rect size;

	};

}