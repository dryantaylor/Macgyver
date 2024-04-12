---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::output_stream_adapter\\< CharType \\> Class
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
- <a href="classdetail_1_1output__stream__adapter.html"
  class="el">output_stream_adapter</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [List of all
members](classdetail_1_1output__stream__adapter-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::output_stream_adapter\< CharType \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

output adapter for output streams [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for detail::output_stream_adapter\< CharType \>:

</div>

<div class="dyncontent">

<div class="center">

<img src="classdetail_1_1output__stream__adapter.png"
usemap="#detail::output_5Fstream_5Fadapter_3C_20CharType_20_3E_map" />

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
<tr id="r_a1fcebb3df911763e1d92caa2a5416620"
class="even memitem:a1fcebb3df911763e1d92caa2a5416620">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a1fcebb3df911763e1d92caa2a5416620"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>output_stream_adapter</strong>
(std::basic_ostream&lt; CharType &gt; &amp;s) noexcept</td>
</tr>
<tr class="odd separator:a1fcebb3df911763e1d92caa2a5416620">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4267cde53202637ff7d7b877fb9ac859"
class="even memitem:a4267cde53202637ff7d7b877fb9ac859">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4267cde53202637ff7d7b877fb9ac859" class="el">write_character</a>
(CharType c) override</td>
</tr>
<tr class="odd separator:a4267cde53202637ff7d7b877fb9ac859">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a19fd5667f311a1dcd86469c25c21d13d"
class="even memitem:a19fd5667f311a1dcd86469c25c21d13d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a19fd5667f311a1dcd86469c25c21d13d"
class="el">write_characters</a> (const CharType *s, std::size_t length)
override</td>
</tr>
<tr class="odd separator:a19fd5667f311a1dcd86469c25c21d13d">
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

template\<typename CharType\>  
class detail::output_stream_adapter\< CharType \>

</div>

output adapter for output streams

</div>

## Member Function Documentation

<span id="a4267cde53202637ff7d7b877fb9ac859"></span>

## <span class="permalink">[◆ ](#a4267cde53202637ff7d7b877fb9ac859)</span>write_character()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename CharType \>

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
href="classdetail_1_1output__stream__adapter.html"
class="el">detail::output_stream_adapter</a>&lt; CharType
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

<span id="a19fd5667f311a1dcd86469c25c21d13d"></span>

## <span class="permalink">[◆ ](#a19fd5667f311a1dcd86469c25c21d13d)</span>write_characters()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename CharType \>

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
href="classdetail_1_1output__stream__adapter.html"
class="el">detail::output_stream_adapter</a>&lt; CharType
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
