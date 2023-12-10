#pragma once


#define COMPONENT_TYPE unsigned int

namespace Macgyver::Components {
	/*
	Enum giving all the possible built-in flags for a component to have
	*/
	enum COMPONENT_TYPES: unsigned int {
		NONE = 0,
		//Commitment to have a RenderableData data attached
		RENDERABLE              = 0b00000000000000000000000000000001,
		//commitment to handle sprite drawing
		RENDERER                = 0b00000000000000000000000000000010,
		//Commitment to have Physics 2D data with a collision box
		COLLIDER      = 0b00000000000000000000000000000100,
		//Commitment to have Physics2DData where velocity will act on GameObjects Transform
		VELOCITY                = 0b00000000000000000000000000001000,
		//Same commitment as PHYSICS2D_VELOCITY but allowing gravity to act on it
		GRAV_IMPACTED           = 0b00000000000000000000000000010000,
		//commitment to only have one in the scene
		GRAV_IMPACTING          = 0b00000000000000000000000000100000
	};

	/*
	Gets if a component has a given flag or not

	@param targetType type/flag to check for
	@param component flags of the component being checked

	@returns true if the flag is set, false if not
	*/
	bool hasProperty(COMPONENT_TYPES targetType, unsigned int component);
};