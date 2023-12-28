#pragma once
#include "AnimationData.h"
#include "ActiveAnimation.h"
#include "Renderable.h"
#include <SDL.h>
#include <iostream>
#include <map>
#include <queue>

#define getAnimationHandler Macgyver::AnimationHandler::getInstance()

namespace Macgyver {
	/*
    Stores a set of animations stored as a name e.g "Player/walk"
    mapped to an AnimationData object. Methods within components
    can call to load new Animation objects or close them.
    They can bind a RENDERABLE component to a loaded animation
    which creates a new entry into a map which corresponds to an
    ID to access that animation at any time. Each entry will have
    a unique tick count/ frame and can change between animations through
    method calls via this singleton handler class.

	ADD A RENDERER TO THIS CLASS BEFORE LOADING ANY COMPONENTS.
    */
	class AnimationHandler {
	public:
		/*
		Thread safe singleton. Gets the instance of the AnimationHandler.
		If one does not exist it creates one and returns that.
		*/
		static AnimationHandler& getInstance() {
			static AnimationHandler instance;
			return instance;
		}

		AnimationHandler(const AnimationHandler&) = delete;
		AnimationHandler& operator=(const AnimationHandler&) = delete;
		
		/*
		CALL ONLY ONCE IN MAIN LOOP
		attaches an SDL_Renderer* for use when creating new animations
		*/
		void attachRenderer(SDL_Renderer* renderer);
		/*
		Load an animation from file and add it to the animations.
		
		@param name name the animation will be stored as and referenced by
		
		@param path path relative to the working directory of the exe
		            to find the animation data

		@returns true if animation could be added (no animation exists with
		          the name provided). False otherwise
		*/
		bool addAnimation(std::string name, std::string path);
		/*
		Add an animation from already existing AnimationData*
		Not sure why this would be used but creating it just in case.
		WARNING: May be removed.

		@param name name the animation will be stored as and referenced by

		@param animation AnimationData reference to the Animation.
		                 This object should not be manually freed, 
						 lest bad things happen to you.

		@returns true if animation could be added (no animation exists with
				  the name provided). False otherwise
		*/
		bool addAnimation(std::string name, Animations::AnimationData* animation);

		/*
		Closes the animation data of the animation given as name

		@param name name of the animation to close
		*/
		void closeAnimationData(std::string name);

		/*
		Closes all animation data objects stored in the class
		*/
		void closeAllAnimationData();
		/*
		begins animating a renderable component and sets the idle animation
		to the animation stored with the name provided. Active animation
		will defualt to this as well. 
		WARNING: idle animation should always loop. Undefined behaviour if it
		doesn't. Losing a returned ID will mean there is no way to modify the
		animation, including freeing the memory. A full flush of all managed
		animations would be required to stop the animation.

		@param attachedRenderable RenderableData reference to the Component to 
		                          animate
		
		@param animName name of the animation to set as the idle and 
		                first active Animation

		@returns unsigned int id of the animation used in all methods which
		         require an id to effect. Will return 0 if no more animations
				 are available (currently 512 at once)
		*/
		unsigned int beginAnimation(Components::RenderableData* attachedRenderable, std::string animName);

		/*
		Given an id for an animation currently being managed, and a
		name of the animation to change it to change the animation from the current
		animation to the new one, and reset it's current frame and time along that
		frame. If the new animation is the same as the old one, no changes to frame
		will be made.

		@param id id of the managed animation as given by the begin animation.

		@param name name as passed into addAnimation of the animation to swap to
		*/
		void changeActiveAnimation(unsigned int id, std::string animationName);

		/*
		Given an id for an animation currently being managed, change the current
		frame of that animation to frame. 
		WARNING: passing in a value higher than the number of frames may cause
		issues. If you're unsure of how many frames an animation has check with
		getCurrentFrameProperties. 
		Does not check for id being valid.

		@param id id of the managed animation as given by the beginAnimation.

		@param frame frame number to set the current frame to
		*/
		void changeCurrentFrame(unsigned int id, unsigned int frame);

		/*
		Given an id for an animation currently being managed, change the current
		tick of that animation (tick meaning how far into the frame it is).
		Does not check for id being valid

		@param id id of the managed animation as given by beginAnimation

		@param tick tick value to change the current tick to
		*/
		void changeCurrentTick(unsigned int id, unsigned int tick);

		/*
		Gives the frame number and current tick of the animation given by id.

		@param id id of the managed animation as given by beginAnimation

		@param outFrameNumber pointer to an unsigned int to write a copy of the
		                      frame number to, or NULL to not write it
		
		@param outTick pointer to an unsigned int to write a copy of the current
		               tick to, or NULL to not write it
		*/
		void getCurrentFrameProperties(unsigned int id, unsigned int* outFrameNumber, unsigned int* outTick);
		
		/*
		Closes the active animation given by id, and frees the id to be used
		again.

		@param id id of the managed animation as given by beginAnimation
		*/
		void closeActiveAnimation(unsigned int id);

		/*
		closes all active animations
		*/
		void closeAllActiveAnimations();

		/*
		checks all active animations for any frame changes

		@param deltaTime time in ms between last frame and current frame.
		*/
		void update(unsigned int deltaTime);

		
	private:
		AnimationHandler();
		~AnimationHandler();

		std::map<std::string, Animations::AnimationData*> animations;
		std::map<unsigned int, Animations::ActiveAnimation*> activeAnimations;
		std::queue<unsigned int> freeIds;
		SDL_Renderer* c_renderer; //used for loading new animations
	};
}




