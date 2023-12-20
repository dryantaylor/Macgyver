#pragma once
#include <string>
#include <SDL.h>

namespace Macgyver::Animations {
	/*
	Holds information about an animation loaded from disk
	*/
	struct AnimationData {
		AnimationData(SDL_Renderer* renderer, std::string path);
		~AnimationData();

		//the frames of the animation as an array
		SDL_Texture** sprites;

		//number of frames in the animation
		std::size_t numFrames;

		//how many milliseconds to display each frame for as an array
		unsigned int* frameTimes;

		//repeat the animation after it finishes?
		bool doesLoop;
		//x and y component = 0, w and h represent size of the textures
		SDL_Rect size;

	};

}