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
	Math::Force2D force(0, 0);
	Components::Physics2DData* data = 
		componentGetData(self, Components::Physics2DData);
	if (Input::getInstance().isKeyDown(SDLK_w)) {
		force.y += 1;
	}
	if (Input::getInstance().isKeyDown(SDLK_s)) {
		force.y -= 1;
	}
	if (Input::getInstance().isKeyDown(SDLK_a)) {
		force.x -= 1;
	}
	if (Input::getInstance().isKeyDown(SDLK_d)) {
		force.x += 1;
	}

	//Display keys pressed on UI, must be done before scaling
	getMessenger[0] = getInput.isKeyDown(SDLK_LSHIFT);
	getMessenger[1] = force.x;
	getMessenger[2] = force.y;

	if (force.x != 0 || force.y != 0 ) {
		if (Input::getInstance().isKeyDown(SDLK_LSHIFT)) {
			force.scaleToMagnitude(playerData->sprintSpeed);	
		}
		else {
			force.scaleToMagnitude(playerData->walkSpeed);
		}
	}
	else {
	}
	data->velocity.y = force.y;
	data->velocity.x = force.x;

}


void DemoProject::PlayerController::attachNew(Macgyver::Gameobjects::Component* comp)
{
	comp->setComponentProperties(Macgyver::Components::GRAV_IMPACTED);
	comp->update = PlayerController::update;
	comp->physicsUpdate = Macgyver::Components::Velocity::physicsUpdate;
	//comp->addData((Macgyver::Components::ComponentData*)
	//	new Macgyver::Components::Physics2DData(), 
	//	typeid(Components::Physics2DData).hash_code());
	comp->addData(
	    componentCreateData(Macgyver::Components::Physics2DData)
	);
	Components::Physics2DData* physicsData = componentGetData(comp, Components::Physics2DData);
	physicsData->mass = 1;
	PlayerControllerData* data = new PlayerControllerData();
	
	comp->addData((Macgyver::Components::ComponentData*)
		data,
		typeHash(PlayerControllerData));
}
