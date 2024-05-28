#pragma once
#include "Input.h"
#include "string"

#define getInputMap Macgyver::InputMap::getInstance() 
namespace Macgyver {
	class InputMap {
	public:
		static InputMap& getInstance() {
			static InputMap instance;
			return instance;
		}

		InputMap(const InputMap&) = delete;
		InputMap& operator=(const InputMap&) = delete;

		void addBinding(const std::string name, SDL_Scancode positive, SDL_Scancode negative);
		void addBinding(const std::string name, SDL_GameControllerAxis axis, int32_t id);
		void addBinding(const std::string name, SDL_GameControllerButton positive,
						SDL_GameControllerButton negative, int32_t id);
		void addBinding(const std::string name, SDL_Scancode key);
		void addBinding(const std::string name, SDL_GameControllerButton button, int32_t id);
		
		float getValue(const std::string name);

	private:
		std::map<const std::string, std::tuple<SDL_Scancode, SDL_Scancode>> keyboardAxisBindings;
		std::map<const std::string, std::tuple<SDL_GameControllerAxis,int32_t>> controllerAxisBindings;
		std::map<const std::string, std::tuple<SDL_GameControllerButton, SDL_GameControllerButton, 
			int32_t>> controllerButtonAxisBindings;
		std::map<const std::string, SDL_Scancode> keyboardButtonBindings;
		std::map<const std::string, std::tuple<SDL_GameControllerButton, int32_t>> controllerButtonBindings;


		float getKeyboardAxisValue(std::tuple<SDL_Scancode, SDL_Scancode>* keys);
		float getControllerAxisValue(std::tuple<SDL_GameControllerAxis, int32_t>* binding);
		float getControllerButtonAxisValue(std::tuple<SDL_GameControllerButton,
			SDL_GameControllerButton, int32_t>* binding);
		float getKeyboardButtonValue(SDL_Scancode* key);

		float getControllerButtonValue(std::tuple<SDL_GameControllerButton, int32_t>* binding);
		InputMap() = default;
		~InputMap() = default;
	};
}