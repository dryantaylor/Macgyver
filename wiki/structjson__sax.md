---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: json_sax\\< BasicJsonType \\> Struct Template Reference"
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

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[List of all members](structjson__sax-members.html)

</div>

<div class="headertitle">

<div class="title">

json_sax\< BasicJsonType \> Struct Template
Reference<span class="mlabels"><span class="mlabel">abstract</span></span>

</div>

</div>

</div>

<div class="contents">

SAX interface. [More...](#details)

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
<tr id="r_a5fd59c56514447ab1a7c5e7f0ab24601"
class="even memitem:a5fd59c56514447ab1a7c5e7f0ab24601">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a5fd59c56514447ab1a7c5e7f0ab24601"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_integer_t</strong> = typename
BasicJsonType::number_integer_t</td>
</tr>
<tr class="odd separator:a5fd59c56514447ab1a7c5e7f0ab24601">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acbd02515ccdc3bfe940688fc96ac1359"
class="even memitem:acbd02515ccdc3bfe940688fc96ac1359">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="acbd02515ccdc3bfe940688fc96ac1359"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_unsigned_t</strong> = typename
BasicJsonType::number_unsigned_t</td>
</tr>
<tr class="odd separator:acbd02515ccdc3bfe940688fc96ac1359">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acb0bfbb3b0c6e9dc02cd6aab12c85654"
class="even memitem:acb0bfbb3b0c6e9dc02cd6aab12c85654">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="acb0bfbb3b0c6e9dc02cd6aab12c85654"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>number_float_t</strong> = typename
BasicJsonType::number_float_t</td>
</tr>
<tr class="odd separator:acb0bfbb3b0c6e9dc02cd6aab12c85654">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a62085d156a899aaf2913ac25ded93996"
class="even memitem:a62085d156a899aaf2913ac25ded93996">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a62085d156a899aaf2913ac25ded93996"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>string_t</strong>
= typename BasicJsonType::string_t</td>
</tr>
<tr class="odd separator:a62085d156a899aaf2913ac25ded93996">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aeb5a583cc482d34e764d038a9c682e02"
class="even memitem:aeb5a583cc482d34e764d038a9c682e02">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aeb5a583cc482d34e764d038a9c682e02"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>binary_t</strong>
= typename BasicJsonType::binary_t</td>
</tr>
<tr class="odd separator:aeb5a583cc482d34e764d038a9c682e02">
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
<tr id="r_acbcc09c0ada2782cd73cc4135823181d"
class="even memitem:acbcc09c0ada2782cd73cc4135823181d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#acbcc09c0ada2782cd73cc4135823181d" class="el">null</a> ()=0</td>
</tr>
<tr class="odd memdesc:acbcc09c0ada2782cd73cc4135823181d">
<td class="mdescLeft"> </td>
<td class="mdescRight">a null value was read<br />
</td>
</tr>
<tr class="even separator:acbcc09c0ada2782cd73cc4135823181d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab89f75382c0fd7fe81c95fc84cfa3150"
class="odd memitem:ab89f75382c0fd7fe81c95fc84cfa3150">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab89f75382c0fd7fe81c95fc84cfa3150" class="el">boolean</a> (bool
val)=0</td>
</tr>
<tr class="even memdesc:ab89f75382c0fd7fe81c95fc84cfa3150">
<td class="mdescLeft"> </td>
<td class="mdescRight">a boolean value was read<br />
</td>
</tr>
<tr class="odd separator:ab89f75382c0fd7fe81c95fc84cfa3150">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a46cc306b7677553d8f6bd8c9592eb1bd"
class="even memitem:a46cc306b7677553d8f6bd8c9592eb1bd">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a46cc306b7677553d8f6bd8c9592eb1bd" class="el">number_integer</a>
(number_integer_t val)=0</td>
</tr>
<tr class="odd memdesc:a46cc306b7677553d8f6bd8c9592eb1bd">
<td class="mdescLeft"> </td>
<td class="mdescRight">an integer number was read<br />
</td>
</tr>
<tr class="even separator:a46cc306b7677553d8f6bd8c9592eb1bd">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a32f8a32794cb384f0de3d3a96a6bb696"
class="odd memitem:a32f8a32794cb384f0de3d3a96a6bb696">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a32f8a32794cb384f0de3d3a96a6bb696" class="el">number_unsigned</a>
(number_unsigned_t val)=0</td>
</tr>
<tr class="even memdesc:a32f8a32794cb384f0de3d3a96a6bb696">
<td class="mdescLeft"> </td>
<td class="mdescRight">an unsigned integer number was read<br />
</td>
</tr>
<tr class="odd separator:a32f8a32794cb384f0de3d3a96a6bb696">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a19eafa3a92fc75e0258a842283396aa9"
class="even memitem:a19eafa3a92fc75e0258a842283396aa9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a19eafa3a92fc75e0258a842283396aa9" class="el">number_float</a>
(number_float_t val, const string_t &amp;s)=0</td>
</tr>
<tr class="odd memdesc:a19eafa3a92fc75e0258a842283396aa9">
<td class="mdescLeft"> </td>
<td class="mdescRight">a floating-point number was read<br />
</td>
</tr>
<tr class="even separator:a19eafa3a92fc75e0258a842283396aa9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3da9ee0c61f1a37e6c6a3d2dccb16765"
class="odd memitem:a3da9ee0c61f1a37e6c6a3d2dccb16765">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3da9ee0c61f1a37e6c6a3d2dccb16765" class="el">string</a>
(string_t &amp;val)=0</td>
</tr>
<tr class="even memdesc:a3da9ee0c61f1a37e6c6a3d2dccb16765">
<td class="mdescLeft"> </td>
<td class="mdescRight">a string value was read<br />
</td>
</tr>
<tr class="odd separator:a3da9ee0c61f1a37e6c6a3d2dccb16765">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a15d6c5d0dcaceb906405f427faf9b34e"
class="even memitem:a15d6c5d0dcaceb906405f427faf9b34e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a15d6c5d0dcaceb906405f427faf9b34e" class="el">binary</a>
(binary_t &amp;val)=0</td>
</tr>
<tr class="odd memdesc:a15d6c5d0dcaceb906405f427faf9b34e">
<td class="mdescLeft"> </td>
<td class="mdescRight">a binary value was read<br />
</td>
</tr>
<tr class="even separator:a15d6c5d0dcaceb906405f427faf9b34e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a54a0883df64f40664395e3dad674aaa5"
class="odd memitem:a54a0883df64f40664395e3dad674aaa5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a54a0883df64f40664395e3dad674aaa5" class="el">start_object</a>
(std::size_t elements)=0</td>
</tr>
<tr class="even memdesc:a54a0883df64f40664395e3dad674aaa5">
<td class="mdescLeft"> </td>
<td class="mdescRight">the beginning of an object was read<br />
</td>
</tr>
<tr class="odd separator:a54a0883df64f40664395e3dad674aaa5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3355ecd7e3e9806dcb80b2f8842b82ce"
class="even memitem:a3355ecd7e3e9806dcb80b2f8842b82ce">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3355ecd7e3e9806dcb80b2f8842b82ce" class="el">key</a> (string_t
&amp;val)=0</td>
</tr>
<tr class="odd memdesc:a3355ecd7e3e9806dcb80b2f8842b82ce">
<td class="mdescLeft"> </td>
<td class="mdescRight">an object key was read<br />
</td>
</tr>
<tr class="even separator:a3355ecd7e3e9806dcb80b2f8842b82ce">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac34854cab5e023c5d0e8b381a11aba5b"
class="odd memitem:ac34854cab5e023c5d0e8b381a11aba5b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac34854cab5e023c5d0e8b381a11aba5b" class="el">end_object</a>
()=0</td>
</tr>
<tr class="even memdesc:ac34854cab5e023c5d0e8b381a11aba5b">
<td class="mdescLeft"> </td>
<td class="mdescRight">the end of an object was read<br />
</td>
</tr>
<tr class="odd separator:ac34854cab5e023c5d0e8b381a11aba5b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afc4d5c0d123f2e3c939060a778c4f22c"
class="even memitem:afc4d5c0d123f2e3c939060a778c4f22c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#afc4d5c0d123f2e3c939060a778c4f22c" class="el">start_array</a>
(std::size_t elements)=0</td>
</tr>
<tr class="odd memdesc:afc4d5c0d123f2e3c939060a778c4f22c">
<td class="mdescLeft"> </td>
<td class="mdescRight">the beginning of an array was read<br />
</td>
</tr>
<tr class="even separator:afc4d5c0d123f2e3c939060a778c4f22c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a81fbddbf7dc96eab21ef916625ad5f3b"
class="odd memitem:a81fbddbf7dc96eab21ef916625ad5f3b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a81fbddbf7dc96eab21ef916625ad5f3b" class="el">end_array</a>
()=0</td>
</tr>
<tr class="even memdesc:a81fbddbf7dc96eab21ef916625ad5f3b">
<td class="mdescLeft"> </td>
<td class="mdescRight">the end of an array was read<br />
</td>
</tr>
<tr class="odd separator:a81fbddbf7dc96eab21ef916625ad5f3b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af165920966b60b78e57a2e4d92a63897"
class="even memitem:af165920966b60b78e57a2e4d92a63897">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">virtual bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af165920966b60b78e57a2e4d92a63897" class="el">parse_error</a>
(std::size_t position, const std::string &amp;last_token, const <a
href="classdetail_1_1exception.html" class="el">detail::exception</a>
&amp;ex)=0</td>
</tr>
<tr class="odd memdesc:af165920966b60b78e57a2e4d92a63897">
<td class="mdescLeft"> </td>
<td class="mdescRight">a parse error occurred<br />
</td>
</tr>
<tr class="even separator:af165920966b60b78e57a2e4d92a63897">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a978a4d26990f64d60686ef22568e76eb"
class="odd memitem:a978a4d26990f64d60686ef22568e76eb">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a978a4d26990f64d60686ef22568e76eb"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>json_sax</strong>
(const <a href="structjson__sax.html" class="el">json_sax</a>
&amp;)=default</td>
</tr>
<tr class="even separator:a978a4d26990f64d60686ef22568e76eb">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_adb6b743b889faf0c050f80bfae890450"
class="odd memitem:adb6b743b889faf0c050f80bfae890450">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="adb6b743b889faf0c050f80bfae890450"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>json_sax</strong>
(<a href="structjson__sax.html" class="el">json_sax</a> &amp;&amp;)
noexcept=default</td>
</tr>
<tr class="even separator:adb6b743b889faf0c050f80bfae890450">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afff13171be3b416d8a6bcfa925883d9b"
class="odd memitem:afff13171be3b416d8a6bcfa925883d9b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="afff13171be3b416d8a6bcfa925883d9b"></span>
<a href="structjson__sax.html" class="el">json_sax</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const <a href="structjson__sax.html" class="el">json_sax</a>
&amp;)=default</td>
</tr>
<tr class="even separator:afff13171be3b416d8a6bcfa925883d9b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a892558995c2ee775c9a3223282fd8733"
class="odd memitem:a892558995c2ee775c9a3223282fd8733">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a892558995c2ee775c9a3223282fd8733"></span>
<a href="structjson__sax.html" class="el">json_sax</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="structjson__sax.html" class="el">json_sax</a> &amp;&amp;)
noexcept=default</td>
</tr>
<tr class="even separator:a892558995c2ee775c9a3223282fd8733">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType\>  
struct json_sax\< BasicJsonType \>

