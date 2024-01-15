#include "UICamera.h"

#include "UIRenderableData.h"

void Macgyver::Components::UI::UICamera::draw(Gameobjects::Component* self)
{
	std::vector<Gameobjects::Component*> renderables =
		self->getWorldScene()->getComponentsInWorldByType(UI_RENDERABLE);

	SDL_Renderer* renderer = self->getWorldScene()->scene_RENDERER;
	SDL_Rect renderRect;
	for (Gameobjects::Component* comp : renderables) 
	{
		
		Components::UI::UIRenderableData* data =
			componentGetData(comp, UIRenderableData);
		renderRect.x = comp->getWorldTransform().x;
		renderRect.y = comp->getWorldTransform().y;
		renderRect.w = data->rect.w;
		renderRect.h = data->rect.h;
		SDL_RenderCopy(
			renderer,
			data->texture,
			NULL, &renderRect
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
