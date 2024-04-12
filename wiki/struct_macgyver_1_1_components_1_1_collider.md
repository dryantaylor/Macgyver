<div id="struct_macgyver_1_1_components_1_1_collider">

</div>

<span id="struct_macgyver_1_1_components_1_1_collider"
label="struct_macgyver_1_1_components_1_1_collider"></span>

<div class="DoxyCompactItemize">

static void
[update](#struct_macgyver_1_1_components_1_1_collider_a3df80261886a302e3f699ea316837e2a)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, unsigned int deltaTime)

static void
[physicsUpdate](#struct_macgyver_1_1_components_1_1_collider_aad7474e6ec63640ed22524e3b9ea6583)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self)

static void
[AttachNew](#struct_macgyver_1_1_components_1_1_collider_ae93c43b6f382eac6a78d60062d7d85c4)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$comp, bool moveable)

</div>

<span id="struct_macgyver_1_1_components_1_1_collider_ae93c43b6f382eac6a78d60062d7d85c4"
label="struct_macgyver_1_1_components_1_1_collider_ae93c43b6f382eac6a78d60062d7d85c4"></span>

void Macgyver::Components::Collider::AttachNew (

<div class="DoxyParamCaption">

comp,

moveable

</div>

)

Attaches a new to an existing Component. Note: a Component should only
have one thing attached to it

<div class="DoxyParams">

Parameters *comp* & pointer to the component to attach the to  
*moveable* & if the component is moveable or not  

</div>

<span id="struct_macgyver_1_1_components_1_1_collider_aad7474e6ec63640ed22524e3b9ea6583"
label="struct_macgyver_1_1_components_1_1_collider_aad7474e6ec63640ed22524e3b9ea6583"></span>

void Macgyver::Components::Collider::physicsUpdate (

<div class="DoxyParamCaption">

self

</div>

)

s physics update, updates the parent GameObjects transform by velocity
$\ast$ physicsDeltaTime units each call.

<div class="DoxyParams">

Parameters *self* & pointer to the Component which the is part of  

</div>

<span id="struct_macgyver_1_1_components_1_1_collider_a3df80261886a302e3f699ea316837e2a"
label="struct_macgyver_1_1_components_1_1_collider_a3df80261886a302e3f699ea316837e2a"></span>

void Macgyver::Components::Collider::update (

<div class="DoxyParamCaption">

self,

deltaTime

</div>

)

Colliders update method, does nothing.

<div class="DoxyParams">

Parameters *self* & pointer to the Component which the is part of  
*deltaTime* & time in milliseconds since last frame and this one  

</div>

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/Collider.h

MacGyver/Collider.cpp

</div>
