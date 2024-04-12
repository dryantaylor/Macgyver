---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::external_constructor\\< value_t::string \\>
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

<div id="nav-path" class="navpath">

- <a href="namespacedetail.html" class="el">detail</a>
- <a
  href="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4.html"
  class="el">external_constructor&lt; value_t::string &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](structdetail_1_1external__constructor_3_01value__t_1_1string_01_4-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::external_constructor\< value_t::string \> Struct Reference

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
<tr id="r_a8d954a764f22f01af48a8ddd08c64383"
class="even memitem:a8d954a764f22f01af48a8ddd08c64383">
<td colspan="2" class="memTemplParams"><span
id="a8d954a764f22f01af48a8ddd08c64383"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="odd memitem:a8d954a764f22f01af48a8ddd08c64383">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const typename BasicJsonType::string_t &amp;s)</td>
</tr>
<tr class="even separator:a8d954a764f22f01af48a8ddd08c64383">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a317d01f7a4dd1dc217ae99e819df5f63"
class="odd memitem:a317d01f7a4dd1dc217ae99e819df5f63">
<td colspan="2" class="memTemplParams"><span
id="a317d01f7a4dd1dc217ae99e819df5f63"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="even memitem:a317d01f7a4dd1dc217ae99e819df5f63">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
typename BasicJsonType::string_t &amp;&amp;s)</td>
</tr>
<tr class="odd separator:a317d01f7a4dd1dc217ae99e819df5f63">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3615c845f5350b39610d487817788130"
class="even memitem:a3615c845f5350b39610d487817788130">
<td colspan="2" class="memTemplParams"><span
id="a3615c845f5350b39610d487817788130"></span> template&lt;typename
BasicJsonType , typename CompatibleStringType , enable_if_t&lt;
!std::is_same&lt; CompatibleStringType, typename BasicJsonType::string_t
&gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a3615c845f5350b39610d487817788130">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const CompatibleStringType &amp;str)</td>
</tr>
<tr class="even separator:a3615c845f5350b39610d487817788130">
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
