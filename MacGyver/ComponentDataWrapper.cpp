#include "ComponentDataWrapper.h"

Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper(std::size_t type,
	Macgyver::Components::ComponentData* data)
{
	this->type = type;
	this->data = data;
}
