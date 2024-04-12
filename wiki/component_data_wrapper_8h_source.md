---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/ComponentDataWrapper.h Source File"
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

ComponentDataWrapper.h

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
2</span><span class="preprocessor">\#include "ComponentData.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div id="foldopen00008" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00008"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html"
class="line">8</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html"
class="code hl_struct">ComponentDataWrapper</a> {

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span> <a
href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a47ae3cfe3aeb685ff1cf1ba41621a580"
class="code hl_function">ComponentDataWrapper</a>(std::size_t <a
href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a7c194cfc372ea14e845e1df08f31312d"
class="code hl_variable">type</a>,
<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="code hl_struct">ComponentData</a>\* <a
href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a3da08c4e9c2b35a3b8e07938ea35a024"
class="code hl_variable">data</a>);

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a7c194cfc372ea14e845e1df08f31312d"
class="line">20</a></span> std::size_t <a
href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a7c194cfc372ea14e845e1df08f31312d"
class="code hl_variable">type</a>;

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a3da08c4e9c2b35a3b8e07938ea35a024"
class="line">22</a></span>
<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="code hl_struct">ComponentData</a>\* <a
href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a3da08c4e9c2b35a3b8e07938ea35a024"
class="code hl_variable">data</a>;

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span> };

</div>

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>}

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

<div id="astruct_macgyver_1_1_components_1_1_component_data_wrapper_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::ComponentDataWrapper](struct_macgyver_1_1_components_1_1_component_data_wrapper.html)

</div>

<div class="ttdef">

**Definition** ComponentDataWrapper.h:8

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_component_data_wrapper_html_a3da08c4e9c2b35a3b8e07938ea35a024"
class="ttc">

<div class="ttname">

[Macgyver::Components::ComponentDataWrapper::data](struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a3da08c4e9c2b35a3b8e07938ea35a024)

</div>

<div class="ttdeci">

ComponentData \* data

</div>

<div class="ttdoc">

pointer to the data struct casted to a ComponentData\*

</div>

<div class="ttdef">

**Definition** ComponentDataWrapper.h:22

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_component_data_wrapper_html_a47ae3cfe3aeb685ff1cf1ba41621a580"
class="ttc">

<div class="ttname">

[Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper](struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a47ae3cfe3aeb685ff1cf1ba41621a580)

</div>

<div class="ttdeci">

ComponentDataWrapper(std::size_t type, ComponentData \*data)

</div>

<div class="ttdef">

**Definition** ComponentDataWrapper.cpp:3

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_component_data_wrapper_html_a7c194cfc372ea14e845e1df08f31312d"
class="ttc">

<div class="ttname">

[Macgyver::Components::ComponentDataWrapper::type](struct_macgyver_1_1_components_1_1_component_data_wrapper.html#a7c194cfc372ea14e845e1df08f31312d)

</div>

<div class="ttdeci">

std::size_t type

</div>

<div class="ttdoc">

type of the data

</div>

<div class="ttdef">

**Definition** ComponentDataWrapper.h:20

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
