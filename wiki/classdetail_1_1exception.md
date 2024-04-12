---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::exception Class Reference"
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
- <a href="classdetail_1_1exception.html" class="el">exception</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [Protected Member Functions](#pro-methods)
\| [Static Protected Member Functions](#pro-static-methods) \| [List of
all members](classdetail_1_1exception-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::exception Class Reference

</div>

</div>

</div>

<div class="contents">

general exception of the
<a href="classbasic__json.html" class="el">basic_json</a> class
[More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for detail::exception:

</div>

<div class="dyncontent">

<div class="center">

<img src="classdetail_1_1exception.png"
usemap="#detail::exception_map" />

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
<tr id="r_ae75d7315f5f2d85958da6d961375caf0"
class="even memitem:ae75d7315f5f2d85958da6d961375caf0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae75d7315f5f2d85958da6d961375caf0"></span>
const char * </td>
<td class="memItemRight" data-valign="bottom"><strong>what</strong> ()
const noexcept override</td>
</tr>
<tr class="odd memdesc:ae75d7315f5f2d85958da6d961375caf0">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the explanatory string<br />
</td>
</tr>
<tr class="even separator:ae75d7315f5f2d85958da6d961375caf0">
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
<td colspan="2"><h2 id="public-attributes" class="groupheader"><span
id="pub-attribs"></span> Public Attributes</h2></td>
</tr>
<tr id="r_a63b819fbb2ef34df9dad1e309207fa24"
class="even memitem:a63b819fbb2ef34df9dad1e309207fa24">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a63b819fbb2ef34df9dad1e309207fa24"></span>
const int </td>
<td class="memItemRight" data-valign="bottom"><strong>id</strong></td>
</tr>
<tr class="odd memdesc:a63b819fbb2ef34df9dad1e309207fa24">
<td class="mdescLeft"> </td>
<td class="mdescRight">the id of the exception<br />
</td>
</tr>
<tr class="even separator:a63b819fbb2ef34df9dad1e309207fa24">
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
<td colspan="2"><h2 id="protected-member-functions"
class="groupheader"><span id="pro-methods"></span> Protected Member
Functions</h2></td>
</tr>
<tr id="r_a528d6bc77e88490bbb84cde2222b7ff0"
class="even memitem:a528d6bc77e88490bbb84cde2222b7ff0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a528d6bc77e88490bbb84cde2222b7ff0"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>exception</strong>
(int id_, const char *what_arg)</td>
</tr>
<tr class="odd separator:a528d6bc77e88490bbb84cde2222b7ff0">
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
<td colspan="2"><h2 id="static-protected-member-functions"
class="groupheader"><span id="pro-static-methods"></span> Static
Protected Member Functions</h2></td>
</tr>
<tr id="r_a8f1eb56b9964c8dd84d89d0da98d883b"
class="even memitem:a8f1eb56b9964c8dd84d89d0da98d883b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8f1eb56b9964c8dd84d89d0da98d883b"></span>
static std::string </td>
<td class="memItemRight" data-valign="bottom"><strong>name</strong>
(const std::string &amp;ename, int id_)</td>
</tr>
<tr class="odd separator:a8f1eb56b9964c8dd84d89d0da98d883b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6b4a786b5c1c25dd3edaceb1bf2d5120"
class="even memitem:a6b4a786b5c1c25dd3edaceb1bf2d5120">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6b4a786b5c1c25dd3edaceb1bf2d5120"></span>
static std::string </td>
<td class="memItemRight"
data-valign="bottom"><strong>diagnostics</strong> (std::nullptr_t)</td>
</tr>
<tr class="odd separator:a6b4a786b5c1c25dd3edaceb1bf2d5120">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af3739c53fe56a1712754d13dfa561f80"
class="even memitem:af3739c53fe56a1712754d13dfa561f80">
<td colspan="2" class="memTemplParams"><span
id="af3739c53fe56a1712754d13dfa561f80"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="odd memitem:af3739c53fe56a1712754d13dfa561f80">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static std::string </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>diagnostics</strong> (const BasicJsonType
*leaf_element)</td>
</tr>
<tr class="even separator:af3739c53fe56a1712754d13dfa561f80">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

general exception of the
<a href="classbasic__json.html" class="el">basic_json</a> class

See also  
<https://json.nlohmann.me/api/basic_json/exception/>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
