#include "Input.h"

Uint8* Macgyver::Input::keyboardState = nullptr;

void Macgyver::Input::init()
{
}

void Macgyver::Input::update()
{
	Input::keyboardState = const_cast<Uint8*>(SDL_GetKeyboardState(NULL));
}

bool Macgyver::Input::isKeyDown(SDL_KeyCode key)
{
	return isKeyDown(SDL_GetScancodeFromKey(key));
}

bool Macgyver::Input::isKeyDown(SDL_Scancode key)
{
	
	return Input::keyboardState[key];
}
