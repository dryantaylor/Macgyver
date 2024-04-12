<div id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data">

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data"></span>

<div class="DoxyCompactItemize">

[UIRenderableData](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_adda11435b582563ef2d2192757add8b9)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, std::string path, int width, int height)

[UIRenderableData](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a3a62718be00f907a849eec8efcbd61b1)
(SDL_Texture
$\ast$[texture](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a64148e4cf2ef7c50c46002a1b9497a79),
int width, int height)

</div>

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a64148e4cf2ef7c50c46002a1b9497a79"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a64148e4cf2ef7c50c46002a1b9497a79"></span>
SDL_Texture $\ast$ **texture**

<div class="DoxyCompactList">

*Pointer to internal SDL texture.*

</div>

SDL_Rect
[rect](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a4931a399a61b56c01c6673fdaee68c83)

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_adda11435b582563ef2d2192757add8b9"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_adda11435b582563ef2d2192757add8b9"></span>

Macgyver::Components::UI::UIRenderableData::UIRenderableData (

<div class="DoxyParamCaption">

self,

path,

width,

height

</div>

)

Constructor to create a UIRenderableDataStruct

<div class="DoxyParams">

Parameters *self* & component to attach this to  
*path* & path to the image relative to the base path  
*width* & width to render image at  
*height* & height to render image at  

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a3a62718be00f907a849eec8efcbd61b1"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a3a62718be00f907a849eec8efcbd61b1"></span>

Macgyver::Components::UI::UIRenderableData::UIRenderableData (

<div class="DoxyParamCaption">

texture,

width,

height

</div>

)

Constructor to create a UIRenderableDataStruct

<div class="DoxyParams">

Parameters *texture* & texture to render  
*width* & width to render image at  
*height* & height to render image at  

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a4931a399a61b56c01c6673fdaee68c83"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_a4931a399a61b56c01c6673fdaee68c83"></span>
SDL_Rect Macgyver::Components::UI::UIRenderableData::rect

SDL rect to contain the width and height to render the texture at on
screen

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/UIRenderableData.h

MacGyver/UIRenderableData.cpp

</div>