</div>

SAX interface.

This class describes the SAX interface used by
nlohmann::json::sax_parse. Each function is called in different
situations while the input is parsed. The boolean return value informs
the parser whether to continue processing the input.

</div>

## Member Function Documentation

<span id="a15d6c5d0dcaceb906405f427faf9b34e"></span>

## <span class="permalink">[◆ ](#a15d6c5d0dcaceb906405f427faf9b34e)</span>binary()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::binary</td>
<td>(</td>
<td class="paramtype">binary_t &amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

a binary value was read

Parameters  
|        |     |              |
|--------|-----|--------------|
| \[in\] | val | binary value |

<!-- -->

Returns  
whether parsing should proceed

<!-- -->

Note  
It is safe to move the passed binary value.

</div>

</div>

<span id="ab89f75382c0fd7fe81c95fc84cfa3150"></span>

## <span class="permalink">[◆ ](#ab89f75382c0fd7fe81c95fc84cfa3150)</span>boolean()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::boolean</td>
<td>(</td>
<td class="paramtype">bool</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

a boolean value was read

Parameters  
|        |     |               |
|--------|-----|---------------|
| \[in\] | val | boolean value |

<!-- -->

Returns  
whether parsing should proceed

</div>

</div>

<span id="a81fbddbf7dc96eab21ef916625ad5f3b"></span>

## <span class="permalink">[◆ ](#a81fbddbf7dc96eab21ef916625ad5f3b)</span>end_array()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::end_array</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

the end of an array was read

Returns  
whether parsing should proceed

</div>

</div>

<span id="ac34854cab5e023c5d0e8b381a11aba5b"></span>

## <span class="permalink">[◆ ](#ac34854cab5e023c5d0e8b381a11aba5b)</span>end_object()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::end_object</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

the end of an object was read

Returns  
whether parsing should proceed

</div>

</div>

<span id="a3355ecd7e3e9806dcb80b2f8842b82ce"></span>

## <span class="permalink">[◆ ](#a3355ecd7e3e9806dcb80b2f8842b82ce)</span>key()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::key</td>
<td>(</td>
<td class="paramtype">string_t &amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

an object key was read

Parameters  
|        |     |            |
|--------|-----|------------|
| \[in\] | val | object key |

<!-- -->

Returns  
whether parsing should proceed

<!-- -->

Note  
It is safe to move the passed string.

</div>

</div>

<span id="acbcc09c0ada2782cd73cc4135823181d"></span>

## <span class="permalink">[◆ ](#acbcc09c0ada2782cd73cc4135823181d)</span>null()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::null</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

a null value was read

Returns  
whether parsing should proceed

</div>

</div>

<span id="a19eafa3a92fc75e0258a842283396aa9"></span>

## <span class="permalink">[◆ ](#a19eafa3a92fc75e0258a842283396aa9)</span>number_float()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::number_float</td>
<td>(</td>
<td class="paramtype">number_float_t</td>
<td class="paramname"><span class="paramname"><em>val</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const string_t &amp;</td>
<td class="paramname"><span class="paramname"><em>s</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

a floating-point number was read

Parameters  
|        |     |                      |
|--------|-----|----------------------|
| \[in\] | val | floating-point value |
| \[in\] | s   | raw token value      |

<!-- -->

Returns  
whether parsing should proceed

</div>

</div>

<span id="a46cc306b7677553d8f6bd8c9592eb1bd"></span>

## <span class="permalink">[◆ ](#a46cc306b7677553d8f6bd8c9592eb1bd)</span>number_integer()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::number_integer</td>
<td>(</td>
<td class="paramtype">number_integer_t</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

an integer number was read

Parameters  
|        |     |               |
|--------|-----|---------------|
| \[in\] | val | integer value |

<!-- -->

Returns  
whether parsing should proceed

</div>

</div>

<span id="a32f8a32794cb384f0de3d3a96a6bb696"></span>

## <span class="permalink">[◆ ](#a32f8a32794cb384f0de3d3a96a6bb696)</span>number_unsigned()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::number_unsigned</td>
<td>(</td>
<td class="paramtype">number_unsigned_t</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

an unsigned integer number was read

Parameters  
|        |     |                        |
|--------|-----|------------------------|
| \[in\] | val | unsigned integer value |

<!-- -->

Returns  
whether parsing should proceed

</div>

</div>

<span id="af165920966b60b78e57a2e4d92a63897"></span>

## <span class="permalink">[◆ ](#af165920966b60b78e57a2e4d92a63897)</span>parse_error()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::parse_error</td>
<td>(</td>
<td class="paramtype">std::size_t</td>
<td class="paramname"><span class="paramname"><em>position</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const std::string &amp;</td>
<td class="paramname"><span class="paramname"><em>last_token</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classdetail_1_1exception.html"
class="el">detail::exception</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>ex</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

a parse error occurred

Parameters  
|        |            |                                                  |
|--------|------------|--------------------------------------------------|
| \[in\] | position   | the position in the input where the error occurs |
| \[in\] | last_token | the last read token                              |
| \[in\] | ex         | an exception object describing the error         |

<!-- -->

Returns  
whether parsing should proceed (must return false)

</div>

</div>

<span id="afc4d5c0d123f2e3c939060a778c4f22c"></span>

## <span class="permalink">[◆ ](#afc4d5c0d123f2e3c939060a778c4f22c)</span>start_array()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::start_array</td>
<td>(</td>
<td class="paramtype">std::size_t</td>
<td class="paramname"><span
class="paramname"><em>elements</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

the beginning of an array was read

Parameters  
|        |          |                                           |
|--------|----------|-------------------------------------------|
| \[in\] | elements | number of array elements or -1 if unknown |

<!-- -->

Returns  
whether parsing should proceed

<!-- -->

Note  
binary formats may report the number of elements

</div>

</div>

<span id="a54a0883df64f40664395e3dad674aaa5"></span>

## <span class="permalink">[◆ ](#a54a0883df64f40664395e3dad674aaa5)</span>start_object()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::start_object</td>
<td>(</td>
<td class="paramtype">std::size_t</td>
<td class="paramname"><span
class="paramname"><em>elements</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

the beginning of an object was read

Parameters  
|        |          |                                            |
|--------|----------|--------------------------------------------|
| \[in\] | elements | number of object elements or -1 if unknown |

<!-- -->

Returns  
whether parsing should proceed

<!-- -->

Note  
binary formats may report the number of elements

</div>

</div>

<span id="a3da9ee0c61f1a37e6c6a3d2dccb16765"></span>

## <span class="permalink">[◆ ](#a3da9ee0c61f1a37e6c6a3d2dccb16765)</span>string()

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
<td class="memname">virtual bool <a href="structjson__sax.html"
class="el">json_sax</a>&lt; BasicJsonType &gt;::string</td>
<td>(</td>
<td class="paramtype">string_t &amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">pure virtual</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

a string value was read

Parameters  
|        |     |              |
|--------|-----|--------------|
| \[in\] | val | string value |

<!-- -->

Returns  
whether parsing should proceed

<!-- -->

Note  
It is safe to move the passed string value.

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
