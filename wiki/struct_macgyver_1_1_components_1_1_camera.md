---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::Camera Struct Reference"
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
- <a href="struct_macgyver_1_1_components_1_1_camera.html"
  class="el">Camera</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](struct_macgyver_1_1_components_1_1_camera-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::Camera Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_camera_8h_source.html" class="el"><code>Camera.h</code></a>`>`

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
<tr id="r_aa623f2ebc0c1ade1297356fef10fa1c2"
class="even memitem:aa623f2ebc0c1ade1297356fef10fa1c2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa623f2ebc0c1ade1297356fef10fa1c2" class="el">Draw</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self)</td>
</tr>
<tr class="odd separator:aa623f2ebc0c1ade1297356fef10fa1c2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abbb366251f67df48f8e5663b80dd0586"
class="even memitem:abbb366251f67df48f8e5663b80dd0586">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#abbb366251f67df48f8e5663b80dd0586" class="el">update</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, unsigned int
deltaTime)</td>
</tr>
<tr class="odd separator:abbb366251f67df48f8e5663b80dd0586">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a92caf7b2cbd7b0cf8087d5e58d03d3b8"
class="even memitem:a92caf7b2cbd7b0cf8087d5e58d03d3b8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static <a
href="class_macgyver_1_1_math_1_1_vector3.html"
class="el">Math::Vector3</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a92caf7b2cbd7b0cf8087d5e58d03d3b8"
class="el">convertToCameraSpace</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, <a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *comp)</td>
</tr>
<tr class="odd separator:a92caf7b2cbd7b0cf8087d5e58d03d3b8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5b0d21a4ea85ae6b2562256c2b7bbf34"
class="even memitem:a5b0d21a4ea85ae6b2562256c2b7bbf34">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5b0d21a4ea85ae6b2562256c2b7bbf34" class="el">AttachNew</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *comp)</td>
</tr>
<tr class="odd separator:a5b0d21a4ea85ae6b2562256c2b7bbf34">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Component to handle drawing renderable Components

</div>

## Member Function Documentation

<span id="a5b0d21a4ea85ae6b2562256c2b7bbf34"></span>

## <span class="permalink">[◆ ](#a5b0d21a4ea85ae6b2562256c2b7bbf34)</span>AttachNew()

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
<td class="memname">void Components::Camera::AttachNew</td>
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

Attaches a new <a href="struct_macgyver_1_1_components_1_1_camera.html"
class="el">Camera</a> to an existing Component. Note: a Component should
only have one thing attached to it

Parameters  
|      |                                                                                                 |
|------|-------------------------------------------------------------------------------------------------|
| comp | pointer to the component to attach the <a href="struct_macgyver_1_1_components_1_1_camera.html" 
        class="el">Camera</a> to                                                                         |

</div>

</div>

<span id="a92caf7b2cbd7b0cf8087d5e58d03d3b8"></span>

## <span class="permalink">[◆ ](#a92caf7b2cbd7b0cf8087d5e58d03d3b8)</span>convertToCameraSpace()

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
<td class="memname"><a href="class_macgyver_1_1_math_1_1_vector3.html"
class="el">Math::Vector3</a>
Components::Camera::convertToCameraSpace</td>
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
<td class="paramtype"><a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *</td>
<td class="paramname"><span
class="paramname"><em>comp</em></span> )</td>
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

Converts the co-ordinates of another Components to co-ordinates on
screen. This may be negative numbers or numbers greater than the
width/height of the camera

Parameters  
|      |                                                             |
|------|-------------------------------------------------------------|
| self | pointer to the Component is part of                         |
| comp | pointer to the Component to find the camera co-ordinates of |

<!-- -->

Returns  
a <a href="class_macgyver_1_1_math_1_1_vector3.html"
class="el">Math::Vector3</a> object with the camera co-ordinates of the
comp object

</div>

</div>

<span id="aa623f2ebc0c1ade1297356fef10fa1c2"></span>

## <span class="permalink">[◆ ](#aa623f2ebc0c1ade1297356fef10fa1c2)</span>Draw()

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
<td class="memname">void Components::Camera::Draw</td>
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

Draws renderable components to the screen based off of their positions
and the camera's position

Parameters  
|      |                                                                              |
|------|------------------------------------------------------------------------------|
| self | the Component which <a href="struct_macgyver_1_1_components_1_1_camera.html" 
        class="el">Camera</a> is a part of                                            |

</div>

</div>

<span id="abbb366251f67df48f8e5663b80dd0586"></span>

## <span class="permalink">[◆ ](#abbb366251f67df48f8e5663b80dd0586)</span>update()

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
<td class="memname">void Components::Camera::update</td>
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

- MacGyver/<a href="_camera_8h_source.html" class="el">Camera.h</a>
- MacGyver/**Camera.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
