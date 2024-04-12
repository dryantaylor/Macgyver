---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::UI::UIRenderable Struct
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
- <a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html"
  class="el">UIRenderable</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::UI::UIRenderable Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_u_i_renderable_8h_source.html"
class="el"><code>UIRenderable.h</code></a>`>`

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
<tr id="r_a6c03210b80e09818645d2e7f359aabc7"
class="even memitem:a6c03210b80e09818645d2e7f359aabc7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6c03210b80e09818645d2e7f359aabc7" class="el">update</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *self, unsigned int
deltaTime)</td>
</tr>
<tr class="odd separator:a6c03210b80e09818645d2e7f359aabc7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a264b93edb5a47d3adf36958ac21be68b"
class="even memitem:a264b93edb5a47d3adf36958ac21be68b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a264b93edb5a47d3adf36958ac21be68b" class="el">AttachNew</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Gameobjects::Component</a> *comp, std::string path, int
width, int height)</td>
</tr>
<tr class="odd separator:a264b93edb5a47d3adf36958ac21be68b">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Struct to hold a
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html"
class="el">UIRenderable</a> Component

</div>

## Member Function Documentation

<span id="a264b93edb5a47d3adf36958ac21be68b"></span>

## <span class="permalink">[◆ ](#a264b93edb5a47d3adf36958ac21be68b)</span>AttachNew()

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
Macgyver::Components::UI::UIRenderable::AttachNew</td>
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
<td class="paramtype">std::string</td>
<td class="paramname"><span class="paramname"><em>path</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"><em>width</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int</td>
<td class="paramname"><span
class="paramname"><em>height</em></span> )</td>
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
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html"
class="el">UIRenderable</a> to an existing Component. Note: a Component
should only have one thing attached to it

Parameters  
|      |                                                                                                                 |
|------|-----------------------------------------------------------------------------------------------------------------|
| comp | pointer to the component to attach the <a href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_renderable.html" 
        class="el">UIRenderable</a> to                                                                                   |

</div>

</div>

<span id="a6c03210b80e09818645d2e7f359aabc7"></span>

## <span class="permalink">[◆ ](#a6c03210b80e09818645d2e7f359aabc7)</span>update()

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
Macgyver::Components::UI::UIRenderable::update</td>
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

UIRenderables update method, does nothing.

Parameters  
|           |                                                          |
|-----------|----------------------------------------------------------|
| self      | pointer to the Component which the renderable is part of |
| deltaTime | time in milliseconds since last frame and this one       |

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_u_i_renderable_8h_source.html" class="el">UIRenderable.h</a>
- MacGyver/**UIRenderable.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
