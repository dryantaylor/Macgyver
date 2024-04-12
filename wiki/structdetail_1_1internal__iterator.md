---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::internal_iterator\\< BasicJsonType \\> Struct
  Template Reference"
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
- <a href="structdetail_1_1internal__iterator.html"
  class="el">internal_iterator</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Attributes](#pub-attribs) \| [List of all
members](structdetail_1_1internal__iterator-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::internal_iterator\< BasicJsonType \> Struct Template Reference

</div>

</div>

</div>

<div class="contents">

an iterator value [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

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
<tr id="r_acf787101c4778e750cfdb0f44066a6ef"
class="even memitem:acf787101c4778e750cfdb0f44066a6ef">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="acf787101c4778e750cfdb0f44066a6ef"></span>
BasicJsonType::object_t::iterator </td>
<td class="memItemRight"
data-valign="bottom"><strong>object_iterator</strong> {}</td>
</tr>
<tr class="odd memdesc:acf787101c4778e750cfdb0f44066a6ef">
<td class="mdescLeft"> </td>
<td class="mdescRight">iterator for JSON objects<br />
</td>
</tr>
<tr class="even separator:acf787101c4778e750cfdb0f44066a6ef">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2ad2dc9ea8bba2b50811e34f905350bd"
class="odd memitem:a2ad2dc9ea8bba2b50811e34f905350bd">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2ad2dc9ea8bba2b50811e34f905350bd"></span>
BasicJsonType::array_t::iterator </td>
<td class="memItemRight"
data-valign="bottom"><strong>array_iterator</strong> {}</td>
</tr>
<tr class="even memdesc:a2ad2dc9ea8bba2b50811e34f905350bd">
<td class="mdescLeft"> </td>
<td class="mdescRight">iterator for JSON arrays<br />
</td>
</tr>
<tr class="odd separator:a2ad2dc9ea8bba2b50811e34f905350bd">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8bb8034d2d35fb129e0dd742ce024e44"
class="even memitem:a8bb8034d2d35fb129e0dd742ce024e44">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8bb8034d2d35fb129e0dd742ce024e44"></span>
<a href="classdetail_1_1primitive__iterator__t.html"
class="el">primitive_iterator_t</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>primitive_iterator</strong> {}</td>
</tr>
<tr class="odd memdesc:a8bb8034d2d35fb129e0dd742ce024e44">
<td class="mdescLeft"> </td>
<td class="mdescRight">generic iterator for all other types<br />
</td>
</tr>
<tr class="even separator:a8bb8034d2d35fb129e0dd742ce024e44">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType\>  
struct detail::internal_iterator\< BasicJsonType \>

</div>

an iterator value

Note  
This structure could easily be a union, but MSVC currently does not
allow unions members with complex constructors, see
<https://github.com/nlohmann/json/pull/105>.

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
