<div id="struct_macgyver_1_1_animations_1_1_animation_data">

</div>

<span id="struct_macgyver_1_1_animations_1_1_animation_data"
label="struct_macgyver_1_1_animations_1_1_animation_data"></span>

\#include $<$AnimationData.h$>$

<div class="DoxyCompactItemize">

[AnimationData](#struct_macgyver_1_1_animations_1_1_animation_data_a1bba3352bfc5efab0bd48ef1a47f5eac)
(SDL_Renderer $\ast$renderer, std::string path)

[$\sim$AnimationData](#struct_macgyver_1_1_animations_1_1_animation_data_a9fce43b3e7113a424934320c647b53a3)
()

</div>

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_animations_1_1_animation_data_a4a0bde5d5a63d192626b23bc418036b3"
label="struct_macgyver_1_1_animations_1_1_animation_data_a4a0bde5d5a63d192626b23bc418036b3"></span>
SDL_Texture $\ast$$\ast$ **sprites**

<div class="DoxyCompactList">

*the frames of the animation as an array*

</div>

<span id="struct_macgyver_1_1_animations_1_1_animation_data_a5f6fd587810b2db1bc055430359a1fb6"
label="struct_macgyver_1_1_animations_1_1_animation_data_a5f6fd587810b2db1bc055430359a1fb6"></span>
std::size_t **numFrames**

<div class="DoxyCompactList">

*number of frames in the animation*

</div>

<span id="struct_macgyver_1_1_animations_1_1_animation_data_a4b70fa000e2c59c4ca297e3d17ed326c"
label="struct_macgyver_1_1_animations_1_1_animation_data_a4b70fa000e2c59c4ca297e3d17ed326c"></span>
unsigned int $\ast$ **frameTimes**

<div class="DoxyCompactList">

*how many milliseconds to display each frame for as an array*

</div>

<span id="struct_macgyver_1_1_animations_1_1_animation_data_a44f4dbe2a9769421dcf33b08828c24b5"
label="struct_macgyver_1_1_animations_1_1_animation_data_a44f4dbe2a9769421dcf33b08828c24b5"></span>
bool **doesLoop**

<div class="DoxyCompactList">

*repeat the animation after it finishes?*

</div>

<span id="struct_macgyver_1_1_animations_1_1_animation_data_a6119069396d7bcd0c727e71a0de48e55"
label="struct_macgyver_1_1_animations_1_1_animation_data_a6119069396d7bcd0c727e71a0de48e55"></span>
SDL_Rect **size**

<div class="DoxyCompactList">

*x and y component = 0, w and h represent size of the textures*

</div>

</div>

Holds information about an animation loaded from disk

<span id="struct_macgyver_1_1_animations_1_1_animation_data_a1bba3352bfc5efab0bd48ef1a47f5eac"
label="struct_macgyver_1_1_animations_1_1_animation_data_a1bba3352bfc5efab0bd48ef1a47f5eac"></span>

Macgyver::Animations::AnimationData::AnimationData (

<div class="DoxyParamCaption">

renderer,

path

</div>

)

Create object from the animation file given at path
<span id="struct_macgyver_1_1_animations_1_1_animation_data_a9fce43b3e7113a424934320c647b53a3"
label="struct_macgyver_1_1_animations_1_1_animation_data_a9fce43b3e7113a424934320c647b53a3"></span>

Macgyver::Animations::AnimationData::$\sim$AnimationData (

<div class="DoxyParamCaption">

</div>

)

Delete all Sprites in the sprite array

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/AnimationData.h

MacGyver/AnimationData.cpp

</div>
