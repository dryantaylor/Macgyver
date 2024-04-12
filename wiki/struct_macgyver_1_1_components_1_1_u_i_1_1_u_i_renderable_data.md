---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::UI::UIRenderableData Struct
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
- <a
  href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data.html"
  class="el">UIRenderableData</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable_data-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::UI::UIRenderableData Struct Reference

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
<td colspan="2"><h2 id="public-member-functions"
class="groupheader"><span id="pub-methods"></span> Public Member
Functions</h2></td>
</tr>
<tr id="r_adda11435b582563ef2d2192757add8b9"
class="even memitem:adda11435b582563ef2d2192757add8b9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#adda11435b582563ef2d2192757add8b9"
class="el">UIRenderableData</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, std::string path, int
width, int height)</td>
</tr>
<tr class="odd separator:adda11435b582563ef2d2192757add8b9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3a62718be00f907a849eec8efcbd61b1"
class="even memitem:a3a62718be00f907a849eec8efcbd61b1">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3a62718be00f907a849eec8efcbd61b1"
class="el">UIRenderableData</a> (SDL_Texture *<a
href="#a64148e4cf2ef7c50c46002a1b9497a79" class="el">texture</a>, int
width, int height)</td>
</tr>
<tr class="odd separator:a3a62718be00f907a849eec8efcbd61b1">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<table class="memberdecls">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd heading">
<td colspan="2"><h2 id="public-attributes" class="groupheader"><span
id="pub-attribs"></span> Public Attributes</h2></td>
</tr>
<tr id="r_a64148e4cf2ef7c50c46002a1b9497a79"
class="even memitem:a64148e4cf2ef7c50c46002a1b9497a79">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a64148e4cf2ef7c50c46002a1b9497a79"></span>
SDL_Texture * </td>
<td class="memItemRight"
data-valign="bottom"><strong>texture</strong></td>
</tr>
<tr class="odd memdesc:a64148e4cf2ef7c50c46002a1b9497a79">
<td class="mdescLeft"> </td>
<td class="mdescRight">Pointer to internal SDL texture.<br />
</td>
</tr>
<tr class="even separator:a64148e4cf2ef7c50c46002a1b9497a79">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4931a399a61b56c01c6673fdaee68c83"
class="odd memitem:a4931a399a61b56c01c6673fdaee68c83">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">SDL_Rect </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4931a399a61b56c01c6673fdaee68c83" class="el">rect</a></td>
</tr>
<tr class="even separator:a4931a399a61b56c01c6673fdaee68c83">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Constructor & Destructor Documentation

<span id="adda11435b582563ef2d2192757add8b9"></span>

## <span class="permalink">[◆ ](#adda11435b582563ef2d2192757add8b9)</span>UIRenderableData() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

|                                                              |     |                                                             |                                           |
|--------------------------------------------------------------|-----|-------------------------------------------------------------|-------------------------------------------|
| Macgyver::Components::UI::UIRenderableData::UIRenderableData | (   | <a href="class_macgyver_1_1_gameobjects_1_1_component.html" 
                                                                      class="el">Gameobjects::Component</a> \*                     | <span class="paramname">*self*, </span>   |
|                                                              |     | std::string                                                 | <span class="paramname">*path*, </span>   |
|                                                              |     | int                                                         | <span class="paramname">*width*, </span>  |
|                                                              |     | int                                                         | <span class="paramname">*height*</span> ) |

</div>

<div class="memdoc">

Constructor to create a UIRenderableDataStruct

Parameters  
|        |                                             |
|--------|---------------------------------------------|
| self   | component to attach this to                 |
| path   | path to the image relative to the base path |
| width  | width to render image at                    |
| height | height to render image at                   |

</div>

</div>

<span id="a3a62718be00f907a849eec8efcbd61b1"></span>

## <span class="permalink">[◆ ](#a3a62718be00f907a849eec8efcbd61b1)</span>UIRenderableData() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

|                                                              |     |                |                                            |
|--------------------------------------------------------------|-----|----------------|--------------------------------------------|
| Macgyver::Components::UI::UIRenderableData::UIRenderableData | (   | SDL_Texture \* | <span class="paramname">*texture*, </span> |
|                                                              |     | int            | <span class="paramname">*width*, </span>   |
|                                                              |     | int            | <span class="paramname">*height*</span> )  |

</div>

<div class="memdoc">

Constructor to create a UIRenderableDataStruct

Parameters  
|         |                           |
|---------|---------------------------|
| texture | texture to render         |
| width   | width to render image at  |
| height  | height to render image at |

</div>

</div>

## Member Data Documentation

<span id="a4931a399a61b56c01c6673fdaee68c83"></span>

## <span class="permalink">[◆ ](#a4931a399a61b56c01c6673fdaee68c83)</span>rect

<div class="memitem">

<div class="memproto">

|                                                           |
|-----------------------------------------------------------|
| SDL_Rect Macgyver::Components::UI::UIRenderableData::rect |

</div>

<div class="memdoc">

SDL rect to contain the width and height to render the texture at on
screen

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_u_i_renderable_data_8h_source.html"
  class="el">UIRenderableData.h</a>
- MacGyver/**UIRenderableData.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
