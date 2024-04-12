<div id="class_macgyver_1_1_gameobjects_1_1_scene">

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_scene"
label="class_macgyver_1_1_gameobjects_1_1_scene"></span>

\#include $<$Scene.h$>$

<div class="DoxyCompactItemize">

[Scene](#class_macgyver_1_1_gameobjects_1_1_scene_a889f0b8df198aad297ded0d4546a2aad)
()

void
[addObject](#class_macgyver_1_1_gameobjects_1_1_scene_aeb1721685fd2c0f4049f2d052a1cd84c)
([GameObject](#class_macgyver_1_1_gameobjects_1_1_game_object)
$\ast$obj)

std::vector$<$
[Component](#class_macgyver_1_1_gameobjects_1_1_component) $\ast$ $>$
[getComponentsInWorldByType](#class_macgyver_1_1_gameobjects_1_1_scene_a58460843bde423dd9435dc69fd33f383)
(Components::COMPONENT_TYPES type)

void
[update](#class_macgyver_1_1_gameobjects_1_1_scene_aa88683c13dc882a21d75bacd2ef4b8c4)
(unsigned int deltaTime)

void
[physicsUpdate](#class_macgyver_1_1_gameobjects_1_1_scene_ab639051b72eb45680720f0646972dd68)
(unsigned int deltaTime)

</div>

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_gameobjects_1_1_scene_a3fadb341532b9c8d259b05fa3d3f6c95"
label="class_macgyver_1_1_gameobjects_1_1_scene_a3fadb341532b9c8d259b05fa3d3f6c95"></span>
SDL_Renderer $\ast$ **scene_RENDERER**

<div class="DoxyCompactList">

*sdl renderer used for the scene*

</div>

</div>

Class to represent a group of objects in the world at once

<span id="class_macgyver_1_1_gameobjects_1_1_scene_a889f0b8df198aad297ded0d4546a2aad"
label="class_macgyver_1_1_gameobjects_1_1_scene_a889f0b8df198aad297ded0d4546a2aad"></span>

Gameobjects::Scene::Scene (

<div class="DoxyParamCaption">

</div>

)

Default Contsructor

<span id="class_macgyver_1_1_gameobjects_1_1_scene_aeb1721685fd2c0f4049f2d052a1cd84c"
label="class_macgyver_1_1_gameobjects_1_1_scene_aeb1721685fd2c0f4049f2d052a1cd84c"></span>

void Gameobjects::Scene::addObject (

<div class="DoxyParamCaption">

obj

</div>

)

Adds a instance to the scene

<div class="DoxyParams">

Parameters *obj* & instance to be added to this scene  

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_scene_a58460843bde423dd9435dc69fd33f383"
label="class_macgyver_1_1_gameobjects_1_1_scene_a58460843bde423dd9435dc69fd33f383"></span>

std::vector$<$
[Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$ $>$ Gameobjects::Scene::getComponentsInWorldByType (

<div class="DoxyParamCaption">

type

</div>

)

Returns all Components in the scene which have a specific type

<div class="DoxyParams">

Parameters *type* & the type flag to search for  

</div>

<div class="DoxyReturn">

Returns a vector containing pointers to all the Components in the scene
which match the flag given

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_scene_ab639051b72eb45680720f0646972dd68"
label="class_macgyver_1_1_gameobjects_1_1_scene_ab639051b72eb45680720f0646972dd68"></span>

void Macgyver::Gameobjects::Scene::physicsUpdate (

<div class="DoxyParamCaption">

deltaTime

</div>

)

physics update method for the scene.

NOTE: physics updates 50 times per second (every 20ms)

<div class="DoxyParams">

Parameters *deltaTime* & time in milliseconds since the last frame  

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_scene_aa88683c13dc882a21d75bacd2ef4b8c4"
label="class_macgyver_1_1_gameobjects_1_1_scene_aa88683c13dc882a21d75bacd2ef4b8c4"></span>

void Gameobjects::Scene::update (

<div class="DoxyParamCaption">

deltaTime

</div>

)

Update method for the scene to be called once in the main game loop
after updating input and clearing the renderer. Calls the update methods
of all GameObjects in the scene.

<div class="DoxyParams">

Parameters *deltaTime* & time in milliseconds that has elapsed since the
last frame  

</div>

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/Scene.h

MacGyver/Scene.cpp

</div>
