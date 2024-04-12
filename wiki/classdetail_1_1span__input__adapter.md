---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::span_input_adapter Class Reference"
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
- <a href="classdetail_1_1span__input__adapter.html"
  class="el">span_input_adapter</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [List of all
members](classdetail_1_1span__input__adapter-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::span_input_adapter Class Reference

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
<td colspan="2"><h2 id="public-member-functions"
class="groupheader"><span id="pub-methods"></span> Public Member
Functions</h2></td>
</tr>
<tr id="r_a100cb2415f6ad4fb60e3848569ed20dc"
class="even memitem:a100cb2415f6ad4fb60e3848569ed20dc">
<td colspan="2" class="memTemplParams"><span
id="a100cb2415f6ad4fb60e3848569ed20dc"></span> template&lt;typename
CharT , typename std::enable_if&lt; std::is_pointer&lt; CharT &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &amp;&amp;std::is_integral&lt; typename
std::remove_pointer&lt; CharT &gt;::type &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &amp;&amp;sizeof(typename std::remove_pointer&lt;
CharT &gt;::type)==1, int &gt;::type = 0&gt;</td>
</tr>
<tr class="odd memitem:a100cb2415f6ad4fb60e3848569ed20dc">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>span_input_adapter</strong> (CharT b,
std::size_t l)</td>
</tr>
<tr class="even separator:a100cb2415f6ad4fb60e3848569ed20dc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8f3a694242ffd71722d292ffa9156e79"
class="odd memitem:a8f3a694242ffd71722d292ffa9156e79">
<td colspan="2" class="memTemplParams"><span
id="a8f3a694242ffd71722d292ffa9156e79"></span> template&lt;class
IteratorType , typename std::enable_if&lt; std::is_same&lt; typename <a
href="structdetail_1_1iterator__traits.html"
class="el">iterator_traits</a>&lt; IteratorType &gt;::iterator_category,
std::random_access_iterator_tag &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a>, int &gt;::type = 0&gt;</td>
</tr>
<tr class="even memitem:a8f3a694242ffd71722d292ffa9156e79">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>span_input_adapter</strong> (IteratorType
first, IteratorType last)</td>
</tr>
<tr class="odd separator:a8f3a694242ffd71722d292ffa9156e79">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_adaf5823194cdd254da0ba4f550e77904"
class="even memitem:adaf5823194cdd254da0ba4f550e77904">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="adaf5823194cdd254da0ba4f550e77904"></span>
contiguous_bytes_input_adapter &amp;&amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>get</strong>
()</td>
</tr>
<tr class="odd separator:adaf5823194cdd254da0ba4f550e77904">
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
