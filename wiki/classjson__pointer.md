---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: json_pointer\\< RefStringType \\> Class Template
  Reference"
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
[Friends](#friends) \| [List of all
members](classjson__pointer-members.html)

</div>

<div class="headertitle">

<div class="title">

json_pointer\< RefStringType \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

JSON Pointer defines a string syntax for identifying a specific value
within a JSON document. [More...](#details)

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
<tr id="r_a21dae78c5120aa3044d4c0fa1d970291"
class="even memitem:a21dae78c5120aa3044d4c0fa1d970291">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a21dae78c5120aa3044d4c0fa1d970291"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>string_t</strong>
= typename string_t_helper&lt;RefStringType&gt;::type</td>
</tr>
<tr class="odd separator:a21dae78c5120aa3044d4c0fa1d970291">
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
<tr id="r_a5288b8f5d6ff6faca37f664b98a16ecd"
class="even memitem:a5288b8f5d6ff6faca37f664b98a16ecd">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5288b8f5d6ff6faca37f664b98a16ecd" class="el">json_pointer</a>
(const string_t &amp;s="")</td>
</tr>
<tr class="odd memdesc:a5288b8f5d6ff6faca37f664b98a16ecd">
<td class="mdescLeft"> </td>
<td class="mdescRight">create JSON pointer<br />
</td>
</tr>
<tr class="even separator:a5288b8f5d6ff6faca37f664b98a16ecd">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6b94e2003be4cd72c4f145bcea2578ec"
class="odd memitem:a6b94e2003be4cd72c4f145bcea2578ec">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">string_t </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6b94e2003be4cd72c4f145bcea2578ec" class="el">to_string</a> ()
const</td>
</tr>
<tr class="even memdesc:a6b94e2003be4cd72c4f145bcea2578ec">
<td class="mdescLeft"> </td>
<td class="mdescRight">return a string representation of the JSON
pointer<br />
</td>
</tr>
<tr class="odd separator:a6b94e2003be4cd72c4f145bcea2578ec">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a97364e516620b02f1049f847b2ad43c9"
class="even memitem:a97364e516620b02f1049f847b2ad43c9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a97364e516620b02f1049f847b2ad43c9" class="el">operator
string_t</a> () const</td>
</tr>
<tr class="odd memdesc:a97364e516620b02f1049f847b2ad43c9">
<td class="mdescLeft"> </td>
<td class="mdescRight">return a string representation of the JSON
pointer<br />
</td>
</tr>
<tr class="even separator:a97364e516620b02f1049f847b2ad43c9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8bb8e43c6e01a6370cd49ba130171219"
class="odd memitem:a8bb8e43c6e01a6370cd49ba130171219">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classjson__pointer.html" class="el">json_pointer</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a8bb8e43c6e01a6370cd49ba130171219" class="el">operator/=</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>
&amp;ptr)</td>
</tr>
<tr class="even memdesc:a8bb8e43c6e01a6370cd49ba130171219">
<td class="mdescLeft"> </td>
<td class="mdescRight">append another JSON pointer at the end of this
JSON pointer<br />
</td>
</tr>
<tr class="odd separator:a8bb8e43c6e01a6370cd49ba130171219">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa810a9db8c1d6e67c4a3703dc66a18d4"
class="even memitem:aa810a9db8c1d6e67c4a3703dc66a18d4">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classjson__pointer.html" class="el">json_pointer</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa810a9db8c1d6e67c4a3703dc66a18d4" class="el">operator/=</a>
(string_t token)</td>
</tr>
<tr class="odd memdesc:aa810a9db8c1d6e67c4a3703dc66a18d4">
<td class="mdescLeft"> </td>
<td class="mdescRight">append an unescaped reference token at the end of
this JSON pointer<br />
</td>
</tr>
<tr class="even separator:aa810a9db8c1d6e67c4a3703dc66a18d4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6c2bffffbf08b77259e0b658c841703c"
class="odd memitem:a6c2bffffbf08b77259e0b658c841703c">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classjson__pointer.html" class="el">json_pointer</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6c2bffffbf08b77259e0b658c841703c" class="el">operator/=</a>
(std::size_t array_idx)</td>
</tr>
<tr class="even memdesc:a6c2bffffbf08b77259e0b658c841703c">
<td class="mdescLeft"> </td>
<td class="mdescRight">append an array index at the end of this JSON
pointer<br />
</td>
</tr>
<tr class="odd separator:a6c2bffffbf08b77259e0b658c841703c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa03c0c1206e171342d27a4583258858b"
class="even memitem:aa03c0c1206e171342d27a4583258858b">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classjson__pointer.html" class="el">json_pointer</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa03c0c1206e171342d27a4583258858b" class="el">parent_pointer</a>
() const</td>
</tr>
<tr class="odd memdesc:aa03c0c1206e171342d27a4583258858b">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the parent of this JSON pointer<br />
</td>
</tr>
<tr class="even separator:aa03c0c1206e171342d27a4583258858b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a662118b470c87a1b564946c2602c49ce"
class="odd memitem:a662118b470c87a1b564946c2602c49ce">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a662118b470c87a1b564946c2602c49ce" class="el">pop_back</a>
()</td>
</tr>
<tr class="even memdesc:a662118b470c87a1b564946c2602c49ce">
<td class="mdescLeft"> </td>
<td class="mdescRight">remove last reference token<br />
</td>
</tr>
<tr class="odd separator:a662118b470c87a1b564946c2602c49ce">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aba71e63e4032cfc46dd90aeb09e5cb0f"
class="even memitem:aba71e63e4032cfc46dd90aeb09e5cb0f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">const string_t &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aba71e63e4032cfc46dd90aeb09e5cb0f" class="el">back</a> ()
const</td>
</tr>
<tr class="odd memdesc:aba71e63e4032cfc46dd90aeb09e5cb0f">
<td class="mdescLeft"> </td>
<td class="mdescRight">return last reference token<br />
</td>
</tr>
<tr class="even separator:aba71e63e4032cfc46dd90aeb09e5cb0f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_adbe97f9c00a221fb7be88d940b39a24f"
class="odd memitem:adbe97f9c00a221fb7be88d940b39a24f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#adbe97f9c00a221fb7be88d940b39a24f" class="el">push_back</a>
(const string_t &amp;token)</td>
</tr>
<tr class="even memdesc:adbe97f9c00a221fb7be88d940b39a24f">
<td class="mdescLeft"> </td>
<td class="mdescRight">append an unescaped token at the end of the
reference pointer<br />
</td>
</tr>
<tr class="odd separator:adbe97f9c00a221fb7be88d940b39a24f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6fa4848eafc232ae1af91c3d2696897e"
class="even memitem:a6fa4848eafc232ae1af91c3d2696897e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6fa4848eafc232ae1af91c3d2696897e" class="el">push_back</a>
(string_t &amp;&amp;token)</td>
</tr>
<tr class="odd memdesc:a6fa4848eafc232ae1af91c3d2696897e">
<td class="mdescLeft"> </td>
<td class="mdescRight">append an unescaped token at the end of the
reference pointer<br />
</td>
</tr>
<tr class="even separator:a6fa4848eafc232ae1af91c3d2696897e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5c3d08bd0a0e99c3377db33600c68a64"
class="odd memitem:a5c3d08bd0a0e99c3377db33600c68a64">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5c3d08bd0a0e99c3377db33600c68a64" class="el">empty</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:a5c3d08bd0a0e99c3377db33600c68a64">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether pointer points to the root
document<br />
</td>
</tr>
<tr class="odd separator:a5c3d08bd0a0e99c3377db33600c68a64">
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
<td colspan="2"><h2 id="friends" class="groupheader"><span
id="friends"></span> Friends</h2></td>
</tr>
<tr id="r_ada3100cdb8700566051828f1355fa745"
class="even memitem:ada3100cdb8700566051828f1355fa745">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ada3100cdb8700566051828f1355fa745"></span>
class </td>
<td class="memItemRight"
data-valign="bottom"><strong>basic_json</strong></td>
</tr>
<tr class="odd separator:ada3100cdb8700566051828f1355fa745">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad4140db2dd2f347f46f3abae0fc2156f"
class="even memitem:ad4140db2dd2f347f46f3abae0fc2156f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::ostream &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad4140db2dd2f347f46f3abae0fc2156f"
class="el">operator&lt;&lt;</a> (std::ostream &amp;o, const <a
href="classjson__pointer.html" class="el">json_pointer</a>
&amp;ptr)</td>
</tr>
<tr class="odd memdesc:ad4140db2dd2f347f46f3abae0fc2156f">
<td class="mdescLeft"> </td>
<td class="mdescRight">write string representation of the JSON pointer
to stream<br />
</td>
</tr>
<tr class="even separator:ad4140db2dd2f347f46f3abae0fc2156f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a90a11fe6c7f37b1746a3ff9cb24b0d53"
class="odd memitem:a90a11fe6c7f37b1746a3ff9cb24b0d53">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classjson__pointer.html" class="el">json_pointer</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a90a11fe6c7f37b1746a3ff9cb24b0d53" class="el">operator/</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>
&amp;lhs, const <a href="classjson__pointer.html"
class="el">json_pointer</a> &amp;rhs)</td>
</tr>
<tr class="even memdesc:a90a11fe6c7f37b1746a3ff9cb24b0d53">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a new JSON pointer by appending the right
JSON pointer at the end of the left JSON pointer<br />
</td>
</tr>
<tr class="odd separator:a90a11fe6c7f37b1746a3ff9cb24b0d53">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a116956f4487af44732dd685e970679b0"
class="even memitem:a116956f4487af44732dd685e970679b0">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classjson__pointer.html" class="el">json_pointer</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a116956f4487af44732dd685e970679b0" class="el">operator/</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>
&amp;lhs, string_t token)</td>
</tr>
<tr class="odd memdesc:a116956f4487af44732dd685e970679b0">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a new JSON pointer by appending the
unescaped token at the end of the JSON pointer<br />
</td>
</tr>
<tr class="even separator:a116956f4487af44732dd685e970679b0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a29f6d4b492e784b9d196b05a4048c289"
class="odd memitem:a29f6d4b492e784b9d196b05a4048c289">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classjson__pointer.html" class="el">json_pointer</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a29f6d4b492e784b9d196b05a4048c289" class="el">operator/</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>
&amp;lhs, std::size_t array_idx)</td>
</tr>
<tr class="even memdesc:a29f6d4b492e784b9d196b05a4048c289">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a new JSON pointer by appending the
array-index-token at the end of the JSON pointer<br />
</td>
</tr>
<tr class="odd separator:a29f6d4b492e784b9d196b05a4048c289">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a613a4889154f7ab2ee4efbe0fe147cf2"
class="even memitem:a613a4889154f7ab2ee4efbe0fe147cf2">
<td colspan="2" class="memTemplParams">template&lt;typename
RefStringTypeLhs , typename RefStringTypeRhs &gt;</td>
</tr>
<tr class="odd memitem:a613a4889154f7ab2ee4efbe0fe147cf2">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a613a4889154f7ab2ee4efbe0fe147cf2" class="el">operator==</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>&lt;
RefStringTypeLhs &gt; &amp;lhs, const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;rhs)
noexcept</td>
</tr>
<tr class="even memdesc:a613a4889154f7ab2ee4efbe0fe147cf2">
<td class="mdescLeft"> </td>
<td class="mdescRight">compares two JSON pointers for equality<br />
</td>
</tr>
<tr class="odd separator:a613a4889154f7ab2ee4efbe0fe147cf2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af6bf727798ad49870a709094e5ff981c"
class="even memitem:af6bf727798ad49870a709094e5ff981c">
<td colspan="2" class="memTemplParams">template&lt;typename
RefStringTypeLhs , typename StringType &gt;</td>
</tr>
<tr class="odd memitem:af6bf727798ad49870a709094e5ff981c">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#af6bf727798ad49870a709094e5ff981c" class="el">operator==</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>&lt;
RefStringTypeLhs &gt; &amp;lhs, const StringType &amp;rhs)</td>
</tr>
<tr class="even memdesc:af6bf727798ad49870a709094e5ff981c">
<td class="mdescLeft"> </td>
<td class="mdescRight">compares JSON pointer and string for
equality<br />
</td>
</tr>
<tr class="odd separator:af6bf727798ad49870a709094e5ff981c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae7aabbb2a365ddaac5192ccea3226bfb"
class="even memitem:ae7aabbb2a365ddaac5192ccea3226bfb">
<td colspan="2" class="memTemplParams">template&lt;typename
RefStringTypeRhs , typename StringType &gt;</td>
</tr>
<tr class="odd memitem:ae7aabbb2a365ddaac5192ccea3226bfb">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ae7aabbb2a365ddaac5192ccea3226bfb" class="el">operator==</a>
(const StringType &amp;lhs, const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;rhs)</td>
</tr>
<tr class="even memdesc:ae7aabbb2a365ddaac5192ccea3226bfb">
<td class="mdescLeft"> </td>
<td class="mdescRight">compares string and JSON pointer for
equality<br />
</td>
</tr>
<tr class="odd separator:ae7aabbb2a365ddaac5192ccea3226bfb">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa72a84c70e970b738f1262cfd8a66b4d"
class="even memitem:aa72a84c70e970b738f1262cfd8a66b4d">
<td colspan="2" class="memTemplParams">template&lt;typename
RefStringTypeLhs , typename RefStringTypeRhs &gt;</td>
</tr>
<tr class="odd memitem:aa72a84c70e970b738f1262cfd8a66b4d">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#aa72a84c70e970b738f1262cfd8a66b4d" class="el">operator!=</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>&lt;
RefStringTypeLhs &gt; &amp;lhs, const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;rhs)
noexcept</td>
</tr>
<tr class="even memdesc:aa72a84c70e970b738f1262cfd8a66b4d">
<td class="mdescLeft"> </td>
<td class="mdescRight">compares two JSON pointers for inequality<br />
</td>
</tr>
<tr class="odd separator:aa72a84c70e970b738f1262cfd8a66b4d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae0bb92b1f034ac1738d44eb7540f8f66"
class="even memitem:ae0bb92b1f034ac1738d44eb7540f8f66">
<td colspan="2" class="memTemplParams">template&lt;typename
RefStringTypeLhs , typename StringType &gt;</td>
</tr>
<tr class="odd memitem:ae0bb92b1f034ac1738d44eb7540f8f66">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ae0bb92b1f034ac1738d44eb7540f8f66" class="el">operator!=</a>
(const <a href="classjson__pointer.html" class="el">json_pointer</a>&lt;
RefStringTypeLhs &gt; &amp;lhs, const StringType &amp;rhs)</td>
</tr>
<tr class="even memdesc:ae0bb92b1f034ac1738d44eb7540f8f66">
<td class="mdescLeft"> </td>
<td class="mdescRight">compares JSON pointer and string for
inequality<br />
</td>
</tr>
<tr class="odd separator:ae0bb92b1f034ac1738d44eb7540f8f66">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a32b28c0ef5f1c96b646817a0c360d7e6"
class="even memitem:a32b28c0ef5f1c96b646817a0c360d7e6">
<td colspan="2" class="memTemplParams">template&lt;typename
RefStringTypeRhs , typename StringType &gt;</td>
</tr>
<tr class="odd memitem:a32b28c0ef5f1c96b646817a0c360d7e6">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a32b28c0ef5f1c96b646817a0c360d7e6" class="el">operator!=</a>
(const StringType &amp;lhs, const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;rhs)</td>
</tr>
<tr class="even memdesc:a32b28c0ef5f1c96b646817a0c360d7e6">
<td class="mdescLeft"> </td>
<td class="mdescRight">compares string and JSON pointer for
inequality<br />
</td>
</tr>
<tr class="odd separator:a32b28c0ef5f1c96b646817a0c360d7e6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af8c9bbaed20be0634a2e522f54265d96"
class="even memitem:af8c9bbaed20be0634a2e522f54265d96">
<td colspan="2" class="memTemplParams"><span
id="af8c9bbaed20be0634a2e522f54265d96"></span> template&lt;typename
RefStringTypeLhs , typename RefStringTypeRhs &gt;</td>
</tr>
<tr class="odd memitem:af8c9bbaed20be0634a2e522f54265d96">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator&lt;</strong> (const <a
href="classjson__pointer.html" class="el">json_pointer</a>&lt;
RefStringTypeLhs &gt; &amp;lhs, const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;rhs)
noexcept</td>
</tr>
<tr class="even memdesc:af8c9bbaed20be0634a2e522f54265d96">
<td class="mdescLeft"> </td>
<td class="mdescRight">compares two JSON pointer for less-than<br />
</td>
</tr>
<tr class="odd separator:af8c9bbaed20be0634a2e522f54265d96">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename RefStringType\>  
class json_pointer\< RefStringType \>

