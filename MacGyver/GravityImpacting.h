#pragma once
#include "Component.h"

namespace Macgyver::Components
{
	/**
	 *	\brief Struct to handle gravity's impact on all GRAV_IMPACTED objects
	 */
	struct GravityImpacting
	{
		/**
		 *	\brief GravityImpacting's update method, does nothing.
		 *
		 *	\param self pointer to the Component which the GravityImpacting is part of
		 *	\param deltaTime time in milliseconds since last frame and this one
		 */
		static void update(Gameobjects::Component* self, uint32_t deltaTime);

		/**
		 *	\brief GravityImpacting's physics update,
		 *	updates the parent GameObject's transform by
		 *	gravity * physicsDeltaTime units each call.
		 *
		 *	\param self pointer to the Component which the GravityImpacting is part of
		 */
		static void physicsUpdate(Gameobjects::Component* self);

		static void attachNew(Gameobjects::Component* comp, float g);
	};
	;
	struct GravityImpactingData : ComponentData
	{
		/// gravity to apply to all GRAV_IMPACTED objects
		float gravity;
	};
}
