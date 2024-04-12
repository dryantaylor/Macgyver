---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::type_error Class Reference"
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
- <a href="classdetail_1_1type__error.html" class="el">type_error</a>

</div>

</div>

<div class="header">

<div class="summary">

[Static Public Member Functions](#pub-static-methods) \| [List of all
members](classdetail_1_1type__error-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::type_error Class Reference

</div>

</div>

</div>

<div class="contents">

exception indicating executing a member function with a wrong type
[More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for detail::type_error:

</div>

<div class="dyncontent">

<div class="center">

<img src="classdetail_1_1type__error.png"
usemap="#detail::type_5Ferror_map" />

</div>

</div>

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
<tr id="r_a2d25372628cf1e09ec67718f4bc42762"
class="even memitem:a2d25372628cf1e09ec67718f4bc42762">
<td colspan="2" class="memTemplParams"><span
id="a2d25372628cf1e09ec67718f4bc42762"></span> template&lt;typename
BasicJsonContext , enable_if_t&lt; <a
href="structdetail_1_1is__basic__json__context.html"
class="el">is_basic_json_context</a>&lt; BasicJsonContext &gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a2d25372628cf1e09ec67718f4bc42762">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static <a href="classdetail_1_1type__error.html"
class="el">type_error</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>create</strong> (int id_, const std::string
&amp;what_arg, BasicJsonContext context)</td>
</tr>
<tr class="even separator:a2d25372628cf1e09ec67718f4bc42762">
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
<tr class="even inherit_header pub_methods_classdetail_1_1exception">
<td colspan="2"
onclick="javascript:dynsection.toggleInherit(&#39;pub_methods_classdetail_1_1exception&#39;)"><img
src="closed.png" alt="-" /> Public Member Functions inherited from <a
href="classdetail_1_1exception.html"
class="el">detail::exception</a></td>
</tr>
<tr id="r_ae75d7315f5f2d85958da6d961375caf0"
class="odd memitem:ae75d7315f5f2d85958da6d961375caf0 inherit pub_methods_classdetail_1_1exception">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">const char * </td>
<td class="memItemRight" data-valign="bottom"><strong>what</strong> ()
const noexcept override</td>
</tr>
<tr
class="even memdesc:ae75d7315f5f2d85958da6d961375caf0 inherit pub_methods_classdetail_1_1exception">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the explanatory string<br />
</td>
</tr>
<tr
class="odd separator:ae75d7315f5f2d85958da6d961375caf0 inherit pub_methods_classdetail_1_1exception">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr class="even inherit_header pub_attribs_classdetail_1_1exception">
<td colspan="2"
onclick="javascript:dynsection.toggleInherit(&#39;pub_attribs_classdetail_1_1exception&#39;)"><img
src="closed.png" alt="-" /> Public Attributes inherited from <a
href="classdetail_1_1exception.html"
class="el">detail::exception</a></td>
</tr>
<tr id="r_a63b819fbb2ef34df9dad1e309207fa24"
class="odd memitem:a63b819fbb2ef34df9dad1e309207fa24 inherit pub_attribs_classdetail_1_1exception">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">const int </td>
<td class="memItemRight" data-valign="bottom"><strong>id</strong></td>
</tr>
<tr
class="even memdesc:a63b819fbb2ef34df9dad1e309207fa24 inherit pub_attribs_classdetail_1_1exception">
<td class="mdescLeft"> </td>
<td class="mdescRight">the id of the exception<br />
</td>
</tr>
<tr
class="odd separator:a63b819fbb2ef34df9dad1e309207fa24 inherit pub_attribs_classdetail_1_1exception">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr class="even inherit_header pro_methods_classdetail_1_1exception">
<td colspan="2"
onclick="javascript:dynsection.toggleInherit(&#39;pro_methods_classdetail_1_1exception&#39;)"><img
src="closed.png" alt="-" /> Protected Member Functions inherited from <a
href="classdetail_1_1exception.html"
class="el">detail::exception</a></td>
</tr>
<tr id="r_a528d6bc77e88490bbb84cde2222b7ff0"
class="odd memitem:a528d6bc77e88490bbb84cde2222b7ff0 inherit pro_methods_classdetail_1_1exception">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><strong>exception</strong>
(int id_, const char *what_arg)</td>
</tr>
<tr
class="even separator:a528d6bc77e88490bbb84cde2222b7ff0 inherit pro_methods_classdetail_1_1exception">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr
class="odd inherit_header pro_static_methods_classdetail_1_1exception">
<td colspan="2"
onclick="javascript:dynsection.toggleInherit(&#39;pro_static_methods_classdetail_1_1exception&#39;)"><img
src="closed.png" alt="-" /> Static Protected Member Functions inherited
from <a href="classdetail_1_1exception.html"
class="el">detail::exception</a></td>
</tr>
<tr id="r_a8f1eb56b9964c8dd84d89d0da98d883b"
class="even memitem:a8f1eb56b9964c8dd84d89d0da98d883b inherit pro_static_methods_classdetail_1_1exception">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static std::string </td>
<td class="memItemRight" data-valign="bottom"><strong>name</strong>
(const std::string &amp;ename, int id_)</td>
</tr>
<tr
class="odd separator:a8f1eb56b9964c8dd84d89d0da98d883b inherit pro_static_methods_classdetail_1_1exception">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6b4a786b5c1c25dd3edaceb1bf2d5120"
class="even memitem:a6b4a786b5c1c25dd3edaceb1bf2d5120 inherit pro_static_methods_classdetail_1_1exception">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static std::string </td>
<td class="memItemRight"
data-valign="bottom"><strong>diagnostics</strong> (std::nullptr_t)</td>
</tr>
<tr
class="odd separator:a6b4a786b5c1c25dd3edaceb1bf2d5120 inherit pro_static_methods_classdetail_1_1exception">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af3739c53fe56a1712754d13dfa561f80"
class="even memitem:af3739c53fe56a1712754d13dfa561f80 inherit pro_static_methods_classdetail_1_1exception">
<td colspan="2" class="memTemplParams">template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr
class="odd memitem:af3739c53fe56a1712754d13dfa561f80 inherit pro_static_methods_classdetail_1_1exception">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static std::string </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>diagnostics</strong> (const BasicJsonType
*leaf_element)</td>
</tr>
<tr
class="even separator:af3739c53fe56a1712754d13dfa561f80 inherit pro_static_methods_classdetail_1_1exception">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

exception indicating executing a member function with a wrong type

See also  
<https://json.nlohmann.me/api/basic_json/type_error/>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
