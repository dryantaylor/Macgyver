#pragma once
#include "SDL.h"
#include "vector"
#include "ComponentManager.h"
namespace Macgyver::Gameobjects {
	class GameObject;
	class Component;
	class Scene {
		friend GameObject;
	public:
		SDL_Renderer* scene_RENDERER;
		Scene();
		void addObject(GameObject* obj);
		std::vector<Component*> getComponentsInWorldByType(Components::COMPONENT_TYPES type);
		void update(unsigned int deltaTime);
		void physicsUpdate(unsigned int deltaTime);
	private:
		std::vector<GameObject*> objects;
		//in order of calling in physicsUpdate
		Component* physicsGravImpactingCache;
		std::vector<Component*> physicsVelocityCache;
		std::vector<Component*> physicsGravImpactedCache;
		std::vector<Component*> physicsColliderCache;
		unsigned int physicsTick = 0;
	};
}