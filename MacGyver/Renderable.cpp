#include "Renderable.h"
#include <string>

using namespace Macgyver;

Components::RenderableData::RenderableData(Gameobjects::Component* self,
	std::string path, int width, int height)
{
	texture = nullptr;
	rect = SDL_Rect();
	if (path != "") {
		texture = IMG_LoadTexture(self->getWorldScene()->scene_RENDERER,
			 (std::string(SDL_GetBasePath()) + path).c_str());
		rect.x = 0;
		rect.y = 0;
		rect.w = width;
		rect.h = height;
	}
	
}

Components::RenderableData::~RenderableData()
{
	if (texture != nullptr) {
		SDL_DestroyTexture(texture);
	}
}


void Components::Renderable::update(Gameobjects::Component* self, unsigned int deltaTime)
{

}

void Components::Renderable::AttachNew(Gameobjects::Component* comp, std::string path, int width, int height)
{
	comp->setComponentProperties(RENDERABLE);
	comp->update = Renderable::update;
	comp->addData((ComponentData*) new RenderableData(comp, path, width, height));
	
}
