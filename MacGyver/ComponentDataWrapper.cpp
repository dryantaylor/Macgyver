#include "ComponentDataWrapper.h"
#include  "UIRenderableData.h"

const std::map<std::size_t, const std::function<void(Macgyver::Components::ComponentData*)>>
Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper::deletors = {
	{typeid(Macgyver::Components::UI::UIRenderableData).hash_code(), [](ComponentData* data) {
		delete dynamic_cast<UI::UIRenderableData*>(data);
	}}
};



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
