#pragma once
#include <typeinfo>
#include <typeindex>
#include <vector>

#include "Vector3.h"
#include "ComponentManager.h"

namespace Macgyver::Gameobjects {
	class Component;
	class Scene;
	/**
	Class which represents a single object in the world
	*/
	class GameObject {
		friend Scene;
	public:
		/// Represents the position of the object in world space
		Math::Vector3 transform;
	    /// Stores all the components of the object
	    std::vector<Macgyver::Gameobjects::Component*> components = {};
		/**
		Initialises an object and sets its position
		
		@param x horizontal position in world space, defualt 0
		@param y vertical position in world space, defualt 0
		@param z layer height (used for the camera), defualt 0
		*/
		GameObject(int x = 0, int y = 0, int z = 0);
		/**
		Adds a Component to the object
		@param comp pointer to the component to add
		*/
		void addComponent(Component* comp);

		/**
		Gets all components attached to the object which have
		the given flag set.

		@param type the flag to search for

		@returns a vector of pointers to all components which
		are attached to the object and have the selected flag
		*/
		std::vector<Component*> getComponentsWithProperty(Components::COMPONENT_TYPES type) const;
		
		/**
		Objects update method. Calls the update method
		of all attached components

		@param deltaTime time between the last frame and this frame
		*/
		void update(unsigned int deltaTime);

		/**
		Gets a pointer to the Objects parent Scene

		@returns pointer to parent Scene object
		*/
		Scene* getParentScene();

		~GameObject();

		bool enabled = true;
	private:
		///pointer to parent Scene object
		Scene* parentScene;
	};
}