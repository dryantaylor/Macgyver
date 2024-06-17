#pragma once
#include "ComponentData.h"
#include "box2d.h"

class Macgyver::Gameobjects::Component;
namespace Macgyver::Components {
	
	struct PhysicsData: ComponentData {
	public:
		/// <summary>
		///  Static Body Contrsuctor
		/// </summary>
		/// <param name="parent"></param>
		/// <param name="width"></param>
		/// <param name="height"></param>
		PhysicsData(Gameobjects::Component* parent ,int32_t width, int32_t height);
		/// <summary>
		/// Dynamic Body Constructor
		/// </summary>
		/// <param name="width"></param>
		/// <param name="height"></param>
		/// <param name="friction"></param>
		/// <param name="mass"></param>
		PhysicsData(Gameobjects::Component* parent,int32_t width, int32_t height, 
			float friction, float mass);
		b2Body* body;
	};
}