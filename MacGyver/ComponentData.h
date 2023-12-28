#pragma once
#include "GameObject.h"

#include "Scene.h"

#define typeHash(type) typeid(type).hash_code()

#define componentGetData(comp, type) \
(type*)(comp->getData(typeHash(type)))

#define componentCreateData(type, ...) \
(Macgyver::Components::ComponentData*) \
new type(__VA_ARGS__), \
typeid(type).hash_code()


namespace Macgyver::Components {
	/*
	Dummy structure to represent a given used Data struct
	*/
	struct ComponentData {
		
	};
}