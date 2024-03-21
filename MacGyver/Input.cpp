#include "Input.h"

using namespace Macgyver;
Input::Input() 
{
	keyboardState = nullptr;
	mouseState = 0;
	x = new int;
	y = new int;
	wheelPos = 0;
}

Input::~Input() 
{
}
void Input::update()
{
	keyboardState = const_cast<Uint8*>(SDL_GetKeyboardState(NULL));
	mouseState = SDL_GetMouseState(x, y);
}

int32_t Macgyver::Input::getNumConnectedControllers()
{
	return SDL_NumJoysticks();
}

void Macgyver::Input::openController(int32_t id)
{
	if (controllers.contains(id)) { return; }
	controllers.insert({ id,SDL_JoystickOpen(id) });
}

void Macgyver::Input::closeController(int32_t id)
{
	if (!controllers.contains(id)) {return;}
	SDL_JoystickClose(controllers.at(id));
	controllers.erase(id);
}

void Macgyver::Input::closeAllControllers()
{
	for (std::pair<int,SDL_Joystick*> controller 
		: controllers) {

		SDL_JoystickClose(controller.second);
	}
	controllers.clear();
}

bool Input::isKeyDown(SDL_KeyCode key)
{
	return isKeyDown(SDL_GetScancodeFromKey(key));
}

bool Input::isKeyDown(SDL_Scancode key)
{
	
	return keyboardState[key];
}

bool Macgyver::Input::controller_isButtonDown(int32_t id, SDL_GameControllerButton button)
{
	return SDL_JoystickGetButton(controllers.at(id),button);
}

int32_t Macgyver::Input::controller_getAxisPosition(int32_t id, SDL_GameControllerAxis axis)
{
	return SDL_JoystickGetAxis(controllers.at(id), axis);
}

bool Macgyver::Input::isMouseButtonDown(Mouse button)
{
	return mouseState & button;
}

void Macgyver::Input::getMousePosition(int* x, int* y)
{
	*x = *(this->x);
	*y = *(this->y);
}

void Macgyver::Input::INTERNAL_addMouseWheel(int value)
{
	wheelPos += value;
}

int Macgyver::Input::getMouseWheelPos()
{
	return wheelPos;
}

void Macgyver::Input::resetMouseWheelPos()
{
	wheelPos = 0;
}
