---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/PlayerFSM.h Source File"
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

PlayerFSM.h

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
6</span><span class="keyword">namespace </span>DemoProject {

</div>

<div class="line">

<span id="l00007"></span><span class="lineno"> 7</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>
<span class="keyword">enum</span> PlayerFSMstates {

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span> LAUNCH,

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span> IDLE,

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span> WALK,

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span> RUN

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span> };

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>

</div>

<div id="foldopen00015" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00015"></span><span class="lineno">
<a href="struct_demo_project_1_1_player_f_s_m_data.html"
class="line">15</a></span> <span class="keyword">struct
</span><a href="struct_demo_project_1_1_player_f_s_m_data.html"
class="code hl_struct">PlayerFSMData</a> {

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<a href="struct_demo_project_1_1_player_f_s_m_data.html"
class="code hl_struct">PlayerFSMData</a>(<a href="struct_macgyver_1_1_components_1_1_physics2_d_data.html"
class="code hl_struct">Macgyver::Components::Physics2DData</a>\* phys);

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\*
PlayerRenderable;

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>
<a href="struct_macgyver_1_1_components_1_1_physics2_d_data.html"
class="code hl_struct">Macgyver::Components::Physics2DData</a>\*
physics;

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span> PlayerFSMstates
currState;

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> internal_animId;

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span> };

</div>

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>

</div>

<div id="foldopen00025" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00025"></span><span class="lineno">
<a href="struct_demo_project_1_1_player_f_s_m.html" class="line">25</a></span>
<span class="keyword">struct
</span><a href="struct_demo_project_1_1_player_f_s_m.html"
class="code hl_struct">PlayerFSM</a> {

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
update(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
attachNew(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\* comp);

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span> };

</div>

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>}

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

<div id="astruct_demo_project_1_1_player_f_s_m_data_html" class="ttc">

<div class="ttname">

[DemoProject::PlayerFSMData](struct_demo_project_1_1_player_f_s_m_data.html)

</div>

<div class="ttdef">

**Definition** PlayerFSM.h:15

</div>

</div>

<div id="astruct_demo_project_1_1_player_f_s_m_html" class="ttc">

<div class="ttname">

[DemoProject::PlayerFSM](struct_demo_project_1_1_player_f_s_m.html)

</div>

<div class="ttdef">

**Definition** PlayerFSM.h:25

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_physics2_d_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::Physics2DData](struct_macgyver_1_1_components_1_1_physics2_d_data.html)

</div>

<div class="ttdef">

**Definition** Physics2D.h:15

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>