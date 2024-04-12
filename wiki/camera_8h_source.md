---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Camera.h Source File"
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

Camera.h

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
2</span><span class="comment">//#include "Component.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include \<vector\></span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno"> 4</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include "ComponentManager.h"</span>

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
9</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div id="foldopen00013" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00013"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_camera.html"
class="line">13</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_camera.html"
class="code hl_struct">Camera</a> {

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_camera.html#aa623f2ebc0c1ade1297356fef10fa1c2"
class="code hl_function">Draw</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self);

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_camera.html#abbb366251f67df48f8e5663b80dd0586"
class="code hl_function">update</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>

</div>

<div class="line">

<span id="l00040"></span><span class="lineno"> 40</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Math::Vector3</a> <a
href="struct_macgyver_1_1_components_1_1_camera.html#a92caf7b2cbd7b0cf8087d5e58d03d3b8"
class="code hl_function">convertToCameraSpace</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp);

</div>

<div class="line">

<span id="l00041"></span><span class="lineno"> 41</span>

</div>

<div class="line">

<span id="l00048"></span><span class="lineno"> 48</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_camera.html#a5b0d21a4ea85ae6b2562256c2b7bbf34"
class="code hl_function">AttachNew</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp);

</div>

<div class="line">

<span id="l00049"></span><span class="lineno"> 49</span> };

</div>

</div>

<div class="line">

<span id="l00050"></span><span class="lineno"> 50</span>

</div>

<div class="line">

<span id="l00051"></span><span class="lineno"> 51</span>

</div>

<div class="line">

<span id="l00052"></span><span class="lineno"> 52</span>}

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

<div id="aclass_macgyver_1_1_math_1_1_vector3_html" class="ttc">

<div class="ttname">

[Macgyver::Math::Vector3](class_macgyver_1_1_math_1_1_vector3.html)

</div>

<div class="ttdef">

**Definition** Vector3.h:12

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_camera_html" class="ttc">

<div class="ttname">

[Macgyver::Components::Camera](struct_macgyver_1_1_components_1_1_camera.html)

</div>

<div class="ttdef">

**Definition** Camera.h:13

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_camera_html_a5b0d21a4ea85ae6b2562256c2b7bbf34"
class="ttc">

<div class="ttname">

[Macgyver::Components::Camera::AttachNew](struct_macgyver_1_1_components_1_1_camera.html#a5b0d21a4ea85ae6b2562256c2b7bbf34)

</div>

<div class="ttdeci">

static void AttachNew(Gameobjects::Component \*comp)

</div>

<div class="ttdef">

**Definition** Camera.cpp:56

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_camera_html_a92caf7b2cbd7b0cf8087d5e58d03d3b8"
class="ttc">

<div class="ttname">

[Macgyver::Components::Camera::convertToCameraSpace](struct_macgyver_1_1_components_1_1_camera.html#a92caf7b2cbd7b0cf8087d5e58d03d3b8)

</div>

<div class="ttdeci">

static Math::Vector3 convertToCameraSpace(Gameobjects::Component \*self,
Gameobjects::Component \*comp)

</div>

<div class="ttdef">

**Definition** Camera.cpp:7

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_camera_html_aa623f2ebc0c1ade1297356fef10fa1c2"
class="ttc">

<div class="ttname">

[Macgyver::Components::Camera::Draw](struct_macgyver_1_1_components_1_1_camera.html#aa623f2ebc0c1ade1297356fef10fa1c2)

</div>

<div class="ttdeci">

static void Draw(Gameobjects::Component \*self)

</div>

<div class="ttdef">

**Definition** Camera.cpp:24

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_camera_html_abbb366251f67df48f8e5663b80dd0586"
class="ttc">

<div class="ttname">

[Macgyver::Components::Camera::update](struct_macgyver_1_1_components_1_1_camera.html#abbb366251f67df48f8e5663b80dd0586)

</div>

<div class="ttdeci">

static void update(Gameobjects::Component \*self, unsigned int
deltaTime)

</div>

<div class="ttdef">

**Definition** Camera.cpp:51

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
