
    #pragma once
    #include "componentDataWrapper.h"

    #include "GravityImpacting.h"
#include "UIMouseDetector.h"
#include "UIRenderableData.h"


    const std::map<std::size_t, const std::function<void(Macgyver::Components::ComponentData*)>>
    Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper::destructors = {
        
    	{typeid(Macgyver::Components::GravityImpactingData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::GravityImpactingData*>(data);}},
	{typeid(Macgyver::Components::UI::UIMouseDetectorData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::UI::UIMouseDetectorData*>(data);}},
	{typeid(Macgyver::Components::UI::UIRenderableData).hash_code(), [](Macgyver::Components::ComponentData* data){delete static_cast<Macgyver::Components::UI::UIRenderableData*>(data);}},
};
    #ifdef _DEBUG
    const std::map<std::size_t, const std::string> 
    Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper::typeHashToComponentNames = {
    	{typeid(Macgyver::Components::GravityImpactingData).hash_code(), "Macgyver::Components::GravityImpactingData"},
	{typeid(Macgyver::Components::UI::UIMouseDetectorData).hash_code(), "Macgyver::Components::UI::UIMouseDetectorData"},
	{typeid(Macgyver::Components::UI::UIRenderableData).hash_code(), "Macgyver::Components::UI::UIRenderableData"},
};
#endif
