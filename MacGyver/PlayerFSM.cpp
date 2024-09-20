#include "PlayerFSM.h"
#include "AnimationHandler.h"
#include "ComponentData.h"
using namespace Macgyver;
void DemoProject::PlayerFSM::update(Gameobjects::Component* self, std::uint32_t deltaTime)
{
	PlayerFSMData* state = componentGetData(self, PlayerFSMData);
	switch (state->currState) {
	case LAUNCH:
		state->currState = IDLE;
		goto IDLE_STATE_TRANSITION;
	case IDLE:
		goto IDLE_STATE;
	case WALK:
		goto WALK_STATE;
	case RUN:
		goto RUN_STATE;
	}

	return;
IDLE_STATE_TRANSITION:
	//local transform changes handles difference in sprite sizes
	state->PlayerRenderable->localTransform.x = 0;
	state->PlayerRenderable->localTransform.y = 0;
IDLE_STATE:
	if (std::abs(state->physics->velocity.x) > 150) {
		state->currState = RUN;
		goto RUN_STATE_TRANSITION;
	}
	if (std::abs(state->physics->velocity.x) > 0.005f) {
		state->currState = WALK;
		goto WALK_STATE_TRANSITION;
	}
	return;
WALK_STATE_TRANSITION:
	state->PlayerRenderable->localTransform.x = 0;
	state->PlayerRenderable->localTransform.y = 73;
WALK_STATE:
	if (std::abs(state->physics->velocity.x) > 150) {
		state->currState = RUN;
		goto RUN_STATE_TRANSITION;
	}
	if (std::abs(state->physics->velocity.x) < 0.005f) {
		state->currState = IDLE;
		goto IDLE_STATE_TRANSITION;
	}
	return;
RUN_STATE_TRANSITION:
RUN_STATE:
	if (std::abs(state->physics->velocity.x) > 0.005f && std::abs(state->physics->velocity.x) < 150) {
		state->currState = WALK;
		goto WALK_STATE_TRANSITION;
	}
	if (std::abs(state->physics->velocity.x) <= 0.005f) {
		state->currState = IDLE;
		goto IDLE_STATE_TRANSITION;
	}
	return;
}

void DemoProject::PlayerFSM::attachNew(Gameobjects::Component* comp)
{
	comp->update = PlayerFSM::update;
 	Components::Physics2DData* physicsData =
		componentGetData(
			comp->getParent()->getComponentsWithProperty(Components::VELOCITY)[0],
			Components::Physics2DData);
	DemoProject::PlayerFSMData* data = new DemoProject::PlayerFSMData(physicsData);
	data->PlayerRenderable = comp->getParent()->getComponentsWithProperty(Components::RENDERABLE)[0];
	comp->addData((Macgyver::Components::ComponentData*)data, typeHash(PlayerFSMData));

	data->internal_animId = 0;
}

DemoProject::PlayerFSMData::PlayerFSMData(Macgyver::Components::Physics2DData* phys)
{
	this->physics = phys;
	currState = IDLE;
}

