<div id="struct_macgyver_1_1_components_1_1_velocity">

</div>

<span id="struct_macgyver_1_1_components_1_1_velocity"
label="struct_macgyver_1_1_components_1_1_velocity"></span>

\#include $<$Velocity.h$>$

<div class="DoxyCompactItemize">

static void
[update](#struct_macgyver_1_1_components_1_1_velocity_a4d3b471d418ac6c54d44ce2cc38b331f)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, unsigned int deltaTime)

static void
[physicsUpdate](#struct_macgyver_1_1_components_1_1_velocity_ad8764d2b6fb7ec17365e0205308e0d61)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self)

</div>

Struct to handle velocity of an Object

<span id="struct_macgyver_1_1_components_1_1_velocity_ad8764d2b6fb7ec17365e0205308e0d61"
label="struct_macgyver_1_1_components_1_1_velocity_ad8764d2b6fb7ec17365e0205308e0d61"></span>

void Components::Velocity::physicsUpdate (

<div class="DoxyParamCaption">

self

</div>

)

s physics update, updates the parent GameObjects transform by velocity
$\ast$ physicsDeltaTime units each call.

<div class="DoxyParams">

Parameters *self* & pointer to the Component which the is part of  

</div>

<span id="struct_macgyver_1_1_components_1_1_velocity_a4d3b471d418ac6c54d44ce2cc38b331f"
label="struct_macgyver_1_1_components_1_1_velocity_a4d3b471d418ac6c54d44ce2cc38b331f"></span>

void Components::Velocity::update (

<div class="DoxyParamCaption">

self,

deltaTime

</div>

)

s update method, does nothing.

<div class="DoxyParams">

Parameters *self* & pointer to the Component which the is part of  
*deltaTime* & time in milliseconds since last frame and this one  

</div>

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/Velocity.h

MacGyver/Velocity.cpp

</div>
