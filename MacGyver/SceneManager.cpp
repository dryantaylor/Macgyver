#include "SceneManager.h"

#ifdef _DEBUG
	#include <stdexcept>
#endif // DEBUG

Macgyver::Gameobjects::SceneManager::SceneManager()
{
	scenes = std::map<std::string,std::unique_ptr<Scene>>();
}


void Macgyver::Gameobjects::SceneManager::addScene( std::unique_ptr<Scene> scene)
{
		scenes.insert(std::make_pair(scene->getName(),std::move(scene)));
}

void Macgyver::Gameobjects::SceneManager::removeScene(const std::string& name)
{
	scenes.erase(name);
}

void Macgyver::Gameobjects::SceneManager::setActiveScene(const std::string& name)
{
	activeSceneName = name;
}

void Macgyver::Gameobjects::SceneManager::update(const uint32_t deltaTime)
{
	#ifdef _DEBUG
	if (!scenes.contains(activeSceneName))
	{
		throw std::runtime_error("No active scene set");
	}
	#endif 
	scenes.at(activeSceneName)->update(deltaTime);
}

void Macgyver::Gameobjects::SceneManager::physicsUpdate(const uint32_t deltaTime)
{
	#ifdef _DEBUG
	if (!scenes.contains(activeSceneName))
	{
		
		throw std::runtime_error("No active scene set");
	}
	#endif
	scenes.at(activeSceneName)->physicsUpdate(deltaTime);
}

