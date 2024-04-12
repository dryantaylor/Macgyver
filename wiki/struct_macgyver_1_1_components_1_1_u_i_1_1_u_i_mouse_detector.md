---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::UI::UIMouseDetector Struct
  Reference"
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
- **UI**
- <a
  href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html"
  class="el">UIMouseDetector</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::UI::UIMouseDetector Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_u_i_mouse_detector_8h_source.html"
class="el"><code>UIMouseDetector.h</code></a>`>`

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
<tr id="r_a61c2197b75c5b2f30a8f4f5151ebc762"
class="even memitem:a61c2197b75c5b2f30a8f4f5151ebc762">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a61c2197b75c5b2f30a8f4f5151ebc762" class="el">update</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, unsigned int
deltaTime)</td>
</tr>
<tr class="odd separator:a61c2197b75c5b2f30a8f4f5151ebc762">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa3e62e2b5cd509843f3d3c6ee84c658a"
class="even memitem:aa3e62e2b5cd509843f3d3c6ee84c658a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa3e62e2b5cd509843f3d3c6ee84c658a" class="el">attachNew</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *comp, SDL_Rect location, size_t
messageIndex, long long hoverValue=1)</td>
</tr>
<tr class="odd separator:aa3e62e2b5cd509843f3d3c6ee84c658a">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Component to handle the mouse detection of a button. Handles both
location and mouse clicking Sets 2 bits in a given
<a href="class_macgyver_1_1_messenger.html" class="el">Messenger</a>
cell.

</div>

## Member Function Documentation

<span id="aa3e62e2b5cd509843f3d3c6ee84c658a"></span>

## <span class="permalink">[◆ ](#aa3e62e2b5cd509843f3d3c6ee84c658a)</span>attachNew()

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
Macgyver::Components::UI::UIMouseDetector::attachNew</td>
<td>(</td>
<td class="paramtype"><a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *</td>
<td class="paramname"><span class="paramname"><em>comp</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">SDL_Rect</td>
<td class="paramname"><span class="paramname"><em>location</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">size_t</td>
<td class="paramname"><span class="paramname"><em>messageIndex</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">long long</td>
<td class="paramname"><span class="paramname"><em>hoverValue</em><span
class="paramdefsep"> = </span><span
class="paramdefval">1</span></span> )</td>
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

Attaches a new MouseDetector to an existing Component. Note: a Component
should only have one thing attached to it

Parameters  
|      |                                                         |
|------|---------------------------------------------------------|
| comp | pointer to the component to attach the MouseDetector to |

</div>

</div>

<span id="a61c2197b75c5b2f30a8f4f5151ebc762"></span>

## <span class="permalink">[◆ ](#a61c2197b75c5b2f30a8f4f5151ebc762)</span>update()

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
Macgyver::Components::UI::UIMouseDetector::update</td>
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

<a href="struct_macgyver_1_1_components_1_1_camera.html"
class="el">Camera</a>'s update method, calls the draw function at the
end.

Parameters  
|           |                                                      |
|-----------|------------------------------------------------------|
| self      | pointer to the Component which the camera is part of |
| deltaTime | time in milliseconds since last frame and this one   |

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_u_i_mouse_detector_8h_source.html"
  class="el">UIMouseDetector.h</a>
- MacGyver/**UIMouseDetector.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
