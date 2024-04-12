---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::lexer\\< BasicJsonType, InputAdapterType \\>
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

<div id="nav-path" class="navpath">

- <a href="namespacedetail.html" class="el">detail</a>
- <a href="classdetail_1_1lexer.html" class="el">lexer</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[List of all members](classdetail_1_1lexer-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::lexer\< BasicJsonType, InputAdapterType \> Class Template
Reference

</div>

</div>

</div>

<div class="contents">

lexical analysis [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for detail::lexer\< BasicJsonType, InputAdapterType
\>:

</div>

<div class="dyncontent">

<div class="center">

<img src="classdetail_1_1lexer.png"
usemap="#detail::lexer_3C_20BasicJsonType_2C_20InputAdapterType_20_3E_map" />

</div>

</div>

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
<tr id="r_a74052693c02be1a1e245295b62e5fcb6"
class="even memitem:a74052693c02be1a1e245295b62e5fcb6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a74052693c02be1a1e245295b62e5fcb6"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>token_type</strong> = typename <a
href="classdetail_1_1lexer__base.html"
class="el">lexer_base</a>&lt;BasicJsonType&gt;::token_type</td>
</tr>
<tr class="odd separator:a74052693c02be1a1e245295b62e5fcb6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr class="even inherit_header pub_types_classdetail_1_1lexer__base">
<td colspan="2"
onclick="javascript:dynsection.toggleInherit(&#39;pub_types_classdetail_1_1lexer__base&#39;)"><img
src="closed.png" alt="-" /> Public Types inherited from <a
href="classdetail_1_1lexer__base.html" class="el">detail::lexer_base&lt;
BasicJsonType &gt;</a></td>
</tr>
<tr id="r_add65fa7a85aa15052963809fbcc04540"
class="odd memitem:add65fa7a85aa15052963809fbcc04540 inherit pub_types_classdetail_1_1lexer__base">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">enum class  </td>
<td class="memItemRight" data-valign="bottom"><a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540"
class="el">token_type</a> {<br />
  <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a42dd1a73d072bb6bf3f494f22b15db8e"
class="el">uninitialized</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a85cc1a37b0aaa52de40e72f0ed4e0c0d"
class="el">literal_true</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540afab1694b1b3937a079f4625fe0b6108b"
class="el">literal_false</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540ab7ae4c0e46d86f884677768160b26e9e"
class="el">literal_null</a> ,<br />
  <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a2b490e8bf366b4cbe3ebd99b26ce15ce"
class="el">value_string</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540aaf1f040fcd2f674d2e5893d7a731078f"
class="el">value_unsigned</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a5064b6655d88a50ae16665cf7751c0ee"
class="el">value_integer</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a0d2671a6f81efb91e77f6ac3bdb11443"
class="el">value_float</a> ,<br />
  <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a16c226b4425b68560fea322b46dabe01"
class="el">begin_array</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a9a9ffd53b6869d4eca271b1ed5b57fe8"
class="el">begin_object</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a2f3e68e7f111a1e5c7728742b3ca2b7f"
class="el">end_array</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a7d5b4427866814de4d8f132721d59c87"
class="el">end_object</a> ,<br />
  <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540acc3c64f8ae08c00de1b33f19a4d2913a"
class="el">name_separator</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a745373036100d7392ad62c617cab59af"
class="el">value_separator</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540a456e19aeafa334241c7ff3f589547f9d"
class="el">parse_error</a> , <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540aca11f56dd477c09e06583dbdcda0985f"
class="el">end_of_input</a> ,<br />
  <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540ad2a8e6f6721cccec0b466301dd9495a5"
class="el">literal_or_value</a><br />
}</td>
</tr>
<tr class="even memdesc:add65fa7a85aa15052963809fbcc04540">
<td class="mdescLeft"> </td>
<td class="mdescRight">token types for the parser <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540">More...</a><br />
</td>
</tr>
<tr
class="odd separator:add65fa7a85aa15052963809fbcc04540 inherit pub_types_classdetail_1_1lexer__base">
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
<tr id="r_a384af885c37d58c963b902008c279fd6"
class="even memitem:a384af885c37d58c963b902008c279fd6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a384af885c37d58c963b902008c279fd6"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>lexer</strong>
(InputAdapterType &amp;&amp;adapter, bool ignore_comments_=false)
noexcept</td>
</tr>
<tr class="odd separator:a384af885c37d58c963b902008c279fd6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a963dce44c9d66c9a7c9d3206e1cff2ed"
class="even memitem:a963dce44c9d66c9a7c9d3206e1cff2ed">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a963dce44c9d66c9a7c9d3206e1cff2ed"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>lexer</strong>
(const <a href="classdetail_1_1lexer.html" class="el">lexer</a>
&amp;)=delete</td>
</tr>
<tr class="odd separator:a963dce44c9d66c9a7c9d3206e1cff2ed">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a79ce2eb7f127977f1d2499a1f10aa262"
class="even memitem:a79ce2eb7f127977f1d2499a1f10aa262">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a79ce2eb7f127977f1d2499a1f10aa262"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>lexer</strong> (<a
href="classdetail_1_1lexer.html" class="el">lexer</a>
&amp;&amp;)=default</td>
</tr>
<tr class="odd separator:a79ce2eb7f127977f1d2499a1f10aa262">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa64ea2cdf34301e5d1280de82750cd83"
class="even memitem:aa64ea2cdf34301e5d1280de82750cd83">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aa64ea2cdf34301e5d1280de82750cd83"></span>
<a href="classdetail_1_1lexer.html" class="el">lexer</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1lexer.html" class="el">lexer</a>
&amp;)=delete</td>
</tr>
<tr class="odd separator:aa64ea2cdf34301e5d1280de82750cd83">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8436bd7b1296151e8555c6f2b7bd2b2a"
class="even memitem:a8436bd7b1296151e8555c6f2b7bd2b2a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8436bd7b1296151e8555c6f2b7bd2b2a"></span>
<a href="classdetail_1_1lexer.html" class="el">lexer</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1lexer.html" class="el">lexer</a>
&amp;&amp;)=default</td>
</tr>
<tr class="odd separator:a8436bd7b1296151e8555c6f2b7bd2b2a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4227de7d0382fb4d3e18b119f0cc87d7"
class="even memitem:a4227de7d0382fb4d3e18b119f0cc87d7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4227de7d0382fb4d3e18b119f0cc87d7"></span>
constexpr number_integer_t </td>
<td class="memItemRight"
data-valign="bottom"><strong>get_number_integer</strong> () const
noexcept</td>
</tr>
<tr class="odd memdesc:a4227de7d0382fb4d3e18b119f0cc87d7">
<td class="mdescLeft"> </td>
<td class="mdescRight">return integer value<br />
</td>
</tr>
<tr class="even separator:a4227de7d0382fb4d3e18b119f0cc87d7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a65495d5d60a279adb009efa728708441"
class="odd memitem:a65495d5d60a279adb009efa728708441">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a65495d5d60a279adb009efa728708441"></span>
constexpr number_unsigned_t </td>
<td class="memItemRight"
data-valign="bottom"><strong>get_number_unsigned</strong> () const
noexcept</td>
</tr>
<tr class="even memdesc:a65495d5d60a279adb009efa728708441">
<td class="mdescLeft"> </td>
<td class="mdescRight">return unsigned integer value<br />
</td>
</tr>
<tr class="odd separator:a65495d5d60a279adb009efa728708441">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af2e903d32a7e3705c66539ea1e30ce59"
class="even memitem:af2e903d32a7e3705c66539ea1e30ce59">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="af2e903d32a7e3705c66539ea1e30ce59"></span>
constexpr number_float_t </td>
<td class="memItemRight"
data-valign="bottom"><strong>get_number_float</strong> () const
noexcept</td>
</tr>
<tr class="odd memdesc:af2e903d32a7e3705c66539ea1e30ce59">
<td class="mdescLeft"> </td>
<td class="mdescRight">return floating-point value<br />
</td>
</tr>
<tr class="even separator:af2e903d32a7e3705c66539ea1e30ce59">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aae63a63a83ae7e7bd5dc1a83669ba281"
class="odd memitem:aae63a63a83ae7e7bd5dc1a83669ba281">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aae63a63a83ae7e7bd5dc1a83669ba281"></span>
string_t &amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>get_string</strong> ()</td>
</tr>
<tr class="even memdesc:aae63a63a83ae7e7bd5dc1a83669ba281">
<td class="mdescLeft"> </td>
<td class="mdescRight">return current string value (implicitly resets
the token; useful only once)<br />
</td>
</tr>
<tr class="odd separator:aae63a63a83ae7e7bd5dc1a83669ba281">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a569266654a88a2dc6f0e9a587067fc9d"
class="even memitem:a569266654a88a2dc6f0e9a587067fc9d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a569266654a88a2dc6f0e9a587067fc9d"></span>
constexpr <a href="structdetail_1_1position__t.html"
class="el">position_t</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>get_position</strong> () const
noexcept</td>
</tr>
<tr class="odd memdesc:a569266654a88a2dc6f0e9a587067fc9d">
<td class="mdescLeft"> </td>
<td class="mdescRight">return position of last read token<br />
</td>
</tr>
<tr class="even separator:a569266654a88a2dc6f0e9a587067fc9d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a41481d87dc1bcaaf532f529fbc0e690b"
class="odd memitem:a41481d87dc1bcaaf532f529fbc0e690b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::string </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a41481d87dc1bcaaf532f529fbc0e690b"
class="el">get_token_string</a> () const</td>
</tr>
<tr class="even separator:a41481d87dc1bcaaf532f529fbc0e690b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a412c108d8b931630d54e42fbbf764fc4"
class="odd memitem:a412c108d8b931630d54e42fbbf764fc4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a412c108d8b931630d54e42fbbf764fc4"></span>
JSON_HEDLEY_RETURNS_NON_NULL constexpr const char * </td>
<td class="memItemRight"
data-valign="bottom"><strong>get_error_message</strong> () const
noexcept</td>
</tr>
<tr class="even memdesc:a412c108d8b931630d54e42fbbf764fc4">
<td class="mdescLeft"> </td>
<td class="mdescRight">return syntax error message<br />
</td>
</tr>
<tr class="odd separator:a412c108d8b931630d54e42fbbf764fc4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a04ae0c7807a761f4162ff42290be5490"
class="even memitem:a04ae0c7807a761f4162ff42290be5490">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a04ae0c7807a761f4162ff42290be5490" class="el">skip_bom</a>
()</td>
</tr>
<tr class="odd memdesc:a04ae0c7807a761f4162ff42290be5490">
<td class="mdescLeft"> </td>
<td class="mdescRight">skip the UTF-8 byte order mark<br />
</td>
</tr>
<tr class="even separator:a04ae0c7807a761f4162ff42290be5490">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a230468eb9130a7173e0636fc1fc5606b"
class="odd memitem:a230468eb9130a7173e0636fc1fc5606b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a230468eb9130a7173e0636fc1fc5606b"></span>
void </td>
<td class="memItemRight"
data-valign="bottom"><strong>skip_whitespace</strong> ()</td>
</tr>
<tr class="even separator:a230468eb9130a7173e0636fc1fc5606b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6497d12a0c35b355b3e22da69d6819f9"
class="odd memitem:a6497d12a0c35b355b3e22da69d6819f9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6497d12a0c35b355b3e22da69d6819f9"></span>
token_type </td>
<td class="memItemRight" data-valign="bottom"><strong>scan</strong>
()</td>
</tr>
<tr class="even separator:a6497d12a0c35b355b3e22da69d6819f9">
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
<td colspan="2"><h2 id="additional-inherited-members"
class="groupheader"><span id="inherited"></span> Additional Inherited
Members</h2></td>
</tr>
<tr
class="even inherit_header pub_static_methods_classdetail_1_1lexer__base">
<td colspan="2"
onclick="javascript:dynsection.toggleInherit(&#39;pub_static_methods_classdetail_1_1lexer__base&#39;)"><img
src="closed.png" alt="-" /> Static Public Member Functions inherited
from <a href="classdetail_1_1lexer__base.html"
class="el">detail::lexer_base&lt; BasicJsonType &gt;</a></td>
</tr>
<tr id="r_aadef66e89ad828e5f69479c85887fa6d"
class="odd memitem:aadef66e89ad828e5f69479c85887fa6d inherit pub_static_methods_classdetail_1_1lexer__base">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">JSON_HEDLEY_RETURNS_NON_NULL static JSON_HEDLEY_CONST
const char * </td>
<td class="memItemRight"
data-valign="bottom"><strong>token_type_name</strong> (const <a
href="classdetail_1_1lexer__base.html#add65fa7a85aa15052963809fbcc04540"
class="el">token_type</a> t) noexcept</td>
</tr>
<tr
class="even memdesc:aadef66e89ad828e5f69479c85887fa6d inherit pub_static_methods_classdetail_1_1lexer__base">
<td class="mdescLeft"> </td>
<td class="mdescRight">return name of values of type token_type (only
used for errors)<br />
</td>
</tr>
<tr
class="odd separator:aadef66e89ad828e5f69479c85887fa6d inherit pub_static_methods_classdetail_1_1lexer__base">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType, typename InputAdapterType\>  
class detail::lexer\< BasicJsonType, InputAdapterType \>

</div>

lexical analysis

This class organizes the lexical analysis during JSON deserialization.

</div>

## Member Function Documentation

<span id="a41481d87dc1bcaaf532f529fbc0e690b"></span>

## <span class="permalink">[◆ ](#a41481d87dc1bcaaf532f529fbc0e690b)</span>get_token_string()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename InputAdapterType \>

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
<td class="memname">std::string <a href="classdetail_1_1lexer.html"
class="el">detail::lexer</a>&lt; BasicJsonType, InputAdapterType
&gt;::get_token_string</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
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

return the last read token (for errors only). Will never contain EOF (an
arbitrary value that is not a valid char value, often -1), because 255
may legitimately occur. May contain NUL, which should be escaped.

</div>

</div>

<span id="a04ae0c7807a761f4162ff42290be5490"></span>

## <span class="permalink">[◆ ](#a04ae0c7807a761f4162ff42290be5490)</span>skip_bom()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename InputAdapterType \>

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
<td class="memname">bool <a href="classdetail_1_1lexer.html"
class="el">detail::lexer</a>&lt; BasicJsonType, InputAdapterType
&gt;::skip_bom</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
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

skip the UTF-8 byte order mark

Returns  
true iff there is no BOM or the correct BOM has been skipped

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
