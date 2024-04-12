---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/ActiveAnimation.h Source File"
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

ActiveAnimation.h

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
2</span><span class="preprocessor">\#include "AnimationData.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "Renderable.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="keyword">namespace </span>Macgyver::Animations {

</div>

<div id="foldopen00008" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00008"></span><span class="lineno">
<a href="struct_macgyver_1_1_animations_1_1_active_animation.html"
class="line">8</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_animations_1_1_active_animation.html"
class="code hl_struct">ActiveAnimation</a>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span> {

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#ae0842eecd0834fa3fa698fab31990fcc"
class="line">11</a></span> <span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#ae0842eecd0834fa3fa698fab31990fcc"
class="code hl_variable">currFrame</a> = 0;

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a8bd50bf4a52aecbc3a8555281216fa25"
class="line">13</a></span> <span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a8bd50bf4a52aecbc3a8555281216fa25"
class="code hl_variable">frameTick</a> = 0;

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a763ee7bba42a0dd413ee9b08b7197931"
class="line">16</a></span>
<a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="code hl_struct">AnimationData</a>\* <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a763ee7bba42a0dd413ee9b08b7197931"
class="code hl_variable">activeAnimation</a>;

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a0d1b21f53e77311864908ad6a7667a79"
class="line">18</a></span>
<a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="code hl_struct">AnimationData</a>\* <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a0d1b21f53e77311864908ad6a7667a79"
class="code hl_variable">idleAnimation</a>;

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a828150153ed9bcfcf8e5ef9de4d4ee01"
class="line">20</a></span>
<a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="code hl_struct">Components::RenderableData</a>\* <a
href="struct_macgyver_1_1_animations_1_1_active_animation.html#a828150153ed9bcfcf8e5ef9de4d4ee01"
class="code hl_variable">attachedRenderable</a>;

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span> };

</div>

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>}

</div>

<div id="astruct_macgyver_1_1_animations_1_1_active_animation_html"
class="ttc">

<div class="ttname">

[Macgyver::Animations::ActiveAnimation](struct_macgyver_1_1_animations_1_1_active_animation.html)

</div>

<div class="ttdef">

**Definition** ActiveAnimation.h:9

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_active_animation_html_a0d1b21f53e77311864908ad6a7667a79"
class="ttc">

<div class="ttname">

[Macgyver::Animations::ActiveAnimation::idleAnimation](struct_macgyver_1_1_animations_1_1_active_animation.html#a0d1b21f53e77311864908ad6a7667a79)

</div>

<div class="ttdeci">

AnimationData \* idleAnimation

</div>

<div class="ttdoc">

fall back animation when a non-looping active animation finishes

</div>

<div class="ttdef">

**Definition** ActiveAnimation.h:18

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_active_animation_html_a763ee7bba42a0dd413ee9b08b7197931"
class="ttc">

<div class="ttname">

[Macgyver::Animations::ActiveAnimation::activeAnimation](struct_macgyver_1_1_animations_1_1_active_animation.html#a763ee7bba42a0dd413ee9b08b7197931)

</div>

<div class="ttdeci">

AnimationData \* activeAnimation

</div>

<div class="ttdoc">

pointer to the animation currently being animated

</div>

<div class="ttdef">

**Definition** ActiveAnimation.h:16

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_active_animation_html_a828150153ed9bcfcf8e5ef9de4d4ee01"
class="ttc">

<div class="ttname">

[Macgyver::Animations::ActiveAnimation::attachedRenderable](struct_macgyver_1_1_animations_1_1_active_animation.html#a828150153ed9bcfcf8e5ef9de4d4ee01)

</div>

<div class="ttdeci">

Components::RenderableData \* attachedRenderable

</div>

<div class="ttdoc">

the renderable object to target the animation

</div>

<div class="ttdef">

**Definition** ActiveAnimation.h:20

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_active_animation_html_a8bd50bf4a52aecbc3a8555281216fa25"
class="ttc">

<div class="ttname">

[Macgyver::Animations::ActiveAnimation::frameTick](struct_macgyver_1_1_animations_1_1_active_animation.html#a8bd50bf4a52aecbc3a8555281216fa25)

</div>

<div class="ttdeci">

unsigned int frameTick

</div>

<div class="ttdoc">

how many ms/ticks into the current frame of the animation

</div>

<div class="ttdef">

**Definition** ActiveAnimation.h:13

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_active_animation_html_ae0842eecd0834fa3fa698fab31990fcc"
class="ttc">

<div class="ttname">

[Macgyver::Animations::ActiveAnimation::currFrame](struct_macgyver_1_1_animations_1_1_active_animation.html#ae0842eecd0834fa3fa698fab31990fcc)

</div>

<div class="ttdeci">

unsigned int currFrame

</div>

<div class="ttdoc">

current frame of the animation

</div>

<div class="ttdef">

**Definition** ActiveAnimation.h:11

</div>

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

<div id="astruct_macgyver_1_1_components_1_1_renderable_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::RenderableData](struct_macgyver_1_1_components_1_1_renderable_data.html)

</div>

<div class="ttdef">

**Definition** Renderable.h:14

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
