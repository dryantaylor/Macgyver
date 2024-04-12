---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::binary_writer\\< BasicJsonType, CharType \\>
  Class Template Reference"
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
- <a href="classdetail_1_1binary__writer.html"
  class="el">binary_writer</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Static Public Member
Functions](#pub-static-methods) \| [List of all
members](classdetail_1_1binary__writer-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::binary_writer\< BasicJsonType, CharType \> Class Template
Reference

</div>

</div>

</div>

<div class="contents">

serialization to CBOR and MessagePack values [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

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
<tr id="r_a5b4f1bfcd0f3f7b57060c059e008c45b"
class="even memitem:a5b4f1bfcd0f3f7b57060c059e008c45b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5b4f1bfcd0f3f7b57060c059e008c45b" class="el">binary_writer</a>
(<a href="namespacedetail.html#a558c0470e929e42aad8be2527da6c033"
class="el">output_adapter_t</a>&lt; CharType &gt; adapter)</td>
</tr>
<tr class="odd memdesc:a5b4f1bfcd0f3f7b57060c059e008c45b">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a binary writer<br />
</td>
</tr>
<tr class="even separator:a5b4f1bfcd0f3f7b57060c059e008c45b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1aae361b7492825979cbb80245b9c0d6"
class="odd memitem:a1aae361b7492825979cbb80245b9c0d6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a1aae361b7492825979cbb80245b9c0d6" class="el">write_bson</a>
(const BasicJsonType &amp;j)</td>
</tr>
<tr class="even separator:a1aae361b7492825979cbb80245b9c0d6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae6ab36b61e8ad346e75d9f9abc983d4c"
class="odd memitem:ae6ab36b61e8ad346e75d9f9abc983d4c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae6ab36b61e8ad346e75d9f9abc983d4c" class="el">write_cbor</a>
(const BasicJsonType &amp;j)</td>
</tr>
<tr class="even separator:ae6ab36b61e8ad346e75d9f9abc983d4c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_adc3dbefa80134d3530a1b3f1c9629586"
class="odd memitem:adc3dbefa80134d3530a1b3f1c9629586">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#adc3dbefa80134d3530a1b3f1c9629586" class="el">write_msgpack</a>
(const BasicJsonType &amp;j)</td>
</tr>
<tr class="even separator:adc3dbefa80134d3530a1b3f1c9629586">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a972bec9688cbc5673bb482bbe9543e2a"
class="odd memitem:a972bec9688cbc5673bb482bbe9543e2a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a972bec9688cbc5673bb482bbe9543e2a" class="el">write_ubjson</a>
(const BasicJsonType &amp;j, const bool use_count, const bool use_type,
const bool add_prefix=true, const bool use_bjdata=false)</td>
</tr>
<tr class="even separator:a972bec9688cbc5673bb482bbe9543e2a">
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
<tr id="r_a2822d4a58bbb0dc2198686da430e8906"
class="even memitem:a2822d4a58bbb0dc2198686da430e8906">
<td colspan="2" class="memTemplParams"><span
id="a2822d4a58bbb0dc2198686da430e8906"></span> template&lt;typename C =
CharType, enable_if_t&lt; std::is_signed&lt; C &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &amp;&amp;std::is_signed&lt; char &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &gt; * = nullptr&gt;</td>
</tr>
<tr class="odd memitem:a2822d4a58bbb0dc2198686da430e8906">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static constexpr CharType </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>to_char_type</strong> (std::uint8_t x)
noexcept</td>
</tr>
<tr class="even separator:a2822d4a58bbb0dc2198686da430e8906">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4bc03434de56f9c9afd24702922a7ec8"
class="odd memitem:a4bc03434de56f9c9afd24702922a7ec8">
<td colspan="2" class="memTemplParams"><span
id="a4bc03434de56f9c9afd24702922a7ec8"></span> template&lt;typename C =
CharType, enable_if_t&lt; std::is_signed&lt; C &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &amp;&amp;std::is_unsigned&lt; char &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &gt; * = nullptr&gt;</td>
</tr>
<tr class="even memitem:a4bc03434de56f9c9afd24702922a7ec8">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static CharType </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>to_char_type</strong> (std::uint8_t x)
noexcept</td>
</tr>
<tr class="odd separator:a4bc03434de56f9c9afd24702922a7ec8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2822d4a58bbb0dc2198686da430e8906"
class="even memitem:a2822d4a58bbb0dc2198686da430e8906">
<td colspan="2" class="memTemplParams"><span
id="a2822d4a58bbb0dc2198686da430e8906"></span> template&lt;typename C =
CharType, enable_if_t&lt; std::is_unsigned&lt; C &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &gt; * = nullptr&gt;</td>
</tr>
<tr class="odd memitem:a2822d4a58bbb0dc2198686da430e8906">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static constexpr CharType </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>to_char_type</strong> (std::uint8_t x)
noexcept</td>
</tr>
<tr class="even separator:a2822d4a58bbb0dc2198686da430e8906">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a91bfd3642a0f90c295f9ce79c9447be9"
class="odd memitem:a91bfd3642a0f90c295f9ce79c9447be9">
<td colspan="2" class="memTemplParams"><span
id="a91bfd3642a0f90c295f9ce79c9447be9"></span> template&lt;typename
InputCharType , typename C = CharType, enable_if_t&lt;
std::is_signed&lt; C &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &amp;&amp;std::is_signed&lt; char &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &amp;&amp;std::is_same&lt; char, typename
std::remove_cv&lt; InputCharType &gt;::type &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a> &gt; * = nullptr&gt;</td>
</tr>
<tr class="even memitem:a91bfd3642a0f90c295f9ce79c9447be9">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static constexpr CharType </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>to_char_type</strong> (InputCharType x)
noexcept</td>
</tr>
<tr class="odd separator:a91bfd3642a0f90c295f9ce79c9447be9">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType, typename CharType\>  
class detail::binary_writer\< BasicJsonType, CharType \>

</div>

serialization to CBOR and MessagePack values

</div>

## Constructor & Destructor Documentation

<span id="a5b4f1bfcd0f3f7b57060c059e008c45b"></span>

## <span class="permalink">[◆ ](#a5b4f1bfcd0f3f7b57060c059e008c45b)</span>binary_writer()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename CharType \>

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
<td class="memname"><a href="classdetail_1_1binary__writer.html"
class="el">detail::binary_writer</a>&lt; BasicJsonType, CharType
&gt;::binary_writer</td>
<td>(</td>
<td class="paramtype"><a
href="namespacedetail.html#a558c0470e929e42aad8be2527da6c033"
class="el">output_adapter_t</a>&lt; CharType &gt;</td>
<td class="paramname"><span
class="paramname"><em>adapter</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">explicit</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a binary writer

Parameters  
|        |         |                            |
|--------|---------|----------------------------|
| \[in\] | adapter | output adapter to write to |

</div>

</div>

## Member Function Documentation

<span id="a1aae361b7492825979cbb80245b9c0d6"></span>

## <span class="permalink">[◆ ](#a1aae361b7492825979cbb80245b9c0d6)</span>write_bson()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename CharType \>

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
<td class="memname">void <a href="classdetail_1_1binary__writer.html"
class="el">detail::binary_writer</a>&lt; BasicJsonType, CharType
&gt;::write_bson</td>
<td>(</td>
<td class="paramtype">const BasicJsonType &amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

Parameters  
|        |     |                         |
|--------|-----|-------------------------|
| \[in\] | j   | JSON value to serialize |

<!-- -->

Precondition  
j.type() == <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632aa8cfde6331bd59eb2ac96f8911c4b666"
class="el"
title="object (unordered set of name/value pairs)">value_t::object</a>

</div>

</div>

<span id="ae6ab36b61e8ad346e75d9f9abc983d4c"></span>

## <span class="permalink">[◆ ](#ae6ab36b61e8ad346e75d9f9abc983d4c)</span>write_cbor()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename CharType \>

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
<td class="memname">void <a href="classdetail_1_1binary__writer.html"
class="el">detail::binary_writer</a>&lt; BasicJsonType, CharType
&gt;::write_cbor</td>
<td>(</td>
<td class="paramtype">const BasicJsonType &amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

Parameters  
|        |     |                         |
|--------|-----|-------------------------|
| \[in\] | j   | JSON value to serialize |

</div>

</div>

<span id="adc3dbefa80134d3530a1b3f1c9629586"></span>

## <span class="permalink">[◆ ](#adc3dbefa80134d3530a1b3f1c9629586)</span>write_msgpack()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename CharType \>

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
<td class="memname">void <a href="classdetail_1_1binary__writer.html"
class="el">detail::binary_writer</a>&lt; BasicJsonType, CharType
&gt;::write_msgpack</td>
<td>(</td>
<td class="paramtype">const BasicJsonType &amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

Parameters  
|        |     |                         |
|--------|-----|-------------------------|
| \[in\] | j   | JSON value to serialize |

</div>

</div>

<span id="a972bec9688cbc5673bb482bbe9543e2a"></span>

## <span class="permalink">[◆ ](#a972bec9688cbc5673bb482bbe9543e2a)</span>write_ubjson()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename CharType \>

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
<td class="memname">void <a href="classdetail_1_1binary__writer.html"
class="el">detail::binary_writer</a>&lt; BasicJsonType, CharType
&gt;::write_ubjson</td>
<td>(</td>
<td class="paramtype">const BasicJsonType &amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_count</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_type</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>add_prefix</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_bjdata</em><span
class="paramdefsep"> = </span><span
class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

Parameters  
|        |            |                                                  |
|--------|------------|--------------------------------------------------|
| \[in\] | j          | JSON value to serialize                          |
| \[in\] | use_count  | whether to use '#' prefixes (optimized format)   |
| \[in\] | use_type   | whether to use '\$' prefixes (optimized format)  |
| \[in\] | add_prefix | whether prefixes need to be used for this value  |
| \[in\] | use_bjdata | whether write in BJData format, default is false |

</div>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
