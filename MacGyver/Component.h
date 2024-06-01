#pragma once

#include <functional>
#include <vector>
#include "ComponentDataWrapper.h"
#include "ComponentManager.h"
#include "Vector3.h"

namespace Macgyver::Gameobjects{
	class Scene;
	class GameObject;
	/**
	Stores a Component of a GameObject
	*/
	class Component {
		friend GameObject;
	public:
		/**
		Default Constructor, initialises everything to empty.
		Use when attaching a component type to this object.
		*/
		Component();

		/**
		Gets the parent GameObject of this component

		@returns pointer to the parent GameObject instance
		*/
		GameObject* getParent();

		/**
		Add a component data object to this Component
		
		@param data pointer to the data object casted to the generic
		ComponentData* class

		@param dataTypeHash hash of the original data type, obtained using
		std::typeinfo().hash_code()
		*/
		void addData(Components::ComponentData* data, std::size_t dataTypeHash);

		/**
		Gets a pointer to an attached data object of the correct type.
		Or nullptr if no data of the correct type exists.
		Data can be casted back to the needed type after being
		returned from the function.

		@param dataTypeHash hash of the original data type, obtained using
		std::typeinfo().hash_code()

		@returns pointer to the data, casted to ComponentData*
		*/
		Components::ComponentData* getData(std::size_t dataTypeHash);

		Components::ComponentData* getData(int index);
		/**
		Gets the flags/properties/types this component has set as a Uint

		@returns COMPONENT_TYPE/Uint representing the flags set
		*/
		COMPONENT_TYPE getComponentProperties();

		/**
	    Sets the ComponentProperties/flags/types this component has
		
		@param types flags to set this component to
		*/
		void setComponentProperties(COMPONENT_TYPE types);

		/**
		Gets the absoloute transform of this Component.
		(Not the transform relative to it's parent GameObject)
		*/
		Macgyver::Math::Vector3 getWorldTransform();

		/**
		Gets the Scecne this Component is in.
		*/
		Scene* getWorldScene();

		/// Transform of the Component relative to it's
		/// parent game object
		Macgyver::Math::Vector3 localTransform;

		/// update function of the Component taking this component
		/// and a deltaTime argument (function is called much like
		///a python method with a self argument)
		std::function<void(Component*, unsigned int)> update;

		/// physics update function of the Component taking this 
		/// component as an arguement (much like a python method
		/// with a self argument)
		std::function<void(Component*)> physicsUpdate;

		~Component();


		bool enabled = true;

		std::string name;
	private:
		/// set of pointers to the different data structs this
		/// component has
		std::vector<Macgyver::Components::ComponentDataWrapper*> data;
		/// pointer to the parent GameObject
		GameObject* parent;
		/// properties/flags of this component, which makes guarantees
		/// about what methods or data structures it will have
		COMPONENT_TYPE componentProperties = 0x0000;		
	
	};
}