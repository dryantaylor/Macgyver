---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::output_adapter_protocol\\< CharType \\> Struct
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
- <a href="structdetail_1_1output__adapter__protocol.html"
  class="el">output_adapter_protocol</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [List of all
members](structdetail_1_1output__adapter__protocol-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::output_adapter_protocol\< CharType \> Struct Template
Reference<span class="mlabels"><span class="mlabel">abstract</span></span>

</div>

</div>

</div>

<div class="contents">

abstract output adapter interface [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for detail::output_adapter_protocol\< CharType \>:

</div>

<div class="dyncontent">

<div class="center">

<img src="structdetail_1_1output__adapter__protocol.png"
usemap="#detail::output_5Fadapter_5Fprotocol_3C_20CharType_20_3E_map" />

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
<tr id="r_a57fbeab6c9e6dac2def4f0a7708b807a"
class="even memitem:a57fbeab6c9e6dac2def4f0a7708b807a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a57fbeab6c9e6dac2def4f0a7708b807a"></span>
virtual void </td>
<td class="memItemRight"
data-valign="bottom"><strong>write_character</strong> (CharType
c)=0</td>
</tr>
<tr class="odd separator:a57fbeab6c9e6dac2def4f0a7708b807a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afefb88bb4c134a02e136aaf69d0ecee9"
class="even memitem:afefb88bb4c134a02e136aaf69d0ecee9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="afefb88bb4c134a02e136aaf69d0ecee9"></span>
virtual void </td>
<td class="memItemRight"
data-valign="bottom"><strong>write_characters</strong> (const CharType
*s, std::size_t length)=0</td>
</tr>
<tr class="odd separator:afefb88bb4c134a02e136aaf69d0ecee9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a03466aec8b97f99d19e27f0f05c66655"
class="even memitem:a03466aec8b97f99d19e27f0f05c66655">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a03466aec8b97f99d19e27f0f05c66655"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>output_adapter_protocol</strong> (const <a
href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;)=default</td>
</tr>
<tr class="odd separator:a03466aec8b97f99d19e27f0f05c66655">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a641001ae666e338cb9753901a8a3ef91"
class="even memitem:a641001ae666e338cb9753901a8a3ef91">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a641001ae666e338cb9753901a8a3ef91"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>output_adapter_protocol</strong> (<a
href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;&amp;) noexcept=default</td>
</tr>
<tr class="odd separator:a641001ae666e338cb9753901a8a3ef91">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4f9a119946157498ea36e1b92ec90a05"
class="even memitem:a4f9a119946157498ea36e1b92ec90a05">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4f9a119946157498ea36e1b92ec90a05"></span>
<a href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const <a href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;)=default</td>
</tr>
<tr class="odd separator:a4f9a119946157498ea36e1b92ec90a05">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae2abfac28a47d21eb1ece0a2b7f06ff5"
class="even memitem:ae2abfac28a47d21eb1ece0a2b7f06ff5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae2abfac28a47d21eb1ece0a2b7f06ff5"></span>
<a href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="structdetail_1_1output__adapter__protocol.html"
class="el">output_adapter_protocol</a> &amp;&amp;) noexcept=default</td>
</tr>
<tr class="odd separator:ae2abfac28a47d21eb1ece0a2b7f06ff5">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename CharType\>  
struct detail::output_adapter_protocol\< CharType \>

</div>

abstract output adapter interface

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
