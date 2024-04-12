---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Physics2D.h Source File"
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

Physics2D.h

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
2</span><span class="preprocessor">\#include "SDL.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "Force2D.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>
<span class="keyword">static</span> <span class="keyword">struct
</span>PhysicsConstants {

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>
<span class="keyword">static</span> <span class="keyword">const</span>
<span class="keywordtype">float</span> physicsDeltaTime;

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span> };

</div>

<div id="foldopen00015" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00015"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_physics2_d_data.html"
class="line">15</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_physics2_d_data.html"
class="code hl_struct">Physics2DData</a> {

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<a href="struct_macgyver_1_1_components_1_1_physics2_d_data.html"
class="code hl_struct">Physics2DData</a>();

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_physics2_d_data.html#ae6e4918f30db963822a3c5ab42ea0098"
class="line">18</a></span> SDL_Rect\* <a
href="struct_macgyver_1_1_components_1_1_physics2_d_data.html#ae6e4918f30db963822a3c5ab42ea0098"
class="code hl_variable">collider</a>;

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_physics2_d_data.html#a49b740b9e64f003a32e0e5049cb2dc3c"
class="line">20</a></span>
<a href="class_macgyver_1_1_math_1_1_force2_d.html"
class="code hl_class">Math::Force2D</a> <a
href="struct_macgyver_1_1_components_1_1_physics2_d_data.html#a49b740b9e64f003a32e0e5049cb2dc3c"
class="code hl_variable">velocity</a>;

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_physics2_d_data.html#a06443ea989e7206bce1248bb2ccfd909"
class="line">22</a></span> <span class="keywordtype">float</span> <a
href="struct_macgyver_1_1_components_1_1_physics2_d_data.html#a06443ea989e7206bce1248bb2ccfd909"
class="code hl_variable">mass</a>;

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>
<span class="keywordtype">bool</span> isMoveable;

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span> };

</div>

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>}

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html" class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D](class_macgyver_1_1_math_1_1_force2_d.html)

</div>

<div class="ttdef">

**Definition** Force2D.h:10

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

<div id="astruct_macgyver_1_1_components_1_1_physics2_d_data_html_a06443ea989e7206bce1248bb2ccfd909"
class="ttc">

<div class="ttname">

[Macgyver::Components::Physics2DData::mass](struct_macgyver_1_1_components_1_1_physics2_d_data.html#a06443ea989e7206bce1248bb2ccfd909)

</div>

<div class="ttdeci">

float mass

</div>

<div class="ttdoc">

mass of the object

</div>

<div class="ttdef">

**Definition** Physics2D.h:22

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_physics2_d_data_html_a49b740b9e64f003a32e0e5049cb2dc3c"
class="ttc">

<div class="ttname">

[Macgyver::Components::Physics2DData::velocity](struct_macgyver_1_1_components_1_1_physics2_d_data.html#a49b740b9e64f003a32e0e5049cb2dc3c)

</div>

<div class="ttdeci">

Math::Force2D velocity

</div>

<div class="ttdoc">

velocity of the Object

</div>

<div class="ttdef">

**Definition** Physics2D.h:20

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_physics2_d_data_html_ae6e4918f30db963822a3c5ab42ea0098"
class="ttc">

<div class="ttname">

[Macgyver::Components::Physics2DData::collider](struct_macgyver_1_1_components_1_1_physics2_d_data.html#ae6e4918f30db963822a3c5ab42ea0098)

</div>

<div class="ttdeci">

SDL_Rect \* collider

</div>

<div class="ttdoc">

pointer to a Rect to represent a collider

</div>

<div class="ttdef">

**Definition** Physics2D.h:18

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
