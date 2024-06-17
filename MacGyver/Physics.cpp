#include "Physics.h"
#include "SDL.h"
#include "Renderable.h"
void Macgyver::Components::StaticPhysics::update(Macgyver::Gameobjects::Component* self, uint32_t deltaTime)
{
	auto data = componentGetData(self, PhysicsData);
	auto renderData = componentGetData(self, RenderableData);
	b2AABB* boundingBox = new b2AABB();
	data->body->GetFixtureList()[0].GetShape()->ComputeAABB(
		boundingBox,
		data->body->GetTransform(),
		0
	);
	SDL_Rect rect(
		0, 0,
		convertPhysicsToEngineScale(boundingBox->upperBound.x),
		convertPhysicsToEngineScale(boundingBox->upperBound.y)
	);
	SDL_SetRenderTarget(self->getWorldScene()->scene_RENDERER, renderData->texture);
	renderData->rect.w = rect.w;
	renderData->rect.h = rect.h;
	SDL_SetRenderDrawColor(self->getWorldScene()->scene_RENDERER, 255, 0, 0, 255);
	SDL_RenderDrawRect(self->getWorldScene()->scene_RENDERER, &rect);
	SDL_SetRenderTarget(self->getWorldScene()->scene_RENDERER, NULL);
	SDL_SetRenderDrawColor(self->getWorldScene()->scene_RENDERER, 0, 0, 0, 255);
}

void Macgyver::Components::StaticPhysics::physicsUpdate(Macgyver::Gameobjects::Component* self)
{

}

void Macgyver::Components::StaticPhysics::attachNew(Macgyver::Gameobjects::Component* comp, int32_t width, int32_t height)
{
	comp->setComponentProperties(PHYSICS_STATIC | RENDERABLE);
	comp->addData(componentCreateData(PhysicsData, comp, width, height));
	comp->addData(componentCreateData(RenderableData, comp, "", 0, 0));
	comp->update = update;
}



void Macgyver::Components::DynamicPhysics::update(Macgyver::Gameobjects::Component* self, uint32_t deltaTime)
{

}

void Macgyver::Components::DynamicPhysics::physicsUpdate(Macgyver::Gameobjects::Component* self)
{
	auto data = componentGetData(self, PhysicsData);
	self->getParent()->transform = data->body->GetPosition();
}

void Macgyver::Components::DynamicPhysics::attachNew(Macgyver::Gameobjects::Component* comp, int32_t width, int32_t height, float friction, float mass)
{
	comp->setComponentProperties(PHYSICS_DYNAMIC);
	comp->addData(componentCreateData(PhysicsData, comp, width, height,friction, mass));
	comp->update = update;
	comp->physicsUpdate = physicsUpdate;
}
