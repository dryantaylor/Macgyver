---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::UI::Text Struct Reference"
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
- <a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text.html"
  class="el">Text</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](struct_macgyver_1_1_components_1_1_u_i_1_1_text-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::UI::Text Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_text_8h_source.html" class="el"><code>Text.h</code></a>`>`

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
<tr id="r_aa82ad75be88138ac97e8a94c79dec9a3"
class="even memitem:aa82ad75be88138ac97e8a94c79dec9a3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa82ad75be88138ac97e8a94c79dec9a3" class="el">update</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, unsigned int
deltaTime)</td>
</tr>
<tr class="odd separator:aa82ad75be88138ac97e8a94c79dec9a3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a56422f7188422418f1faccc02dc1400a"
class="even memitem:a56422f7188422418f1faccc02dc1400a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a56422f7188422418f1faccc02dc1400a"></span>
static void </td>
<td class="memItemRight" data-valign="bottom"><strong>attachNew</strong>
(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *comp, std::string font,
std::string text, unsigned int ptSize, SDL_Rect size)</td>
</tr>
<tr class="odd separator:a56422f7188422418f1faccc02dc1400a">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Component to handle UI text

</div>

## Member Function Documentation

<span id="aa82ad75be88138ac97e8a94c79dec9a3"></span>

## <span class="permalink">[◆ ](#aa82ad75be88138ac97e8a94c79dec9a3)</span>update()

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
<td class="memname">void Macgyver::Components::UI::Text::update</td>
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

<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text.html"
class="el">Text</a>'s update method.

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

- MacGyver/<a href="_text_8h_source.html" class="el">Text.h</a>
- MacGyver/**Text.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
