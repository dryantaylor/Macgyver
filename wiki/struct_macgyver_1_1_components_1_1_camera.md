<div id="struct_macgyver_1_1_components_1_1_camera">

</div>

<span id="struct_macgyver_1_1_components_1_1_camera"
label="struct_macgyver_1_1_components_1_1_camera"></span>

\#include $<$Camera.h$>$

<div class="DoxyCompactItemize">

static void
[Draw](#struct_macgyver_1_1_components_1_1_camera_aa623f2ebc0c1ade1297356fef10fa1c2)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self)

static void
[update](#struct_macgyver_1_1_components_1_1_camera_abbb366251f67df48f8e5663b80dd0586)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, unsigned int deltaTime)

static [Math::Vector3](#class_macgyver_1_1_math_1_1_vector3)
[convertToCameraSpace](#struct_macgyver_1_1_components_1_1_camera_a92caf7b2cbd7b0cf8087d5e58d03d3b8)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self,
[Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$comp)

static void
[AttachNew](#struct_macgyver_1_1_components_1_1_camera_a5b0d21a4ea85ae6b2562256c2b7bbf34)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$comp)

</div>

Component to handle drawing renderable Components

<span id="struct_macgyver_1_1_components_1_1_camera_a5b0d21a4ea85ae6b2562256c2b7bbf34"
label="struct_macgyver_1_1_components_1_1_camera_a5b0d21a4ea85ae6b2562256c2b7bbf34"></span>

void Components::Camera::AttachNew (

<div class="DoxyParamCaption">

comp

</div>

)

Attaches a new to an existing Component. Note: a Component should only
have one thing attached to it

<div class="DoxyParams">

Parameters *comp* & pointer to the component to attach the to  

</div>

<span id="struct_macgyver_1_1_components_1_1_camera_a92caf7b2cbd7b0cf8087d5e58d03d3b8"
label="struct_macgyver_1_1_components_1_1_camera_a92caf7b2cbd7b0cf8087d5e58d03d3b8"></span>

[Math::Vector3](#class_macgyver_1_1_math_1_1_vector3)
Components::Camera::convertToCameraSpace (

<div class="DoxyParamCaption">

self,

comp

</div>

)

Converts the co-ordinates of another Components to co-ordinates on
screen. This may be negative numbers or numbers greater than the
width/height of the camera

<div class="DoxyParams">

Parameters *self* & pointer to the Component is part of  
*comp* & pointer to the Component to find the camera co-ordinates of  

</div>

<div class="DoxyReturn">

Returns a object with the camera co-ordinates of the comp object

</div>

<span id="struct_macgyver_1_1_components_1_1_camera_aa623f2ebc0c1ade1297356fef10fa1c2"
label="struct_macgyver_1_1_components_1_1_camera_aa623f2ebc0c1ade1297356fef10fa1c2"></span>

void Components::Camera::Draw (

<div class="DoxyParamCaption">

self

</div>

)

Draws renderable components to the screen based off of their positions
and the cameras position

<div class="DoxyParams">

Parameters *self* & the Component which is a part of  

</div>

<span id="struct_macgyver_1_1_components_1_1_camera_abbb366251f67df48f8e5663b80dd0586"
label="struct_macgyver_1_1_components_1_1_camera_abbb366251f67df48f8e5663b80dd0586"></span>

void Components::Camera::update (

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

MacGyver/Camera.h

MacGyver/Camera.cpp

</div>
