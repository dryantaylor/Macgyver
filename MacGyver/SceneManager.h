#pragma once
#include <map>
#include <memory>
#include <string>

#include "Scene.h"

///shortcut to get the scene manager instance
#define getSceneManager Macgyver::Gameobjects::SceneManager::getInstance()
namespace  Macgyver::Gameobjects
{
	/**
	 * \brief Singleton class to manage scenes
	 * all scenes can be accessed by a string name
	 */
	class SceneManager
	{
	public:
		static SceneManager& getInstance() {
			static SceneManager instance;
			return instance;
		}
		SceneManager(const SceneManager&) = delete;
		SceneManager& operator=(const SceneManager&) = delete;
		
		/**
		* \brief gets the active scene
		* pointer is only valid until the end of the function this function was called from
		* after which the scene pointer may be modified or deleted. 
	    * \return pointer to the active scene
		*/
		Scene* getActiveScene() const { return scenes.at(activeSceneName).get(); }

		/**
		 * \brief adds a new scene to the scene manager
		 * \param name name to refer to the scene by
		 * \param scene unique pointer to the scene
		 *
		 * NOTE: USE std::make_shared<Scene> to create the pointer
		 */
		void addScene(std::unique_ptr<Scene> scene);

		/**
		 * \brief removes a scene from the scene manager by name
		 * \param name string name of the scene as given in the addScene function
		 */
		void removeScene(const std::string& name);

		/**
		 * \brief sets the active scene
		 * \param name the string name of the scene
		 */
		void setActiveScene(const std::string& name);

		/**
		 * \brief runs the update function of the active scene
		 * \param deltaTime time in ms since the last frame
		 */
		void update(const uint32_t deltaTime);

		/**
		 * \brief runs the physics update function of the active scene
		 * \param deltaTime time in ms since the last frame
		 */
		void physicsUpdate( const uint32_t deltaTime);
	private:
		SceneManager();
		~SceneManager() = default;
		///map of scenes
		///using shared_ptr to store active scene
		std::map<std::string,std::unique_ptr<Scene>> scenes;
		/// name of the active scene for updating
		std::string activeSceneName;

	};
}