</div>

JSON Pointer defines a string syntax for identifying a specific value
within a JSON document.

See also  
<https://json.nlohmann.me/api/json_pointer/>

</div>

## Constructor & Destructor Documentation

<span id="a5288b8f5d6ff6faca37f664b98a16ecd"></span>

## <span class="permalink">[◆ ](#a5288b8f5d6ff6faca37f664b98a16ecd)</span>json_pointer()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;<a
href="classjson__pointer.html" class="el">::json_pointer</a></td>
<td>(</td>
<td class="paramtype">const string_t &amp;</td>
<td class="paramname"><span class="paramname"><em>s</em><span
class="paramdefsep"> = </span><span
class="paramdefval">""</span></span></td>
<td>)</td>
<td></td>
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

create JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/json_pointer/>

</div>

</div>

## Member Function Documentation

<span id="aba71e63e4032cfc46dd90aeb09e5cb0f"></span>

## <span class="permalink">[◆ ](#aba71e63e4032cfc46dd90aeb09e5cb0f)</span>back()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname">const string_t &amp; <a
href="classjson__pointer.html" class="el">json_pointer</a>&lt;
RefStringType &gt;::back</td>
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

return last reference token

See also  
<https://json.nlohmann.me/api/json_pointer/back/>

</div>

</div>

