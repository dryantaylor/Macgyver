---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::is_compatible_object_type_impl\\<
  BasicJsonType, CompatibleObjectType, enable_if_t\\< is_detected\\<
  mapped_type_t, CompatibleObjectType \\>::value &&is_detected\\<
  key_type_t, CompatibleObjectType \\>::value \\> \\> Struct Template
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

<div id="nav-path" class="navpath">

- <a href="namespacedetail.html" class="el">detail</a>
- <a
  href="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a.html"
  class="el">is_compatible_object_type_impl&lt; BasicJsonType,
  CompatibleObjectType, enable_if_t&lt; is_detected&lt; mapped_type_t,
  CompatibleObjectType &gt;::value &amp;&amp;is_detected&lt; key_type_t,
  CompatibleObjectType &gt;::value &gt; &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Static Public
Attributes](#pub-static-attribs) \| [List of all
members](structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9e009318704dfde4a68cc4f322bd23d.html)

</div>

<div class="headertitle">

<div class="title">

detail::is_compatible_object_type_impl\< BasicJsonType,
CompatibleObjectType, enable_if_t\< is_detected\< mapped_type_t,
CompatibleObjectType \>::value &&is_detected\< key_type_t,
CompatibleObjectType \>::value \> \> Struct Template Reference

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
<tr id="r_a9aceed5f20cc22350e1e518c452d40db"
class="even memitem:a9aceed5f20cc22350e1e518c452d40db">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9aceed5f20cc22350e1e518c452d40db"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>object_t</strong>
= typename BasicJsonType::object_t</td>
</tr>
<tr class="odd separator:a9aceed5f20cc22350e1e518c452d40db">
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
<td colspan="2"><h2 id="static-public-attributes"
class="groupheader"><span id="pub-static-attribs"></span> Static Public
Attributes</h2></td>
</tr>
<tr id="r_ae4a27d3b0d3be75f86fee86cbe15ab37"
class="even memitem:ae4a27d3b0d3be75f86fee86cbe15ab37">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae4a27d3b0d3be75f86fee86cbe15ab37" class="el">value</a></td>
</tr>
<tr class="odd separator:ae4a27d3b0d3be75f86fee86cbe15ab37">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Data Documentation

<span id="ae4a27d3b0d3be75f86fee86cbe15ab37"></span>

## <span class="permalink">[◆ ](#ae4a27d3b0d3be75f86fee86cbe15ab37)</span>value

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename CompatibleObjectType \>

</div>

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
<td class="memname">constexpr bool <a
href="structdetail_1_1is__compatible__object__type__impl.html"
class="el">detail::is_compatible_object_type_impl</a>&lt; BasicJsonType,
CompatibleObjectType, enable_if_t&lt; is_detected&lt; mapped_type_t,
CompatibleObjectType &gt;::value &amp;&amp;is_detected&lt; key_type_t,
CompatibleObjectType &gt;::value &gt; &gt;::value</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">static</span><span
class="mlabel">constexpr</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

**Initial value:**

<div class="fragment">

<div class="line">

=

</div>

<div class="line">

is_constructible\<<span class="keyword">typename</span>
object_t::key_type,

</div>

<div class="line">

<span class="keyword">typename</span>
CompatibleObjectType::key_type\>::value &&

</div>

<div class="line">

is_constructible\<<span class="keyword">typename</span>
object_t::mapped_type,

</div>

<div class="line">

<span class="keyword">typename</span>
CompatibleObjectType::mapped_type\>::value

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
