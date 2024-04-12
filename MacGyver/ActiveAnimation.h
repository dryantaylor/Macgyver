#pragma once
#include "AnimationData.h"
#include "Renderable.h"
namespace Macgyver::Animations {
	/**
	Holds an animation currently being ran each frame
	*/
	struct ActiveAnimation 
	{
		///current frame of the animation
		unsigned int currFrame = 0;
		///how many ms/ticks into the current frame of the animation
		unsigned int frameTick = 0;

		///pointer to the animation currently being animated
		AnimationData* activeAnimation;
		///fall back animation when a non-looping active animation finishes
		AnimationData* idleAnimation;
		///the renderable object to target the animation
		Components::RenderableData* attachedRenderable;

	};
}
