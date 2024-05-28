#include "InputMap.h"


float Macgyver::InputMap::getValue(const std::string name)
{
	if (keyboardAxisBindings.contains(name))
		return getKeyboardAxisValue(&(keyboardAxisBindings.at(name)));
	if (controllerAxisBindings.contains(name))
		return getControllerAxisValue(&(controllerAxisBindings.at(name)));
	if (controllerButtonAxisBindings.contains(name))
		return getControllerButtonAxisValue(&(controllerButtonAxisBindings.at(name)));
	if (keyboardButtonBindings.contains(name))
		return getKeyboardButtonValue(&(keyboardButtonBindings.at(name)));
	if (controllerButtonBindings.contains(name))
		return getControllerButtonValue(&(controllerButtonBindings.at(name)));
	return NAN;
}

float Macgyver::InputMap::getKeyboardAxisValue(std::tuple<SDL_Scancode, SDL_Scancode>* keys)
{
	SDL_Scancode positive, negative;
	std::tie(positive, negative) = *keys;

	float value = 0;
	value += getInput.isKeyDown(positive) ? 1 : 0;
	value -= getInput.isKeyDown(negative) ? 1 : 0;
	return value;
}

float Macgyver::InputMap::getControllerAxisValue(std::tuple<SDL_GameControllerAxis, int32_t>* binding)
{
	SDL_GameControllerAxis axis;
	int32_t id;
	std::tie(axis, id) = *binding;
	if (id != -1) {
		//To rescale a number in the range s..e to 0..1, you do (value-s)/(e-s).
		return 2 * ((float)getInput.controller_getAxisPosition(id, axis) - Sint16_MIN) / (Sint16_MAX - Sint16_MIN) - 1;
	}
	float max = 0;
	for (int32_t id_local : getInput.getAllOpenedControllers()) {
		float newValue = 2 * ((float)getInput.controller_getAxisPosition(id_local, axis) - Sint16_MIN) / (Sint16_MAX - Sint16_MIN) - 1;
		if (std::abs(max) < std::abs(newValue))
			max = newValue;
	}
	return max;

}
//TODO: SWAP TO GAMECONTROLLER IN INPUT CLASS, SINCE IT;'S NOW BREAKING W JOYSTICK
float Macgyver::InputMap::getControllerButtonAxisValue(std::tuple<SDL_GameControllerButton, SDL_GameControllerButton, int32_t>* binding)
{
	SDL_GameControllerButton positive, negative;
	int32_t id;
	std::tie(positive, negative, id) = *binding;
	float value = 0;
	if (id != -1) {
		value += getInput.controller_isButtonDown(id, positive);
		value -= getInput.controller_isButtonDown(id, negative);
		return value;
	}
	else {
		float max = 0;
		for (int32_t id_local : getInput.getAllOpenedControllers()) {
			float newValue = 0;
			newValue += getInput.controller_isButtonDown(id_local, positive);
			newValue -= getInput.controller_isButtonDown(id_local, negative);
			if (std::abs(max) < std::abs(newValue))
				max = newValue;
		}
		return max;
	}
	
		
}

float Macgyver::InputMap::getKeyboardButtonValue(SDL_Scancode* key)
{
	return getInput.isKeyDown(*key) ? 1 : 0;
}

float Macgyver::InputMap::getControllerButtonValue(std::tuple<SDL_GameControllerButton, int32_t>* binding)
{
	SDL_GameControllerButton button;
	int32_t id;
	std::tie(button, id) = *binding;
	return getInput.controller_isButtonDown(id, button) ? 1 : 0;
}



void Macgyver::InputMap::addBinding(const std::string name, SDL_Scancode positive, SDL_Scancode negative)
{
	keyboardAxisBindings.insert({ name, {positive, negative} });
}

void Macgyver::InputMap::addBinding(const std::string name, SDL_GameControllerAxis axis, int32_t id)
{
	controllerAxisBindings.insert({ name, {axis, id} });
	
}

void Macgyver::InputMap::addBinding(const std::string name, SDL_GameControllerButton positive, SDL_GameControllerButton negative, int32_t id)
{
	controllerButtonAxisBindings.insert({ name, {positive, negative, id} });
}

void Macgyver::InputMap::addBinding(const std::string name, SDL_Scancode key)
{
	keyboardButtonBindings.insert({ name, key });
}

void Macgyver::InputMap::addBinding(const std::string name, SDL_GameControllerButton button, int32_t id)
{
	controllerButtonBindings.insert({ name, {button,id} });
}

 
