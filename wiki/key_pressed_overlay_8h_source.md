---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/KeyPressedOverlay.h Source File"
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

KeyPressedOverlay.h

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
2</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "Velocity.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "ComponentData.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include "Text.h"</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="keyword">namespace </span>DemoProject {

</div>

<div id="foldopen00008" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00008"></span><span class="lineno">
<a href="struct_demo_project_1_1_key_pressed_overlay.html"
class="line">8</a></span> <span class="keyword">struct
</span><a href="struct_demo_project_1_1_key_pressed_overlay.html"
class="code hl_struct">KeyPressedOverlay</a> {

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
update(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
attachNew(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\* comp,
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\* target);

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span> };

</div>

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span>

</div>

<div id="foldopen00013" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00013"></span><span class="lineno">
<a href="struct_demo_project_1_1_key_pressed_overlay_data.html"
class="line">13</a></span> <span class="keyword">struct
</span><a href="struct_demo_project_1_1_key_pressed_overlay_data.html"
class="code hl_struct">KeyPressedOverlayData</a> {

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html"
class="code hl_struct">Macgyver::Components::UI::TextData</a>\*
targetData;

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span> };

</div>

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>}

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

<div id="astruct_demo_project_1_1_key_pressed_overlay_data_html"
class="ttc">

<div class="ttname">

[DemoProject::KeyPressedOverlayData](struct_demo_project_1_1_key_pressed_overlay_data.html)

</div>

<div class="ttdef">

**Definition** KeyPressedOverlay.h:13

</div>

</div>

<div id="astruct_demo_project_1_1_key_pressed_overlay_html" class="ttc">

<div class="ttname">

[DemoProject::KeyPressedOverlay](struct_demo_project_1_1_key_pressed_overlay.html)

</div>

<div class="ttdef">

**Definition** KeyPressedOverlay.h:8

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::TextData](struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html)

</div>

<div class="ttdef">

**Definition** Text.h:27

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
