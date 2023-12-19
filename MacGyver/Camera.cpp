#include "Camera.h"
#include "Renderable.h"
#include "Globals.h"

using namespace Macgyver;

Math::Vector3 Components::Camera::convertToCameraSpace(Gameobjects::Component* self, Gameobjects::Component* comp)
{
	Math::Vector3 camObjTransform = self->getWorldTransform();
	Math::Vector3 compObjTransform = comp->getWorldTransform();
	Math::Vector3 camSpaceTransform;
	//subtracting the camera's world space position from the component
	//gets us the position relative to the camera (in cameras co-ordinates)
	camSpaceTransform.x = compObjTransform.x - camObjTransform.x;
	//the y-axis for SDL increases as we go down the screen
	//whereas world co-ordinates use positive numbers for up
	//so we have to invert the subtraction
	camSpaceTransform.y = camObjTransform.y - compObjTransform.y;
	camSpaceTransform.z = compObjTransform.z;

	return camSpaceTransform;
}

void Components::Camera::Draw(Gameobjects::Component* self)
{

	
	std::vector<Gameobjects::Component*> renderables = 
		self->getWorldScene()->getComponentsInWorldByType(RENDERABLE);
	
	SDL_Renderer* renderer = self->getWorldScene()->scene_RENDERER;
	std::size_t dataTypeHash = typeid(RenderableData).hash_code();
	for (Gameobjects::Component* comp : renderables) {
		Math::Vector3 cameraSpace = convertToCameraSpace(self,comp);
		//by declaring a component renderable we are commiting to having
		//a RenderableData Struct
		Components::RenderableData* data =
			(Components::RenderableData*)(comp->getData(dataTypeHash));
		if (-(data->rect.w) < cameraSpace.x && cameraSpace.x <= Globals::SCREEN_WIDTH 
		 && -(data->rect.h) < cameraSpace.y && cameraSpace.y <=Globals::SCREEN_HEIGHT){

			SDL_Texture* texture = data->texture;
			data->rect.x = cameraSpace.x; //saves allocating new memory
			data->rect.y = cameraSpace.y;
			SDL_RenderCopy(renderer, texture, NULL, &data->rect);

		}
	}
}

void Components::Camera::update(Gameobjects::Component* self, unsigned int deltaTime)
{
	Camera::Draw(self);
}

void Components::Camera::AttachNew(Gameobjects::Component* comp)
{
	comp->setComponentProperties(RENDERER);
	comp->update = Camera::update;

}



