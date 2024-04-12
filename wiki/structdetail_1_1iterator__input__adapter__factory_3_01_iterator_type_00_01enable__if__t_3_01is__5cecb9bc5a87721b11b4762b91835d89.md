---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::iterator_input_adapter_factory\\< IteratorType,
  enable_if_t\\< is_iterator_of_multibyte\\< IteratorType \\>::value \\> \\>
  Struct Template Reference"
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
- <a
  href="structdetail_1_1iterator__input__adapter__factory_3_01_iterator_type_00_01enable__if__t_3_01is__5cecb9bc5a87721b11b4762b91835d89.html"
  class="el">iterator_input_adapter_factory&lt; IteratorType,
  enable_if_t&lt; is_iterator_of_multibyte&lt; IteratorType &gt;::value
  &gt; &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Static Public Member
Functions](#pub-static-methods) \| [List of all
members](structdetail_1_1iterator__input__adapter__factory_3_01_iterator_type_00_01enable__if__t_3_01is__b8ae329d21357285431645bf5dffa690.html)

</div>

<div class="headertitle">

<div class="title">

detail::iterator_input_adapter_factory\< IteratorType, enable_if_t\<
is_iterator_of_multibyte\< IteratorType \>::value \> \> Struct Template
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
<tr id="r_ae840993e679fd93faefa34b273b96d8b"
class="even memitem:ae840993e679fd93faefa34b273b96d8b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae840993e679fd93faefa34b273b96d8b"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>iterator_type</strong> = IteratorType</td>
</tr>
<tr class="odd separator:ae840993e679fd93faefa34b273b96d8b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a024ec881421bb596438e5ee7033d2f61"
class="even memitem:a024ec881421bb596438e5ee7033d2f61">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a024ec881421bb596438e5ee7033d2f61"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>char_type</strong>
= typename std::iterator_traits&lt;iterator_type&gt;::value_type</td>
</tr>
<tr class="odd separator:a024ec881421bb596438e5ee7033d2f61">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a366ed8a17446bb25026ccdc8e85fd42a"
class="even memitem:a366ed8a17446bb25026ccdc8e85fd42a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a366ed8a17446bb25026ccdc8e85fd42a"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>base_adapter_type</strong> = <a
href="classdetail_1_1iterator__input__adapter.html"
class="el">iterator_input_adapter</a>&lt;iterator_type&gt;</td>
</tr>
<tr class="odd separator:a366ed8a17446bb25026ccdc8e85fd42a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab7241691093fde82e63d52a065ea859d"
class="even memitem:ab7241691093fde82e63d52a065ea859d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab7241691093fde82e63d52a065ea859d"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>adapter_type</strong> = <a
href="classdetail_1_1wide__string__input__adapter.html"
class="el">wide_string_input_adapter</a>&lt;base_adapter_type,
char_type&gt;</td>
</tr>
<tr class="odd separator:ab7241691093fde82e63d52a065ea859d">
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
<tr id="r_ade87ec2596ed70e924a256e5b0711830"
class="even memitem:ade87ec2596ed70e924a256e5b0711830">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ade87ec2596ed70e924a256e5b0711830"></span>
static adapter_type </td>
<td class="memItemRight" data-valign="bottom"><strong>create</strong>
(IteratorType first, IteratorType last)</td>
</tr>
<tr class="odd separator:ade87ec2596ed70e924a256e5b0711830">
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