<span id="a5c3d08bd0a0e99c3377db33600c68a64"></span>

## <span class="permalink">[◆ ](#a5c3d08bd0a0e99c3377db33600c68a64)</span>empty()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname">bool <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::empty</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether pointer points to the root document

See also  
<https://json.nlohmann.me/api/json_pointer/empty/>

</div>

</div>

<span id="a97364e516620b02f1049f847b2ad43c9"></span>

## <span class="permalink">[◆ ](#a97364e516620b02f1049f847b2ad43c9)</span>operator string_t()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::operator
string_t</td>
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

return a string representation of the JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/operator_string/>

</div>

</div>

<span id="a8bb8e43c6e01a6370cd49ba130171219"></span>

## <span class="permalink">[◆ ](#a8bb8e43c6e01a6370cd49ba130171219)</span>operator/=() <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a> &amp; <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::operator/=</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>ptr</em></span></td>
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

append another JSON pointer at the end of this JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/operator_slasheq/>

</div>

</div>

<span id="a6c2bffffbf08b77259e0b658c841703c"></span>

## <span class="permalink">[◆ ](#a6c2bffffbf08b77259e0b658c841703c)</span>operator/=() <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a> &amp; <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::operator/=</td>
<td>(</td>
<td class="paramtype">std::size_t</td>
<td class="paramname"><span
class="paramname"><em>array_idx</em></span></td>
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

append an array index at the end of this JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/operator_slasheq/>

</div>

</div>

<span id="aa810a9db8c1d6e67c4a3703dc66a18d4"></span>

## <span class="permalink">[◆ ](#aa810a9db8c1d6e67c4a3703dc66a18d4)</span>operator/=() <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a> &amp; <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::operator/=</td>
<td>(</td>
<td class="paramtype">string_t</td>
<td class="paramname"><span class="paramname"><em>token</em></span></td>
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

append an unescaped reference token at the end of this JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/operator_slasheq/>

</div>

</div>

<span id="aa03c0c1206e171342d27a4583258858b"></span>

## <span class="permalink">[◆ ](#aa03c0c1206e171342d27a4583258858b)</span>parent_pointer()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a> <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::parent_pointer</td>
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

returns the parent of this JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/parent_pointer/>

</div>

</div>

<span id="a662118b470c87a1b564946c2602c49ce"></span>

## <span class="permalink">[◆ ](#a662118b470c87a1b564946c2602c49ce)</span>pop_back()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname">void <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::pop_back</td>
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

remove last reference token

See also  
<https://json.nlohmann.me/api/json_pointer/pop_back/>

</div>

</div>

<span id="adbe97f9c00a221fb7be88d940b39a24f"></span>

## <span class="permalink">[◆ ](#adbe97f9c00a221fb7be88d940b39a24f)</span>push_back() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname">void <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::push_back</td>
<td>(</td>
<td class="paramtype">const string_t &amp;</td>
<td class="paramname"><span class="paramname"><em>token</em></span></td>
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

append an unescaped token at the end of the reference pointer

See also  
<https://json.nlohmann.me/api/json_pointer/push_back/>

</div>

</div>

<span id="a6fa4848eafc232ae1af91c3d2696897e"></span>

## <span class="permalink">[◆ ](#a6fa4848eafc232ae1af91c3d2696897e)</span>push_back() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname">void <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::push_back</td>
<td>(</td>
<td class="paramtype">string_t &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>token</em></span></td>
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

append an unescaped token at the end of the reference pointer

See also  
<https://json.nlohmann.me/api/json_pointer/push_back/>

</div>

</div>

<span id="a6b94e2003be4cd72c4f145bcea2578ec"></span>

## <span class="permalink">[◆ ](#a6b94e2003be4cd72c4f145bcea2578ec)</span>to_string()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname">string_t <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt;::to_string</td>
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

return a string representation of the JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/to_string/>

</div>

</div>

## Friends And Related Symbol Documentation

<span id="aa72a84c70e970b738f1262cfd8a66b4d"></span>

## <span class="permalink">[◆ ](#aa72a84c70e970b738f1262cfd8a66b4d)</span>operator!= <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

</div>

<div class="memtemplate">

template\<typename RefStringTypeLhs , typename RefStringTypeRhs \>

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
<td class="memname">bool operator!=</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeLhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>rhs</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

compares two JSON pointers for inequality

See also  
<https://json.nlohmann.me/api/json_pointer/operator_ne/>

</div>

</div>

<span id="ae0bb92b1f034ac1738d44eb7540f8f66"></span>

## <span class="permalink">[◆ ](#ae0bb92b1f034ac1738d44eb7540f8f66)</span>operator!= <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

</div>

<div class="memtemplate">

template\<typename RefStringTypeLhs , typename StringType \>

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
<td class="memname">bool operator!=</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeLhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const StringType &amp;</td>
<td class="paramname"><span class="paramname"><em>rhs</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

compares JSON pointer and string for inequality

See also  
<https://json.nlohmann.me/api/json_pointer/operator_ne/>

</div>

</div>

<span id="a32b28c0ef5f1c96b646817a0c360d7e6"></span>

## <span class="permalink">[◆ ](#a32b28c0ef5f1c96b646817a0c360d7e6)</span>operator!= <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

</div>

<div class="memtemplate">

template\<typename RefStringTypeRhs , typename StringType \>

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
<td class="memname">bool operator!=</td>
<td>(</td>
<td class="paramtype">const StringType &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>rhs</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

compares string and JSON pointer for inequality

See also  
<https://json.nlohmann.me/api/json_pointer/operator_ne/>

</div>

</div>

<span id="a90a11fe6c7f37b1746a3ff9cb24b0d53"></span>

## <span class="permalink">[◆ ](#a90a11fe6c7f37b1746a3ff9cb24b0d53)</span>operator/ <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a> operator/</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>rhs</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a new JSON pointer by appending the right JSON pointer at the end
of the left JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/operator_slash/>

</div>

</div>

<span id="a29f6d4b492e784b9d196b05a4048c289"></span>

## <span class="permalink">[◆ ](#a29f6d4b492e784b9d196b05a4048c289)</span>operator/ <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a> operator/</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">std::size_t</td>
<td class="paramname"><span
class="paramname"><em>array_idx</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a new JSON pointer by appending the array-index-token at the end
of the JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/operator_slash/>

</div>

</div>

<span id="a116956f4487af44732dd685e970679b0"></span>

## <span class="permalink">[◆ ](#a116956f4487af44732dd685e970679b0)</span>operator/ <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname"><a href="classjson__pointer.html"
class="el">json_pointer</a> operator/</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">string_t</td>
<td class="paramname"><span
class="paramname"><em>token</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a new JSON pointer by appending the unescaped token at the end of
the JSON pointer

See also  
<https://json.nlohmann.me/api/json_pointer/operator_slash/>

</div>

</div>

<span id="ad4140db2dd2f347f46f3abae0fc2156f"></span>

## <span class="permalink">[◆ ](#ad4140db2dd2f347f46f3abae0fc2156f)</span>operator\<\<

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

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
<td class="memname">std::ostream &amp; operator&lt;&lt;</td>
<td>(</td>
<td class="paramtype">std::ostream &amp;</td>
<td class="paramname"><span class="paramname"><em>o</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>ptr</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

write string representation of the JSON pointer to stream

See also  
<https://json.nlohmann.me/api/basic_json/operator_ltlt/>

</div>

</div>

<span id="a613a4889154f7ab2ee4efbe0fe147cf2"></span>

## <span class="permalink">[◆ ](#a613a4889154f7ab2ee4efbe0fe147cf2)</span>operator== <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

</div>

<div class="memtemplate">

template\<typename RefStringTypeLhs , typename RefStringTypeRhs \>

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
<td class="memname">bool operator==</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeLhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>rhs</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

compares two JSON pointers for equality

See also  
<https://json.nlohmann.me/api/json_pointer/operator_eq/>

</div>

</div>

<span id="af6bf727798ad49870a709094e5ff981c"></span>

## <span class="permalink">[◆ ](#af6bf727798ad49870a709094e5ff981c)</span>operator== <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

</div>

<div class="memtemplate">

template\<typename RefStringTypeLhs , typename StringType \>

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
<td class="memname">bool operator==</td>
<td>(</td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeLhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const StringType &amp;</td>
<td class="paramname"><span class="paramname"><em>rhs</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

compares JSON pointer and string for equality

See also  
<https://json.nlohmann.me/api/json_pointer/operator_eq/>

</div>

</div>

<span id="ae7aabbb2a365ddaac5192ccea3226bfb"></span>

## <span class="permalink">[◆ ](#ae7aabbb2a365ddaac5192ccea3226bfb)</span>operator== <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename RefStringType \>

</div>

<div class="memtemplate">

template\<typename RefStringTypeRhs , typename StringType \>

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
<td class="memname">bool operator==</td>
<td>(</td>
<td class="paramtype">const StringType &amp;</td>
<td class="paramname"><span class="paramname"><em>lhs</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classjson__pointer.html"
class="el">json_pointer</a>&lt; RefStringTypeRhs &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>rhs</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">friend</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

compares string and JSON pointer for equality

See also  
<https://json.nlohmann.me/api/json_pointer/operator_eq/>

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
