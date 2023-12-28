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

bool Input::isKeyDown(SDL_KeyCode key)
{
	return isKeyDown(SDL_GetScancodeFromKey(key));
}

bool Input::isKeyDown(SDL_Scancode key)
{
	
	return keyboardState[key];
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
