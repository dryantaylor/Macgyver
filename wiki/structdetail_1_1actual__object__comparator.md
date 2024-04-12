---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::actual_object_comparator\\< BasicJsonType \\>
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
- <a href="structdetail_1_1actual__object__comparator.html"
  class="el">actual_object_comparator</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [List of all
members](structdetail_1_1actual__object__comparator-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::actual_object_comparator\< BasicJsonType \> Struct Template
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
<tr id="r_a11b9fbe86ee8fdaaf190a4985dfa1804"
class="even memitem:a11b9fbe86ee8fdaaf190a4985dfa1804">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a11b9fbe86ee8fdaaf190a4985dfa1804"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>object_t</strong>
= typename BasicJsonType::object_t</td>
</tr>
<tr class="odd separator:a11b9fbe86ee8fdaaf190a4985dfa1804">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6a6bbffeaf8ac36afa8edb09b2f07d07"
class="even memitem:a6a6bbffeaf8ac36afa8edb09b2f07d07">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6a6bbffeaf8ac36afa8edb09b2f07d07"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>object_comparator_t</strong> = typename
BasicJsonType::default_object_comparator_t</td>
</tr>
<tr class="odd separator:a6a6bbffeaf8ac36afa8edb09b2f07d07">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af8890fc24b82780c1f526ebe8e7e9e0f"
class="even memitem:af8890fc24b82780c1f526ebe8e7e9e0f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af8890fc24b82780c1f526ebe8e7e9e0f" class="el">type</a></td>
</tr>
<tr class="odd separator:af8890fc24b82780c1f526ebe8e7e9e0f">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Typedef Documentation

<span id="af8890fc24b82780c1f526ebe8e7e9e0f"></span>

## <span class="permalink">[◆ ](#af8890fc24b82780c1f526ebe8e7e9e0f)</span>type

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

</div>

|                                                                          |
|--------------------------------------------------------------------------|
| using <a href="structdetail_1_1actual__object__comparator.html"          
 class="el">detail::actual_object_comparator</a>\< BasicJsonType \>::type  |

</div>

<div class="memdoc">

**Initial value:**

<div class="fragment">

<div class="line">

<span class="keyword">typename</span> std::conditional \<
has_key_compare\<object_t\>::value,

</div>

<div class="line">

<span class="keyword">typename</span> object_t::key_compare,
object_comparator_t\>::type

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
