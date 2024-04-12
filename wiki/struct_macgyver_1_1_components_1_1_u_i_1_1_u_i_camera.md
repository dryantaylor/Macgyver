<div id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera">

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera"></span>

\#include $<$UICamera.h$>$

<div class="DoxyCompactItemize">

static void
[draw](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_a95293937b8a279d31cf0c03f19ea4162)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self)

static void
[update](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_aff800f4a93d84a4d08261d9600509027)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, unsigned int deltaTime)

static void
[AttachNew](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_ac65d153314bdd11b330f11d1b902d810)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$comp)

</div>

Component to handle UI renderable Components draws them above the normal
Components

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_ac65d153314bdd11b330f11d1b902d810"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_ac65d153314bdd11b330f11d1b902d810"></span>

void Macgyver::Components::UI::UICamera::AttachNew (

<div class="DoxyParamCaption">

comp

</div>

)

Attaches a new to an existing Component. Note: a Component should only
have one thing attached to it

<div class="DoxyParams">

Parameters *comp* & pointer to the component to attach the to  

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_a95293937b8a279d31cf0c03f19ea4162"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_a95293937b8a279d31cf0c03f19ea4162"></span>

void Macgyver::Components::UI::UICamera::draw (

<div class="DoxyParamCaption">

self

</div>

)

Draws components to the screen based off their absoloute position (0,0)
top left to (720,1280) bottom right

NOTE: this behaviour may change in future to be based off the UI cameras
position
<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_aff800f4a93d84a4d08261d9600509027"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_aff800f4a93d84a4d08261d9600509027"></span>

void Macgyver::Components::UI::UICamera::update (

<div class="DoxyParamCaption">

self,

deltaTime

</div>

)

UI s update method, calls the draw function at the end.

<div class="DoxyParams">

Parameters *self* & pointer to the Component which the UI camera is part
of  
*deltaTime* & time in milliseconds since last frame and this one  

</div>

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/UICamera.h

MacGyver/UICamera.cpp

</div>
