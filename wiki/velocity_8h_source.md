---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Velocity.h Source File"
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

Velocity.h

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
2</span><span class="preprocessor">\#include "Physics2D.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div class="line">

<span id="l00006"></span><span class="lineno"> 6</span>

</div>

<div id="foldopen00010" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00010"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_velocity.html"
class="line">10</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_velocity.html"
class="code hl_struct">Velocity</a> {

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_velocity.html#a4d3b471d418ac6c54d44ce2cc38b331f"
class="code hl_function">update</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self
,<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_velocity.html#ad8764d2b6fb7ec17365e0205308e0d61"
class="code hl_function">physicsUpdate</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self);

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span>

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span> };

</div>

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>}

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

<div id="astruct_macgyver_1_1_components_1_1_velocity_html" class="ttc">

<div class="ttname">

[Macgyver::Components::Velocity](struct_macgyver_1_1_components_1_1_velocity.html)

</div>

<div class="ttdef">

**Definition** Velocity.h:10

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_velocity_html_a4d3b471d418ac6c54d44ce2cc38b331f"
class="ttc">

<div class="ttname">

[Macgyver::Components::Velocity::update](struct_macgyver_1_1_components_1_1_velocity.html#a4d3b471d418ac6c54d44ce2cc38b331f)

</div>

<div class="ttdeci">

static void update(Gameobjects::Component \*self, unsigned int
deltaTime)

</div>

<div class="ttdef">

**Definition** Velocity.cpp:4

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_velocity_html_ad8764d2b6fb7ec17365e0205308e0d61"
class="ttc">

<div class="ttname">

[Macgyver::Components::Velocity::physicsUpdate](struct_macgyver_1_1_components_1_1_velocity.html#ad8764d2b6fb7ec17365e0205308e0d61)

</div>

<div class="ttdeci">

static void physicsUpdate(Gameobjects::Component \*self)

</div>

<div class="ttdef">

**Definition** Velocity.cpp:9

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
