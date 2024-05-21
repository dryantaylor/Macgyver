#pragma once
#include "componentDataWrapper.h"
#include  "UIRenderableData.h"
const std::map<std::size_t, const std::function<void(Macgyver::Components::ComponentData*)>>
Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper::deletors = {
	{typeid(Macgyver::Components::UI::UIRenderableData).hash_code(), [](ComponentData* data) {
		delete dynamic_cast<UI::UIRenderableData*>(data);
	}}
};