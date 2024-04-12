---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/AnimationData.h Source File"
viewport: width=device-width, initial-scale=1
---

<div id="top">

<div id="titlearea">

<table data-cellspacing="0" data-cellpadding="0">
<colgroup>
<col style="width: 100%" />
</colgroup>
<tbody>
<tr id="projectrow" class="odd">
<td id="projectalign"><div id="projectname">
Macgyver
</div>
<div id="projectbrief">
2D game engine written in C++
</div></td>
</tr>
</tbody>
</table>

</div>

<div id="main-nav">

</div>

<div id="nav-path" class="navpath">

- <a href="dir_e610925873bfe0bf19b07ca2b4f6d40b.html"
  class="el">MacGyver</a>

</div>

</div>

<div class="header">

<div class="headertitle">

<div class="title">

AnimationData.h

</div>

</div>

</div>

<div class="contents">

<div class="fragment">

<div class="line">

<span id="l00001"></span><span class="lineno">
1</span><span class="preprocessor">\#pragma once</span>

</div>

<div class="line">

<span id="l00002"></span><span class="lineno">
2</span><span class="preprocessor">\#include \<string\></span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include \<SDL.h\></span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno"> 4</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="keyword">namespace </span>Macgyver::Animations {

</div>

<div id="foldopen00009" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00009"></span><span class="lineno">
<a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="line">9</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="code hl_struct">AnimationData</a> {

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a1bba3352bfc5efab0bd48ef1a47f5eac"
class="code hl_function">AnimationData</a>(SDL_Renderer\* renderer,
std::string path);

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a9fce43b3e7113a424934320c647b53a3"
class="code hl_function">~AnimationData</a>();

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a4a0bde5d5a63d192626b23bc418036b3"
class="line">21</a></span> SDL_Texture\*\* <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a4a0bde5d5a63d192626b23bc418036b3"
class="code hl_variable">sprites</a>;

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a5f6fd587810b2db1bc055430359a1fb6"
class="line">24</a></span> std::size_t <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a5f6fd587810b2db1bc055430359a1fb6"
class="code hl_variable">numFrames</a>;

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a4b70fa000e2c59c4ca297e3d17ed326c"
class="line">27</a></span> <span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>\* <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a4b70fa000e2c59c4ca297e3d17ed326c"
class="code hl_variable">frameTimes</a>;

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a44f4dbe2a9769421dcf33b08828c24b5"
class="line">30</a></span> <span class="keywordtype">bool</span> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a44f4dbe2a9769421dcf33b08828c24b5"
class="code hl_variable">doesLoop</a>;

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a6119069396d7bcd0c727e71a0de48e55"
class="line">32</a></span> SDL_Rect <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html#a6119069396d7bcd0c727e71a0de48e55"
class="code hl_variable">size</a>;

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span>

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> 34</span> };

</div>

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span>

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span>}

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData](struct_macgyver_1_1_animations_1_1_animation_data.html)

</div>

<div class="ttdef">

**Definition** AnimationData.h:9

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html_a1bba3352bfc5efab0bd48ef1a47f5eac"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData::AnimationData](struct_macgyver_1_1_animations_1_1_animation_data.html#a1bba3352bfc5efab0bd48ef1a47f5eac)

</div>

<div class="ttdeci">

AnimationData(SDL_Renderer \*renderer, std::string path)

</div>

<div class="ttdef">

**Definition** AnimationData.cpp:10

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html_a44f4dbe2a9769421dcf33b08828c24b5"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData::doesLoop](struct_macgyver_1_1_animations_1_1_animation_data.html#a44f4dbe2a9769421dcf33b08828c24b5)

</div>

<div class="ttdeci">

bool doesLoop

</div>

<div class="ttdoc">

repeat the animation after it finishes?

</div>

<div class="ttdef">

**Definition** AnimationData.h:30

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html_a4a0bde5d5a63d192626b23bc418036b3"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData::sprites](struct_macgyver_1_1_animations_1_1_animation_data.html#a4a0bde5d5a63d192626b23bc418036b3)

</div>

<div class="ttdeci">

SDL_Texture \*\* sprites

</div>

<div class="ttdoc">

the frames of the animation as an array

</div>

<div class="ttdef">

**Definition** AnimationData.h:21

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html_a4b70fa000e2c59c4ca297e3d17ed326c"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData::frameTimes](struct_macgyver_1_1_animations_1_1_animation_data.html#a4b70fa000e2c59c4ca297e3d17ed326c)

</div>

<div class="ttdeci">

unsigned int \* frameTimes

</div>

<div class="ttdoc">

how many milliseconds to display each frame for as an array

</div>

<div class="ttdef">

**Definition** AnimationData.h:27

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html_a5f6fd587810b2db1bc055430359a1fb6"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData::numFrames](struct_macgyver_1_1_animations_1_1_animation_data.html#a5f6fd587810b2db1bc055430359a1fb6)

</div>

<div class="ttdeci">

std::size_t numFrames

</div>

<div class="ttdoc">

number of frames in the animation

</div>

<div class="ttdef">

**Definition** AnimationData.h:24

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html_a6119069396d7bcd0c727e71a0de48e55"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData::size](struct_macgyver_1_1_animations_1_1_animation_data.html#a6119069396d7bcd0c727e71a0de48e55)

</div>

<div class="ttdeci">

SDL_Rect size

</div>

<div class="ttdoc">

x and y component = 0, w and h represent size of the textures

</div>

<div class="ttdef">

**Definition** AnimationData.h:32

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html_a9fce43b3e7113a424934320c647b53a3"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData::~AnimationData](struct_macgyver_1_1_animations_1_1_animation_data.html#a9fce43b3e7113a424934320c647b53a3)

</div>

<div class="ttdeci">

~AnimationData()

</div>

<div class="ttdef">

**Definition** AnimationData.cpp:98

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
