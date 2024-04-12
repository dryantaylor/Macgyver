---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::iterator_input_adapter\\< IteratorType \\> Class
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
- <a href="classdetail_1_1iterator__input__adapter.html"
  class="el">iterator_input_adapter</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[Friends](#friends) \| [List of all
members](classdetail_1_1iterator__input__adapter-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::iterator_input_adapter\< IteratorType \> Class Template
Reference

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
<tr id="r_a6c852966a1cd5719ae32e8e486691fbe"
class="even memitem:a6c852966a1cd5719ae32e8e486691fbe">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6c852966a1cd5719ae32e8e486691fbe"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>char_type</strong>
= typename std::iterator_traits&lt;IteratorType&gt;::value_type</td>
</tr>
<tr class="odd separator:a6c852966a1cd5719ae32e8e486691fbe">
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
<td colspan="2"><h2 id="public-member-functions"
class="groupheader"><span id="pub-methods"></span> Public Member
Functions</h2></td>
</tr>
<tr id="r_a6bbdb33434a11f90d6bfe2a9a71ee356"
class="even memitem:a6bbdb33434a11f90d6bfe2a9a71ee356">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6bbdb33434a11f90d6bfe2a9a71ee356"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>iterator_input_adapter</strong>
(IteratorType first, IteratorType last)</td>
</tr>
<tr class="odd separator:a6bbdb33434a11f90d6bfe2a9a71ee356">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3c71e463d5ad1e7e60f83be0c0a2f3ca"
class="even memitem:a3c71e463d5ad1e7e60f83be0c0a2f3ca">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3c71e463d5ad1e7e60f83be0c0a2f3ca"></span>
<a href="structdetail_1_1char__traits.html"
class="el">char_traits</a>&lt; char_type &gt;::int_type </td>
<td class="memItemRight"
data-valign="bottom"><strong>get_character</strong> ()</td>
</tr>
<tr class="odd separator:a3c71e463d5ad1e7e60f83be0c0a2f3ca">
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
<td colspan="2"><h2 id="friends" class="groupheader"><span
id="friends"></span> Friends</h2></td>
</tr>
<tr id="r_ab86106ba230f1542b94dcd96e6ab3221"
class="even memitem:ab86106ba230f1542b94dcd96e6ab3221">
<td colspan="2" class="memTemplParams"><span
id="ab86106ba230f1542b94dcd96e6ab3221"></span> template&lt;typename
BaseInputAdapter , size_t T&gt;</td>
</tr>
<tr class="odd memitem:ab86106ba230f1542b94dcd96e6ab3221">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">struct </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>wide_string_input_helper</strong></td>
</tr>
<tr class="even separator:ab86106ba230f1542b94dcd96e6ab3221">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
