#include "ComponentDataWrapper.h"

//creates the map to map hashCodes to deleting an arbritrary component data object
#include "constructDataWrapperMaps.h"


Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper(std::size_t type,
	Macgyver::Components::ComponentData* data)
{
	this->type = type;
	this->data = data;
}

void Macgyver::Components::ComponentDataWrapper::deleteComponent()
{

	if (destructors.find(type) != destructors.end()) {
		std::cout << "deleting component: "<< data << ", using deletor for "<< typeHashToComponentNames.at(type) << std::endl;
		destructors.at(type)(data);

	}

}
