---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::binary_reader\\< BasicJsonType,
  InputAdapterType, SAX \\> Class Template Reference"
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
- <a href="classdetail_1_1binary__reader.html"
  class="el">binary_reader</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [List of all
members](classdetail_1_1binary__reader-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::binary_reader\< BasicJsonType, InputAdapterType, SAX \> Class
Template Reference

</div>

</div>

</div>

<div class="contents">

deserialization of CBOR, MessagePack, and UBJSON values
[More...](#details)

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
<tr id="r_a5dc3e9216177efe30686876d3faccf52"
class="even memitem:a5dc3e9216177efe30686876d3faccf52">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5dc3e9216177efe30686876d3faccf52" class="el">binary_reader</a>
(InputAdapterType &amp;&amp;adapter, const <a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a> format=input_format_t::json) noexcept</td>
</tr>
<tr class="odd memdesc:a5dc3e9216177efe30686876d3faccf52">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a binary reader<br />
</td>
</tr>
<tr class="even separator:a5dc3e9216177efe30686876d3faccf52">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a03d3ad5fd319550b8ca4e54ddcf46ba0"
class="odd memitem:a03d3ad5fd319550b8ca4e54ddcf46ba0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a03d3ad5fd319550b8ca4e54ddcf46ba0"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>binary_reader</strong> (const <a
href="classdetail_1_1binary__reader.html" class="el">binary_reader</a>
&amp;)=delete</td>
</tr>
<tr class="even separator:a03d3ad5fd319550b8ca4e54ddcf46ba0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4197fcaec6f876fd9019c0f6a48c7f0d"
class="odd memitem:a4197fcaec6f876fd9019c0f6a48c7f0d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4197fcaec6f876fd9019c0f6a48c7f0d"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>binary_reader</strong> (<a
href="classdetail_1_1binary__reader.html" class="el">binary_reader</a>
&amp;&amp;)=default</td>
</tr>
<tr class="even separator:a4197fcaec6f876fd9019c0f6a48c7f0d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a66cae2a279b02a0f575866d7c26445bc"
class="odd memitem:a66cae2a279b02a0f575866d7c26445bc">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a66cae2a279b02a0f575866d7c26445bc"></span>
<a href="classdetail_1_1binary__reader.html"
class="el">binary_reader</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const <a href="classdetail_1_1binary__reader.html"
class="el">binary_reader</a> &amp;)=delete</td>
</tr>
<tr class="even separator:a66cae2a279b02a0f575866d7c26445bc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afe5457eb25503d02f42d4e558dbbf554"
class="odd memitem:afe5457eb25503d02f42d4e558dbbf554">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="afe5457eb25503d02f42d4e558dbbf554"></span>
<a href="classdetail_1_1binary__reader.html"
class="el">binary_reader</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1binary__reader.html"
class="el">binary_reader</a> &amp;&amp;)=default</td>
</tr>
<tr class="even separator:afe5457eb25503d02f42d4e558dbbf554">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8e1b5452ae426e1d7b48761859e7f52d"
class="odd memitem:a8e1b5452ae426e1d7b48761859e7f52d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a8e1b5452ae426e1d7b48761859e7f52d" class="el">sax_parse</a>
(const <a href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a> format, json_sax_t *sax_, const bool <a
href="namespacedetail.html#abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792"
class="el">strict</a>=true, const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a> tag_handler=<a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592acb5e100e5a9a3e7f6d1fd97512215282"
class="el">cbor_tag_handler_t::error</a>)</td>
</tr>
<tr class="even separator:a8e1b5452ae426e1d7b48761859e7f52d">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType, typename InputAdapterType, typename
SAX = json_sax_dom_parser\<BasicJsonType\>\>  
class detail::binary_reader\< BasicJsonType, InputAdapterType, SAX \>

</div>

deserialization of CBOR, MessagePack, and UBJSON values

</div>

## Constructor & Destructor Documentation

<span id="a5dc3e9216177efe30686876d3faccf52"></span>

## <span class="permalink">[◆ ](#a5dc3e9216177efe30686876d3faccf52)</span>binary_reader()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename InputAdapterType , typename
SAX = json_sax_dom_parser\<BasicJsonType\>\>

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
<td class="memname"><a href="classdetail_1_1binary__reader.html"
class="el">detail::binary_reader</a>&lt; BasicJsonType,
InputAdapterType, SAX &gt;::binary_reader</td>
<td>(</td>
<td class="paramtype">InputAdapterType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>adapter</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a></td>
<td class="paramname"><span class="paramname"><em>format</em><span
class="paramdefsep"> = </span><span
class="paramdefval">input_format_t::json</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">explicit</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a binary reader

Parameters  
|        |         |                            |
|--------|---------|----------------------------|
| \[in\] | adapter | input adapter to read from |

</div>

</div>

## Member Function Documentation

<span id="a8e1b5452ae426e1d7b48761859e7f52d"></span>

## <span class="permalink">[◆ ](#a8e1b5452ae426e1d7b48761859e7f52d)</span>sax_parse()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename InputAdapterType , typename
SAX = json_sax_dom_parser\<BasicJsonType\>\>

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
<td class="memname">bool <a href="classdetail_1_1binary__reader.html"
class="el">detail::binary_reader</a>&lt; BasicJsonType,
InputAdapterType, SAX &gt;::sax_parse</td>
<td>(</td>
<td class="paramtype">const <a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a></td>
<td class="paramname"><span class="paramname"><em>format</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">json_sax_t *</td>
<td class="paramname"><span class="paramname"><em>sax_</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a></td>
<td class="paramname"><span class="paramname"><em>tag_handler</em><span
class="paramdefsep"> = </span><span class="paramdefval"><a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592acb5e100e5a9a3e7f6d1fd97512215282"
class="el">cbor_tag_handler_t::error</a></span></span> )</td>
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
|        |             |                                                      |
|--------|-------------|------------------------------------------------------|
| \[in\] | format      | the binary format to parse                           |
| \[in\] | sax\_       | a SAX event processor                                |
| \[in\] | strict      | whether to expect the input to be consumed completed |
| \[in\] | tag_handler | how to treat CBOR tags                               |

<!-- -->

Returns  
whether parsing was successful

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
