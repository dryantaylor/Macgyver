<div id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable">

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable"></span>

\#include $<$UIRenderable.h$>$

<div class="DoxyCompactItemize">

static void
[update](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_a6c03210b80e09818645d2e7f359aabc7)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, unsigned int deltaTime)

static void
[AttachNew](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_a264b93edb5a47d3adf36958ac21be68b)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$comp, std::string path, int width, int height)

</div>

Struct to hold a Component

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_a264b93edb5a47d3adf36958ac21be68b"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_a264b93edb5a47d3adf36958ac21be68b"></span>

void Macgyver::Components::UI::UIRenderable::AttachNew (

<div class="DoxyParamCaption">

comp,

path,

width,

height

</div>

)

Attaches a new to an existing Component. Note: a Component should only
have one thing attached to it

<div class="DoxyParams">

Parameters *comp* & pointer to the component to attach the to  

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_a6c03210b80e09818645d2e7f359aabc7"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_a6c03210b80e09818645d2e7f359aabc7"></span>

void Macgyver::Components::UI::UIRenderable::update (

<div class="DoxyParamCaption">

self,

deltaTime

</div>

)

UIRenderables update method, does nothing.

<div class="DoxyParams">

Parameters *self* & pointer to the Component which the renderable is
part of  
*deltaTime* & time in milliseconds since last frame and this one  

</div>

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/UIRenderable.h

MacGyver/UIRenderable.cpp

</div>
