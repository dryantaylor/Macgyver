---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::RenderableData Struct Reference"
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
- <a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
  class="el">RenderableData</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](struct_macgyver_1_1_components_1_1_renderable_data-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::RenderableData Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_renderable_8h_source.html"
class="el"><code>Renderable.h</code></a>`>`

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
<tr id="r_ab605b4de043fad1fd600feb1d07f2a23"
class="even memitem:ab605b4de043fad1fd600feb1d07f2a23">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab605b4de043fad1fd600feb1d07f2a23" class="el">RenderableData</a>
(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, std::string path, int
width, int height)</td>
</tr>
<tr class="odd separator:ab605b4de043fad1fd600feb1d07f2a23">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab7574cbff921436361e6d5628debc1b8"
class="even memitem:ab7574cbff921436361e6d5628debc1b8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab7574cbff921436361e6d5628debc1b8" class="el">~RenderableData</a>
()</td>
</tr>
<tr class="odd separator:ab7574cbff921436361e6d5628debc1b8">
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
<tr id="r_a335788ed220e36c624dc0a4561f2192e"
class="even memitem:a335788ed220e36c624dc0a4561f2192e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a335788ed220e36c624dc0a4561f2192e"></span>
SDL_Texture * </td>
<td class="memItemRight"
data-valign="bottom"><strong>texture</strong></td>
</tr>
<tr class="odd memdesc:a335788ed220e36c624dc0a4561f2192e">
<td class="mdescLeft"> </td>
<td class="mdescRight">Pointer to internal SDL texture.<br />
</td>
</tr>
<tr class="even separator:a335788ed220e36c624dc0a4561f2192e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac7a0d6e566536c113c4e268da8e53e0e"
class="odd memitem:ac7a0d6e566536c113c4e268da8e53e0e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">SDL_Rect </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac7a0d6e566536c113c4e268da8e53e0e" class="el">rect</a></td>
</tr>
<tr class="even separator:ac7a0d6e566536c113c4e268da8e53e0e">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Struct to hold data needed for a component to render data.

</div>

## Constructor & Destructor Documentation

<span id="ab605b4de043fad1fd600feb1d07f2a23"></span>

## <span class="permalink">[◆ ](#ab605b4de043fad1fd600feb1d07f2a23)</span>RenderableData()

<div class="memitem">

<div class="memproto">

|                                            |     |                                                             |                                           |
|--------------------------------------------|-----|-------------------------------------------------------------|-------------------------------------------|
| Components::RenderableData::RenderableData | (   | <a href="class_macgyver_1_1_gameobjects_1_1_component.html" 
                                                    class="el">Gameobjects::Component</a> \*                     | <span class="paramname">*self*, </span>   |
|                                            |     | std::string                                                 | <span class="paramname">*path*, </span>   |
|                                            |     | int                                                         | <span class="paramname">*width*, </span>  |
|                                            |     | int                                                         | <span class="paramname">*height*</span> ) |

</div>

<div class="memdoc">

Creates a
<a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="el">RenderableData</a> struct

Parameters  
|        |                                                    |
|--------|----------------------------------------------------|
| self   | pointer to the Component this will be attacheed to |
| path   | path to the image relatve to the exe directory     |
| width  | width to display the image at                      |
| height | height to display the image at                     |

</div>

</div>

<span id="ab7574cbff921436361e6d5628debc1b8"></span>

## <span class="permalink">[◆ ](#ab7574cbff921436361e6d5628debc1b8)</span>~RenderableData()

<div class="memitem">

<div class="memproto">

|                                             |     |                                 |     |     |
|---------------------------------------------|-----|---------------------------------|-----|-----|
| Components::RenderableData::~RenderableData | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Destructor for
<a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="el">RenderableData</a>, closes the texture if one is present

</div>

</div>

## Member Data Documentation

<span id="ac7a0d6e566536c113c4e268da8e53e0e"></span>

## <span class="permalink">[◆ ](#ac7a0d6e566536c113c4e268da8e53e0e)</span>rect

<div class="memitem">

<div class="memproto">

|                                                     |
|-----------------------------------------------------|
| SDL_Rect Macgyver::Components::RenderableData::rect |

</div>

<div class="memdoc">

SDL rect to contain the width and height to render the texture at on
screen

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_renderable_8h_source.html" class="el">Renderable.h</a>
- MacGyver/**Renderable.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
