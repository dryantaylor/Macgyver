---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::output_vector_adapter\\< CharType,
  AllocatorType \\> Class Template Reference"
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
- <a href="classdetail_1_1output__vector__adapter.html"
  class="el">output_vector_adapter</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [List of all
members](classdetail_1_1output__vector__adapter-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::output_vector_adapter\< CharType, AllocatorType \> Class
Template Reference

</div>

</div>

</div>

<div class="contents">

output adapter for byte vectors [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for detail::output_vector_adapter\< CharType,
AllocatorType \>:

</div>

<div class="dyncontent">

<div class="center">

<img src="classdetail_1_1output__vector__adapter.png"
usemap="#detail::output_5Fvector_5Fadapter_3C_20CharType_2C_20AllocatorType_20_3E_map" />

</div>

</div>

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
<tr id="r_a24c27c9c4437f007083ad40c1ca89924"
class="even memitem:a24c27c9c4437f007083ad40c1ca89924">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a24c27c9c4437f007083ad40c1ca89924"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>output_vector_adapter</strong>
(std::vector&lt; CharType, AllocatorType &gt; &amp;vec) noexcept</td>
</tr>
<tr class="odd separator:a24c27c9c4437f007083ad40c1ca89924">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab2f37bf696c716ddb6c0b88b30304da5"
class="even memitem:ab2f37bf696c716ddb6c0b88b30304da5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab2f37bf696c716ddb6c0b88b30304da5" class="el">write_character</a>
(CharType c) override</td>
</tr>
<tr class="odd separator:ab2f37bf696c716ddb6c0b88b30304da5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6744f381ec104be129327caadcede1f7"
class="even memitem:a6744f381ec104be129327caadcede1f7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6744f381ec104be129327caadcede1f7"
class="el">write_characters</a> (const CharType *s, std::size_t length)
override</td>
</tr>
<tr class="odd separator:a6744f381ec104be129327caadcede1f7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr
class="even inherit_header pub_methods_structdetail_1_1output__adapter__protocol">
<td colspan="2"
onclick="javascript:dynsection.toggleInherit(&#39;pub_methods_structdetail_1_1output__adapter__protocol&#39;)"><img
src="closed.png" alt="-" /> Public Member Functions inherited from <a
href="structdetail_1_1output__adapter__protocol.html"
class="el">detail::output_adapter_protocol&lt; CharType &gt;</a></td>
</tr>
<tr id="r_a03466aec8b97f99d19e27f0f05c66655"
class="odd memitem:a03466aec8b97f99d19e27f0f05c66655 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight"
data-valign="bottom"><strong>output_adapter_protocol</strong> (const <a
href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;)=default</td>
</tr>
<tr
class="even separator:a03466aec8b97f99d19e27f0f05c66655 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a641001ae666e338cb9753901a8a3ef91"
class="odd memitem:a641001ae666e338cb9753901a8a3ef91 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight"
data-valign="bottom"><strong>output_adapter_protocol</strong> (<a
href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;&amp;) noexcept=default</td>
</tr>
<tr
class="even separator:a641001ae666e338cb9753901a8a3ef91 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4f9a119946157498ea36e1b92ec90a05"
class="odd memitem:a4f9a119946157498ea36e1b92ec90a05 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const <a href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;)=default</td>
</tr>
<tr
class="even separator:a4f9a119946157498ea36e1b92ec90a05 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae2abfac28a47d21eb1ece0a2b7f06ff5"
class="odd memitem:ae2abfac28a47d21eb1ece0a2b7f06ff5 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;&amp;) noexcept=default</td>
</tr>
<tr
class="even separator:ae2abfac28a47d21eb1ece0a2b7f06ff5 inherit pub_methods_structdetail_1_1output__adapter__protocol">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename CharType, typename AllocatorType =
std::allocator\<CharType\>\>  
class detail::output_vector_adapter\< CharType, AllocatorType \>

</div>

output adapter for byte vectors

</div>

## Member Function Documentation

<span id="ab2f37bf696c716ddb6c0b88b30304da5"></span>

## <span class="permalink">[◆ ](#ab2f37bf696c716ddb6c0b88b30304da5)</span>write_character()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename CharType , typename AllocatorType =
std::allocator\<CharType\>\>

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
<td class="memname">void <a
href="classdetail_1_1output__vector__adapter.html"
class="el">detail::output_vector_adapter</a>&lt; CharType, AllocatorType
&gt;::write_character</td>
<td>(</td>
<td class="paramtype">CharType</td>
<td class="paramname"><span class="paramname"><em>c</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">override</span><span
class="mlabel">virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

Implements <a href="structdetail_1_1output__adapter__protocol.html"
class="el">detail::output_adapter_protocol&lt; CharType &gt;</a>.

</div>

</div>

<span id="a6744f381ec104be129327caadcede1f7"></span>

## <span class="permalink">[◆ ](#a6744f381ec104be129327caadcede1f7)</span>write_characters()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename CharType , typename AllocatorType =
std::allocator\<CharType\>\>

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
<td class="memname">void <a
href="classdetail_1_1output__vector__adapter.html"
class="el">detail::output_vector_adapter</a>&lt; CharType, AllocatorType
&gt;::write_characters</td>
<td>(</td>
<td class="paramtype">const CharType *</td>
<td class="paramname"><span class="paramname"><em>s</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">std::size_t</td>
<td class="paramname"><span
class="paramname"><em>length</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">override</span><span
class="mlabel">virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

Implements <a href="structdetail_1_1output__adapter__protocol.html"
class="el">detail::output_adapter_protocol&lt; CharType &gt;</a>.

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
