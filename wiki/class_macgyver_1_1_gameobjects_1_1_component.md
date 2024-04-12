<div id="class_macgyver_1_1_gameobjects_1_1_component">

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_component"
label="class_macgyver_1_1_gameobjects_1_1_component"></span>

\#include $<$Component.h$>$

<div class="DoxyCompactItemize">

[Component](#class_macgyver_1_1_gameobjects_1_1_component_afcb07412715f07063168cc40f1a213c8)
()

[GameObject](#class_macgyver_1_1_gameobjects_1_1_game_object) $\ast$
[getParent](#class_macgyver_1_1_gameobjects_1_1_component_ac6186df35dea96b00215fe8eb09cd1a8)
()

void
[addData](#class_macgyver_1_1_gameobjects_1_1_component_ab56e2f9909e747e69fa08554418e2270)
([Components::ComponentData](#struct_macgyver_1_1_components_1_1_component_data)
$\ast$data, std::size_t dataTypeHash)

[Components::ComponentData](#struct_macgyver_1_1_components_1_1_component_data)
$\ast$
[getData](#class_macgyver_1_1_gameobjects_1_1_component_ae5f3db39ad5c8f64175b92e402bd7bf4)
(std::size_t dataTypeHash)

<span id="class_macgyver_1_1_gameobjects_1_1_component_a6006ee28b1878a4889e0ca10c655675d"
label="class_macgyver_1_1_gameobjects_1_1_component_a6006ee28b1878a4889e0ca10c655675d"></span>
[Components::ComponentData](#struct_macgyver_1_1_components_1_1_component_data)
$\ast$ **getData** (int index)

COMPONENT_TYPE
[getComponentProperties](#class_macgyver_1_1_gameobjects_1_1_component_a50c295e01fe69a2f43685e9890a5359f)
()

void
[setComponentProperties](#class_macgyver_1_1_gameobjects_1_1_component_a0123c164d78ecafbc08686b110997915)
(COMPONENT_TYPE types)

[Macgyver::Math::Vector3](#class_macgyver_1_1_math_1_1_vector3)
[getWorldTransform](#class_macgyver_1_1_gameobjects_1_1_component_ae5d464e0bce97db3047dc42f66325d92)
()

[Scene](#class_macgyver_1_1_gameobjects_1_1_scene) $\ast$
[getWorldScene](#class_macgyver_1_1_gameobjects_1_1_component_ab3c9033561496927b4ad2fce2e651293)
()

</div>

<div class="DoxyCompactItemize">

[Macgyver::Math::Vector3](#class_macgyver_1_1_math_1_1_vector3)
[localTransform](#class_macgyver_1_1_gameobjects_1_1_component_a8c731b26091d06f104caceec257a8127)

std::function$<$
void([Component](#class_macgyver_1_1_gameobjects_1_1_component) $\ast$,
unsigned int)
[update](#class_macgyver_1_1_gameobjects_1_1_component_ab3329d1c3da95d5c0578f8ad08fd1570)
)

std::function$<$
void([Component](#class_macgyver_1_1_gameobjects_1_1_component) $\ast$)
[physicsUpdate](#class_macgyver_1_1_gameobjects_1_1_component_a667da47a162a7c56e2f62458448e9f8e)
)

<span id="class_macgyver_1_1_gameobjects_1_1_component_ad86fb273f0ca9fd4bd0d80b3dc3e6e46"
label="class_macgyver_1_1_gameobjects_1_1_component_ad86fb273f0ca9fd4bd0d80b3dc3e6e46"></span>
bool **enabled** = true

</div>

Stores a of a

<span id="class_macgyver_1_1_gameobjects_1_1_component_afcb07412715f07063168cc40f1a213c8"
label="class_macgyver_1_1_gameobjects_1_1_component_afcb07412715f07063168cc40f1a213c8"></span>

Gameobjects::Component::Component (

<div class="DoxyParamCaption">

</div>

)

Default Constructor, initialises everything to empty. Use when attaching
a component type to this object.

<span id="class_macgyver_1_1_gameobjects_1_1_component_ab56e2f9909e747e69fa08554418e2270"
label="class_macgyver_1_1_gameobjects_1_1_component_ab56e2f9909e747e69fa08554418e2270"></span>

void Gameobjects::Component::addData (

<div class="DoxyParamCaption">

data,

dataTypeHash

</div>

)

Add a component data object to this

<div class="DoxyParams">

Parameters *data* & pointer to the data object casted to the generic
ComponentData$\ast$ class  
*dataTypeHash* & hash of the original data type, obtained using
std::typeinfo().hash_code()  

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_component_a50c295e01fe69a2f43685e9890a5359f"
label="class_macgyver_1_1_gameobjects_1_1_component_a50c295e01fe69a2f43685e9890a5359f"></span>

COMPONENT_TYPE Gameobjects::Component::getComponentProperties (

<div class="DoxyParamCaption">

</div>

)

Gets the flags/properties/types this component has set as a Uint

<div class="DoxyReturn">

Returns COMPONENT_TYPE/Uint representing the flags set

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_component_ae5f3db39ad5c8f64175b92e402bd7bf4"
label="class_macgyver_1_1_gameobjects_1_1_component_ae5f3db39ad5c8f64175b92e402bd7bf4"></span>

[Components::ComponentData](#struct_macgyver_1_1_components_1_1_component_data)
$\ast$ Macgyver::Gameobjects::Component::getData (

<div class="DoxyParamCaption">

dataTypeHash

</div>

)

Gets a pointer to an attached data object of the correct type. Or
nullptr if no data of the correct type exists. Data can be casted back
to the needed type after being returned from the function.

<div class="DoxyParams">

Parameters *dataTypeHash* & hash of the original data type, obtained
using std::typeinfo().hash_code()  

</div>

<div class="DoxyReturn">

Returns pointer to the data, casted to ComponentData$\ast$

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_component_ac6186df35dea96b00215fe8eb09cd1a8"
label="class_macgyver_1_1_gameobjects_1_1_component_ac6186df35dea96b00215fe8eb09cd1a8"></span>

[Gameobjects::GameObject](#class_macgyver_1_1_gameobjects_1_1_game_object)
$\ast$ Gameobjects::Component::getParent (

<div class="DoxyParamCaption">

</div>

)

Gets the parent of this component

<div class="DoxyReturn">

Returns pointer to the parent instance

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_component_ab3c9033561496927b4ad2fce2e651293"
label="class_macgyver_1_1_gameobjects_1_1_component_ab3c9033561496927b4ad2fce2e651293"></span>

[Gameobjects::Scene](#class_macgyver_1_1_gameobjects_1_1_scene) $\ast$
Gameobjects::Component::getWorldScene (

<div class="DoxyParamCaption">

</div>

)

Gets the Scecne this is in.
<span id="class_macgyver_1_1_gameobjects_1_1_component_ae5d464e0bce97db3047dc42f66325d92"
label="class_macgyver_1_1_gameobjects_1_1_component_ae5d464e0bce97db3047dc42f66325d92"></span>

[Math::Vector3](#class_macgyver_1_1_math_1_1_vector3)
Gameobjects::Component::getWorldTransform (

<div class="DoxyParamCaption">

</div>

)

Gets the absoloute transform of this . (Not the transform relative to
its parent )
<span id="class_macgyver_1_1_gameobjects_1_1_component_a0123c164d78ecafbc08686b110997915"
label="class_macgyver_1_1_gameobjects_1_1_component_a0123c164d78ecafbc08686b110997915"></span>

void Gameobjects::Component::setComponentProperties (

<div class="DoxyParamCaption">

types

</div>

)

Sets the ComponentProperties/flags/types this component has

<div class="DoxyParams">

Parameters *types* & flags to set this component to  

</div>

<span id="class_macgyver_1_1_gameobjects_1_1_component_a8c731b26091d06f104caceec257a8127"
label="class_macgyver_1_1_gameobjects_1_1_component_a8c731b26091d06f104caceec257a8127"></span>
[Macgyver::Math::Vector3](#class_macgyver_1_1_math_1_1_vector3)
Macgyver::Gameobjects::Component::localTransform

Transform of the relative to its parent game object
<span id="class_macgyver_1_1_gameobjects_1_1_component_a667da47a162a7c56e2f62458448e9f8e"
label="class_macgyver_1_1_gameobjects_1_1_component_a667da47a162a7c56e2f62458448e9f8e"></span>
std::function$<$void([Component](#class_macgyver_1_1_gameobjects_1_1_component)$\ast$)
Macgyver::Gameobjects::Component::physicsUpdate)

physics update function of the taking this component as an arguement
(much like a python method with a self argument)
<span id="class_macgyver_1_1_gameobjects_1_1_component_ab3329d1c3da95d5c0578f8ad08fd1570"
label="class_macgyver_1_1_gameobjects_1_1_component_ab3329d1c3da95d5c0578f8ad08fd1570"></span>
std::function$<$void([Component](#class_macgyver_1_1_gameobjects_1_1_component)$\ast$,
unsigned int) Macgyver::Gameobjects::Component::update)

update function of the taking this component and a deltaTime argument
(function is called much like a python method with a self argument)

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/Component.h

MacGyver/Component.cpp

</div>
