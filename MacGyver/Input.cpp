#include "Input.h"

using namespace Macgyver;

Uint8* Input::keyboardState = nullptr;

void Input::update()
{
	Input::keyboardState = const_cast<Uint8*>(SDL_GetKeyboardState(NULL));
}

bool Input::isKeyDown(SDL_KeyCode key)
{
	return isKeyDown(SDL_GetScancodeFromKey(key));
}

bool Input::isKeyDown(SDL_Scancode key)
{
	
	return Input::keyboardState[key];
}
