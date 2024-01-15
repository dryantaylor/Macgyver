#include "UIRenderable.h"

void Macgyver::Components::UI::UIRenderable::update(Gameobjects::Component* self, unsigned int deltaTime)
{

}

void Macgyver::Components::UI::UIRenderable::AttachNew(Gameobjects::Component* comp, std::string path, int width, int height)
{
	comp->setComponentProperties(UI_RENDERABLE);
	comp->update = UIRenderable::update;
	comp->addData(
		componentCreateData(UIRenderableData, comp, path, width, height)
	);
}
