---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::iterator_input_adapter_factory\\< IteratorType,
  Enable \\> Struct Template Reference"
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
- <a href="structdetail_1_1iterator__input__adapter__factory.html"
  class="el">iterator_input_adapter_factory</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Static Public Member
Functions](#pub-static-methods) \| [List of all
members](structdetail_1_1iterator__input__adapter__factory-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::iterator_input_adapter_factory\< IteratorType, Enable \> Struct
Template Reference

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
<td colspan="2"><h2 id="public-types" class="groupheader"><span
id="pub-types"></span> Public Types</h2></td>
</tr>
<tr id="r_aff4a60e1331148d070d53d57c51d63d2"
class="even memitem:aff4a60e1331148d070d53d57c51d63d2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aff4a60e1331148d070d53d57c51d63d2"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>iterator_type</strong> = IteratorType</td>
</tr>
<tr class="odd separator:aff4a60e1331148d070d53d57c51d63d2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a806ee312b5d2266adbdc1e351b1ba19b"
class="even memitem:a806ee312b5d2266adbdc1e351b1ba19b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a806ee312b5d2266adbdc1e351b1ba19b"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>char_type</strong>
= typename std::iterator_traits&lt;iterator_type&gt;::value_type</td>
</tr>
<tr class="odd separator:a806ee312b5d2266adbdc1e351b1ba19b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a15284905759e09e61ea6c859eefc9d77"
class="even memitem:a15284905759e09e61ea6c859eefc9d77">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a15284905759e09e61ea6c859eefc9d77"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>adapter_type</strong> = <a
href="classdetail_1_1iterator__input__adapter.html"
class="el">iterator_input_adapter</a>&lt;iterator_type&gt;</td>
</tr>
<tr class="odd separator:a15284905759e09e61ea6c859eefc9d77">
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
<td colspan="2"><h2 id="static-public-member-functions"
class="groupheader"><span id="pub-static-methods"></span> Static Public
Member Functions</h2></td>
</tr>
<tr id="r_ab221afbf8e8a7555d07f4bcf6af8ddf1"
class="even memitem:ab221afbf8e8a7555d07f4bcf6af8ddf1">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab221afbf8e8a7555d07f4bcf6af8ddf1"></span>
static adapter_type </td>
<td class="memItemRight" data-valign="bottom"><strong>create</strong>
(IteratorType first, IteratorType last)</td>
</tr>
<tr class="odd separator:ab221afbf8e8a7555d07f4bcf6af8ddf1">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
