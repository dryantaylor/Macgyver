#include "Component.h"
#include "Scene.h"
#include "GameObject.h"

#include "ComponentData.h"

using namespace Macgyver;

Gameobjects::Component::Component()
{
    data = std::vector<Components::ComponentDataWrapper*>();
    parent = nullptr;
}

Gameobjects::GameObject* Gameobjects::Component::getParent()
{
    return parent;
}

void Gameobjects::Component::addData(Components::ComponentData* data,std::size_t dataTypeHash)
{
    this->data.push_back(
        new Components::ComponentDataWrapper(dataTypeHash, data));
}

Components::ComponentData* Macgyver::Gameobjects::Component::getData(std::size_t dataTypeHash)
{
    for (Components::ComponentDataWrapper* wrapper : data) {
        if (wrapper->type == dataTypeHash) {
            return wrapper->data;
        }
    }
    return nullptr;
}

Components::ComponentData* Macgyver::Gameobjects::Component::getData(int index)
{
    return data.at(index)->data;
}

COMPONENT_TYPE Gameobjects::Component::getComponentProperties()
{
    return this->componentProperties;
}

void Gameobjects::Component::setComponentProperties(COMPONENT_TYPE types)
{
    this->componentProperties = types;
}

Math::Vector3 Gameobjects::Component::getWorldTransform()
{
    return localTransform + this->parent->transform;
}

Gameobjects::Scene* Gameobjects::Component::getWorldScene()
{
    return this->getParent()->getParentScene();
}

Macgyver::Gameobjects::Component::~Component()
{
    for (Components::ComponentDataWrapper* wrapper : data) {
        wrapper->deleteComponent();
        //delete wrapper;
	}
	//data.clear();
}



