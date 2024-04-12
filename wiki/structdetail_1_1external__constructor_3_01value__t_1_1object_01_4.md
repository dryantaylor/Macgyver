---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::external_constructor\\< value_t::object \\>
  Struct Reference"
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
  href="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4.html"
  class="el">external_constructor&lt; value_t::object &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](structdetail_1_1external__constructor_3_01value__t_1_1object_01_4-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::external_constructor\< value_t::object \> Struct Reference

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
<td colspan="2"><h2 id="static-public-member-functions"
class="groupheader"><span id="pub-static-methods"></span> Static Public
Member Functions</h2></td>
</tr>
<tr id="r_a771012da86c322e238b83baf11689f8e"
class="even memitem:a771012da86c322e238b83baf11689f8e">
<td colspan="2" class="memTemplParams"><span
id="a771012da86c322e238b83baf11689f8e"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="odd memitem:a771012da86c322e238b83baf11689f8e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const typename BasicJsonType::object_t &amp;obj)</td>
</tr>
<tr class="even separator:a771012da86c322e238b83baf11689f8e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af767c889982008eb5f08b47b558dfa08"
class="odd memitem:af767c889982008eb5f08b47b558dfa08">
<td colspan="2" class="memTemplParams"><span
id="af767c889982008eb5f08b47b558dfa08"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="even memitem:af767c889982008eb5f08b47b558dfa08">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
typename BasicJsonType::object_t &amp;&amp;obj)</td>
</tr>
<tr class="odd separator:af767c889982008eb5f08b47b558dfa08">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a96a727d374af438440e4f9fe6f273e3f"
class="even memitem:a96a727d374af438440e4f9fe6f273e3f">
<td colspan="2" class="memTemplParams"><span
id="a96a727d374af438440e4f9fe6f273e3f"></span> template&lt;typename
BasicJsonType , typename CompatibleObjectType , enable_if_t&lt;
!std::is_same&lt; CompatibleObjectType, typename BasicJsonType::object_t
&gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a96a727d374af438440e4f9fe6f273e3f">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const CompatibleObjectType &amp;obj)</td>
</tr>
<tr class="even separator:a96a727d374af438440e4f9fe6f273e3f">
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
