#include "PlayerController.h"
#include "Input.h"
#include "Force2D.h"
using namespace Macgyver;
void DemoProject::PlayerController::update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime)
{
	int speed = 150;
	if (Input::isKeyDown(SDLK_LSHIFT)) {
		speed = 300;
	}
	Math::Force2D velocity(0, 0);
	Components::Physics2DData* data = (Components::Physics2DData*)(self->data);
	if (Input::isKeyDown(SDLK_w)) {
		velocity.y += speed;
	}
	if (Input::isKeyDown(SDLK_s)) {
		velocity.y -= speed;
	}
	if (Input::isKeyDown(SDLK_a)) {
		velocity.x -= speed;
	}
	if (Input::isKeyDown(SDLK_d)) {
		velocity.x += speed;
	}
	data->velocity = velocity;

	//std::cout << "Player is at position" << self->getWorldTransform() << std::endl;
}

void DemoProject::PlayerController::attachNew(Macgyver::Gameobjects::Component* comp)
{
	comp->setComponentProperties(Macgyver::Components::VELOCITY);
	comp->update = PlayerController::update;
	comp->physicsUpdate = Macgyver::Components::Velocity::physicsUpdate;
	comp->addData((Macgyver::Components::ComponentData*)
		new Macgyver::Components::Physics2DData());

}
