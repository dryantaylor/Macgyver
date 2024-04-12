---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::UI::UICamera Struct Reference"
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

- **Macgyver**
- **Components**
- **UI**
- <a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html"
  class="el">UICamera</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::UI::UICamera Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_u_i_camera_8h_source.html"
class="el"><code>UICamera.h</code></a>`>`

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
<tr id="r_a95293937b8a279d31cf0c03f19ea4162"
class="even memitem:a95293937b8a279d31cf0c03f19ea4162">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a95293937b8a279d31cf0c03f19ea4162" class="el">draw</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self)</td>
</tr>
<tr class="odd separator:a95293937b8a279d31cf0c03f19ea4162">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aff800f4a93d84a4d08261d9600509027"
class="even memitem:aff800f4a93d84a4d08261d9600509027">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aff800f4a93d84a4d08261d9600509027" class="el">update</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, unsigned int
deltaTime)</td>
</tr>
<tr class="odd separator:aff800f4a93d84a4d08261d9600509027">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac65d153314bdd11b330f11d1b902d810"
class="even memitem:ac65d153314bdd11b330f11d1b902d810">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac65d153314bdd11b330f11d1b902d810" class="el">AttachNew</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *comp)</td>
</tr>
<tr class="odd separator:ac65d153314bdd11b330f11d1b902d810">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Component to handle UI renderable Components draws them above the normal
<a href="struct_macgyver_1_1_components_1_1_renderable.html"
class="el">Renderable</a> Components

</div>

## Member Function Documentation

<span id="ac65d153314bdd11b330f11d1b902d810"></span>

## <span class="permalink">[◆ ](#ac65d153314bdd11b330f11d1b902d810)</span>AttachNew()

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
<td class="memname">void
Macgyver::Components::UI::UICamera::AttachNew</td>
<td>(</td>
<td class="paramtype"><a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *</td>
<td class="paramname"><span class="paramname"><em>comp</em></span></td>
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

Attaches a new
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html"
class="el">UICamera</a> to an existing Component. Note: a Component
should only have one thing attached to it

Parameters  
|      |                                                                                                             |
|------|-------------------------------------------------------------------------------------------------------------|
| comp | pointer to the component to attach the <a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_camera.html" 
        class="el">UICamera</a> to                                                                                   |

</div>

</div>

<span id="a95293937b8a279d31cf0c03f19ea4162"></span>

## <span class="permalink">[◆ ](#a95293937b8a279d31cf0c03f19ea4162)</span>draw()

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
<td class="memname">void Macgyver::Components::UI::UICamera::draw</td>
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

Draws components to the screen based off their absoloute position (0,0)
top left to (720,1280) bottom right

NOTE: this behaviour may change in future to be based off the UI
camera's position

</div>

</div>

<span id="aff800f4a93d84a4d08261d9600509027"></span>

## <span class="permalink">[◆ ](#aff800f4a93d84a4d08261d9600509027)</span>update()

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
<td class="memname">void Macgyver::Components::UI::UICamera::update</td>
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

UI <a href="struct_macgyver_1_1_components_1_1_camera.html"
class="el">Camera</a>'s update method, calls the draw function at the
end.

Parameters  
|           |                                                         |
|-----------|---------------------------------------------------------|
| self      | pointer to the Component which the UI camera is part of |
| deltaTime | time in milliseconds since last frame and this one      |

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_u_i_camera_8h_source.html" class="el">UICamera.h</a>
- MacGyver/**UICamera.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
