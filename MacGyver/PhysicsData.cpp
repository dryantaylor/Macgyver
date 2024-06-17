#include "PhysicsData.h"
#include "Component.h"
Macgyver::Components::PhysicsData::PhysicsData(Macgyver::Gameobjects::Component* parent,
	int32_t width, int32_t height)
{
	 b2BodyDef def;
	 def.type = b2_kinematicBody;
	def.position.Set(
		convertEngineToPhysicsScale(parent->getWorldTransform().x),
		convertEngineToPhysicsScale(parent->getWorldTransform().y)
	);
	body = parent->getWorldScene()->createPhysicsBody(&def);
	
	b2PolygonShape colliderBox;
	colliderBox.SetAsBox(
		convertEngineToPhysicsScale(width) /2,
		convertEngineToPhysicsScale(height) /2
	);

	body->CreateFixture(&colliderBox, 0.0);
	std::cout << "static location: " << "("
		<< convertPhysicsToEngineScale(body->GetPosition().x) 
		<< "," << convertPhysicsToEngineScale(body->GetPosition().y) << ")" << std::endl;
}

Macgyver::Components::PhysicsData::PhysicsData(Gameobjects::Component* parent,int32_t width, 
	int32_t height, float friction, float mass)
{
	b2BodyDef def;
	def.type = b2_dynamicBody;
	def.position.Set(
		convertEngineToPhysicsScale(parent->getWorldTransform().x),
		convertEngineToPhysicsScale(parent->getWorldTransform().y)
	);
	body = parent->getWorldScene()->createPhysicsBody(&def);

	b2PolygonShape colliderBox;
	colliderBox.SetAsBox(
		convertEngineToPhysicsScale(width) / 2,
		convertEngineToPhysicsScale(height) / 2
	);

	b2FixtureDef fixture;
	fixture.shape = &colliderBox;
	fixture.friction = friction;
	fixture.density = mass / (convertEngineToPhysicsScale(width) * convertEngineToPhysicsScale(height));
	
	body->CreateFixture(&fixture);

}


