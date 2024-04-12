---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: adl_serializer\\< ValueType, typename \\> Struct
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

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](structadl__serializer-members.html)

</div>

<div class="headertitle">

<div class="title">

adl_serializer\< ValueType, typename \> Struct Template Reference

</div>

</div>

</div>

<div class="contents">

namespace for Niels Lohmann [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

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
<tr id="r_a5645c63fe43bd9b4ebc9917f9c99d0fd"
class="even memitem:a5645c63fe43bd9b4ebc9917f9c99d0fd">
<td colspan="2" class="memTemplParams">template&lt;typename
BasicJsonType , typename TargetType = ValueType&gt;</td>
</tr>
<tr class="odd memitem:a5645c63fe43bd9b4ebc9917f9c99d0fd">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static auto </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a5645c63fe43bd9b4ebc9917f9c99d0fd" class="el">from_json</a>
(BasicJsonType &amp;&amp;j, TargetType &amp;val)
noexcept(noexcept(::nlohmann::from_json(std::forward&lt; BasicJsonType
&gt;(j), val))) -&gt; decltype(::nlohmann::from_json(std::forward&lt;
BasicJsonType &gt;(j), val), void())</td>
</tr>
<tr class="even memdesc:a5645c63fe43bd9b4ebc9917f9c99d0fd">
<td class="mdescLeft"> </td>
<td class="mdescRight">convert a JSON value to any value type<br />
</td>
</tr>
<tr class="odd separator:a5645c63fe43bd9b4ebc9917f9c99d0fd">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1e06f0bcb63296fc306dbe4162a0f2a3"
class="even memitem:a1e06f0bcb63296fc306dbe4162a0f2a3">
<td colspan="2" class="memTemplParams">template&lt;typename
BasicJsonType , typename TargetType = ValueType&gt;</td>
</tr>
<tr class="odd memitem:a1e06f0bcb63296fc306dbe4162a0f2a3">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static auto </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a1e06f0bcb63296fc306dbe4162a0f2a3" class="el">from_json</a>
(BasicJsonType &amp;&amp;j)
noexcept(noexcept(::nlohmann::from_json(std::forward&lt; BasicJsonType
&gt;(j), <a href="structdetail_1_1identity__tag.html"
class="el">detail::identity_tag</a>&lt; TargetType &gt; {}))) -&gt;
decltype(::nlohmann::from_json(std::forward&lt; BasicJsonType &gt;(j),
<a href="structdetail_1_1identity__tag.html"
class="el">detail::identity_tag</a>&lt; TargetType &gt; {}))</td>
</tr>
<tr class="even memdesc:a1e06f0bcb63296fc306dbe4162a0f2a3">
<td class="mdescLeft"> </td>
<td class="mdescRight">convert a JSON value to any value type<br />
</td>
</tr>
<tr class="odd separator:a1e06f0bcb63296fc306dbe4162a0f2a3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0216149429fe899cf45cbf14e08e2166"
class="even memitem:a0216149429fe899cf45cbf14e08e2166">
<td colspan="2" class="memTemplParams">template&lt;typename
BasicJsonType , typename TargetType = ValueType&gt;</td>
</tr>
<tr class="odd memitem:a0216149429fe899cf45cbf14e08e2166">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static auto </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a0216149429fe899cf45cbf14e08e2166" class="el">to_json</a>
(BasicJsonType &amp;j, TargetType &amp;&amp;val)
noexcept(noexcept(::nlohmann::to_json(j, std::forward&lt; TargetType
&gt;(val)))) -&gt; decltype(::nlohmann::to_json(j, std::forward&lt;
TargetType &gt;(val)), void())</td>
</tr>
<tr class="even memdesc:a0216149429fe899cf45cbf14e08e2166">
<td class="mdescLeft"> </td>
<td class="mdescRight">convert any value type to a JSON value<br />
</td>
</tr>
<tr class="odd separator:a0216149429fe899cf45cbf14e08e2166">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename ValueType, typename\>  
struct adl_serializer\< ValueType, typename \>

</div>

namespace for Niels Lohmann

See also  
<https://github.com/nlohmann>

<!-- -->

Since  
version 1.0.0

default JSONSerializer template argument

This serializer ignores the template arguments and uses ADL
([argument-dependent
lookup](https://en.cppreference.com/w/cpp/language/adl)) for
serialization.

See also  
<https://json.nlohmann.me/api/adl_serializer/>

</div>

## Member Function Documentation

<span id="a1e06f0bcb63296fc306dbe4162a0f2a3"></span>

## <span class="permalink">[◆ ](#a1e06f0bcb63296fc306dbe4162a0f2a3)</span>from_json() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename ValueType , typename \>

</div>

<div class="memtemplate">

template\<typename BasicJsonType , typename TargetType = ValueType\>

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
<td class="memname">static auto <a href="structadl__serializer.html"
class="el">adl_serializer</a>&lt; ValueType, typename
&gt;::from_json</td>
<td>(</td>
<td class="paramtype">BasicJsonType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span></td>
<td>)</td>
<td>-&gt;
decltype(::nlohmann::from_json(std::forward&lt;BasicJsonType&gt;(j), <a
href="structdetail_1_1identity__tag.html"
class="el">detail::identity_tag</a>&lt;TargetType&gt; {}))</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">static</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

convert a JSON value to any value type

See also  
<https://json.nlohmann.me/api/adl_serializer/from_json/>

</div>

</div>

<span id="a5645c63fe43bd9b4ebc9917f9c99d0fd"></span>

## <span class="permalink">[◆ ](#a5645c63fe43bd9b4ebc9917f9c99d0fd)</span>from_json() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename ValueType , typename \>

</div>

<div class="memtemplate">

template\<typename BasicJsonType , typename TargetType = ValueType\>

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
<td class="memname">static auto <a href="structadl__serializer.html"
class="el">adl_serializer</a>&lt; ValueType, typename
&gt;::from_json</td>
<td>(</td>
<td class="paramtype">BasicJsonType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">TargetType &amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span> )
-&gt;
decltype(::nlohmann::from_json(std::forward&lt;BasicJsonType&gt;(j),
val), void())</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">static</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

convert a JSON value to any value type

See also  
<https://json.nlohmann.me/api/adl_serializer/from_json/>

</div>

</div>

<span id="a0216149429fe899cf45cbf14e08e2166"></span>

## <span class="permalink">[◆ ](#a0216149429fe899cf45cbf14e08e2166)</span>to_json()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename ValueType , typename \>

</div>

<div class="memtemplate">

template\<typename BasicJsonType , typename TargetType = ValueType\>

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
<td class="memname">static auto <a href="structadl__serializer.html"
class="el">adl_serializer</a>&lt; ValueType, typename &gt;::to_json</td>
<td>(</td>
<td class="paramtype">BasicJsonType &amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">TargetType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span> )
-&gt; decltype(::nlohmann::to_json(j,
std::forward&lt;TargetType&gt;(val)), void())</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">static</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

convert any value type to a JSON value

See also  
<https://json.nlohmann.me/api/adl_serializer/to_json/>

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
