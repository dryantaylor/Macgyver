---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::is_compatible_integer_type_impl\\<
  RealIntegerType, CompatibleNumberIntegerType, enable_if_t\\<
  std::is_integral\\< RealIntegerType \\>::value &&std::is_integral\\<
  CompatibleNumberIntegerType \\>::value &&!std::is_same\\< bool,
  CompatibleNumberIntegerType \\>::value \\> \\> Struct Template Reference"
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
  href="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2.html"
  class="el">is_compatible_integer_type_impl&lt; RealIntegerType,
  CompatibleNumberIntegerType, enable_if_t&lt; std::is_integral&lt;
  RealIntegerType &gt;::value &amp;&amp;std::is_integral&lt;
  CompatibleNumberIntegerType &gt;::value &amp;&amp;!std::is_same&lt;
  bool, CompatibleNumberIntegerType &gt;::value &gt; &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Static Public
Attributes](#pub-static-attribs) \| [List of all
members](structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numbeb0a2c0124a9be3afea488d5e73b1672.html)

</div>

<div class="headertitle">

<div class="title">

detail::is_compatible_integer_type_impl\< RealIntegerType,
CompatibleNumberIntegerType, enable_if_t\< std::is_integral\<
RealIntegerType \>::value &&std::is_integral\<
CompatibleNumberIntegerType \>::value &&!std::is_same\< bool,
CompatibleNumberIntegerType \>::value \> \> Struct Template Reference

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
<tr id="r_a57e63b51f11dce7bebf325582a6c3986"
class="even memitem:a57e63b51f11dce7bebf325582a6c3986">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a57e63b51f11dce7bebf325582a6c3986"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>RealLimits</strong> =
std::numeric_limits&lt;RealIntegerType&gt;</td>
</tr>
<tr class="odd separator:a57e63b51f11dce7bebf325582a6c3986">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9a9e09e41a061d0ede6046201339e2e8"
class="even memitem:a9a9e09e41a061d0ede6046201339e2e8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9a9e09e41a061d0ede6046201339e2e8"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>CompatibleLimits</strong> =
std::numeric_limits&lt;CompatibleNumberIntegerType&gt;</td>
</tr>
<tr class="odd separator:a9a9e09e41a061d0ede6046201339e2e8">
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
<tr id="r_a1a36751d3524428ec5e23b6ca3228a0d"
class="even memitem:a1a36751d3524428ec5e23b6ca3228a0d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static constexpr auto </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a1a36751d3524428ec5e23b6ca3228a0d" class="el">value</a></td>
</tr>
<tr class="odd separator:a1a36751d3524428ec5e23b6ca3228a0d">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Data Documentation

<span id="a1a36751d3524428ec5e23b6ca3228a0d"></span>

## <span class="permalink">[◆ ](#a1a36751d3524428ec5e23b6ca3228a0d)</span>value

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RealIntegerType , typename
CompatibleNumberIntegerType \>

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
<td class="memname">constexpr auto <a
href="structdetail_1_1is__compatible__integer__type__impl.html"
class="el">detail::is_compatible_integer_type_impl</a>&lt;
RealIntegerType, CompatibleNumberIntegerType, enable_if_t&lt;
std::is_integral&lt; RealIntegerType &gt;::value
&amp;&amp;std::is_integral&lt; CompatibleNumberIntegerType &gt;::value
&amp;&amp;!std::is_same&lt; bool, CompatibleNumberIntegerType
&gt;::value &gt; &gt;::value</td>
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

is_constructible\<RealIntegerType,

</div>

<div class="line">

CompatibleNumberIntegerType\>::value &&

</div>

<div class="line">

CompatibleLimits::is_integer &&

</div>

<div class="line">

RealLimits::is_signed == CompatibleLimits::is_signed

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
