<div id="struct_macgyver_1_1_components_1_1_renderable_data">

</div>

<span id="struct_macgyver_1_1_components_1_1_renderable_data"
label="struct_macgyver_1_1_components_1_1_renderable_data"></span>

\#include $<$Renderable.h$>$

<div class="DoxyCompactItemize">

[RenderableData](#struct_macgyver_1_1_components_1_1_renderable_data_ab605b4de043fad1fd600feb1d07f2a23)
([Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$self, std::string path, int width, int height)

[$\sim$RenderableData](#struct_macgyver_1_1_components_1_1_renderable_data_ab7574cbff921436361e6d5628debc1b8)
()

</div>

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_components_1_1_renderable_data_a335788ed220e36c624dc0a4561f2192e"
label="struct_macgyver_1_1_components_1_1_renderable_data_a335788ed220e36c624dc0a4561f2192e"></span>
SDL_Texture $\ast$ **texture**

<div class="DoxyCompactList">

*Pointer to internal SDL texture.*

</div>

SDL_Rect
[rect](#struct_macgyver_1_1_components_1_1_renderable_data_ac7a0d6e566536c113c4e268da8e53e0e)

</div>

Struct to hold data needed for a component to render data.

<span id="struct_macgyver_1_1_components_1_1_renderable_data_ab605b4de043fad1fd600feb1d07f2a23"
label="struct_macgyver_1_1_components_1_1_renderable_data_ab605b4de043fad1fd600feb1d07f2a23"></span>

Components::RenderableData::RenderableData (

<div class="DoxyParamCaption">

self,

path,

width,

height

</div>

)

Creates a struct

<div class="DoxyParams">

Parameters *self* & pointer to the Component this will be attacheed to  
*path* & path to the image relatve to the exe directory  
*width* & width to display the image at  
*height* & height to display the image at  

</div>

<span id="struct_macgyver_1_1_components_1_1_renderable_data_ab7574cbff921436361e6d5628debc1b8"
label="struct_macgyver_1_1_components_1_1_renderable_data_ab7574cbff921436361e6d5628debc1b8"></span>

Components::RenderableData::$\sim$RenderableData (

<div class="DoxyParamCaption">

</div>

)

Destructor for , closes the texture if one is present

<span id="struct_macgyver_1_1_components_1_1_renderable_data_ac7a0d6e566536c113c4e268da8e53e0e"
label="struct_macgyver_1_1_components_1_1_renderable_data_ac7a0d6e566536c113c4e268da8e53e0e"></span>
SDL_Rect Macgyver::Components::RenderableData::rect

SDL rect to contain the width and height to render the texture at on
screen

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/Renderable.h

MacGyver/Renderable.cpp

</div>
