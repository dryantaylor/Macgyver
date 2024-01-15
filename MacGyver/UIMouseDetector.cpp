#include "UIMouseDetector.h"

#include "Input.h"
#include "Messenger.h"
void Macgyver::Components::UI::UIMouseDetector::update(Gameobjects::Component* self, unsigned int deltaTime)
{
	Macgyver::Components::UI::UIMouseDetectorData* data =
		componentGetData(self, Macgyver::Components::UI::UIMouseDetectorData);
	//whoops probably a bit ugly/complex but we ball for now
	int x, y;
	getInput.getMousePosition(&x, &y);
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

	this->resetValue = ~(2 * hoverValue + hoverValue);
	pressedPrevFrame = false;
	INTERNAL_mousePoint.x = 0;
	INTERNAL_mousePoint.y = 0;
}
