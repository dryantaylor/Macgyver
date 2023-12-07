#include "Renderable.h"
#include <string>

Macgyver::Components::RenderableData::RenderableData(Gameobjects::Component* self,
	std::string path, int width, int height)
{
	if (path != "") {
		texture = IMG_LoadTexture(self->getParent()->getParentScene()->scene_RENDERER,
			 (std::string(SDL_GetBasePath()) + path).c_str());
		rect.x = 0;
		rect.y = 0;
		rect.w = width;
		rect.h = height;
	}
}

Macgyver::Components::RenderableData::~RenderableData()
{
	if (texture != nullptr) {
		SDL_DestroyTexture(texture);
	}
}

void Macgyver::Components::Renderable::update(Gameobjects::Component* self, unsigned int deltaTime)
{

}

void Macgyver::Components::Renderable::AttachNew(Gameobjects::Component* comp, std::string path, int width, int height)
{
	//COMPONENT_TYPE types[1] = { RENDERABLE };
	comp->setComponentProperties(RENDERABLE);
	comp->update = Renderable::update;
	comp->addData((ComponentData*) new RenderableData(comp, path, width, height));
	
}


Macgyver::Gameobjects::Component* Macgyver::Components::Renderable::CreateNew(std::string path, int width, int height)
{
	COMPONENT_TYPE types[1] = { RENDERABLE };
	Macgyver::Gameobjects::Component* comp =
		new Gameobjects::Component((unsigned int*)types, 1,
			update);
	comp->addData((ComponentData*) new RenderableData(comp, path, width, height));
	return comp;
}
