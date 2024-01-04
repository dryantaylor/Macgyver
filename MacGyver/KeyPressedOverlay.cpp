#include "KeyPressedOverlay.h"
#include "Messenger.h"
void DemoProject::KeyPressedOverlay::update(Macgyver::Gameobjects::Component* self, unsigned int deltaTime)
{
	Macgyver::Gameobjects::Component* textBox = 
		self->getParent()
		    ->getComponentsWithProperty
			  (Macgyver::Components::UI_RENDERABLE)[0];
	Macgyver::Components::UI::TextData* data =
		componentGetData(textBox, Macgyver::Components::UI::TextData);

	data->text = "";
	if (getMessenger[0] != 0) {
		data->text += "^";
	}
	if (getMessenger[1] > 0) {
		data->text += "d";
	}
	else if (getMessenger[1] < 0) {
		data->text += "a";
	}

	if (getMessenger[2] > 0) {
		data->text += "w";
	}
	else if (getMessenger[2] < 0) {
		data->text += "s";
	}

	//std::cout << "writing " << data->text << "to screen" << std::endl;

	

}

void DemoProject::KeyPressedOverlay::attachNew(Macgyver::Gameobjects::Component* comp, Macgyver::Gameobjects::Component* target)
{
	KeyPressedOverlayData* data = new KeyPressedOverlayData();
	data->targetData = componentGetData(target, Macgyver::Components::UI::TextData);

	comp->addData(
		(Macgyver::Components::ComponentData*) data, 
		typeid(KeyPressedOverlayData).hash_code());
	
	comp->update = KeyPressedOverlay::update;

}
