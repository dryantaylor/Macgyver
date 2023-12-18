#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "Renderable.h"
#include "Component.h"

namespace Macgyver::Components {

	struct AnimationData {
		AnimationData(Gameobjects::Component* self, std::string path);
		~AnimationData();

		SDL_Texture** sprites;

		std::size_t numFrames;
		unsigned int* frameTimes;
		
		bool doesLoop;
		SDL_Rect size;
	};

	struct AnimationManagerData {
		AnimationManagerData();
		std::map<std::string, AnimationData*> animations;
		AnimationData* idleAnimation;
		AnimationData* activeAnimation;
		unsigned int frameTick;
		unsigned int currFrame;
		RenderableData* attachedRenderable;

		void setActiveAnimation(std::string name);
	};

	struct AnimationManager {
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		static void AttachNew(Gameobjects::Component* comp, std::string path);
	};
}
