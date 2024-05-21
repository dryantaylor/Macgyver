#include "ComponentDataWrapper.h"

//creates the map to map hashCodes to deleting an arbritrary component data object
#include "deletors.h"


Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper(std::size_t type,
	Macgyver::Components::ComponentData* data)
{
	this->type = type;
	this->data = data;
}

void Macgyver::Components::ComponentDataWrapper::deleteComponent()
{

	if (deletors.find(type) != deletors.end()) {
		std::cout << "deleting component in deleteComponent: "<< data << std::endl;
		deletors.at(type)(data);

	}

}
