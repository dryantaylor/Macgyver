---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::Velocity Struct Reference"
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

- **Macgyver**
- **Components**
- <a href="struct_macgyver_1_1_components_1_1_velocity.html"
  class="el">Velocity</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](struct_macgyver_1_1_components_1_1_velocity-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::Velocity Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_velocity_8h_source.html"
class="el"><code>Velocity.h</code></a>`>`

<table class="memberdecls">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd heading">
<td colspan="2"><h2 id="static-public-member-functions"
class="groupheader"><span id="pub-static-methods"></span> Static Public
Member Functions</h2></td>
</tr>
<tr id="r_a4d3b471d418ac6c54d44ce2cc38b331f"
class="even memitem:a4d3b471d418ac6c54d44ce2cc38b331f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4d3b471d418ac6c54d44ce2cc38b331f" class="el">update</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, unsigned int
deltaTime)</td>
</tr>
<tr class="odd separator:a4d3b471d418ac6c54d44ce2cc38b331f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad8764d2b6fb7ec17365e0205308e0d61"
class="even memitem:ad8764d2b6fb7ec17365e0205308e0d61">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad8764d2b6fb7ec17365e0205308e0d61" class="el">physicsUpdate</a>
(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self)</td>
</tr>
<tr class="odd separator:ad8764d2b6fb7ec17365e0205308e0d61">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Struct to handle velocity of an Object

</div>

## Member Function Documentation

<span id="ad8764d2b6fb7ec17365e0205308e0d61"></span>

## <span class="permalink">[◆ ](#ad8764d2b6fb7ec17365e0205308e0d61)</span>physicsUpdate()

<div class="memitem">

<div class="memproto">

<table class="mlabels">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td class="mlabels-left"><table class="memname">
<tbody>
<tr class="odd">
<td class="memname">void Components::Velocity::physicsUpdate</td>
<td>(</td>
<td class="paramtype"><a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *</td>
<td class="paramname"><span class="paramname"><em>self</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

<a href="struct_macgyver_1_1_components_1_1_velocity.html"
class="el">Velocity</a>'s physics update, updates the parent
GameObject's transform by velocity \* physicsDeltaTime units each call.

Parameters  
|      |                                                                                               |
|------|-----------------------------------------------------------------------------------------------|
| self | pointer to the Component which the <a href="struct_macgyver_1_1_components_1_1_velocity.html" 
        class="el">Velocity</a> is part of                                                             |

</div>

</div>

<span id="a4d3b471d418ac6c54d44ce2cc38b331f"></span>

## <span class="permalink">[◆ ](#a4d3b471d418ac6c54d44ce2cc38b331f)</span>update()

<div class="memitem">

<div class="memproto">

<table class="mlabels">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td class="mlabels-left"><table class="memname">
<tbody>
<tr class="odd">
<td class="memname">void Components::Velocity::update</td>
<td>(</td>
<td class="paramtype"><a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *</td>
<td class="paramname"><span class="paramname"><em>self</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">unsigned int</td>
<td class="paramname"><span
class="paramname"><em>deltaTime</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

<a href="struct_macgyver_1_1_components_1_1_velocity.html"
class="el">Velocity</a>'s update method, does nothing.

Parameters  
|           |                                                                                               |
|-----------|-----------------------------------------------------------------------------------------------|
| self      | pointer to the Component which the <a href="struct_macgyver_1_1_components_1_1_velocity.html" 
             class="el">Velocity</a> is part of                                                             |
| deltaTime | time in milliseconds since last frame and this one                                            |

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_velocity_8h_source.html" class="el">Velocity.h</a>
- MacGyver/**Velocity.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
