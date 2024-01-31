#pragma once
#include "Component.h"
#include "Velocity.h"
#include "ComponentManager.h"
#include "ComponentData.h"

namespace Macgyver::Components::UI {

	/*
	* Component to handle the mouse detection of a
	* button. Handles both location and mouse clicking
	* Sets 2 bits in a given Messenger cell.
	*/
	struct UIMouseDetector {
		/*
        * Camera's update method, calls the draw function at the end.
        *
        * @param self pointer to the Component which the camera is part of
        * @param deltaTime time in milliseconds since last frame and this one
        */
		static void update(Gameobjects::Component* self, unsigned int deltaTime);
		/*
        * Attaches a new MouseDetector to an existing Component.
        * Note: a Component should only have one thing attached to it
        *
        * @param comp pointer to the component to attach the MouseDetector to
        */
		static void attachNew(Gameobjects::Component* comp,
			SDL_Rect location, size_t messageIndex, long long hoverValue = 1);
	};

	struct UIMouseDetectorData {
		/*
		* Constructor for MouseDetectorData
		* 
		* @param collider Bounds of the detection with 
		*                 x,y set to 0, as the Components
		*                 transform is used for this
		* 
		* @param messageIndex which cell of the Messenger 
		*                     to change
		* 
		* @param hoverValue which binary value to set when the
		*                   message box is hovered. This bit
		*                   and the bit following will be used
		*                   to give the state
		*/
		UIMouseDetectorData(SDL_Rect collider, 
			                size_t messageIndex, long long hoverValue);
		
		/// rect giving the bounds of the button
		SDL_Rect collider;
		/// which messaganger cell to use
		size_t messageIndex;
		/// value to set when button is being hovered over
		/// should be a value 2^n
		long long hoverValue;
		/// equal to ~(2*hover + hover), binary value used to
		/// remove impact of the button from previous frames
		/// when & with the cells current value
		long long resetValue;

		/// used internally for bounds checking
		SDL_Point INTERNAL_mousePoint;
		/// used internally to handle button being released
		bool pressedPrevFrame;


		
	};
}
