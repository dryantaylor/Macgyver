#pragma once
#include <cstdint>

#define COMPONENT_TYPE uint32_t


namespace Macgyver::Components {
	/**
	Enum giving all the possible built-in flags for a component to have
	*/
	enum COMPONENT_TYPES: COMPONENT_TYPE {
		NONE = 0,
		///Commitment to have a RenderableData data attached
		RENDERABLE              = 0b00000000000000000000000000000001,
		///commitment to handle sprite drawing
		RENDERER                = 0b00000000000000000000000000000010,
		///Commitment to have Physics 2D data with a collision box
		COLLIDER                = 0b00000000000000000000000000000100,
		///Commitment to have Physics2DData where velocity will act on GameObjects Transform
		PHYSICS_STATIC          = 0b00000000000000000000000000001000,
		PHYSICS_DYNAMIC         = 0b00000000000000000000000000010000,
		///Don't update with other objects, call UIUpdate at after all world objects are done updating
		UI_RENDERABLE           = 0b00000000000000000000000000100000,
		UI_INTERACTABLE         = 0b00000000000000000000000001000000
	};
	constexpr unsigned int MIN_PLAYER_TYPE_VAL = 128U << 1;
	/**
	Gets if a component has a given flag or not

	@param targetType type/flag to check for
	@param component flags of the component being checked

	@returns true if the flag is set, false if not
	*/
	bool hasProperty(COMPONENT_TYPES targetType, unsigned int component);
};