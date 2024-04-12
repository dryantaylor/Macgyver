<div id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector">

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector"></span>

\#include $<$UIMouseDetector.h$>$

<div class="DoxyCompactItemize">

static void
[update](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_a61c2197b75c5b2f30a8f4f5151ebc762)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, unsigned int deltaTime)

static void
[attachNew](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_aa3e62e2b5cd509843f3d3c6ee84c658a)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$comp, SDL_Rect location, size_t messageIndex, long long
hoverValue=1)

</div>

Component to handle the mouse detection of a button. Handles both
location and mouse clicking Sets 2 bits in a given cell.

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_aa3e62e2b5cd509843f3d3c6ee84c658a"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_aa3e62e2b5cd509843f3d3c6ee84c658a"></span>

void Macgyver::Components::UI::UIMouseDetector::attachNew (

<div class="DoxyParamCaption">

comp,

location,

messageIndex,

hoverValue =

</div>

)

Attaches a new MouseDetector to an existing Component. Note: a Component
should only have one thing attached to it

<div class="DoxyParams">

Parameters *comp* & pointer to the component to attach the MouseDetector
to  

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_a61c2197b75c5b2f30a8f4f5151ebc762"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_a61c2197b75c5b2f30a8f4f5151ebc762"></span>

void Macgyver::Components::UI::UIMouseDetector::update (

<div class="DoxyParamCaption">

self,

deltaTime

</div>

)

s update method, calls the draw function at the end.

<div class="DoxyParams">

Parameters *self* & pointer to the Component which the camera is part
of  
*deltaTime* & time in milliseconds since last frame and this one  

</div>

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/UIMouseDetector.h

MacGyver/UIMouseDetector.cpp

</div>
