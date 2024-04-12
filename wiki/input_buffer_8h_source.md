---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/InputBuffer.h Source File"
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

InputBuffer.h

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
2</span><span class="preprocessor">\#include "PlayerController.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "Input.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "AnimationHandler.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "Force2D.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno"> 7</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno">
8</span><span class="preprocessor">\#include "Messenger.h"</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>

</div>

<div class="line">

<span id="l00010"></span><span class="lineno">
10</span><span class="preprocessor">\#include "GameInputs.h"</span>

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>

</div>

<div class="line">

<span id="l00012"></span><span class="lineno">
12</span><span class="keyword">namespace </span>DemoProject {

</div>

<div id="foldopen00013" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00013"></span><span class="lineno">
<a href="struct_demo_project_1_1_input_buffer_data.html"
class="line">13</a></span> <span class="keyword">struct
</span><a href="struct_demo_project_1_1_input_buffer_data.html"
class="code hl_struct">InputBufferData</a> {

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<a href="struct_demo_project_1_1_input_buffer_data.html"
class="code hl_struct">InputBufferData</a>();

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span>
std::deque\<uint16_t\> buffer;

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> ticks;

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span> uint16_t
currHeld;

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span> };

</div>

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>

</div>

<div id="foldopen00020" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00020"></span><span class="lineno">
<a href="struct_demo_project_1_1_input_buffer.html" class="line">20</a></span>
<span class="keyword">struct
</span><a href="struct_demo_project_1_1_input_buffer.html"
class="code hl_struct">InputBuffer</a> {

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
update(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
attachNew(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Macgyver::Gameobjects::Component</a>\* comp);

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span> };

</div>

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>}

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

<div id="astruct_demo_project_1_1_input_buffer_data_html" class="ttc">

<div class="ttname">

[DemoProject::InputBufferData](struct_demo_project_1_1_input_buffer_data.html)

</div>

<div class="ttdef">

**Definition** InputBuffer.h:13

</div>

</div>

<div id="astruct_demo_project_1_1_input_buffer_html" class="ttc">

<div class="ttname">

[DemoProject::InputBuffer](struct_demo_project_1_1_input_buffer.html)

</div>

<div class="ttdef">

**Definition** InputBuffer.h:20

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
