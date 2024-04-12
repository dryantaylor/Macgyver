---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/ComponentData.h Source File"
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

ComponentData.h

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
2</span><span class="preprocessor">\#include "GameObject.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno"> 3</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "Scene.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno"> 5</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno">
9</span><span class="preprocessor">\#define typeHash(type)
typeid(type).hash_code()</span>

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>

</div>

<div class="line">

<span id="l00015"></span><span class="lineno">
15</span><span class="preprocessor">\#define componentGetData(comp,
type) \\</span>

</div>

<div class="line">

<span id="l00016"></span><span class="lineno">
16</span><span class="preprocessor">(type\*)(comp-\>getData(typeHash(type)))</span>

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>

</div>

<div class="line">

<span id="l00023"></span><span class="lineno">
23</span><span class="preprocessor">\#define componentCreateData(type,
...) \\</span>

</div>

<div class="line">

<span id="l00024"></span><span class="lineno">
24</span><span class="preprocessor">(Macgyver::Components::ComponentData\*)
\\</span>

</div>

<div class="line">

<span id="l00025"></span><span class="lineno">
25</span><span class="preprocessor">new type(\_\_VA_ARGS\_\_), \\</span>

</div>

<div class="line">

<span id="l00026"></span><span class="lineno">
26</span><span class="preprocessor">typeid(type).hash_code()</span>

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span>

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>

</div>

<div class="line">

<span id="l00029"></span><span class="lineno">
29</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div id="foldopen00033" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00033"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="line">33</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="code hl_struct">ComponentData</a> {

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> 34</span>

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span> };

</div>

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span>}

</div>

<div id="astruct_macgyver_1_1_components_1_1_component_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::ComponentData](struct_macgyver_1_1_components_1_1_component_data.html)

</div>

<div class="ttdef">

**Definition** ComponentData.h:33

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
