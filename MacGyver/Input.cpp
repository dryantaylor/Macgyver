#include "Input.h"

using namespace Macgyver;

Input::Input() 
{
	keyboardState = nullptr;
}

Input::~Input() 
{
}
void Input::update()
{
	keyboardState = const_cast<Uint8*>(SDL_GetKeyboardState(NULL));
}

bool Input::isKeyDown(SDL_KeyCode key)
{
	return isKeyDown(SDL_GetScancodeFromKey(key));
}

bool Input::isKeyDown(SDL_Scancode key)
{
	
	return keyboardState[key];
}
