---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/UIRenderableData.h Source File"
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

<div id="MSearchSelectWindow"
onmouseover="return searchBox.OnSearchSelectShow()"
onmouseout="return searchBox.OnSearchSelectHide()"
onkeydown="return searchBox.OnSearchSelectKey(event)">

</div>

<div id="MSearchResultsWindow">

<div id="MSearchResults">

<div class="SRPage">

<div id="SRIndex">

<div id="SRResults">

</div>

<div id="Loading" class="SRStatus">

Loading...

</div>

<div id="Searching" class="SRStatus">

Searching...

</div>

<div id="NoMatches" class="SRStatus">

No Matches

</div>

</div>

</div>

</div>

</div>

<div id="nav-path" class="navpath">

- <a href="dir_e610925873bfe0bf19b07ca2b4f6d40b.html"
  class="el">MacGyver</a>

</div>

</div>

<div class="header">

<div class="headertitle">

<div class="title">

UIRenderableData.h

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
2</span><span class="preprocessor">\#include "SDL_image.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "SDL.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno"> 4</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno"> 7</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno">
8</span><span class="keyword">namespace </span>Macgyver::Components::UI
{

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>

</div>

<div id="foldopen00010" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00010"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html"
class="line">10</a></span> <span class="keyword">struct </span><a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html"
class="code hl_struct">UIRenderableData</a> {

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#adda11435b582563ef2d2192757add8b9"
class="code hl_function">UIRenderableData</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self, std::string
path, <span class="keywordtype">int</span> width,
<span class="keywordtype">int</span> height);

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#adda11435b582563ef2d2192757add8b9"
class="code hl_function">UIRenderableData</a>(SDL_Texture\* <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#a64148e4cf2ef7c50c46002a1b9497a79"
class="code hl_variable">texture</a>,
<span class="keywordtype">int</span> width,
<span class="keywordtype">int</span> height);

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html"
class="code hl_struct">~UIRenderableData</a>();

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>

</div>

<div class="line">

<span id="l00031"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#a64148e4cf2ef7c50c46002a1b9497a79"
class="line">31</a></span> SDL_Texture\* <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#a64148e4cf2ef7c50c46002a1b9497a79"
class="code hl_variable">texture</a>;

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#a4931a399a61b56c01c6673fdaee68c83"
class="line">34</a></span> SDL_Rect <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#a4931a399a61b56c01c6673fdaee68c83"
class="code hl_variable">rect</a>;

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span> };

</div>

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span>}

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

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIRenderableData](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html)

</div>

<div class="ttdef">

**Definition** UIRenderableData.h:10

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_html_a4931a399a61b56c01c6673fdaee68c83"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIRenderableData::rect](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#a4931a399a61b56c01c6673fdaee68c83)

</div>

<div class="ttdeci">

SDL_Rect rect

</div>

<div class="ttdef">

**Definition** UIRenderableData.h:34

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_html_a64148e4cf2ef7c50c46002a1b9497a79"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIRenderableData::texture](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#a64148e4cf2ef7c50c46002a1b9497a79)

</div>

<div class="ttdeci">

SDL_Texture \* texture

</div>

<div class="ttdoc">

Pointer to internal SDL texture.

</div>

<div class="ttdef">

**Definition** UIRenderableData.h:31

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data_html_adda11435b582563ef2d2192757add8b9"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIRenderableData::UIRenderableData](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html#adda11435b582563ef2d2192757add8b9)

</div>

<div class="ttdeci">

UIRenderableData(Gameobjects::Component \*self, std::string path, int
width, int height)

</div>

<div class="ttdef">

**Definition** UIRenderableData.cpp:3

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
