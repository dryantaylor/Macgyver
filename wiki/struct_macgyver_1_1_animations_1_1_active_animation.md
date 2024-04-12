<div id="struct_macgyver_1_1_animations_1_1_active_animation">

</div>

<span id="struct_macgyver_1_1_animations_1_1_active_animation"
label="struct_macgyver_1_1_animations_1_1_active_animation"></span>

\#include $<$ActiveAnimation.h$>$

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_animations_1_1_active_animation_ae0842eecd0834fa3fa698fab31990fcc"
label="struct_macgyver_1_1_animations_1_1_active_animation_ae0842eecd0834fa3fa698fab31990fcc"></span>
unsigned int **currFrame** = 0

<div class="DoxyCompactList">

*current frame of the animation*

</div>

<span id="struct_macgyver_1_1_animations_1_1_active_animation_a8bd50bf4a52aecbc3a8555281216fa25"
label="struct_macgyver_1_1_animations_1_1_active_animation_a8bd50bf4a52aecbc3a8555281216fa25"></span>
unsigned int **frameTick** = 0

<div class="DoxyCompactList">

*how many ms/ticks into the current frame of the animation*

</div>

<span id="struct_macgyver_1_1_animations_1_1_active_animation_a763ee7bba42a0dd413ee9b08b7197931"
label="struct_macgyver_1_1_animations_1_1_active_animation_a763ee7bba42a0dd413ee9b08b7197931"></span>
[AnimationData](#struct_macgyver_1_1_animations_1_1_animation_data)
$\ast$ **activeAnimation**

<div class="DoxyCompactList">

*pointer to the animation currently being animated*

</div>

<span id="struct_macgyver_1_1_animations_1_1_active_animation_a0d1b21f53e77311864908ad6a7667a79"
label="struct_macgyver_1_1_animations_1_1_active_animation_a0d1b21f53e77311864908ad6a7667a79"></span>
[AnimationData](#struct_macgyver_1_1_animations_1_1_animation_data)
$\ast$ **idleAnimation**

<div class="DoxyCompactList">

*fall back animation when a non-looping active animation finishes*

</div>

<span id="struct_macgyver_1_1_animations_1_1_active_animation_a828150153ed9bcfcf8e5ef9de4d4ee01"
label="struct_macgyver_1_1_animations_1_1_active_animation_a828150153ed9bcfcf8e5ef9de4d4ee01"></span>
[Components::RenderableData](#struct_macgyver_1_1_components_1_1_renderable_data)
$\ast$ **attachedRenderable**

<div class="DoxyCompactList">

*the renderable object to target the animation*

</div>

</div>

Holds an animation currently being ran each frame

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/ActiveAnimation.h

</div>
