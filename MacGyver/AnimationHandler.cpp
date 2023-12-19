#include "AnimationHandler.h"
#include <ranges>

constexpr unsigned int NUM_IDS = 512;

void Macgyver::Animations::AnimationHandler::attachRenderer(SDL_Renderer* renderer)
{
	c_renderer = renderer;
}

bool Macgyver::Animations::AnimationHandler::addAnimation(std::string name, std::string path)
{
	AnimationData* data = new AnimationData(c_renderer, path);
	return addAnimation(name, data);
}

bool Macgyver::Animations::AnimationHandler::addAnimation(std::string name, AnimationData* animation)
{
	if (animations.contains(name)) {
		return false;
	}
	animations.insert({ name, animation });
	return true;
}

void Macgyver::Animations::AnimationHandler::closeAnimationData(std::string name)
{
	if (animations.contains(name)) {
		delete animations.at(name);
		animations.erase(name);
	}
}

void Macgyver::Animations::AnimationHandler::closeAllAnimationData()
{
	for (auto& animation : animations) {
		delete animation.second;
	}
	animations.clear();
}

unsigned int Macgyver::Animations::AnimationHandler::beginAnimation(Components::RenderableData* attachedRenderable, std::string idleAnimName)
{
	if (freeIds.empty()) {
		return 0;
	}

	unsigned int id = freeIds.front();
	freeIds.pop();

	ActiveAnimation* anim = new ActiveAnimation();
	anim->idleAnimation = animations[idleAnimName];
	anim->activeAnimation = anim->idleAnimation;
	anim->attachedRenderable = attachedRenderable;
	activeAnimations.insert({ id, anim });
	return id;
}

void Macgyver::Animations::AnimationHandler::changeActiveAnimation(unsigned int id, std::string animationName)
{
	ActiveAnimation* animation = activeAnimations.at(id);
	AnimationData* newAnim = animations.at(animationName);
	if (newAnim != animation->activeAnimation) {
		animation->activeAnimation = newAnim;
		animation->currFrame = 0;
		animation->frameTick = 0;
	}
}

void Macgyver::Animations::AnimationHandler::changeCurrentFrame(unsigned int id, unsigned int frame)
{
	activeAnimations.at(id)->currFrame = frame;
}

void Macgyver::Animations::AnimationHandler::changeCurrentTick(unsigned int id, unsigned int tick)
{
	activeAnimations.at(id)->currFrame = tick;
}

void Macgyver::Animations::AnimationHandler::getCurrentFrameProperties(unsigned int id,
	unsigned int* outFrameNumber, unsigned int* outTick)
{
	ActiveAnimation* anim = activeAnimations.at(id);
	if (outFrameNumber != NULL) {
		*outFrameNumber = anim->currFrame;
	}
	if (outTick != NULL) {
		*outTick = anim->frameTick;
	}
}

void Macgyver::Animations::AnimationHandler::closeActiveAnimation(unsigned int id)
{
	if (activeAnimations.contains(id)) {
		delete activeAnimations.at(id);
		activeAnimations.erase(id);
		freeIds.push(id);
	}
}

void Macgyver::Animations::AnimationHandler::closeAllActiveAnimations()
{
	for (auto& animationPair : activeAnimations) {
		delete animationPair.second;
		freeIds.push(animationPair.first);
	}

	activeAnimations.clear();

}

void Macgyver::Animations::AnimationHandler::update(unsigned int deltaTime)
{

	for (auto &animationPair : activeAnimations) {
		ActiveAnimation* animation = animationPair.second;
		animation->frameTick += deltaTime;
		AnimationData* activeAnimation = animation->activeAnimation;

		while (animation->frameTick > 
			activeAnimation->frameTimes[animation->currFrame]) {
			animation->currFrame++;
			animation->frameTick -= activeAnimation->frameTimes[animation->currFrame];
			//if previously on last frame
			if (animation->currFrame == activeAnimation->numFrames) {
				animation->currFrame = 0;

				//if active animation doesn't loop swap to idle
				if (!activeAnimation->doesLoop) {
					animation->activeAnimation = animation->idleAnimation;
				}
			}

			animation->attachedRenderable->texture =
				activeAnimation->sprites[animation->currFrame];
			
			
		}

	}
}

Macgyver::Animations::AnimationHandler::AnimationHandler()
{
	animations = {};
	activeAnimations = {};
	c_renderer = nullptr;
	for (unsigned int i = 1; i <= NUM_IDS; i++)
	{
		freeIds.push(i);
	}
}

Macgyver::Animations::AnimationHandler::~AnimationHandler()
{
}
