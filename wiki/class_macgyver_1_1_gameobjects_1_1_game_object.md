<div id="class_macgyver_1_1_gameobjects_1_1_game_object">

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_game_object"
label="class_macgyver_1_1_gameobjects_1_1_game_object"></span>

\#include $<$GameObject.h$>$

<div class="DoxyCompactItemize">

[GameObject](#class_macgyver_1_1_gameobjects_1_1_game_object_a0273c889cea933c2fd9eaba9104f8cb8)
(int x=0, int y=0, int z=0)

void
[addComponent](#class_macgyver_1_1_gameobjects_1_1_game_object_aa2748c9b76c5d316ebea2731cc2ddcbf)
([Component](#class_macgyver_1_1_gameobjects_1_1_component) $\ast$comp)

std::vector$<$
[Component](#class_macgyver_1_1_gameobjects_1_1_component) $\ast$ $>$
[getComponentsWithProperty](#class_macgyver_1_1_gameobjects_1_1_game_object_a6947bfb7c95b76e590a285c39b29f91d)
(Components::COMPONENT_TYPES type)

void
[update](#class_macgyver_1_1_gameobjects_1_1_game_object_a6ffd10b6c9510d1f9ea502017d6d92ef)
(unsigned int deltaTime)

[Scene](#class_macgyver_1_1_gameobjects_1_1_scene) $\ast$
[getParentScene](#class_macgyver_1_1_gameobjects_1_1_game_object_a6be9d2a46c2b8432494ded09f7c93e06)
()

</div>

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_adad86c5feb1cd727e4919727348b659c"
label="class_macgyver_1_1_gameobjects_1_1_game_object_adad86c5feb1cd727e4919727348b659c"></span>
[Math::Vector3](#class_macgyver_1_1_math_1_1_vector3) **transform**

<div class="DoxyCompactList">

*Represents the position of the object in world space.*

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_a526e591b65196a1af90d294db7306c39"
label="class_macgyver_1_1_gameobjects_1_1_game_object_a526e591b65196a1af90d294db7306c39"></span>
std::vector$<$
[Macgyver::Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$ $>$ **components** = {}

<div class="DoxyCompactList">

*Stores all the components of the object.*

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_a05e878d991b30cd3f01efd7142bef25f"
label="class_macgyver_1_1_gameobjects_1_1_game_object_a05e878d991b30cd3f01efd7142bef25f"></span>
bool **enabled** = true

</div>

Class which represents a single object in the world

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_a0273c889cea933c2fd9eaba9104f8cb8"
label="class_macgyver_1_1_gameobjects_1_1_game_object_a0273c889cea933c2fd9eaba9104f8cb8"></span>

Gameobjects::GameObject::GameObject (

<div class="DoxyParamCaption">

x = ,

y = ,

z =

</div>

)

Initialises an object and sets its position

<div class="DoxyParams">

Parameters *x* & horizontal position in world space, defualt 0  
*y* & vertical position in world space, defualt 0  
*z* & layer height (used for the camera), defualt 0  

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_aa2748c9b76c5d316ebea2731cc2ddcbf"
label="class_macgyver_1_1_gameobjects_1_1_game_object_aa2748c9b76c5d316ebea2731cc2ddcbf"></span>

void Gameobjects::GameObject::addComponent (

<div class="DoxyParamCaption">

comp

</div>

)

Adds a to the object

<div class="DoxyParams">

Parameters *comp* & pointer to the component to add  

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_a6947bfb7c95b76e590a285c39b29f91d"
label="class_macgyver_1_1_gameobjects_1_1_game_object_a6947bfb7c95b76e590a285c39b29f91d"></span>

std::vector$<$
[Gameobjects::Component](#class_macgyver_1_1_gameobjects_1_1_component)
$\ast$ $>$ Gameobjects::GameObject::getComponentsWithProperty (

<div class="DoxyParamCaption">

type

</div>

)

Gets all components attached to the object which have the given flag
set.

<div class="DoxyParams">

Parameters *type* & the flag to search for  

</div>

<div class="DoxyReturn">

Returns a vector of pointers to all components which are attached to the
object and have the selected flag

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_a6be9d2a46c2b8432494ded09f7c93e06"
label="class_macgyver_1_1_gameobjects_1_1_game_object_a6be9d2a46c2b8432494ded09f7c93e06"></span>

[Gameobjects::Scene](#class_macgyver_1_1_gameobjects_1_1_scene) $\ast$
Gameobjects::GameObject::getParentScene (

<div class="DoxyParamCaption">

</div>

)

Gets a pointer to the Objects parent

<div class="DoxyReturn">

Returns pointer to parent object

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_game_object_a6ffd10b6c9510d1f9ea502017d6d92ef"
label="class_macgyver_1_1_gameobjects_1_1_game_object_a6ffd10b6c9510d1f9ea502017d6d92ef"></span>

void Gameobjects::GameObject::update (

<div class="DoxyParamCaption">

deltaTime

</div>

)

Objects update method. Calls the update method of all attached
components

<div class="DoxyParams">

Parameters *deltaTime* & time between the last frame and this frame  

</div>

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/GameObject.h

MacGyver/GameObject.cpp

</div>
