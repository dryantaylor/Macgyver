#include "PlayerFSM.h"
#include "AnimationHandler.h"
#include "ComponentData.h"
using namespace Macgyver;
void DemoProject::PlayerFSM::update(Gameobjects::Component* self, unsigned int deltaTime)
{
	PlayerFSMData* data = componentGetData(self, PlayerFSMData);
	switch (data->currState) {
	case LAUNCH:
		data->currState = IDLE;
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
	getAnimationHandler.changeActiveAnimation(data->internal_animId, "player/idle");
	//local transform changes handles difference in sprite sizes
	data->PlayerRenderable->localTransform.x = 0;
	data->PlayerRenderable->localTransform.y = 0;
IDLE_STATE:
	if (data->physics->velocity.magnitude() > 150) {
		data->currState = RUN;
		goto RUN_STATE_TRANSITION;
	}
	if (data->physics->velocity.magnitude() > 0) {
		data->currState = WALK;
		goto WALK_STATE_TRANSITION;
	}
	return;
WALK_STATE_TRANSITION:
	getAnimationHandler.changeActiveAnimation(data->internal_animId, "player/walk");
	data->PlayerRenderable->localTransform.x = 0;
	data->PlayerRenderable->localTransform.y = 73;
WALK_STATE:
	if (data->physics->velocity.magnitude() > 150) {
		data->currState = RUN;
		goto RUN_STATE_TRANSITION;
	}
	if (data->physics->velocity.magnitude() == 0) {
		data->currState = IDLE;
		goto IDLE_STATE_TRANSITION;
	}
	return;
RUN_STATE_TRANSITION:
	getAnimationHandler.changeActiveAnimation(data->internal_animId, "player/run");
RUN_STATE:
	if (data->physics->velocity.magnitude() > 0 && data->physics->velocity.magnitude() < 300) {
		data->currState = WALK;
		goto WALK_STATE_TRANSITION;
	}
	if (data->physics->velocity.magnitude() == 0) {
		data->currState = IDLE;
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

DemoProject::PlayerFSMData::PlayerFSMData(Macgyver::Components::Physics2DData* phys)
{
	this->physics = phys;
	currState = IDLE;
}

