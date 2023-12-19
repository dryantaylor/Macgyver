#pragma once
#include "AnimationData.h"
#include "Renderable.h"
namespace Macgyver::Animations {
	struct ActiveAnimation 
	{
		unsigned int currFrame = 0;
		unsigned int frameTick = 0;
		AnimationData* activeAnimation;
		AnimationData* idleAnimation;
		Components::RenderableData* attachedRenderable;

	};
}
