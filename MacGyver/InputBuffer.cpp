#include "InputBuffer.h"
#include <SDL.h>
#include "GameInputs.h"
#include <bitset>

constexpr int BUFFER_SIZE = 15;

void DemoProject::InputBuffer::update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime)
{
	InputBufferData* data = componentGetData(self, InputBufferData);
	data->ticks += deltaTime;
	if (data->ticks > 15) {
		data->ticks -= 15;
		uint16_t frameBuffer = 0U;
		//create system for getting keys pressed this
		//frame in Input
		Macgyver::Input* input = &getInput;

		//DOWN LEFT
		frameBuffer += (input->isKeyDown(SDL_SCANCODE_S)
			& input->isKeyDown(SDL_SCANCODE_A))
			<< GameInputs::SHIFTS_DOWNLEFT;
		//DOWN RIGHT
		frameBuffer += (input->isKeyDown(SDL_SCANCODE_S)
			& input->isKeyDown(SDL_SCANCODE_D))
			<< GameInputs::SHIFTS_DOWNRIGHT;
		//UPLEFT
		frameBuffer += (input->isKeyDown(SDL_SCANCODE_W)
			& input->isKeyDown(SDL_SCANCODE_A))
			<< GameInputs::SHIFTS_UPLEFT;

		//UPRIGHT
		frameBuffer += (input->isKeyDown(SDL_SCANCODE_W)
			& input->isKeyDown(SDL_SCANCODE_D))
			<< GameInputs::SHIFTS_UPRIGHT;

		//DOWN - down key pressed but not down left or down right
		frameBuffer +=
			( (input->isKeyDown(SDL_SCANCODE_S)) &&
			   !(input->isKeyDown(SDL_SCANCODE_A) || input->isKeyDown(SDL_SCANCODE_D) ))
			<< GameInputs::SHIFTS_DOWN;

		//UP - up key pressed but not up left or up right
		frameBuffer += 
			((input->isKeyDown(SDL_SCANCODE_W)) && 
				!(input->isKeyDown(SDL_SCANCODE_A) || (input->isKeyDown(SDL_SCANCODE_D)))
			)<< GameInputs::SHIFTS_UP;
		
		//LEFT - left key pressed but not up or down
		frameBuffer += ((input->isKeyDown(SDL_SCANCODE_A)) &&
			!(input->isKeyDown(SDL_SCANCODE_W) || (input->isKeyDown(SDL_SCANCODE_S)))
			) << GameInputs::SHIFTS_LEFT;

		//RIGHT - right key pressed but not up right or down right
		frameBuffer += ((input->isKeyDown(SDL_SCANCODE_D)) &&
			!(input->isKeyDown(SDL_SCANCODE_W) || (input->isKeyDown(SDL_SCANCODE_S)))
			) << GameInputs::SHIFTS_RIGHT;

		data->buffer.push_front(frameBuffer & ~(data->currHeld));
		data->currHeld = frameBuffer;
		//std::cout << std::bitset<16>(frameBuffer) << std::endl;
		data->buffer.pop_back();
	}
}

void DemoProject::InputBuffer::attachNew(Macgyver::Gameobjects::Component* comp)
{
	comp->update = InputBuffer::update;
	comp->addData(componentCreateData(InputBufferData));
}

DemoProject::InputBufferData::InputBufferData()
{
	currHeld = 0u;
	ticks = 0;
	buffer = {};
	for (int i = 0; i < BUFFER_SIZE; i++) {
		buffer.push_front(0u);
	}
}
