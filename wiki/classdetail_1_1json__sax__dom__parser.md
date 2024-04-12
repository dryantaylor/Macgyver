---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::json_sax_dom_parser\\< BasicJsonType \\> Class
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
- <a href="classdetail_1_1json__sax__dom__parser.html"
  class="el">json_sax_dom_parser</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[List of all
members](classdetail_1_1json__sax__dom__parser-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::json_sax_dom_parser\< BasicJsonType \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

SAX implementation to create a JSON value from SAX events.
[More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

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
<tr id="r_a8a7ba3deeb48e47b4a7705602c9f8807"
class="even memitem:a8a7ba3deeb48e47b4a7705602c9f8807">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8a7ba3deeb48e47b4a7705602c9f8807"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_integer_t</strong> = typename
BasicJsonType::number_integer_t</td>
</tr>
<tr class="odd separator:a8a7ba3deeb48e47b4a7705602c9f8807">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a80d34b386ee1cbfe353f640bc4745317"
class="even memitem:a80d34b386ee1cbfe353f640bc4745317">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a80d34b386ee1cbfe353f640bc4745317"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_unsigned_t</strong> = typename
BasicJsonType::number_unsigned_t</td>
</tr>
<tr class="odd separator:a80d34b386ee1cbfe353f640bc4745317">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af3fbbe21ea4ec3ae7ba8c9a5b8d736b3"
class="even memitem:af3fbbe21ea4ec3ae7ba8c9a5b8d736b3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="af3fbbe21ea4ec3ae7ba8c9a5b8d736b3"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_float_t</strong> = typename
BasicJsonType::number_float_t</td>
</tr>
<tr class="odd separator:af3fbbe21ea4ec3ae7ba8c9a5b8d736b3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6616e04b1c1c9ecae11a49a5302720e6"
class="even memitem:a6616e04b1c1c9ecae11a49a5302720e6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6616e04b1c1c9ecae11a49a5302720e6"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>string_t</strong>
= typename BasicJsonType::string_t</td>
</tr>
<tr class="odd separator:a6616e04b1c1c9ecae11a49a5302720e6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ada36726394d0347cb9a08da4180d16de"
class="even memitem:ada36726394d0347cb9a08da4180d16de">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ada36726394d0347cb9a08da4180d16de"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>binary_t</strong>
= typename BasicJsonType::binary_t</td>
</tr>
<tr class="odd separator:ada36726394d0347cb9a08da4180d16de">
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
<td colspan="2"><h2 id="public-member-functions"
class="groupheader"><span id="pub-methods"></span> Public Member
Functions</h2></td>
</tr>
<tr id="r_a3ee72f78d1ebdd8f8573ccf2b8e3ea6f"
class="even memitem:a3ee72f78d1ebdd8f8573ccf2b8e3ea6f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3ee72f78d1ebdd8f8573ccf2b8e3ea6f"
class="el">json_sax_dom_parser</a> (BasicJsonType &amp;r, const bool
allow_exceptions_=true)</td>
</tr>
<tr class="odd separator:a3ee72f78d1ebdd8f8573ccf2b8e3ea6f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a16b31b6cfdc0eec28c485a48b2c58217"
class="even memitem:a16b31b6cfdc0eec28c485a48b2c58217">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a16b31b6cfdc0eec28c485a48b2c58217"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>json_sax_dom_parser</strong> (const <a
href="classdetail_1_1json__sax__dom__parser.html"
class="el">json_sax_dom_parser</a> &amp;)=delete</td>
</tr>
<tr class="odd separator:a16b31b6cfdc0eec28c485a48b2c58217">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9e4e41ae2c56824ee768cfeceace30d3"
class="even memitem:a9e4e41ae2c56824ee768cfeceace30d3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9e4e41ae2c56824ee768cfeceace30d3"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>json_sax_dom_parser</strong> (<a
href="classdetail_1_1json__sax__dom__parser.html"
class="el">json_sax_dom_parser</a> &amp;&amp;)=default</td>
</tr>
<tr class="odd separator:a9e4e41ae2c56824ee768cfeceace30d3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8c9b29ae6e5268d3d0884b6623ae3cae"
class="even memitem:a8c9b29ae6e5268d3d0884b6623ae3cae">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8c9b29ae6e5268d3d0884b6623ae3cae"></span>
<a href="classdetail_1_1json__sax__dom__parser.html"
class="el">json_sax_dom_parser</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const <a href="classdetail_1_1json__sax__dom__parser.html"
class="el">json_sax_dom_parser</a> &amp;)=delete</td>
</tr>
<tr class="odd separator:a8c9b29ae6e5268d3d0884b6623ae3cae">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3b3c5bbf633738217fd14d9e05a322f3"
class="even memitem:a3b3c5bbf633738217fd14d9e05a322f3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3b3c5bbf633738217fd14d9e05a322f3"></span>
<a href="classdetail_1_1json__sax__dom__parser.html"
class="el">json_sax_dom_parser</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1json__sax__dom__parser.html"
class="el">json_sax_dom_parser</a> &amp;&amp;)=default</td>
</tr>
<tr class="odd separator:a3b3c5bbf633738217fd14d9e05a322f3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a414cc4f54b4a5d69504ae415e279a727"
class="even memitem:a414cc4f54b4a5d69504ae415e279a727">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a414cc4f54b4a5d69504ae415e279a727"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>null</strong>
()</td>
</tr>
<tr class="odd separator:a414cc4f54b4a5d69504ae415e279a727">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aafe33f4ea1ae0a03242e6cbd8d380a52"
class="even memitem:aafe33f4ea1ae0a03242e6cbd8d380a52">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aafe33f4ea1ae0a03242e6cbd8d380a52"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>boolean</strong>
(bool val)</td>
</tr>
<tr class="odd separator:aafe33f4ea1ae0a03242e6cbd8d380a52">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8362e0fba0cd0f96af11a94ed5f02d64"
class="even memitem:a8362e0fba0cd0f96af11a94ed5f02d64">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8362e0fba0cd0f96af11a94ed5f02d64"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_integer</strong> (number_integer_t
val)</td>
</tr>
<tr class="odd separator:a8362e0fba0cd0f96af11a94ed5f02d64">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a82df1690cf1e76ee4b47da944f6bca70"
class="even memitem:a82df1690cf1e76ee4b47da944f6bca70">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a82df1690cf1e76ee4b47da944f6bca70"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_unsigned</strong> (number_unsigned_t
val)</td>
</tr>
<tr class="odd separator:a82df1690cf1e76ee4b47da944f6bca70">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ace74cb6adc6a0c386d9e45ba6cbd4329"
class="even memitem:ace74cb6adc6a0c386d9e45ba6cbd4329">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ace74cb6adc6a0c386d9e45ba6cbd4329"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_float</strong> (number_float_t val,
const string_t &amp;)</td>
</tr>
<tr class="odd separator:ace74cb6adc6a0c386d9e45ba6cbd4329">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3c989c4cbb0acd034f5cc31018830885"
class="even memitem:a3c989c4cbb0acd034f5cc31018830885">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3c989c4cbb0acd034f5cc31018830885"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>string</strong>
(string_t &amp;val)</td>
</tr>
<tr class="odd separator:a3c989c4cbb0acd034f5cc31018830885">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9cda315021b356776bed7600f782abde"
class="even memitem:a9cda315021b356776bed7600f782abde">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9cda315021b356776bed7600f782abde"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>binary</strong>
(binary_t &amp;val)</td>
</tr>
<tr class="odd separator:a9cda315021b356776bed7600f782abde">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7a3559ee198992550caad696a9c002ff"
class="even memitem:a7a3559ee198992550caad696a9c002ff">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a7a3559ee198992550caad696a9c002ff"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>start_object</strong> (std::size_t
len)</td>
</tr>
<tr class="odd separator:a7a3559ee198992550caad696a9c002ff">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af71738af6db40114169d3171a7cb1da0"
class="even memitem:af71738af6db40114169d3171a7cb1da0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="af71738af6db40114169d3171a7cb1da0"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>key</strong>
(string_t &amp;val)</td>
</tr>
<tr class="odd separator:af71738af6db40114169d3171a7cb1da0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acfee569536d31144551a9e37c0b07ee5"
class="even memitem:acfee569536d31144551a9e37c0b07ee5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="acfee569536d31144551a9e37c0b07ee5"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>end_object</strong> ()</td>
</tr>
<tr class="odd separator:acfee569536d31144551a9e37c0b07ee5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af6e857ad7aaf6eba2440c67d4b5f360e"
class="even memitem:af6e857ad7aaf6eba2440c67d4b5f360e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="af6e857ad7aaf6eba2440c67d4b5f360e"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>start_array</strong> (std::size_t len)</td>
</tr>
<tr class="odd separator:af6e857ad7aaf6eba2440c67d4b5f360e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abc555200fe32bcecc76d435a17ea732b"
class="even memitem:abc555200fe32bcecc76d435a17ea732b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="abc555200fe32bcecc76d435a17ea732b"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>end_array</strong>
()</td>
</tr>
<tr class="odd separator:abc555200fe32bcecc76d435a17ea732b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3f26893075e90608c97b39d1e809cb60"
class="even memitem:a3f26893075e90608c97b39d1e809cb60">
<td colspan="2" class="memTemplParams"><span
id="a3f26893075e90608c97b39d1e809cb60"></span> template&lt;class
Exception &gt;</td>
</tr>
<tr class="odd memitem:a3f26893075e90608c97b39d1e809cb60">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>parse_error</strong> (std::size_t, const
std::string &amp;, const Exception &amp;ex)</td>
</tr>
<tr class="even separator:a3f26893075e90608c97b39d1e809cb60">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad6cfc4a7cc36b9d5b73fb7ddff6409cf"
class="odd memitem:ad6cfc4a7cc36b9d5b73fb7ddff6409cf">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad6cfc4a7cc36b9d5b73fb7ddff6409cf"></span>
constexpr bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>is_errored</strong> () const</td>
</tr>
<tr class="even separator:ad6cfc4a7cc36b9d5b73fb7ddff6409cf">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType\>  
class detail::json_sax_dom_parser\< BasicJsonType \>

