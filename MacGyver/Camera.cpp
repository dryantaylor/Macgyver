#include "Camera.h"
#include "Renderable.h"

Macgyver::Math::Vector3 Macgyver::Components::Camera::convertToCameraSpace(Gameobjects::Component* self, Gameobjects::Component* comp)
{
	Math::Vector3 camObjTransform = self->getWorldTransform();
	Math::Vector3 compObjTransform = comp->getWorldTransform();
	Math::Vector3 camSpaceTransform;
	camSpaceTransform.x = compObjTransform.x - camObjTransform.x;
	camSpaceTransform.y = camObjTransform.y - compObjTransform.y;
	camSpaceTransform.z = compObjTransform.z;

	return camSpaceTransform;
}

void Macgyver::Components::Camera::Draw(Macgyver::Gameobjects::Component* self)
{
	std::vector<Macgyver::Gameobjects::Component*> renderables = 
		self->getWorldScene()->getComponentsInWorldByType(RENDERABLE);
	
	SDL_Renderer* renderer = self->getWorldScene()->scene_RENDERER;
	for (Gameobjects::Component* comp : renderables) {
		//by subtracting the cameras position from the components position
		//we get a vector which tells us the position relative to the camera
		Math::Vector3 cameraSpace = convertToCameraSpace(self,comp);
		//TODO: account for sprite size on left and top
		if (0 < cameraSpace.x && cameraSpace.x <= 1280 && 0 < cameraSpace.y && cameraSpace.y <=720){
			//by declaring a component renderable we are commiting to having
			//a RenderableData Struct
			Components::RenderableData* data = 
				(Components::RenderableData*)(comp->data);
			SDL_Texture* texture = data->texture;
			//std::cout << texture << std::endl;
			data->rect.x = cameraSpace.x; //saves allocating new memory
			data->rect.y = cameraSpace.y;
			SDL_RenderCopy(renderer, texture, NULL, &data->rect);

		}
	}
}

void Macgyver::Components::Camera::update(Gameobjects::Component* self, unsigned int deltaTime)
{
	//std::cout << "AHHHHHH" << std::endl;
	Camera::Draw(self);
}

Macgyver::Gameobjects::Component* Macgyver::Components::Camera::CreateNew()
{
	COMPONENT_TYPE types[1] = { RENDERER };
	Macgyver::Gameobjects::Component* comp =
		new Gameobjects::Component((unsigned int*)types, 1, 
			update);
	
	return comp;
}


