#include "Component.h"
#include "Scene.h"
#include "GameObject.h"

#include "ComponentData.h"

using namespace Macgyver;

Gameobjects::Component::Component()
{
    data = nullptr;
    parent = nullptr;
}

Gameobjects::Component::Component(COMPONENT_TYPE* types, size_t typesSize,
    std::function<void(Component*, unsigned int)> updateFunction)
{
    data = nullptr;
    this->parent = nullptr;
    this->update = updateFunction;
    for (int i = 0; i < typesSize; i++) {
        this->componentProperties &= types[i];
    }
}

Gameobjects::GameObject* Gameobjects::Component::getParent()
{
    return parent;
}

void Gameobjects::Component::addData(Components::ComponentData* data)
{
    this->data = data;
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



