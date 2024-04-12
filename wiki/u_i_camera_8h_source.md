---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/UICamera.h Source File"
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

UICamera.h

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
2</span><span class="preprocessor">\#include \<vector\></span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno"> 3</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include "ComponentData.h"</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="preprocessor">\#include "Vector3.h"</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno">
9</span><span class="keyword">namespace </span>Macgyver::Components::UI
{

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>

</div>

<div id="foldopen00015" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00015"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html"
class="line">15</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html"
class="code hl_struct">UICamera</a> {

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html#a95293937b8a279d31cf0c03f19ea4162"
class="code hl_function">draw</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self);

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> 32</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html#aff800f4a93d84a4d08261d9600509027"
class="code hl_function">update</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span>

</div>

<div class="line">

<span id="l00040"></span><span class="lineno"> 40</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html#ac65d153314bdd11b330f11d1b902d810"
class="code hl_function">AttachNew</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp);

</div>

<div class="line">

<span id="l00041"></span><span class="lineno"> 41</span>

</div>

<div class="line">

<span id="l00042"></span><span class="lineno"> 42</span> };

</div>

</div>

<div class="line">

<span id="l00043"></span><span class="lineno"> 43</span>}

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component](class_macgyver_1_1_gameobjects_1_1_component.html)

</div>

<div class="ttdef">

**Definition** Component.h:15

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UICamera](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html)

</div>

<div class="ttdef">

**Definition** UICamera.h:15

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_html_a95293937b8a279d31cf0c03f19ea4162"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UICamera::draw](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html#a95293937b8a279d31cf0c03f19ea4162)

</div>

<div class="ttdeci">

static void draw(Gameobjects::Component \*self)

</div>

<div class="ttdef">

**Definition** UICamera.cpp:5

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_html_ac65d153314bdd11b330f11d1b902d810"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UICamera::AttachNew](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html#ac65d153314bdd11b330f11d1b902d810)

</div>

<div class="ttdeci">

static void AttachNew(Gameobjects::Component \*comp)

</div>

<div class="ttdef">

**Definition** UICamera.cpp:34

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera_html_aff800f4a93d84a4d08261d9600509027"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UICamera::update](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html#aff800f4a93d84a4d08261d9600509027)

</div>

<div class="ttdeci">

static void update(Gameobjects::Component \*self, unsigned int
deltaTime)

</div>

<div class="ttdef">

**Definition** UICamera.cpp:29

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
