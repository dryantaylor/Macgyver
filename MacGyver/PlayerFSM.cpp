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
IDLE_STATE:
WALK_STATE:
RUN_STATE:
	return;
	/*
IDLE_STATE_TRANSITION:
	getAnimationHandler.changeActiveAnimation(state->internal_animId, "player/idle");
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
	getAnimationHandler.changeActiveAnimation(state->internal_animId, "player/walk");
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
	getAnimationHandler.changeActiveAnimation(state->internal_animId, "player/run");
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
	*/
}

void DemoProject::PlayerFSM::attachNew(Gameobjects::Component* comp)
{
	comp->update = PlayerFSM::update;

	DemoProject::PlayerFSMData* data = new DemoProject::PlayerFSMData();
	data->PlayerRenderable = comp->getParent()->getComponentsWithProperty(Components::RENDERABLE)[0];
	comp->addData((Macgyver::Components::ComponentData*)data, typeHash(PlayerFSMData));

	getAnimationHandler
		.addAnimation("player/idle", "/Animations/cerebella/Idle");
	getAnimationHandler
		.addAnimation("player/walk", "/Animations/cerebella/Walk");
	getAnimationHandler
		.addAnimation("player/run", "/Animations/Run");

	data->internal_animId = getAnimationHandler
		.beginAnimation(
			componentGetData(
				comp->getParent()->getComponentsWithProperty(Components::RENDERABLE)[0]
				, Components::RenderableData)
			, "player/idle");
}

DemoProject::PlayerFSMData::PlayerFSMData()
{
	//this->physics = phys;
	currState = IDLE;
}

