#include "UIRenderableData.h"

Macgyver::Components::UI::UIRenderableData::UIRenderableData(Gameobjects::Component* self, 
	std::string path, int width, int height)
{
	texture = nullptr;
	rect = SDL_Rect();
	if (path != "") {
		texture = IMG_LoadTexture(self->getWorldScene()->scene_RENDERER,
			(std::string(SDL_GetBasePath()) + path).c_str());
	}

	rect.x = 0;
	rect.y = 0;
	rect.w = width;
	rect.h = height;
}

Macgyver::Components::UI::UIRenderableData::UIRenderableData(SDL_Texture* texture, int width, int height)
{
	this->texture = texture;
	this->rect = { 0,0,width,height };
}

Macgyver::Components::UI::UIRenderableData::~UIRenderableData()
{
	if (texture != nullptr) {
		SDL_DestroyTexture(texture);
	}
}
