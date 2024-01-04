#include "UICamera.h"

#include "Text.h"
void Macgyver::Components::UI::UICamera::draw(Gameobjects::Component* self)
{
	std::vector<Gameobjects::Component*> renderables =
		self->getWorldScene()->getComponentsInWorldByType(UI_RENDERABLE);

	SDL_Renderer* renderer = self->getWorldScene()->scene_RENDERER;
	std::size_t dataTypeHash = typeHash(TextData);
	for (Gameobjects::Component* comp : renderables) 
	{
		Components::UI::TextData* data =
			componentGetData(comp, TextData);
		SDL_RenderCopy(
			renderer,
			data->INTERNAL_cachedTexture,
			NULL, &data->textBoundries
		);
	}
}

void Macgyver::Components::UI::UICamera::update(Gameobjects::Component* self, unsigned int deltaTime)
{
	UICamera::draw(self);
}

void Macgyver::Components::UI::UICamera::AttachNew(Gameobjects::Component* comp)
{
	comp->setComponentProperties(RENDERER);
	comp->update = UICamera::update;
}
