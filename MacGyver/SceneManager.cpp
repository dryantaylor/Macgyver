#include "SceneManager.h"

#ifdef _DEBUG
	#include <stdexcept>
#endif // DEBUG

Macgyver::Gameobjects::SceneManager::SceneManager()
{
	scenes = std::map<std::string,std::shared_ptr<Scene>>();
}


void Macgyver::Gameobjects::SceneManager::addScene(std::string name,std::shared_ptr<Scene> scene)
{
		scenes.insert(std::make_pair(name,scene));
}

void Macgyver::Gameobjects::SceneManager::removeScene(const std::string& name)
{
	scenes.erase(name);
}

void Macgyver::Gameobjects::SceneManager::setActiveScene(const std::string& name)
{
	activeScene = scenes.at(name);
}

void Macgyver::Gameobjects::SceneManager::update(const uint32_t deltaTime)
{
	#ifdef _DEBUG
	if (activeScene == nullptr)
	{
		throw std::runtime_error("No active scene set");
	}
	#endif 
	activeScene->update(deltaTime);
}

void Macgyver::Gameobjects::SceneManager::physicsUpdate(const uint32_t deltaTime)
{
	#ifdef _DEBUG
	if (activeScene == nullptr)
	{
		
		throw std::runtime_error("No active scene set");
	}
	#endif 
	activeScene->physicsUpdate(deltaTime);
}

