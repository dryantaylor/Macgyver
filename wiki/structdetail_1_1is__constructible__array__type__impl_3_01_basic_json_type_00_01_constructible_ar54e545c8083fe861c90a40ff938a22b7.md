---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::is_constructible_array_type_impl\\<
  BasicJsonType, ConstructibleArrayType, enable_if_t\\< !std::is_same\\<
  ConstructibleArrayType, typename BasicJsonType::value_type \\>::value
  &&!is_compatible_string_type\\< BasicJsonType, ConstructibleArrayType
  \\>::value &&is_default_constructible\\< ConstructibleArrayType
  \\>::value &&(std::is_move_assignable\\< ConstructibleArrayType
  \\>::value\\|\\|std::is_copy_assignable\\< ConstructibleArrayType
  \\>::value)&&is_detected\\< iterator_t, ConstructibleArrayType \\>::value
  &&is_iterator_traits\\< iterator_traits\\< detected_t\\< iterator_t,
  ConstructibleArrayType \\> \\> \\>::value &&is_detected\\< range_value_t,
  ConstructibleArrayType \\>::value &&!std::is_same\\<
  ConstructibleArrayType, detected_t\\< range_value_t,
  ConstructibleArrayType \\> \\>::value &&is_complete_type\\< detected_t\\<
  range_value_t, ConstructibleArrayType \\> \\>::value \\> \\> Struct
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
- <a
  href="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7.html"
  class="el">is_constructible_array_type_impl&lt; BasicJsonType,
  ConstructibleArrayType, enable_if_t&lt; !std::is_same&lt;
  ConstructibleArrayType, typename BasicJsonType::value_type &gt;::value
  &amp;&amp;!is_compatible_string_type&lt; BasicJsonType,
  ConstructibleArrayType &gt;::value
  &amp;&amp;is_default_constructible&lt; ConstructibleArrayType
  &gt;::value &amp;&amp;(std::is_move_assignable&lt;
  ConstructibleArrayType &gt;::value||std::is_copy_assignable&lt;
  ConstructibleArrayType &gt;::value)&amp;&amp;is_detected&lt; iterator_t,
  ConstructibleArrayType &gt;::value &amp;&amp;is_iterator_traits&lt;
  iterator_traits&lt; detected_t&lt; iterator_t, ConstructibleArrayType
  &gt; &gt; &gt;::value &amp;&amp;is_detected&lt; range_value_t,
  ConstructibleArrayType &gt;::value &amp;&amp;!std::is_same&lt;
  ConstructibleArrayType, detected_t&lt; range_value_t,
  ConstructibleArrayType &gt; &gt;::value &amp;&amp;is_complete_type&lt;
  detected_t&lt; range_value_t, ConstructibleArrayType &gt; &gt;::value
  &gt; &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Static Public
Attributes](#pub-static-attribs) \| [List of all
members](structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_arc4b829dcf4b2cb214fef8a066d99c28e.html)

</div>

<div class="headertitle">

<div class="title">

detail::is_constructible_array_type_impl\< BasicJsonType,
ConstructibleArrayType, enable_if_t\< !std::is_same\<
ConstructibleArrayType, typename BasicJsonType::value_type \>::value
&&!is_compatible_string_type\< BasicJsonType, ConstructibleArrayType
\>::value &&is_default_constructible\< ConstructibleArrayType \>::value
&&(std::is_move_assignable\< ConstructibleArrayType
\>::value\|\|std::is_copy_assignable\< ConstructibleArrayType
\>::value)&&is_detected\< iterator_t, ConstructibleArrayType \>::value
&&is_iterator_traits\< iterator_traits\< detected_t\< iterator_t,
ConstructibleArrayType \> \> \>::value &&is_detected\< range_value_t,
ConstructibleArrayType \>::value &&!std::is_same\<
ConstructibleArrayType, detected_t\< range_value_t,
ConstructibleArrayType \> \>::value &&is_complete_type\< detected_t\<
range_value_t, ConstructibleArrayType \> \>::value \> \> Struct Template
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
<tr id="r_a27b3a7d1007755a51043ffbc3381afd0"
class="even memitem:a27b3a7d1007755a51043ffbc3381afd0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a27b3a7d1007755a51043ffbc3381afd0"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>value_type</strong> =
range_value_t&lt;ConstructibleArrayType&gt;</td>
</tr>
<tr class="odd separator:a27b3a7d1007755a51043ffbc3381afd0">
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
<tr id="r_af9e0932ee1c0d23d339ebe1e489d0afd"
class="even memitem:af9e0932ee1c0d23d339ebe1e489d0afd">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af9e0932ee1c0d23d339ebe1e489d0afd" class="el">value</a></td>
</tr>
<tr class="odd separator:af9e0932ee1c0d23d339ebe1e489d0afd">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Data Documentation

<span id="af9e0932ee1c0d23d339ebe1e489d0afd"></span>

## <span class="permalink">[◆ ](#af9e0932ee1c0d23d339ebe1e489d0afd)</span>value

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename ConstructibleArrayType \>

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
href="structdetail_1_1is__constructible__array__type__impl.html"
class="el">detail::is_constructible_array_type_impl</a>&lt;
BasicJsonType, ConstructibleArrayType, enable_if_t&lt; !std::is_same&lt;
ConstructibleArrayType, typename BasicJsonType::value_type &gt;::value
&amp;&amp;!<a href="structdetail_1_1is__compatible__string__type.html"
class="el">is_compatible_string_type</a>&lt; BasicJsonType,
ConstructibleArrayType &gt;::value &amp;&amp;<a
href="structdetail_1_1is__default__constructible.html"
class="el">is_default_constructible</a>&lt; ConstructibleArrayType
&gt;::value &amp;&amp;(std::is_move_assignable&lt;
ConstructibleArrayType &gt;::value||std::is_copy_assignable&lt;
ConstructibleArrayType &gt;::value)&amp;&amp;is_detected&lt; iterator_t,
ConstructibleArrayType &gt;::value &amp;&amp;<a
href="structdetail_1_1is__iterator__traits.html"
class="el">is_iterator_traits</a>&lt; <a
href="structdetail_1_1iterator__traits.html"
class="el">iterator_traits</a>&lt; detected_t&lt; iterator_t,
ConstructibleArrayType &gt; &gt; &gt;::value &amp;&amp;is_detected&lt;
range_value_t, ConstructibleArrayType &gt;::value
&amp;&amp;!std::is_same&lt; ConstructibleArrayType, detected_t&lt;
range_value_t, ConstructibleArrayType &gt; &gt;::value &amp;&amp;<a
href="structdetail_1_1is__complete__type.html"
class="el">is_complete_type</a>&lt; detected_t&lt; range_value_t,
ConstructibleArrayType &gt; &gt;::value &gt; &gt;::value</td>
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

std::is_same\<value_type,

</div>

<div class="line">

<span class="keyword">typename</span>
BasicJsonType::array_t::value_type\>::value \|\|

</div>

<div class="line">

has_from_json\<BasicJsonType,

</div>

<div class="line">

value_type\>::value \|\|

</div>

<div class="line">

has_non_default_from_json \<

</div>

<div class="line">

BasicJsonType,

</div>

<div class="line">

value_type \>::value

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
