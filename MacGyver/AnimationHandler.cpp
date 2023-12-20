#include "AnimationHandler.h"
#include <ranges>

/// MSVC stores std::deque elements in blocks of 16 bytes, in powers of 2
/// 4 uints can fit into 16 bytes, so number of IDs should be some number
/// which is a power of 2. However more ID's will cause higher memory usage.
constexpr unsigned int NUM_IDS = 512;

void Macgyver::AnimationHandler::attachRenderer(SDL_Renderer* renderer)
{
	c_renderer = renderer;
}

bool Macgyver::AnimationHandler::addAnimation(std::string name, std::string path)
{
	Animations::AnimationData* data = new Animations::AnimationData(c_renderer, path);
	return addAnimation(name, data);
}

bool Macgyver::AnimationHandler::addAnimation(std::string name, Animations::AnimationData* animation)
{
	if (animations.contains(name)) {
		return false;
	}
	animations.insert({ name, animation });
	return true;
}

void Macgyver::AnimationHandler::closeAnimationData(std::string name)
{
	if (animations.contains(name)) {
		delete animations.at(name);
		animations.erase(name);
	}
}

void Macgyver::AnimationHandler::closeAllAnimationData()
{
	for (auto& animation : animations) {
		delete animation.second;
	}
	animations.clear();
}

unsigned int Macgyver::AnimationHandler::beginAnimation(Components::RenderableData* attachedRenderable, std::string idleAnimName)
{
	if (freeIds.empty()) {
		return 0;
	}

	unsigned int id = freeIds.front();
	freeIds.pop();

	Animations::ActiveAnimation* anim = new Animations::ActiveAnimation();
	anim->idleAnimation = animations[idleAnimName];
	anim->activeAnimation = anim->idleAnimation;
	anim->attachedRenderable = attachedRenderable;
	activeAnimations.insert({ id, anim });
	return id;
}

void Macgyver::AnimationHandler::changeActiveAnimation(unsigned int id, std::string animationName)
{
	Animations::ActiveAnimation* animation = activeAnimations.at(id);
	Animations::AnimationData* newAnim = animations.at(animationName);
	if (newAnim != animation->activeAnimation) {
		animation->activeAnimation = newAnim;
		animation->currFrame = 0;
		animation->frameTick = 0;
	}
}

void Macgyver::AnimationHandler::changeCurrentFrame(unsigned int id, unsigned int frame)
{
	activeAnimations.at(id)->currFrame = frame;
}

void Macgyver::AnimationHandler::changeCurrentTick(unsigned int id, unsigned int tick)
{
	activeAnimations.at(id)->currFrame = tick;
}

void Macgyver::AnimationHandler::getCurrentFrameProperties(unsigned int id,
	unsigned int* outFrameNumber, unsigned int* outTick)
{
	Animations::ActiveAnimation* anim = activeAnimations.at(id);
	if (outFrameNumber != NULL) {
		*outFrameNumber = anim->currFrame;
	}
	if (outTick != NULL) {
		*outTick = anim->frameTick;
	}
}

void Macgyver::AnimationHandler::closeActiveAnimation(unsigned int id)
{
	if (activeAnimations.contains(id)) {
		delete activeAnimations.at(id);
		activeAnimations.erase(id);
		freeIds.push(id);
	}
}

void Macgyver::AnimationHandler::closeAllActiveAnimations()
{
	for (auto& animationPair : activeAnimations) {
		delete animationPair.second;
		freeIds.push(animationPair.first);
	}

	activeAnimations.clear();

}

void Macgyver::AnimationHandler::update(unsigned int deltaTime)
{

	for (auto &animationPair : activeAnimations) {
		Animations::ActiveAnimation* animation = animationPair.second;
		animation->frameTick += deltaTime;
		Animations::AnimationData* activeAnimation = animation->activeAnimation;

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

Macgyver::AnimationHandler::AnimationHandler()
{
	animations = {};
	activeAnimations = {};
	c_renderer = nullptr;
	for (unsigned int i = 1; i <= NUM_IDS; i++)
	{
		freeIds.push(i);
	}
}

Macgyver::AnimationHandler::~AnimationHandler()
{
}
