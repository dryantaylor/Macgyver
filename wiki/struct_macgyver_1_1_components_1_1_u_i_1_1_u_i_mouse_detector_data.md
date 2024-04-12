<div id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data">

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data"></span>

<div class="DoxyCompactItemize">

[UIMouseDetectorData](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_af0abf11f4055ab2cc41034a363484f98)
(SDL_Rect
[collider](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a9481c3eac3a136dd9ba539c33d4e6d7a),
size_t
[messageIndex](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a6c5d3215693cf39eb1a60d92fc983e0d),
long long
[hoverValue](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a1c5b9a178c29f0816de11c3791335af4))

</div>

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a9481c3eac3a136dd9ba539c33d4e6d7a"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a9481c3eac3a136dd9ba539c33d4e6d7a"></span>
SDL_Rect **collider**

<div class="DoxyCompactList">

*rect giving the bounds of the button*

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a6c5d3215693cf39eb1a60d92fc983e0d"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a6c5d3215693cf39eb1a60d92fc983e0d"></span>
size_t **messageIndex**

<div class="DoxyCompactList">

*which messaganger cell to use*

</div>

long long
[hoverValue](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a1c5b9a178c29f0816de11c3791335af4)

long long
[resetValue](#struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_ad3d77c6c0ea7eda3e6b2e18103b68d12)

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_af74265e1378b3407046e92f150f938ff"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_af74265e1378b3407046e92f150f938ff"></span>
SDL_Point **INTERNAL_mousePoint**

<div class="DoxyCompactList">

*used internally for bounds checking*

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_aea33e44b781e0d54297debb933c1fbeb"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_aea33e44b781e0d54297debb933c1fbeb"></span>
bool **pressedPrevFrame**

<div class="DoxyCompactList">

*used internally to handle button being released*

</div>

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_af0abf11f4055ab2cc41034a363484f98"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_af0abf11f4055ab2cc41034a363484f98"></span>

Macgyver::Components::UI::UIMouseDetectorData::UIMouseDetectorData (

<div class="DoxyParamCaption">

collider,

messageIndex,

hoverValue

</div>

)

Constructor for MouseDetectorData

<div class="DoxyParams">

Parameters *collider* & Bounds of the detection with x,y set to 0, as
the Components transform is used for this  
*messageIndex* & which cell of the to change  
*hoverValue* & which binary value to set when the message box is
hovered. This bit and the bit following will be used to give the state  

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a1c5b9a178c29f0816de11c3791335af4"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_a1c5b9a178c29f0816de11c3791335af4"></span>
long long Macgyver::Components::UI::UIMouseDetectorData::hoverValue

value to set when button is being hovered over should be a value
2$^\wedge$n
<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_ad3d77c6c0ea7eda3e6b2e18103b68d12"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_ad3d77c6c0ea7eda3e6b2e18103b68d12"></span>
long long Macgyver::Components::UI::UIMouseDetectorData::resetValue

equal to $\sim$(2$\ast$hover + hover), binary value used to remove
impact of the button from previous frames when & with the cells current
value

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/UIMouseDetector.h

MacGyver/UIMouseDetector.cpp

</div>
