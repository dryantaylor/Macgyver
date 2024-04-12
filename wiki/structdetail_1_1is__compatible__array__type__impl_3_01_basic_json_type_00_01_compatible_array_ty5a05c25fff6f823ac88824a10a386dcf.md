---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::is_compatible_array_type_impl\\< BasicJsonType,
  CompatibleArrayType, enable_if_t\\< is_detected\\< iterator_t,
  CompatibleArrayType \\>::value &&is_iterator_traits\\< iterator_traits\\<
  detected_t\\< iterator_t, CompatibleArrayType \\> \\> \\>::value
  &&!std::is_same\\< CompatibleArrayType, detected_t\\< range_value_t,
  CompatibleArrayType \\> \\>::value \\> \\> Struct Template Reference"
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

- <a href="namespacedetail.html" class="el">detail</a>
- <a
  href="structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_ty5a05c25fff6f823ac88824a10a386dcf.html"
  class="el">is_compatible_array_type_impl&lt; BasicJsonType,
  CompatibleArrayType, enable_if_t&lt; is_detected&lt; iterator_t,
  CompatibleArrayType &gt;::value &amp;&amp;is_iterator_traits&lt;
  iterator_traits&lt; detected_t&lt; iterator_t, CompatibleArrayType &gt;
  &gt; &gt;::value &amp;&amp;!std::is_same&lt; CompatibleArrayType,
  detected_t&lt; range_value_t, CompatibleArrayType &gt; &gt;::value &gt;
  &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Attributes](#pub-static-attribs) \| [List of all
members](structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_tydc750a5f8819a647fdd20905de829f07.html)

</div>

<div class="headertitle">

<div class="title">

detail::is_compatible_array_type_impl\< BasicJsonType,
CompatibleArrayType, enable_if_t\< is_detected\< iterator_t,
CompatibleArrayType \>::value &&is_iterator_traits\< iterator_traits\<
detected_t\< iterator_t, CompatibleArrayType \> \> \>::value
&&!std::is_same\< CompatibleArrayType, detected_t\< range_value_t,
CompatibleArrayType \> \>::value \> \> Struct Template Reference

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
<td colspan="2"><h2 id="static-public-attributes"
class="groupheader"><span id="pub-static-attribs"></span> Static Public
Attributes</h2></td>
</tr>
<tr id="r_a27868f9549d1832673978f75b47c7049"
class="even memitem:a27868f9549d1832673978f75b47c7049">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a27868f9549d1832673978f75b47c7049" class="el">value</a></td>
</tr>
<tr class="odd separator:a27868f9549d1832673978f75b47c7049">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Data Documentation

<span id="a27868f9549d1832673978f75b47c7049"></span>

## <span class="permalink">[◆ ](#a27868f9549d1832673978f75b47c7049)</span>value

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename CompatibleArrayType \>

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
href="structdetail_1_1is__compatible__array__type__impl.html"
class="el">detail::is_compatible_array_type_impl</a>&lt; BasicJsonType,
CompatibleArrayType, enable_if_t&lt; is_detected&lt; iterator_t,
CompatibleArrayType &gt;::value &amp;&amp;<a
href="structdetail_1_1is__iterator__traits.html"
class="el">is_iterator_traits</a>&lt; <a
href="structdetail_1_1iterator__traits.html"
class="el">iterator_traits</a>&lt; detected_t&lt; iterator_t,
CompatibleArrayType &gt; &gt; &gt;::value &amp;&amp;!std::is_same&lt;
CompatibleArrayType, detected_t&lt; range_value_t, CompatibleArrayType
&gt; &gt;::value &gt; &gt;::value</td>
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

is_constructible\<BasicJsonType,

</div>

<div class="line">

range_value_t\<CompatibleArrayType\>\>::value

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
