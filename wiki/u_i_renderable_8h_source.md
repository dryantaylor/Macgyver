---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/UIRenderable.h Source File"
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

UIRenderable.h

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

<span id="l00003"></span><span class="lineno"> 3</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "SDL_image.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "SDL.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno"> 6</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno">
8</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>

</div>

<div class="line">

<span id="l00010"></span><span class="lineno">
10</span><span class="preprocessor">\#include
"UIRenderableData.h"</span>

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>

</div>

<div class="line">

<span id="l00012"></span><span class="lineno">
12</span><span class="keyword">namespace </span>Macgyver::Components::UI
{

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>

</div>

<div id="foldopen00017" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00017"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html"
class="line">17</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html"
class="code hl_struct">UIRenderable</a> {

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html#a6c03210b80e09818645d2e7f359aabc7"
class="code hl_function">update</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> 32</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html#a264b93edb5a47d3adf36958ac21be68b"
class="code hl_function">AttachNew</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp, std::string
path, <span class="keywordtype">int</span> width,
<span class="keywordtype">int</span> height);

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span> };

</div>

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> 34</span>}

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

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIRenderable](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html)

</div>

<div class="ttdef">

**Definition** UIRenderable.h:17

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_html_a264b93edb5a47d3adf36958ac21be68b"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIRenderable::AttachNew](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html#a264b93edb5a47d3adf36958ac21be68b)

</div>

<div class="ttdeci">

static void AttachNew(Gameobjects::Component \*comp, std::string path,
int width, int height)

</div>

<div class="ttdef">

**Definition** UIRenderable.cpp:8

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_html_a6c03210b80e09818645d2e7f359aabc7"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIRenderable::update](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html#a6c03210b80e09818645d2e7f359aabc7)

</div>

<div class="ttdeci">

static void update(Gameobjects::Component \*self, unsigned int
deltaTime)

</div>

<div class="ttdef">

**Definition** UIRenderable.cpp:3

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
