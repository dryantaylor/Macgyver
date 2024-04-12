---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Collider.h Source File"
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

Collider.h

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
3</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div id="foldopen00005" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00005"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_collider.html"
class="line">5</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_collider.html"
class="code hl_struct">Collider</a> {

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_collider.html#a3df80261886a302e3f699ea316837e2a"
class="code hl_function">update</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_collider.html#aad7474e6ec63640ed22524e3b9ea6583"
class="code hl_function">physicsUpdate</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self);

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_collider.html#ae93c43b6f382eac6a78d60062d7d85c4"
class="code hl_function">AttachNew</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp,
<span class="keywordtype">bool</span> moveable);

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> 30</span> };

</div>

</div>

<div class="line">

<span id="l00031"></span><span class="lineno"> 31</span>}

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

<div id="astruct_macgyver_1_1_components_1_1_collider_html" class="ttc">

<div class="ttname">

[Macgyver::Components::Collider](struct_macgyver_1_1_components_1_1_collider.html)

</div>

<div class="ttdef">

**Definition** Collider.h:5

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_collider_html_a3df80261886a302e3f699ea316837e2a"
class="ttc">

<div class="ttname">

[Macgyver::Components::Collider::update](struct_macgyver_1_1_components_1_1_collider.html#a3df80261886a302e3f699ea316837e2a)

</div>

<div class="ttdeci">

static void update(Gameobjects::Component \*self, unsigned int
deltaTime)

</div>

<div class="ttdef">

**Definition** Collider.cpp:3

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_collider_html_aad7474e6ec63640ed22524e3b9ea6583"
class="ttc">

<div class="ttname">

[Macgyver::Components::Collider::physicsUpdate](struct_macgyver_1_1_components_1_1_collider.html#aad7474e6ec63640ed22524e3b9ea6583)

</div>

<div class="ttdeci">

static void physicsUpdate(Gameobjects::Component \*self)

</div>

<div class="ttdef">

**Definition** Collider.cpp:8

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_collider_html_ae93c43b6f382eac6a78d60062d7d85c4"
class="ttc">

<div class="ttname">

[Macgyver::Components::Collider::AttachNew](struct_macgyver_1_1_components_1_1_collider.html#ae93c43b6f382eac6a78d60062d7d85c4)

</div>

<div class="ttdeci">

static void AttachNew(Gameobjects::Component \*comp, bool moveable)

</div>

<div class="ttdef">

**Definition** Collider.cpp:47

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
