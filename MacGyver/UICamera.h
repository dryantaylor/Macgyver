#pragma once
#include <vector>

#include "Component.h"
#include "ComponentManager.h"
#include "ComponentData.h"
#include "Vector3.h"

namespace Macgyver::Components::UI {

	struct UICamera {
		static void draw(Gameobjects::Component* self);

		static void update(Gameobjects::Component* self, unsigned int deltaTime);

		static void AttachNew(Gameobjects::Component* comp);

	};
}
