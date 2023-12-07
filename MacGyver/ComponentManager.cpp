#include "ComponentManager.h"

namespace Macgyver::Components{
	bool hasProperty(COMPONENT_TYPES targetType, unsigned int component)
	{
		return (targetType & component);
	}
};