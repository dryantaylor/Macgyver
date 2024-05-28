#pragma once
#include <string>

#include "SDL.h"
#include <vector>
#include "ComponentManager.h"
#include "box2d.h"
#include "Force2d.h"
namespace Macgyver::Gameobjects {
	class GameObject;
	class Component;
	/**
	Class to represent a group of objects in the world at once
	*/
	class Scene {
		friend GameObject;
	public:
		///sdl renderer used for the scene
		SDL_Renderer* scene_RENDERER;
		/**
		Default Contsructor, set's world gravity to 0,0
		*/
		Scene(std::string name);

		/**
		* Constructor which also sets gravity
		*/
		Scene(std::string name, Math::Force2D gravity);

		/**
		Adds a GameObject instance to the scene

		@param obj GameObject instance to be added to this scene
		*/
		void addObject(GameObject* obj);

		/**
		Returns all Components in the scene which have a
		specific type
		
		@param type the Component type flag to search for
		
		@returns a vector containing pointers to all the
		Components in the scene which match the flag given
		*/
		std::vector<Component*> getComponentsInWorldByType(Components::COMPONENT_TYPES type);

		std::string getName() { return name; }

		/*
		 * \brief gets the physicsGravImpactingCache as readonly
		 *
		 * Used for applying gravity
		 *
		 */
		const std::vector<Component*>& getPhysicsGravImpactedCache() { return physicsGravImpactedCache; }
		 b2Body* createPhysicsBody(const b2BodyDef* def) const;
		/**
		Update method for the scene
		to be called once in the main game loop after updating input
		and clearing the renderer.
		Calls the update methods of all GameObjects in the scene.
		
		@param deltaTime time in milliseconds that has elapsed since the
		last frame
		*/
		void update(uint32_t deltaTime);

		/**
		physics update method for the scene.
		
		NOTE: physics updates 50 times per second (every 20ms)

		@param deltaTime time in milliseconds since the last frame
		*/
		void physicsUpdate(uint32_t deltaTime);

		~Scene();

	private:
		b2World* world;
		/// vector of GameObjects in the scene
		std::vector<GameObject*> objects;
		// In order of calling in physicsUpdate. 
		// Updated every frame during the scenes update method
	
		/// stores all components which have the velocity flag
		std::vector<Component*> physicsVelocityCache;
		/// stores all components which have the gravity impacted flag
		std::vector<Component*> physicsGravImpactedCache;
		/// stores all components in the scene which have the collider flag
		std::vector<Component*> physicsColliderCache;
		//stores the ticks since the last physicsUpdate
		uint32_t physicsTick = 0;

		std::string name;
	};
}