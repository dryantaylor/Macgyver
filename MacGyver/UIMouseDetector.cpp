#include "UIMouseDetector.h"

#include "Input.h"
#include "Messenger.h"
/*
* Message box will hold the following values in the
* relavent 2 bits
* 00 - not hovered not pressed
* 01 - hovered, not pressed
* 11 - pressed down not released
* 10 - was pressed down now released (for one frame only)
*/
void Macgyver::Components::UI::UIMouseDetector::update(Gameobjects::Component* self, unsigned int deltaTime)
{
	Macgyver::Components::UI::UIMouseDetectorData* data =
		componentGetData(self, Macgyver::Components::UI::UIMouseDetectorData);
	//whoops probably a bit ugly/complex but we ball for now
	int x, y;
	getInput.getMousePosition(&x, &y);
	//set the point to where the mouse is for SDL's 
	//in built point in rect check
	data->INTERNAL_mousePoint.x = x;
	data->INTERNAL_mousePoint.y = y;

	data->collider.x = self->getWorldTransform().x;
	data->collider.y = self->getWorldTransform().y;

	//resets the impact of the button on the binary data;
	getMessenger[data->messageIndex] &= data->resetValue; 
	if (SDL_PointInRect(&data->INTERNAL_mousePoint, &data->collider)
		== SDL_TRUE) {
		if (data->pressedPrevFrame && 
			!getInput.isMouseButtonDown(RMB) )
		{
			
			getMessenger[data->messageIndex] |= 2 * data->hoverValue;
			data->pressedPrevFrame = false;
		}
		else {
			getMessenger[data->messageIndex] |= data->hoverValue;
			data->pressedPrevFrame = false;
			if (getInput.isMouseButtonDown(RMB)) {
				data->pressedPrevFrame = true;
				getMessenger[data->messageIndex] |= 2 * data->hoverValue;
			}
			
		}

	}
	else {
		data->pressedPrevFrame = false;
	}
}

void Macgyver::Components::UI::UIMouseDetector::attachNew(Gameobjects::Component* comp, SDL_Rect location, size_t messageIndex, long long hoverValue)
{
	comp->setComponentProperties(Macgyver::Components::UI_INTERACTABLE);
	comp->update = Macgyver::Components::UI::UIMouseDetector::update;
	

	comp->addData(
	componentCreateData(
		Macgyver::Components::UI::UIMouseDetectorData,
		location, messageIndex, hoverValue )
	);
		
}

Macgyver::Components::UI::UIMouseDetectorData::UIMouseDetectorData(SDL_Rect collider, size_t messageIndex, long long hoverValue)
{
	this->collider = collider;
	this->messageIndex = messageIndex;
	this->hoverValue = hoverValue;

	// will be anded with the value so the compliment of the 2 bits
	// being used for that buttons state resets it 
	this->resetValue = ~(2 * hoverValue + hoverValue);
	pressedPrevFrame = false;
	INTERNAL_mousePoint.x = 0;
	INTERNAL_mousePoint.y = 0;
}
