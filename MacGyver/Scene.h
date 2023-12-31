#pragma once
#include "SDL.h"
#include <vector>
#include "ComponentManager.h"

namespace Macgyver::Gameobjects {
	class GameObject;
	class Component;
	/*
	Class to represent a group of objects in the world at once
	*/
	class Scene {
		friend GameObject;
	public:
		///sdl renderer used for the scene
		SDL_Renderer* scene_RENDERER;
		/*
		Default Contsructor
		*/
		Scene();
		/*
		Adds a GameObject instance to the scene

		@param obj GameObject instance to be added to this scene
		*/
		void addObject(GameObject* obj);

		/*
		Returns all Components in the scene which have a
		specific type
		
		@param type the Component type flag to search for
		
		@returns a vector containing pointers to all the
		Components in the scene which match the flag given
		*/
		std::vector<Component*> getComponentsInWorldByType(Components::COMPONENT_TYPES type);
		
		/*
		Update method for the scene
		to be called once in the main game loop after updating input
		and clearing the renderer.
		Calls the update methods of all GameObjects in the scene.
		
		@param deltaTime time in milliseconds that has elapsed since the
		last frame
		*/
		void update(unsigned int deltaTime);

		/*
		physics update method for the scene.
		
		NOTE: physics updates 50 times per second (every 20ms)

		@param deltaTime time in milliseconds since the last frame
		*/
		void physicsUpdate(unsigned int deltaTime);
	private:
		/// vector of GameObjects in the scene
		std::vector<GameObject*> objects;
		// In order of calling in physicsUpdate. 
		// Updated every frame during the scenes update method
		
		/// stores a component in the scene which causes gravity to act
		Component* physicsGravImpactingCache;
		/// stores all components which have the velocity flag
		std::vector<Component*> physicsVelocityCache;
		/// stores all components which have the gravity impacted flag
		std::vector<Component*> physicsGravImpactedCache;
		/// stores all components in the scene which have the collider flag
		std::vector<Component*> physicsColliderCache;
		//stores the ticks since the last physicsUpdate
		unsigned int physicsTick = 0;
	};
}