</div>

SAX implementation to create a JSON value from SAX events.

This class implements the
<a href="structjson__sax.html" class="el">json_sax</a> interface and
processes the SAX events to create a JSON value which makes it basically
a DOM parser. The structure or hierarchy of the JSON value is managed by
the stack `ref_stack` which contains a pointer to the respective array
or object for each recursion depth.

After successful parsing, the value that is passed by reference to the
constructor contains the parsed value.

Template Parameters  
|               |               |
|---------------|---------------|
| BasicJsonType | the JSON type |

</div>

## Constructor & Destructor Documentation

<span id="a3ee72f78d1ebdd8f8573ccf2b8e3ea6f"></span>

## <span class="permalink">[◆ ](#a3ee72f78d1ebdd8f8573ccf2b8e3ea6f)</span>json_sax_dom_parser()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

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
<td class="memname"><a href="classdetail_1_1json__sax__dom__parser.html"
class="el">detail::json_sax_dom_parser</a>&lt; BasicJsonType
&gt;::json_sax_dom_parser</td>
<td>(</td>
<td class="paramtype">BasicJsonType &amp;</td>
<td class="paramname"><span class="paramname"><em>r</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions_</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
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

Parameters  
|            |                    |                                                             |
|------------|--------------------|-------------------------------------------------------------|
| \[in,out\] | r                  | reference to a JSON value that is manipulated while parsing |
| \[in\]     | allow_exceptions\_ | whether parse errors yield exceptions                       |

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
