---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::external_constructor\\< value_t::array \\>
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
  href="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4.html"
  class="el">external_constructor&lt; value_t::array &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](structdetail_1_1external__constructor_3_01value__t_1_1array_01_4-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::external_constructor\< value_t::array \> Struct Reference

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
<tr id="r_ab4ee01b86545c25823e95f06bfb8cec3"
class="even memitem:ab4ee01b86545c25823e95f06bfb8cec3">
<td colspan="2" class="memTemplParams"><span
id="ab4ee01b86545c25823e95f06bfb8cec3"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="odd memitem:ab4ee01b86545c25823e95f06bfb8cec3">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const typename BasicJsonType::array_t &amp;arr)</td>
</tr>
<tr class="even separator:ab4ee01b86545c25823e95f06bfb8cec3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa1344db7d6793021693563dca416e5b4"
class="odd memitem:aa1344db7d6793021693563dca416e5b4">
<td colspan="2" class="memTemplParams"><span
id="aa1344db7d6793021693563dca416e5b4"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="even memitem:aa1344db7d6793021693563dca416e5b4">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
typename BasicJsonType::array_t &amp;&amp;arr)</td>
</tr>
<tr class="odd separator:aa1344db7d6793021693563dca416e5b4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae399adc0d10013a567e8646807d650b5"
class="even memitem:ae399adc0d10013a567e8646807d650b5">
<td colspan="2" class="memTemplParams"><span
id="ae399adc0d10013a567e8646807d650b5"></span> template&lt;typename
BasicJsonType , typename CompatibleArrayType , enable_if_t&lt;
!std::is_same&lt; CompatibleArrayType, typename BasicJsonType::array_t
&gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:ae399adc0d10013a567e8646807d650b5">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const CompatibleArrayType &amp;arr)</td>
</tr>
<tr class="even separator:ae399adc0d10013a567e8646807d650b5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8d6adedb6b308d21cd8a02b68f6cb3c3"
class="odd memitem:a8d6adedb6b308d21cd8a02b68f6cb3c3">
<td colspan="2" class="memTemplParams"><span
id="a8d6adedb6b308d21cd8a02b68f6cb3c3"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="even memitem:a8d6adedb6b308d21cd8a02b68f6cb3c3">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const std::vector&lt; bool &gt; &amp;arr)</td>
</tr>
<tr class="odd separator:a8d6adedb6b308d21cd8a02b68f6cb3c3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afe050b2957d0a1f416107909d919a772"
class="even memitem:afe050b2957d0a1f416107909d919a772">
<td colspan="2" class="memTemplParams"><span
id="afe050b2957d0a1f416107909d919a772"></span> template&lt;typename
BasicJsonType , typename T , enable_if_t&lt; std::is_convertible&lt; T,
BasicJsonType &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:afe050b2957d0a1f416107909d919a772">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>construct</strong> (BasicJsonType &amp;j,
const std::valarray&lt; T &gt; &amp;arr)</td>
</tr>
<tr class="even separator:afe050b2957d0a1f416107909d919a772">
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
