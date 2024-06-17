
    #pragma once
    #include "componentDataWrapper.h"

    #include "PhysicsData.h"
#include "PlayerFSM.h"
#include "Renderable.h"
#include "Text.h"
#include "UIMouseDetector.h"
#include "UIRenderableData.h"


    const std::map<std::size_t, const std::function<void(Macgyver::Components::ComponentData*)>>
    Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper::destructors = {
        
    	{typeid(Macgyver::Components::PhysicsData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::PhysicsData*>(data);}},
	{typeid(DemoProject::PlayerFSMData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<DemoProject::PlayerFSMData*>(data);}},
	{typeid(Macgyver::Components::RenderableData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::RenderableData*>(data);}},
	{typeid(Macgyver::Components::UI::TextData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::UI::TextData*>(data);}},
	{typeid(Macgyver::Components::UI::UIMouseDetectorData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::UI::UIMouseDetectorData*>(data);}},
	{typeid(Macgyver::Components::UI::UIRenderableData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::UI::UIRenderableData*>(data);}},
};
    #ifdef _DEBUG
    const std::map<std::size_t, const std::string> 
    Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper::typeHashToComponentNames = {
    	{typeid(Macgyver::Components::PhysicsData).hash_code(), "Macgyver::Components::PhysicsData"},
	{typeid(DemoProject::PlayerFSMData).hash_code(), "DemoProject::PlayerFSMData"},
	{typeid(Macgyver::Components::RenderableData).hash_code(), "Macgyver::Components::RenderableData"},
	{typeid(Macgyver::Components::UI::TextData).hash_code(), "Macgyver::Components::UI::TextData"},
	{typeid(Macgyver::Components::UI::UIMouseDetectorData).hash_code(), "Macgyver::Components::UI::UIMouseDetectorData"},
	{typeid(Macgyver::Components::UI::UIRenderableData).hash_code(), "Macgyver::Components::UI::UIRenderableData"},
};
#endif
