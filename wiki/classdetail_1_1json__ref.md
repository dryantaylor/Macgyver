---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::json_ref\\< BasicJsonType \\> Class Template
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

<div id="nav-path" class="navpath">

- <a href="namespacedetail.html" class="el">detail</a>
- <a href="classdetail_1_1json__ref.html" class="el">json_ref</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[List of all members](classdetail_1_1json__ref-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::json_ref\< BasicJsonType \> Class Template Reference

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
<tr id="r_ad547f2d92f71b8c6532031c7d75c61d4"
class="even memitem:ad547f2d92f71b8c6532031c7d75c61d4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad547f2d92f71b8c6532031c7d75c61d4"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>value_type</strong> = BasicJsonType</td>
</tr>
<tr class="odd separator:ad547f2d92f71b8c6532031c7d75c61d4">
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
<tr id="r_a75203c86bb04e3e402bf2ac68c570292"
class="even memitem:a75203c86bb04e3e402bf2ac68c570292">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a75203c86bb04e3e402bf2ac68c570292"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>json_ref</strong>
(value_type &amp;&amp;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">value</a>)</td>
</tr>
<tr class="odd separator:a75203c86bb04e3e402bf2ac68c570292">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a74412b9ccfc62eb7503991dcf9702c8d"
class="even memitem:a74412b9ccfc62eb7503991dcf9702c8d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a74412b9ccfc62eb7503991dcf9702c8d"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>json_ref</strong>
(const value_type &amp;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">value</a>)</td>
</tr>
<tr class="odd separator:a74412b9ccfc62eb7503991dcf9702c8d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9b79cd7e60791a5ffafa7ea2a1a39057"
class="even memitem:a9b79cd7e60791a5ffafa7ea2a1a39057">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9b79cd7e60791a5ffafa7ea2a1a39057"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>json_ref</strong>
(std::initializer_list&lt; <a href="classdetail_1_1json__ref.html"
class="el">json_ref</a> &gt; init)</td>
</tr>
<tr class="odd separator:a9b79cd7e60791a5ffafa7ea2a1a39057">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa95181b6f18d1c5fc624ff1b6253a189"
class="even memitem:aa95181b6f18d1c5fc624ff1b6253a189">
<td colspan="2" class="memTemplParams"><span
id="aa95181b6f18d1c5fc624ff1b6253a189"></span> template&lt;class...
Args, enable_if_t&lt; std::is_constructible&lt; value_type, Args...
&gt;<a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:aa95181b6f18d1c5fc624ff1b6253a189">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>json_ref</strong> (Args &amp;&amp;...
args)</td>
</tr>
<tr class="even separator:aa95181b6f18d1c5fc624ff1b6253a189">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5ddfd0d79d70a37b98867f14000435c7"
class="odd memitem:a5ddfd0d79d70a37b98867f14000435c7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a5ddfd0d79d70a37b98867f14000435c7"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>json_ref</strong>
(<a href="classdetail_1_1json__ref.html" class="el">json_ref</a>
&amp;&amp;) noexcept=default</td>
</tr>
<tr class="even separator:a5ddfd0d79d70a37b98867f14000435c7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2f61ad441afb494e31378b11eae0dfb0"
class="odd memitem:a2f61ad441afb494e31378b11eae0dfb0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2f61ad441afb494e31378b11eae0dfb0"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>json_ref</strong>
(const <a href="classdetail_1_1json__ref.html" class="el">json_ref</a>
&amp;)=delete</td>
</tr>
<tr class="even separator:a2f61ad441afb494e31378b11eae0dfb0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae73600db354e0073858f2b2b10298908"
class="odd memitem:ae73600db354e0073858f2b2b10298908">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae73600db354e0073858f2b2b10298908"></span>
<a href="classdetail_1_1json__ref.html" class="el">json_ref</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const <a href="classdetail_1_1json__ref.html" class="el">json_ref</a>
&amp;)=delete</td>
</tr>
<tr class="even separator:ae73600db354e0073858f2b2b10298908">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a667d02a68a829f346d120d94bbf5982e"
class="odd memitem:a667d02a68a829f346d120d94bbf5982e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a667d02a68a829f346d120d94bbf5982e"></span>
<a href="classdetail_1_1json__ref.html" class="el">json_ref</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1json__ref.html" class="el">json_ref</a>
&amp;&amp;)=delete</td>
</tr>
<tr class="even separator:a667d02a68a829f346d120d94bbf5982e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad37b535229db57173a6cd57aadba9662"
class="odd memitem:ad37b535229db57173a6cd57aadba9662">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad37b535229db57173a6cd57aadba9662"></span>
value_type </td>
<td class="memItemRight"
data-valign="bottom"><strong>moved_or_copied</strong> () const</td>
</tr>
<tr class="even separator:ad37b535229db57173a6cd57aadba9662">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a79ae1f17fef3676887f649b92c828125"
class="odd memitem:a79ae1f17fef3676887f649b92c828125">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a79ae1f17fef3676887f649b92c828125"></span>
value_type const &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator*</strong>
() const</td>
</tr>
<tr class="even separator:a79ae1f17fef3676887f649b92c828125">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a86b5e6b29c3f87f52498e5e07377e618"
class="odd memitem:a86b5e6b29c3f87f52498e5e07377e618">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a86b5e6b29c3f87f52498e5e07377e618"></span>
value_type const * </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator-&gt;</strong> () const</td>
</tr>
<tr class="even separator:a86b5e6b29c3f87f52498e5e07377e618">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
