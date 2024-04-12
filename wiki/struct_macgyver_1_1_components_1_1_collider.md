---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::Collider Struct Reference"
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
- <a href="struct_macgyver_1_1_components_1_1_collider.html"
  class="el">Collider</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](struct_macgyver_1_1_components_1_1_collider-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::Collider Struct Reference

</div>

</div>

</div>

<div class="contents">

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
<tr id="r_a3df80261886a302e3f699ea316837e2a"
class="even memitem:a3df80261886a302e3f699ea316837e2a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3df80261886a302e3f699ea316837e2a" class="el">update</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, unsigned int
deltaTime)</td>
</tr>
<tr class="odd separator:a3df80261886a302e3f699ea316837e2a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aad7474e6ec63640ed22524e3b9ea6583"
class="even memitem:aad7474e6ec63640ed22524e3b9ea6583">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aad7474e6ec63640ed22524e3b9ea6583" class="el">physicsUpdate</a>
(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self)</td>
</tr>
<tr class="odd separator:aad7474e6ec63640ed22524e3b9ea6583">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae93c43b6f382eac6a78d60062d7d85c4"
class="even memitem:ae93c43b6f382eac6a78d60062d7d85c4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae93c43b6f382eac6a78d60062d7d85c4" class="el">AttachNew</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *comp, bool moveable)</td>
</tr>
<tr class="odd separator:ae93c43b6f382eac6a78d60062d7d85c4">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Function Documentation

<span id="ae93c43b6f382eac6a78d60062d7d85c4"></span>

## <span class="permalink">[◆ ](#ae93c43b6f382eac6a78d60062d7d85c4)</span>AttachNew()

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
<td class="memname">void Macgyver::Components::Collider::AttachNew</td>
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
<td class="paramtype">bool</td>
<td class="paramname"><span
class="paramname"><em>moveable</em></span> )</td>
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
<a href="struct_macgyver_1_1_components_1_1_collider.html"
class="el">Collider</a> to an existing Component. Note: a Component
should only have one thing attached to it

Parameters  
|          |                                                                                                   |
|----------|---------------------------------------------------------------------------------------------------|
| comp     | pointer to the component to attach the <a href="struct_macgyver_1_1_components_1_1_collider.html" 
            class="el">Collider</a> to                                                                         |
| moveable | if the component is moveable or not                                                               |

</div>

</div>

<span id="aad7474e6ec63640ed22524e3b9ea6583"></span>

## <span class="permalink">[◆ ](#aad7474e6ec63640ed22524e3b9ea6583)</span>physicsUpdate()

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
Macgyver::Components::Collider::physicsUpdate</td>
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

<a href="struct_macgyver_1_1_components_1_1_collider.html"
class="el">Collider</a>'s physics update, updates the parent
GameObject's transform by velocity \* physicsDeltaTime units each call.

Parameters  
|      |                                                                                               |
|------|-----------------------------------------------------------------------------------------------|
| self | pointer to the Component which the <a href="struct_macgyver_1_1_components_1_1_velocity.html" 
        class="el">Velocity</a> is part of                                                             |

</div>

</div>

<span id="a3df80261886a302e3f699ea316837e2a"></span>

## <span class="permalink">[◆ ](#a3df80261886a302e3f699ea316837e2a)</span>update()

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
<td class="memname">void Macgyver::Components::Collider::update</td>
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

Colliders update method, does nothing.

Parameters  
|           |                                                                                               |
|-----------|-----------------------------------------------------------------------------------------------|
| self      | pointer to the Component which the <a href="struct_macgyver_1_1_components_1_1_collider.html" 
             class="el">Collider</a> is part of                                                             |
| deltaTime | time in milliseconds since last frame and this one                                            |

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_collider_8h_source.html" class="el">Collider.h</a>
- MacGyver/**Collider.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
