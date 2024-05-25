#pragma once
#include "GameObject.h"

#include "Scene.h"
#include < iomanip >
#include <sstream>
/**
* Macro for getting the hash of a type
*/
#define typeHash(type) typeid(type).hash_code()

/**
* Macro for getting the data of a component of
* type *type* casted correctly
*/
#define componentGetData(comp, type) \
(type*)(comp->getData(typeHash(type))) 

/**
* Macro for creating a new ComponentData of type
* *type* with arguments following given to the
* constructor
*/
#define componentCreateData(type, ...) \
(Macgyver::Components::ComponentData*) \
new type(__VA_ARGS__), \
typeid(type).hash_code()


namespace Macgyver::Components {
	/**
	Dummy structure to represent a given used Data struct
	*/
	struct ComponentData {
#if _DEBUG
		/*
		* Default function to output Component Data to string
		* \returns address of function in string form
		*/
		virtual const std::string toString() {
			std::stringstream stream;
			stream << std::hex << this;
			return stream.str();
		}
#endif
	private:
		virtual void ignore() { }
	};
}