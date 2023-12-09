#pragma once
#include "ComponentData.h"
namespace Macgyver::Components {
	struct ComponentDataWrapper {
		ComponentDataWrapper(std::size_t type, ComponentData* data);
		std::size_t type;
		ComponentData* data;
	};
}