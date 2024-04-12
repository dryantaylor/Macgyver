---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::has_from_json\\< BasicJsonType, T,
  enable_if_t\\< !is_basic_json\\< T \\>::value \\> \\> Struct Template
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

- <a href="namespacedetail.html" class="el">detail</a>
- <a
  href="structdetail_1_1has__from__json_3_01_basic_json_type_00_01_t_00_01enable__if__t_3_01_9is__basic_fce8b8f93d45fb838eee91b696633019.html"
  class="el">has_from_json&lt; BasicJsonType, T, enable_if_t&lt;
  !is_basic_json&lt; T &gt;::value &gt; &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Static Public
Attributes](#pub-static-attribs) \| [List of all
members](structdetail_1_1has__from__json_3_01_basic_json_type_00_01_t_00_01enable__if__t_3_01_9is__basic_c539cc270c7761d4d170d3ccbc682abe.html)

</div>

<div class="headertitle">

<div class="title">

detail::has_from_json\< BasicJsonType, T, enable_if_t\< !is_basic_json\<
T \>::value \> \> Struct Template Reference

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
<tr id="r_a17149f320fbc39c1a6e6407f2610ae7d"
class="even memitem:a17149f320fbc39c1a6e6407f2610ae7d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a17149f320fbc39c1a6e6407f2610ae7d"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>serializer</strong> = typename
BasicJsonType::template json_serializer&lt;T, void&gt;</td>
</tr>
<tr class="odd separator:a17149f320fbc39c1a6e6407f2610ae7d">
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
<tr id="r_aecf54fbec06b7d13f59c84f22f0a5c54"
class="even memitem:aecf54fbec06b7d13f59c84f22f0a5c54">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aecf54fbec06b7d13f59c84f22f0a5c54" class="el">value</a></td>
</tr>
<tr class="odd separator:aecf54fbec06b7d13f59c84f22f0a5c54">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Data Documentation

<span id="aecf54fbec06b7d13f59c84f22f0a5c54"></span>

## <span class="permalink">[◆ ](#aecf54fbec06b7d13f59c84f22f0a5c54)</span>value

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename T \>

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
href="structdetail_1_1has__from__json.html"
class="el">detail::has_from_json</a>&lt; BasicJsonType, T,
enable_if_t&lt; !<a href="structdetail_1_1is__basic__json.html"
class="el">is_basic_json</a>&lt; T &gt;::value &gt; &gt;::value</td>
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

is_detected_exact\<void, from_json_function, serializer,

</div>

<div class="line">

<span class="keyword">const</span> BasicJsonType&, T&\>::value

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
