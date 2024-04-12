---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Components::ComponentDataWrapper Struct
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
- <a href="struct_macgyver_1_1_components_1_1_component_data_wrapper.html"
  class="el">ComponentDataWrapper</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](struct_macgyver_1_1_components_1_1_component_data_wrapper-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Components::ComponentDataWrapper Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_component_data_wrapper_8h_source.html"
class="el"><code>ComponentDataWrapper.h</code></a>`>`

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
<tr id="r_a47ae3cfe3aeb685ff1cf1ba41621a580"
class="even memitem:a47ae3cfe3aeb685ff1cf1ba41621a580">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a47ae3cfe3aeb685ff1cf1ba41621a580"
class="el">ComponentDataWrapper</a> (std::size_t <a
href="#a7c194cfc372ea14e845e1df08f31312d" class="el">type</a>, <a
href="struct_macgyver_1_1_components_1_1_component_data.html"
class="el">ComponentData</a> *<a
href="#a3da08c4e9c2b35a3b8e07938ea35a024" class="el">data</a>)</td>
</tr>
<tr class="odd separator:a47ae3cfe3aeb685ff1cf1ba41621a580">
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
<tr id="r_a7c194cfc372ea14e845e1df08f31312d"
class="even memitem:a7c194cfc372ea14e845e1df08f31312d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a7c194cfc372ea14e845e1df08f31312d"></span>
std::size_t </td>
<td class="memItemRight" data-valign="bottom"><strong>type</strong></td>
</tr>
<tr class="odd memdesc:a7c194cfc372ea14e845e1df08f31312d">
<td class="mdescLeft"> </td>
<td class="mdescRight">type of the data<br />
</td>
</tr>
<tr class="even separator:a7c194cfc372ea14e845e1df08f31312d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3da08c4e9c2b35a3b8e07938ea35a024"
class="odd memitem:a3da08c4e9c2b35a3b8e07938ea35a024">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3da08c4e9c2b35a3b8e07938ea35a024"></span>
<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="el">ComponentData</a> * </td>
<td class="memItemRight" data-valign="bottom"><strong>data</strong></td>
</tr>
<tr class="even memdesc:a3da08c4e9c2b35a3b8e07938ea35a024">
<td class="mdescLeft"> </td>
<td class="mdescRight">pointer to the data struct casted to a
ComponentData*<br />
</td>
</tr>
<tr class="odd separator:a3da08c4e9c2b35a3b8e07938ea35a024">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Wrapper around a Component Data struct to hold it's type and a pointer
to the Data struct

</div>

## Constructor & Destructor Documentation

<span id="a47ae3cfe3aeb685ff1cf1ba41621a580"></span>

## <span class="permalink">[◆ ](#a47ae3cfe3aeb685ff1cf1ba41621a580)</span>ComponentDataWrapper()

<div class="memitem">

<div class="memproto">

|                                                                  |     |                                                                  |                                         |
|------------------------------------------------------------------|-----|------------------------------------------------------------------|-----------------------------------------|
| Macgyver::Components::ComponentDataWrapper::ComponentDataWrapper | (   | std::size_t                                                      | <span class="paramname">*type*, </span> |
|                                                                  |     | <a href="struct_macgyver_1_1_components_1_1_component_data.html" 
                                                                          class="el">ComponentData</a> \*                                   | <span class="paramname">*data*</span> ) |

</div>

<div class="memdoc">

Constructor for the struct

Parameters  
|      |                                                                     |
|------|---------------------------------------------------------------------|
| data | type of the object calculated using typeinfo().hash_code()          |
| data | pointer to the data struct casted to the dummy ComponentData\* type |

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_component_data_wrapper_8h_source.html"
  class="el">ComponentDataWrapper.h</a>
- MacGyver/**ComponentDataWrapper.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
