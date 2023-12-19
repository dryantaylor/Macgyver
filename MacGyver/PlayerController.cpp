#include "PlayerController.h"
#include "Input.h"
#include "AnimationHandler.h"
#include "Force2D.h"
#include "ComponentManager.h"
#include "AnimationManager.h"
using namespace Macgyver;
void DemoProject::PlayerController::update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime)
{
	PlayerControllerData* playerData = 
	(PlayerControllerData*)(self->getData(typeid(PlayerControllerData).hash_code()));
	Math::Force2D velocity(0, 0);
	Components::Physics2DData* data = (Components::Physics2DData*)
		(self->getData(typeid(Components::Physics2DData).hash_code()));
	if (Input::getInstance().isKeyDown(SDLK_w)) {
		velocity.y += 1;
	}
	if (Input::getInstance().isKeyDown(SDLK_s)) {
		velocity.y -= 1;
	}
	if (Input::getInstance().isKeyDown(SDLK_a)) {
		velocity.x -= 1;
	}
	if (Input::getInstance().isKeyDown(SDLK_d)) {
		velocity.x += 1;
	}
	if (velocity.x != 0 ) {
		if (Input::getInstance().isKeyDown(SDLK_LSHIFT)) {
			velocity.scaleToMagnitude(playerData->sprintSpeed);
			Macgyver::Animations::AnimationHandler::getInstance()
				.changeActiveAnimation(playerData->id, "player/run");
		}
		else {
			Macgyver::Animations::AnimationHandler::getInstance()
				.changeActiveAnimation(playerData->id, "player/walk");
			velocity.scaleToMagnitude(playerData->walkSpeed);
		}
	}
	else {
		Macgyver::Animations::AnimationHandler::getInstance()
			.changeActiveAnimation(playerData->id, "player/idle");
	}
	data->velocity = velocity;
	
}

void DemoProject::PlayerController::attachNew(Macgyver::Gameobjects::Component* comp)
{
	std::cout << comp->getParent()->getComponentsWithProperty(Components::RENDERABLE).size() << std::endl;
	comp->setComponentProperties(Macgyver::Components::VELOCITY);
	comp->update = PlayerController::update;
	comp->physicsUpdate = Macgyver::Components::Velocity::physicsUpdate;
	comp->addData((Macgyver::Components::ComponentData*)
		new Macgyver::Components::Physics2DData(), 
		typeid(Components::Physics2DData).hash_code());

	PlayerControllerData* data = new PlayerControllerData();
	Animations::AnimationHandler::getInstance()
		.addAnimation("player/idle", "/Animations/Idle");
	Animations::AnimationHandler::getInstance()
		.addAnimation("player/walk", "/Animations/Walk");
	Animations::AnimationHandler::getInstance()
		.addAnimation("player/run", "/Animations/Run");

	data->id = Animations::AnimationHandler::getInstance()
		.beginAnimation(
			(Components::RenderableData*)(comp->getParent()->getComponentsWithProperty(Components::RENDERABLE)[0]
				->getData(typeid(Components::RenderableData).hash_code()))
			, "player/idle");
	comp->addData((Macgyver::Components::ComponentData*)
		data,
		typeid(PlayerControllerData).hash_code());

}
