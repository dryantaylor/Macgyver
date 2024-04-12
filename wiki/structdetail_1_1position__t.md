---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::position_t Struct Reference"
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

- <a href="namespacedetail.html" class="el">detail</a>
- <a href="structdetail_1_1position__t.html" class="el">position_t</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](structdetail_1_1position__t-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::position_t Struct Reference

</div>

</div>

</div>

<div class="contents">

struct to capture the start position of the current token
[More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

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
<tr id="r_a1299e15d15516235772d36e077ec9741"
class="even memitem:a1299e15d15516235772d36e077ec9741">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a1299e15d15516235772d36e077ec9741"></span>
constexpr </td>
<td class="memItemRight" data-valign="bottom"><strong>operator
size_t</strong> () const</td>
</tr>
<tr class="odd memdesc:a1299e15d15516235772d36e077ec9741">
<td class="mdescLeft"> </td>
<td class="mdescRight">conversion to size_t to preserve SAX
interface<br />
</td>
</tr>
<tr class="even separator:a1299e15d15516235772d36e077ec9741">
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
<tr id="r_ac4d220d61ce61eeffbea40985727a3b0"
class="even memitem:ac4d220d61ce61eeffbea40985727a3b0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ac4d220d61ce61eeffbea40985727a3b0"></span>
std::size_t </td>
<td class="memItemRight"
data-valign="bottom"><strong>chars_read_total</strong> = 0</td>
</tr>
<tr class="odd memdesc:ac4d220d61ce61eeffbea40985727a3b0">
<td class="mdescLeft"> </td>
<td class="mdescRight">the total number of characters read<br />
</td>
</tr>
<tr class="even separator:ac4d220d61ce61eeffbea40985727a3b0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6548d584bd03d1d47bfcd7cf8b1fb0c6"
class="odd memitem:a6548d584bd03d1d47bfcd7cf8b1fb0c6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6548d584bd03d1d47bfcd7cf8b1fb0c6"></span>
std::size_t </td>
<td class="memItemRight"
data-valign="bottom"><strong>chars_read_current_line</strong> = 0</td>
</tr>
<tr class="even memdesc:a6548d584bd03d1d47bfcd7cf8b1fb0c6">
<td class="mdescLeft"> </td>
<td class="mdescRight">the number of characters read in the current
line<br />
</td>
</tr>
<tr class="odd separator:a6548d584bd03d1d47bfcd7cf8b1fb0c6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9ec1ac6600d1364f4d1c9f67de6a670b"
class="even memitem:a9ec1ac6600d1364f4d1c9f67de6a670b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9ec1ac6600d1364f4d1c9f67de6a670b"></span>
std::size_t </td>
<td class="memItemRight"
data-valign="bottom"><strong>lines_read</strong> = 0</td>
</tr>
<tr class="odd memdesc:a9ec1ac6600d1364f4d1c9f67de6a670b">
<td class="mdescLeft"> </td>
<td class="mdescRight">the number of lines read<br />
</td>
</tr>
<tr class="even separator:a9ec1ac6600d1364f4d1c9f67de6a670b">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

struct to capture the start position of the current token

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
