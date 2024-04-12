<div id="struct_macgyver_1_1_components_1_1_component_data_wrapper">

</div>

<span id="struct_macgyver_1_1_components_1_1_component_data_wrapper"
label="struct_macgyver_1_1_components_1_1_component_data_wrapper"></span>

\#include $<$ComponentDataWrapper.h$>$

<div class="DoxyCompactItemize">

[ComponentDataWrapper](#struct_macgyver_1_1_components_1_1_component_data_wrapper_a47ae3cfe3aeb685ff1cf1ba41621a580)
(std::size_t
[type](#struct_macgyver_1_1_components_1_1_component_data_wrapper_a7c194cfc372ea14e845e1df08f31312d),
[ComponentData](#struct_macgyver_1_1_components_1_1_component_data)
$\ast$[data](#struct_macgyver_1_1_components_1_1_component_data_wrapper_a3da08c4e9c2b35a3b8e07938ea35a024))

</div>

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_components_1_1_component_data_wrapper_a7c194cfc372ea14e845e1df08f31312d"
label="struct_macgyver_1_1_components_1_1_component_data_wrapper_a7c194cfc372ea14e845e1df08f31312d"></span>
std::size_t **type**

<div class="DoxyCompactList">

*type of the data*

</div>

<span id="struct_macgyver_1_1_components_1_1_component_data_wrapper_a3da08c4e9c2b35a3b8e07938ea35a024"
label="struct_macgyver_1_1_components_1_1_component_data_wrapper_a3da08c4e9c2b35a3b8e07938ea35a024"></span>
[ComponentData](#struct_macgyver_1_1_components_1_1_component_data)
$\ast$ **data**

<div class="DoxyCompactList">

*pointer to the data struct casted to a ComponentData$\ast$*

</div>

</div>

Wrapper around a Component Data struct to hold its type and a pointer to
the Data struct

<span id="struct_macgyver_1_1_components_1_1_component_data_wrapper_a47ae3cfe3aeb685ff1cf1ba41621a580"
label="struct_macgyver_1_1_components_1_1_component_data_wrapper_a47ae3cfe3aeb685ff1cf1ba41621a580"></span>

Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper (

<div class="DoxyParamCaption">

type,

data

</div>

)

Constructor for the struct

<div class="DoxyParams">

Parameters *data* & type of the object calculated using
typeinfo().hash_code()  
*data* & pointer to the data struct casted to the dummy
ComponentData$\ast$ type  

</div>

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/ComponentDataWrapper.h

MacGyver/ComponentDataWrapper.cpp

</div>
