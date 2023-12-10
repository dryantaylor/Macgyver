#include "PlayerController.h"
#include "Input.h"
#include "Force2D.h"
using namespace Macgyver;
void DemoProject::PlayerController::update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime)
{
	float speed = 150;
	if (Input::isKeyDown(SDLK_LSHIFT)) {
		speed *= 2;
	}
	Math::Force2D velocity(0, 0);
	Components::Physics2DData* data = (Components::Physics2DData*)
		(self->getData(typeid(Components::Physics2DData).hash_code()));
	if (Input::isKeyDown(SDLK_w)) {
		velocity.y += 1;
	}
	if (Input::isKeyDown(SDLK_s)) {
		velocity.y -= 1;
	}
	if (Input::isKeyDown(SDLK_a)) {
		velocity.x -= 1;
	}
	if (Input::isKeyDown(SDLK_d)) {
		velocity.x += 1;
	}
	velocity.scaleToMagnitude(speed);
	data->velocity = velocity;
}

void DemoProject::PlayerController::attachNew(Macgyver::Gameobjects::Component* comp)
{
	comp->setComponentProperties(Macgyver::Components::VELOCITY);
	comp->update = PlayerController::update;
	comp->physicsUpdate = Macgyver::Components::Velocity::physicsUpdate;
	comp->addData((Macgyver::Components::ComponentData*)
		new Macgyver::Components::Physics2DData(), 
		typeid(Components::Physics2DData).hash_code());

}
