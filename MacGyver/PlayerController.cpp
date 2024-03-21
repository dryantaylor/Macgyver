#include "PlayerController.h"
#include "Input.h"
#include "AnimationHandler.h"
#include "Force2D.h"
#include "ComponentManager.h"

#include "Messenger.h"

using namespace Macgyver;
void DemoProject::PlayerController::update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime)
{
	PlayerControllerData* playerData = componentGetData(self, PlayerControllerData);
	Math::Force2D velocity(0, 0);
	Components::Physics2DData* data = 
		componentGetData(self, Components::Physics2DData);
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

	//Display keys pressed on UI, must be done before scaling
	getMessenger[0] = getInput.isKeyDown(SDLK_LSHIFT);
	getMessenger[1] = velocity.x;
	getMessenger[2] = velocity.y;

	if (velocity.x != 0 || velocity.y != 0 ) {
		if (Input::getInstance().isKeyDown(SDLK_LSHIFT)) {
			velocity.scaleToMagnitude(playerData->sprintSpeed);	
		}
		else {
			velocity.scaleToMagnitude(playerData->walkSpeed);
		}
	}
	else {
	}
	data->velocity = velocity;

}


void DemoProject::PlayerController::attachNew(Macgyver::Gameobjects::Component* comp)
{
	comp->setComponentProperties(Macgyver::Components::VELOCITY);
	comp->update = PlayerController::update;
	comp->physicsUpdate = Macgyver::Components::Velocity::physicsUpdate;
	//comp->addData((Macgyver::Components::ComponentData*)
	//	new Macgyver::Components::Physics2DData(), 
	//	typeid(Components::Physics2DData).hash_code());
	comp->addData(
	    componentCreateData(Macgyver::Components::Physics2DData)
	);
	Components::Physics2DData* debug = componentGetData(comp, Components::Physics2DData);

	PlayerControllerData* data = new PlayerControllerData();
	
	comp->addData((Macgyver::Components::ComponentData*)
		data,
		typeHash(PlayerControllerData));
}
