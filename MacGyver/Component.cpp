#include "Component.h"
#include "Scene.h"
#include "GameObject.h"

#include "ComponentData.h"

Macgyver::Gameobjects::Component::Component()
{

}

Macgyver::Gameobjects::Component::Component(COMPONENT_TYPE* types, size_t typesSize,
    std::function<void(Component*, unsigned int)> updateFunction)
{
    //this->parent = nullptr;
    this->update = updateFunction;
    for (int i = 0; i < typesSize; i++) {
        this->componentProperties &= types[i];
    }
}

Macgyver::Gameobjects::GameObject* Macgyver::Gameobjects::Component::getParent()
{
    return parent;
}

void Macgyver::Gameobjects::Component::addData(Components::ComponentData* data)
{
    this->data = data;
}

COMPONENT_TYPE Macgyver::Gameobjects::Component::getComponentProperties()
{
    return this->componentProperties;
}

void Macgyver::Gameobjects::Component::setComponentProperties(COMPONENT_TYPE types)
{
    this->componentProperties = types;
}

Macgyver::Math::Vector3 Macgyver::Gameobjects::Component::getWorldTransform()
{
    return localTransform + this->parent->transform;
}

Macgyver::Gameobjects::Scene* Macgyver::Gameobjects::Component::getWorldScene()
{
    return this->getParent()->getParentScene();
}



