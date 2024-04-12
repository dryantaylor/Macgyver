---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::iter_impl\\< BasicJsonType \\> Class Template
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
- <a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[Public Attributes](#pub-attribs) \| [Friends](#friends) \| [List of all
members](classdetail_1_1iter__impl-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::iter_impl\< BasicJsonType \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

a template for a bidirectional iterator for the
<a href="classbasic__json.html" class="el">basic_json</a> class This
class implements a both iterators (iterator and const_iterator) for the
<a href="classbasic__json.html" class="el">basic_json</a> class.
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
<tr id="r_a8fa317aaddc3dc7c58264e52e295c43e"
class="even memitem:a8fa317aaddc3dc7c58264e52e295c43e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a8fa317aaddc3dc7c58264e52e295c43e"
class="el">iterator_category</a> = std::bidirectional_iterator_tag</td>
</tr>
<tr class="odd separator:a8fa317aaddc3dc7c58264e52e295c43e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab6c453d3fea1df38fa45fd4f97ea42df"
class="even memitem:ab6c453d3fea1df38fa45fd4f97ea42df">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab6c453d3fea1df38fa45fd4f97ea42df"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>value_type</strong> = typename
BasicJsonType::value_type</td>
</tr>
<tr class="odd memdesc:ab6c453d3fea1df38fa45fd4f97ea42df">
<td class="mdescLeft"> </td>
<td class="mdescRight">the type of the values when the iterator is
dereferenced<br />
</td>
</tr>
<tr class="even separator:ab6c453d3fea1df38fa45fd4f97ea42df">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6d51e1372282929d1c240223aa973c6e"
class="odd memitem:a6d51e1372282929d1c240223aa973c6e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6d51e1372282929d1c240223aa973c6e"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>difference_type</strong> = typename
BasicJsonType::difference_type</td>
</tr>
<tr class="even memdesc:a6d51e1372282929d1c240223aa973c6e">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type to represent differences between
iterators<br />
</td>
</tr>
<tr class="odd separator:a6d51e1372282929d1c240223aa973c6e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5f32f4fdd48a9b92ecb156af6421b1b8"
class="even memitem:a5f32f4fdd48a9b92ecb156af6421b1b8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5f32f4fdd48a9b92ecb156af6421b1b8" class="el">pointer</a></td>
</tr>
<tr class="odd memdesc:a5f32f4fdd48a9b92ecb156af6421b1b8">
<td class="mdescLeft"> </td>
<td class="mdescRight">defines a pointer to the type iterated over
(value_type)<br />
</td>
</tr>
<tr class="even separator:a5f32f4fdd48a9b92ecb156af6421b1b8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac0cfb3a9727e77580cb1beada093ee81"
class="odd memitem:ac0cfb3a9727e77580cb1beada093ee81">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac0cfb3a9727e77580cb1beada093ee81" class="el">reference</a></td>
</tr>
<tr class="even memdesc:ac0cfb3a9727e77580cb1beada093ee81">
<td class="mdescLeft"> </td>
<td class="mdescRight">defines a reference to the type iterated over
(value_type)<br />
</td>
</tr>
<tr class="odd separator:ac0cfb3a9727e77580cb1beada093ee81">
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
<tr id="r_a8b8e30542bd3aa542201448ea8fd7089"
class="even memitem:a8b8e30542bd3aa542201448ea8fd7089">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8b8e30542bd3aa542201448ea8fd7089"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>iter_impl</strong>
(<a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp;&amp;) noexcept=default</td>
</tr>
<tr class="odd separator:a8b8e30542bd3aa542201448ea8fd7089">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3e705d46278a4048c26f297b1b433393"
class="even memitem:a3e705d46278a4048c26f297b1b433393">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3e705d46278a4048c26f297b1b433393"></span>
<a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp;&amp;) noexcept=default</td>
</tr>
<tr class="odd separator:a3e705d46278a4048c26f297b1b433393">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a21ce449bdce08e15eaf8333322a81039"
class="even memitem:a21ce449bdce08e15eaf8333322a81039">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a21ce449bdce08e15eaf8333322a81039" class="el">iter_impl</a> (<a
href="#a5f32f4fdd48a9b92ecb156af6421b1b8" class="el">pointer</a> <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632aa8cfde6331bd59eb2ac96f8911c4b666"
class="el">object</a>) noexcept</td>
</tr>
<tr class="odd memdesc:a21ce449bdce08e15eaf8333322a81039">
<td class="mdescLeft"> </td>
<td class="mdescRight">constructor for a given JSON instance<br />
</td>
</tr>
<tr class="even separator:a21ce449bdce08e15eaf8333322a81039">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af8d8847a82d9dab28bd4650ed13a7c90"
class="odd memitem:af8d8847a82d9dab28bd4650ed13a7c90">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af8d8847a82d9dab28bd4650ed13a7c90" class="el">iter_impl</a>
(const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; const BasicJsonType &gt; &amp;other)
noexcept</td>
</tr>
<tr class="even memdesc:af8d8847a82d9dab28bd4650ed13a7c90">
<td class="mdescLeft"> </td>
<td class="mdescRight">const copy constructor<br />
</td>
</tr>
<tr class="odd separator:af8d8847a82d9dab28bd4650ed13a7c90">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae347fdf39e75d13ce488335ef1529b27"
class="even memitem:ae347fdf39e75d13ce488335ef1529b27">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae347fdf39e75d13ce488335ef1529b27" class="el">operator=</a>
(const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; const BasicJsonType &gt; &amp;other)
noexcept</td>
</tr>
<tr class="odd memdesc:ae347fdf39e75d13ce488335ef1529b27">
<td class="mdescLeft"> </td>
<td class="mdescRight">converting assignment<br />
</td>
</tr>
<tr class="even separator:ae347fdf39e75d13ce488335ef1529b27">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a26079f33eb8a16683577cf3782558f26"
class="odd memitem:a26079f33eb8a16683577cf3782558f26">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a26079f33eb8a16683577cf3782558f26" class="el">iter_impl</a>
(const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; typename std::remove_const&lt;
BasicJsonType &gt;::type &gt; &amp;other) noexcept</td>
</tr>
<tr class="even memdesc:a26079f33eb8a16683577cf3782558f26">
<td class="mdescLeft"> </td>
<td class="mdescRight">converting constructor<br />
</td>
</tr>
<tr class="odd separator:a26079f33eb8a16683577cf3782558f26">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a228140be2554afd5dfe54d4194780b7c"
class="even memitem:a228140be2554afd5dfe54d4194780b7c">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a228140be2554afd5dfe54d4194780b7c" class="el">operator=</a>
(const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; typename std::remove_const&lt;
BasicJsonType &gt;::type &gt; &amp;other) noexcept</td>
</tr>
<tr class="odd memdesc:a228140be2554afd5dfe54d4194780b7c">
<td class="mdescLeft"> </td>
<td class="mdescRight">converting assignment<br />
</td>
</tr>
<tr class="even separator:a228140be2554afd5dfe54d4194780b7c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab3a9cbf054745890847c27896f636ecc"
class="odd memitem:ab3a9cbf054745890847c27896f636ecc">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab3a9cbf054745890847c27896f636ecc"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>switch</strong>
(m_object-&gt;m_data.m_type)</td>
</tr>
<tr class="even separator:ab3a9cbf054745890847c27896f636ecc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afc94db3b8f35616347c25fae68e09509"
class="odd memitem:afc94db3b8f35616347c25fae68e09509">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#afc94db3b8f35616347c25fae68e09509" class="el">set_end</a> ()
noexcept</td>
</tr>
<tr class="even memdesc:afc94db3b8f35616347c25fae68e09509">
<td class="mdescLeft"> </td>
<td class="mdescRight">set the iterator past the last value<br />
</td>
</tr>
<tr class="odd separator:afc94db3b8f35616347c25fae68e09509">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abbef7d5bdb2c45980a34e907610c32b2"
class="even memitem:abbef7d5bdb2c45980a34e907610c32b2">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ac0cfb3a9727e77580cb1beada093ee81" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#abbef7d5bdb2c45980a34e907610c32b2" class="el">operator*</a> ()
const</td>
</tr>
<tr class="odd memdesc:abbef7d5bdb2c45980a34e907610c32b2">
<td class="mdescLeft"> </td>
<td class="mdescRight">return a reference to the value pointed to by the
iterator<br />
</td>
</tr>
<tr class="even separator:abbef7d5bdb2c45980a34e907610c32b2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a72314a87e67ba523f1be2f014f4eab56"
class="odd memitem:a72314a87e67ba523f1be2f014f4eab56">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a5f32f4fdd48a9b92ecb156af6421b1b8" class="el">pointer</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a72314a87e67ba523f1be2f014f4eab56" class="el">operator-&gt;</a>
() const</td>
</tr>
<tr class="even memdesc:a72314a87e67ba523f1be2f014f4eab56">
<td class="mdescLeft"> </td>
<td class="mdescRight">dereference the iterator<br />
</td>
</tr>
<tr class="odd separator:a72314a87e67ba523f1be2f014f4eab56">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5a1af6b2cd3611778b697bb7d7107f0d"
class="even memitem:a5a1af6b2cd3611778b697bb7d7107f0d">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5a1af6b2cd3611778b697bb7d7107f0d" class="el">operator++</a>
(int) &amp;</td>
</tr>
<tr class="odd memdesc:a5a1af6b2cd3611778b697bb7d7107f0d">
<td class="mdescLeft"> </td>
<td class="mdescRight">post-increment (it++)<br />
</td>
</tr>
<tr class="even separator:a5a1af6b2cd3611778b697bb7d7107f0d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab0288ec335f563769a09fba1123c076c"
class="odd memitem:ab0288ec335f563769a09fba1123c076c">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab0288ec335f563769a09fba1123c076c" class="el">operator++</a>
()</td>
</tr>
<tr class="even memdesc:ab0288ec335f563769a09fba1123c076c">
<td class="mdescLeft"> </td>
<td class="mdescRight">pre-increment (++it)<br />
</td>
</tr>
<tr class="odd separator:ab0288ec335f563769a09fba1123c076c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae8c229d46359424bf850f1ecb5587a70"
class="even memitem:ae8c229d46359424bf850f1ecb5587a70">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae8c229d46359424bf850f1ecb5587a70" class="el">operator--</a>
(int) &amp;</td>
</tr>
<tr class="odd memdesc:ae8c229d46359424bf850f1ecb5587a70">
<td class="mdescLeft"> </td>
<td class="mdescRight">post-decrement (it–)<br />
</td>
</tr>
<tr class="even separator:ae8c229d46359424bf850f1ecb5587a70">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3b7d07348aaaaf3eda9bd98b7d80415f"
class="odd memitem:a3b7d07348aaaaf3eda9bd98b7d80415f">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3b7d07348aaaaf3eda9bd98b7d80415f" class="el">operator--</a>
()</td>
</tr>
<tr class="even memdesc:a3b7d07348aaaaf3eda9bd98b7d80415f">
<td class="mdescLeft"> </td>
<td class="mdescRight">pre-decrement (–it)<br />
</td>
</tr>
<tr class="odd separator:a3b7d07348aaaaf3eda9bd98b7d80415f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a57b4e1eee4a3cdb3c0683cf64979da8d"
class="even memitem:a57b4e1eee4a3cdb3c0683cf64979da8d">
<td colspan="2" class="memTemplParams">template&lt;typename IterImpl ,
detail::enable_if_t&lt;(std::is_same&lt; IterImpl, <a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a> &gt;<a
href="#a96557c87bc9b3adf6aa0b1a6b6209525"
class="el">::value</a>||std::is_same&lt; IterImpl, other_iter_impl
&gt;<a href="#a96557c87bc9b3adf6aa0b1a6b6209525"
class="el">::value</a>), std::nullptr_t &gt; = nullptr&gt;</td>
</tr>
<tr class="odd memitem:a57b4e1eee4a3cdb3c0683cf64979da8d">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a57b4e1eee4a3cdb3c0683cf64979da8d" class="el">operator==</a>
(const IterImpl &amp;other) const</td>
</tr>
<tr class="even memdesc:a57b4e1eee4a3cdb3c0683cf64979da8d">
<td class="mdescLeft"> </td>
<td class="mdescRight">comparison: equal<br />
</td>
</tr>
<tr class="odd separator:a57b4e1eee4a3cdb3c0683cf64979da8d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae52db5f16f00edc13c848fe99e4c521b"
class="even memitem:ae52db5f16f00edc13c848fe99e4c521b">
<td colspan="2" class="memTemplParams">template&lt;typename IterImpl ,
detail::enable_if_t&lt;(std::is_same&lt; IterImpl, <a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a> &gt;<a
href="#a96557c87bc9b3adf6aa0b1a6b6209525"
class="el">::value</a>||std::is_same&lt; IterImpl, other_iter_impl
&gt;<a href="#a96557c87bc9b3adf6aa0b1a6b6209525"
class="el">::value</a>), std::nullptr_t &gt; = nullptr&gt;</td>
</tr>
<tr class="odd memitem:ae52db5f16f00edc13c848fe99e4c521b">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ae52db5f16f00edc13c848fe99e4c521b" class="el">operator!=</a>
(const IterImpl &amp;other) const</td>
</tr>
<tr class="even memdesc:ae52db5f16f00edc13c848fe99e4c521b">
<td class="mdescLeft"> </td>
<td class="mdescRight">comparison: not equal<br />
</td>
</tr>
<tr class="odd separator:ae52db5f16f00edc13c848fe99e4c521b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a339df296df7f5d014d5c7cedf40497da"
class="even memitem:a339df296df7f5d014d5c7cedf40497da">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a339df296df7f5d014d5c7cedf40497da" class="el">operator&lt;</a>
(const <a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp;other) const</td>
</tr>
<tr class="odd memdesc:a339df296df7f5d014d5c7cedf40497da">
<td class="mdescLeft"> </td>
<td class="mdescRight">comparison: smaller<br />
</td>
</tr>
<tr class="even separator:a339df296df7f5d014d5c7cedf40497da">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a343806ffb02d7ce5266492128dfd5f9b"
class="odd memitem:a343806ffb02d7ce5266492128dfd5f9b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a343806ffb02d7ce5266492128dfd5f9b" class="el">operator&lt;=</a>
(const <a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp;other) const</td>
</tr>
<tr class="even memdesc:a343806ffb02d7ce5266492128dfd5f9b">
<td class="mdescLeft"> </td>
<td class="mdescRight">comparison: less than or equal<br />
</td>
</tr>
<tr class="odd separator:a343806ffb02d7ce5266492128dfd5f9b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9b066d888f2f0ad0cd601594661a8e8b"
class="even memitem:a9b066d888f2f0ad0cd601594661a8e8b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a9b066d888f2f0ad0cd601594661a8e8b" class="el">operator&gt;</a>
(const <a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp;other) const</td>
</tr>
<tr class="odd memdesc:a9b066d888f2f0ad0cd601594661a8e8b">
<td class="mdescLeft"> </td>
<td class="mdescRight">comparison: greater than<br />
</td>
</tr>
<tr class="even separator:a9b066d888f2f0ad0cd601594661a8e8b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a25a3a8e85eb37727487f210f5304a48e"
class="odd memitem:a25a3a8e85eb37727487f210f5304a48e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a25a3a8e85eb37727487f210f5304a48e" class="el">operator&gt;=</a>
(const <a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp;other) const</td>
</tr>
<tr class="even memdesc:a25a3a8e85eb37727487f210f5304a48e">
<td class="mdescLeft"> </td>
<td class="mdescRight">comparison: greater than or equal<br />
</td>
</tr>
<tr class="odd separator:a25a3a8e85eb37727487f210f5304a48e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5e2dd333526ae85044fe78f65aac9b52"
class="even memitem:a5e2dd333526ae85044fe78f65aac9b52">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5e2dd333526ae85044fe78f65aac9b52" class="el">operator+=</a> (<a
href="#a6d51e1372282929d1c240223aa973c6e" class="el">difference_type</a>
i)</td>
</tr>
<tr class="odd memdesc:a5e2dd333526ae85044fe78f65aac9b52">
<td class="mdescLeft"> </td>
<td class="mdescRight">add to iterator<br />
</td>
</tr>
<tr class="even separator:a5e2dd333526ae85044fe78f65aac9b52">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3b48ed5856ca2011e8463d868fda3d0b"
class="odd memitem:a3b48ed5856ca2011e8463d868fda3d0b">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3b48ed5856ca2011e8463d868fda3d0b" class="el">operator-=</a> (<a
href="#a6d51e1372282929d1c240223aa973c6e" class="el">difference_type</a>
i)</td>
</tr>
<tr class="even memdesc:a3b48ed5856ca2011e8463d868fda3d0b">
<td class="mdescLeft"> </td>
<td class="mdescRight">subtract from iterator<br />
</td>
</tr>
<tr class="odd separator:a3b48ed5856ca2011e8463d868fda3d0b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a03abdffc86382e7c2a7c462c217d120e"
class="even memitem:a03abdffc86382e7c2a7c462c217d120e">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a03abdffc86382e7c2a7c462c217d120e" class="el">operator+</a> (<a
href="#a6d51e1372282929d1c240223aa973c6e" class="el">difference_type</a>
i) const</td>
</tr>
<tr class="odd memdesc:a03abdffc86382e7c2a7c462c217d120e">
<td class="mdescLeft"> </td>
<td class="mdescRight">add to iterator<br />
</td>
</tr>
<tr class="even separator:a03abdffc86382e7c2a7c462c217d120e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abfcadba7a9796c3f5a5e123efef349ec"
class="odd memitem:abfcadba7a9796c3f5a5e123efef349ec">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#abfcadba7a9796c3f5a5e123efef349ec" class="el">operator-</a> (<a
href="#a6d51e1372282929d1c240223aa973c6e" class="el">difference_type</a>
i) const</td>
</tr>
<tr class="even memdesc:abfcadba7a9796c3f5a5e123efef349ec">
<td class="mdescLeft"> </td>
<td class="mdescRight">subtract from iterator<br />
</td>
</tr>
<tr class="odd separator:abfcadba7a9796c3f5a5e123efef349ec">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a848837b8db99998c90d7bd71492d0dee"
class="even memitem:a848837b8db99998c90d7bd71492d0dee">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a848837b8db99998c90d7bd71492d0dee" class="el">operator-</a>
(const <a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
&amp;other) const</td>
</tr>
<tr class="odd memdesc:a848837b8db99998c90d7bd71492d0dee">
<td class="mdescLeft"> </td>
<td class="mdescRight">return difference<br />
</td>
</tr>
<tr class="even separator:a848837b8db99998c90d7bd71492d0dee">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5e557e30103e2af36cd8173c88eb586c"
class="odd memitem:a5e557e30103e2af36cd8173c88eb586c">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ac0cfb3a9727e77580cb1beada093ee81" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5e557e30103e2af36cd8173c88eb586c" class="el">operator[]</a> (<a
href="#a6d51e1372282929d1c240223aa973c6e" class="el">difference_type</a>
n) const</td>
</tr>
<tr class="even memdesc:a5e557e30103e2af36cd8173c88eb586c">
<td class="mdescLeft"> </td>
<td class="mdescRight">access to successor<br />
</td>
</tr>
<tr class="odd separator:a5e557e30103e2af36cd8173c88eb586c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4064b295014b32f3cabd86f94264fc74"
class="even memitem:a4064b295014b32f3cabd86f94264fc74">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">const object_t::key_type &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4064b295014b32f3cabd86f94264fc74" class="el">key</a> ()
const</td>
</tr>
<tr class="odd memdesc:a4064b295014b32f3cabd86f94264fc74">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the key of an object iterator<br />
</td>
</tr>
<tr class="even separator:a4064b295014b32f3cabd86f94264fc74">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a96557c87bc9b3adf6aa0b1a6b6209525"
class="odd memitem:a96557c87bc9b3adf6aa0b1a6b6209525">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ac0cfb3a9727e77580cb1beada093ee81" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a96557c87bc9b3adf6aa0b1a6b6209525" class="el">value</a> ()
const</td>
</tr>
<tr class="even memdesc:a96557c87bc9b3adf6aa0b1a6b6209525">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the value of an iterator<br />
</td>
</tr>
<tr class="odd separator:a96557c87bc9b3adf6aa0b1a6b6209525">
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
<tr id="r_ae146c1c7a0b8a46e353b1bbe181f7743"
class="even memitem:ae146c1c7a0b8a46e353b1bbe181f7743">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae146c1c7a0b8a46e353b1bbe181f7743"></span>
JSON_PRIVATE_UNLESS_TESTED </td>
<td class="memItemRight" data-valign="bottom">: void set_begin()
noexcept { JSON_ASSERT(m_object != nullptr)</td>
</tr>
<tr class="odd separator:ae146c1c7a0b8a46e353b1bbe181f7743">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a392b5af6ea3449fe31ab7aafa5db4774"
class="even memitem:a392b5af6ea3449fe31ab7aafa5db4774">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a392b5af6ea3449fe31ab7aafa5db4774"></span>
JSON_PRIVATE_UNLESS_TESTED </td>
<td class="memItemRight" data-valign="bottom">: <a
href="#a5f32f4fdd48a9b92ecb156af6421b1b8" class="el">pointer</a>
m_object = nullptr</td>
</tr>
<tr class="odd separator:a392b5af6ea3449fe31ab7aafa5db4774">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a79b7b8c6b778d9f7e76b086b45d9ea2e"
class="even memitem:a79b7b8c6b778d9f7e76b086b45d9ea2e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a79b7b8c6b778d9f7e76b086b45d9ea2e"></span>
<a href="structdetail_1_1internal__iterator.html"
class="el">internal_iterator</a>&lt; typename std::remove_const&lt;
BasicJsonType &gt;::type &gt; </td>
<td class="memItemRight" data-valign="bottom"><strong>m_it</strong>
{}</td>
</tr>
<tr class="odd memdesc:a79b7b8c6b778d9f7e76b086b45d9ea2e">
<td class="mdescLeft"> </td>
<td class="mdescRight">the actual iterator of the associated
instance<br />
</td>
</tr>
<tr class="even separator:a79b7b8c6b778d9f7e76b086b45d9ea2e">
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
<tr id="r_a94108d1a7563e103534f23eb5c1ee175"
class="even memitem:a94108d1a7563e103534f23eb5c1ee175">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classdetail_1_1iter__impl.html" class="el">iter_impl</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a94108d1a7563e103534f23eb5c1ee175" class="el">operator+</a> (<a
href="#a6d51e1372282929d1c240223aa973c6e" class="el">difference_type</a>
i, const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> &amp;it)</td>
</tr>
<tr class="odd memdesc:a94108d1a7563e103534f23eb5c1ee175">
<td class="mdescLeft"> </td>
<td class="mdescRight">addition of distance and iterator<br />
</td>
</tr>
<tr class="even separator:a94108d1a7563e103534f23eb5c1ee175">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType\>  
class detail::iter_impl\< BasicJsonType \>

</div>

a template for a bidirectional iterator for the
<a href="classbasic__json.html" class="el">basic_json</a> class This
class implements a both iterators (iterator and const_iterator) for the
<a href="classbasic__json.html" class="el">basic_json</a> class.

Note  
An iterator is called *initialized* when a pointer to a JSON value has
been set (e.g., by a constructor or a copy assignment). If the iterator
is default-constructed, it is *uninitialized* and most methods are
undefined. The library uses assertions to detect calls on uninitialized
iterators.\*\* @requirement The class satisfies the following concept
requirements:

- [BidirectionalIterator](https://en.cppreference.com/w/cpp/named_req/BidirectionalIterator):
  The iterator that can be moved can be moved in both directions (i.e.
  incremented and decremented).

<!-- -->

Since  
version 1.0.0, simplified in version 2.0.9, change to bidirectional
iterators in version 3.0.0 (see
<https://github.com/nlohmann/json/issues/593>)

</div>

## Member Typedef Documentation

<span id="a8fa317aaddc3dc7c58264e52e295c43e"></span>

## <span class="permalink">[◆ ](#a8fa317aaddc3dc7c58264e52e295c43e)</span>iterator_category

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

</div>

|                                                                                                          |
|----------------------------------------------------------------------------------------------------------|
| using <a href="classdetail_1_1iter__impl.html"                                                           
 class="el">detail::iter_impl</a>\< BasicJsonType \>::iterator_category = std::bidirectional_iterator_tag  |

</div>

<div class="memdoc">

The std::iterator class template (used as a base class to provide
typedefs) is deprecated in C++17. The C++ Standard has never required
user-defined iterators to derive from std::iterator. A user-defined
iterator should provide publicly accessible typedefs named
iterator_category, value_type, difference_type, pointer, and reference.
Note that value_type is required to be non-const, even for constant
iterators.

</div>

</div>

<span id="a5f32f4fdd48a9b92ecb156af6421b1b8"></span>

## <span class="permalink">[◆ ](#a5f32f4fdd48a9b92ecb156af6421b1b8)</span>pointer

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

</div>

|                                                              |
|--------------------------------------------------------------|
| using <a href="classdetail_1_1iter__impl.html"               
 class="el">detail::iter_impl</a>\< BasicJsonType \>::pointer  |

</div>

<div class="memdoc">

**Initial value:**

<div class="fragment">

<div class="line">

<span class="keyword">typename</span>
std::conditional\<std::is_const\<BasicJsonType\>::value,

</div>

<div class="line">

<span class="keyword">typename</span> BasicJsonType::const_pointer,

</div>

<div class="line">

<span class="keyword">typename</span> BasicJsonType::pointer\>::type

</div>

</div>

defines a pointer to the type iterated over (value_type)

</div>

</div>

<span id="ac0cfb3a9727e77580cb1beada093ee81"></span>

## <span class="permalink">[◆ ](#ac0cfb3a9727e77580cb1beada093ee81)</span>reference

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

</div>

|                                                                |
|----------------------------------------------------------------|
| using <a href="classdetail_1_1iter__impl.html"                 
 class="el">detail::iter_impl</a>\< BasicJsonType \>::reference  |

</div>

<div class="memdoc">

**Initial value:**

<div class="fragment">

<div class="line">

</div>

<div class="line">

<span class="keyword">typename</span>
std::conditional\<std::is_const\<BasicJsonType\>::value,

</div>

<div class="line">

<span class="keyword">typename</span> BasicJsonType::const_reference,

</div>

<div class="line">

<span class="keyword">typename</span> BasicJsonType::reference\>::type

</div>

</div>

defines a reference to the type iterated over (value_type)

</div>

</div>

## Constructor & Destructor Documentation

<span id="a21ce449bdce08e15eaf8333322a81039"></span>

## <span class="permalink">[◆ ](#a21ce449bdce08e15eaf8333322a81039)</span>iter_impl() <span class="overload">\[1/3\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::iter_impl</td>
<td>(</td>
<td class="paramtype"><a href="#a5f32f4fdd48a9b92ecb156af6421b1b8"
class="el">pointer</a></td>
<td class="paramname"><span
class="paramname"><em>object</em></span></td>
<td>)</td>
<td></td>
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

constructor for a given JSON instance

Parameters  
|        |        |                                            |
|--------|--------|--------------------------------------------|
| \[in\] | object | pointer to a JSON object for this iterator |

<!-- -->

Precondition  
object != nullptr

<!-- -->

Postcondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="af8d8847a82d9dab28bd4650ed13a7c90"></span>

## <span class="permalink">[◆ ](#af8d8847a82d9dab28bd4650ed13a7c90)</span>iter_impl() <span class="overload">\[2/3\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::iter_impl</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; const BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
<td>)</td>
<td></td>
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

const copy constructor

Note  
The conventional copy constructor and copy assignment are implicitly
defined. Combined with the following converting constructor and
assignment, they support: (1) copy from iterator to iterator, (2) copy
from const iterator to const iterator, and (3) conversion from iterator
to const iterator. However conversion from const iterator to iterator is
not defined.

<!-- -->

Parameters  
|        |       |                             |
|--------|-------|-----------------------------|
| \[in\] | other | const iterator to copy from |

<!-- -->

Note  
This copy constructor had to be defined explicitly to circumvent a bug
occurring on msvc v19.0 compiler (VS 2015) debug build. For more
information refer to: <https://github.com/nlohmann/json/issues/1608>

</div>

</div>

<span id="a26079f33eb8a16683577cf3782558f26"></span>

## <span class="permalink">[◆ ](#a26079f33eb8a16683577cf3782558f26)</span>iter_impl() <span class="overload">\[3/3\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::iter_impl</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; typename std::remove_const&lt;
BasicJsonType &gt;::type &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
<td>)</td>
<td></td>
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

converting constructor

Parameters  
|        |       |                                 |
|--------|-------|---------------------------------|
| \[in\] | other | non-const iterator to copy from |

<!-- -->

Note  
It is not checked whether *other* is initialized.

</div>

</div>

## Member Function Documentation

<span id="a4064b295014b32f3cabd86f94264fc74"></span>

## <span class="permalink">[◆ ](#a4064b295014b32f3cabd86f94264fc74)</span>key()

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
<td class="memname">const object_t::key_type &amp; <a
href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::key</td>
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

return the key of an object iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="ae52db5f16f00edc13c848fe99e4c521b"></span>

## <span class="permalink">[◆ ](#ae52db5f16f00edc13c848fe99e4c521b)</span>operator!=()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

</div>

<div class="memtemplate">

template\<typename IterImpl , detail::enable_if_t\<(std::is_same\<
IterImpl,
<a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
\><a href="#a96557c87bc9b3adf6aa0b1a6b6209525" class="el">::value</a>\|\|std::is_same\<
IterImpl, other_iter_impl
\><a href="#a96557c87bc9b3adf6aa0b1a6b6209525" class="el">::value</a>),
std::nullptr_t \> = nullptr\>

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
<td class="memname">bool <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator!=</td>
<td>(</td>
<td class="paramtype">const IterImpl &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

comparison: not equal

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="abbef7d5bdb2c45980a34e907610c32b2"></span>

## <span class="permalink">[◆ ](#abbef7d5bdb2c45980a34e907610c32b2)</span>operator\*()

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
<td class="memname"><a href="#ac0cfb3a9727e77580cb1beada093ee81"
class="el">reference</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator*</td>
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

return a reference to the value pointed to by the iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a03abdffc86382e7c2a7c462c217d120e"></span>

## <span class="permalink">[◆ ](#a03abdffc86382e7c2a7c462c217d120e)</span>operator+()

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator+</td>
<td>(</td>
<td class="paramtype"><a href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a></td>
<td class="paramname"><span class="paramname"><em>i</em></span></td>
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

add to iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="ab0288ec335f563769a09fba1123c076c"></span>

## <span class="permalink">[◆ ](#ab0288ec335f563769a09fba1123c076c)</span>operator++() <span class="overload">\[1/2\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> &amp; <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator++</td>
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

pre-increment (++it)

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a5a1af6b2cd3611778b697bb7d7107f0d"></span>

## <span class="permalink">[◆ ](#a5a1af6b2cd3611778b697bb7d7107f0d)</span>operator++() <span class="overload">\[2/2\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator++</td>
<td>(</td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>&amp;</td>
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

post-increment (it++)

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a5e2dd333526ae85044fe78f65aac9b52"></span>

## <span class="permalink">[◆ ](#a5e2dd333526ae85044fe78f65aac9b52)</span>operator+=()

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> &amp; <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator+=</td>
<td>(</td>
<td class="paramtype"><a href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a></td>
<td class="paramname"><span class="paramname"><em>i</em></span></td>
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

add to iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a848837b8db99998c90d7bd71492d0dee"></span>

## <span class="permalink">[◆ ](#a848837b8db99998c90d7bd71492d0dee)</span>operator-() <span class="overload">\[1/2\]</span>

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
<td class="memname"><a href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator-</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

return difference

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="abfcadba7a9796c3f5a5e123efef349ec"></span>

## <span class="permalink">[◆ ](#abfcadba7a9796c3f5a5e123efef349ec)</span>operator-() <span class="overload">\[2/2\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator-</td>
<td>(</td>
<td class="paramtype"><a href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a></td>
<td class="paramname"><span class="paramname"><em>i</em></span></td>
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

subtract from iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a3b7d07348aaaaf3eda9bd98b7d80415f"></span>

## <span class="permalink">[◆ ](#a3b7d07348aaaaf3eda9bd98b7d80415f)</span>operator--() <span class="overload">\[1/2\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> &amp; <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator--</td>
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

pre-decrement (–it)

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="ae8c229d46359424bf850f1ecb5587a70"></span>

## <span class="permalink">[◆ ](#ae8c229d46359424bf850f1ecb5587a70)</span>operator--() <span class="overload">\[2/2\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator--</td>
<td>(</td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>&amp;</td>
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

post-decrement (it–)

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a3b48ed5856ca2011e8463d868fda3d0b"></span>

## <span class="permalink">[◆ ](#a3b48ed5856ca2011e8463d868fda3d0b)</span>operator-=()

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> &amp; <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator-=</td>
<td>(</td>
<td class="paramtype"><a href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a></td>
<td class="paramname"><span class="paramname"><em>i</em></span></td>
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

subtract from iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a72314a87e67ba523f1be2f014f4eab56"></span>

## <span class="permalink">[◆ ](#a72314a87e67ba523f1be2f014f4eab56)</span>operator-\>()

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
<td class="memname"><a href="#a5f32f4fdd48a9b92ecb156af6421b1b8"
class="el">pointer</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType
&gt;::operator-&gt;</td>
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

dereference the iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a339df296df7f5d014d5c7cedf40497da"></span>

## <span class="permalink">[◆ ](#a339df296df7f5d014d5c7cedf40497da)</span>operator\<()

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
<td class="memname">bool <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType
&gt;::operator&lt;</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

comparison: smaller

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a343806ffb02d7ce5266492128dfd5f9b"></span>

## <span class="permalink">[◆ ](#a343806ffb02d7ce5266492128dfd5f9b)</span>operator\<=()

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
<td class="memname">bool <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType
&gt;::operator&lt;=</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

comparison: less than or equal

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="ae347fdf39e75d13ce488335ef1529b27"></span>

## <span class="permalink">[◆ ](#ae347fdf39e75d13ce488335ef1529b27)</span>operator=() <span class="overload">\[1/2\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> &amp; <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator=</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; const BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
<td>)</td>
<td></td>
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

converting assignment

Parameters  
|        |       |                             |
|--------|-------|-----------------------------|
| \[in\] | other | const iterator to copy from |

<!-- -->

Returns  
const/non-const iterator

<!-- -->

Note  
It is not checked whether *other* is initialized.

</div>

</div>

<span id="a228140be2554afd5dfe54d4194780b7c"></span>

## <span class="permalink">[◆ ](#a228140be2554afd5dfe54d4194780b7c)</span>operator=() <span class="overload">\[2/2\]</span>

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> &amp; <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator=</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; typename std::remove_const&lt;
BasicJsonType &gt;::type &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
<td>)</td>
<td></td>
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

converting assignment

Parameters  
|        |       |                                 |
|--------|-------|---------------------------------|
| \[in\] | other | non-const iterator to copy from |

<!-- -->

Returns  
const/non-const iterator

<!-- -->

Note  
It is not checked whether *other* is initialized.

</div>

</div>

<span id="a57b4e1eee4a3cdb3c0683cf64979da8d"></span>

## <span class="permalink">[◆ ](#a57b4e1eee4a3cdb3c0683cf64979da8d)</span>operator==()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

</div>

<div class="memtemplate">

template\<typename IterImpl , detail::enable_if_t\<(std::is_same\<
IterImpl,
<a href="classdetail_1_1iter__impl.html" class="el">iter_impl</a>
\><a href="#a96557c87bc9b3adf6aa0b1a6b6209525" class="el">::value</a>\|\|std::is_same\<
IterImpl, other_iter_impl
\><a href="#a96557c87bc9b3adf6aa0b1a6b6209525" class="el">::value</a>),
std::nullptr_t \> = nullptr\>

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
<td class="memname">bool <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator==</td>
<td>(</td>
<td class="paramtype">const IterImpl &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

comparison: equal

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a9b066d888f2f0ad0cd601594661a8e8b"></span>

## <span class="permalink">[◆ ](#a9b066d888f2f0ad0cd601594661a8e8b)</span>operator\>()

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
<td class="memname">bool <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType
&gt;::operator&gt;</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

comparison: greater than

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a25a3a8e85eb37727487f210f5304a48e"></span>

## <span class="permalink">[◆ ](#a25a3a8e85eb37727487f210f5304a48e)</span>operator\>=()

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
<td class="memname">bool <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType
&gt;::operator&gt;=</td>
<td>(</td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

comparison: greater than or equal

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a5e557e30103e2af36cd8173c88eb586c"></span>

## <span class="permalink">[◆ ](#a5e557e30103e2af36cd8173c88eb586c)</span>operator\[\]()

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
<td class="memname"><a href="#ac0cfb3a9727e77580cb1beada093ee81"
class="el">reference</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::operator[]</td>
<td>(</td>
<td class="paramtype"><a href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a></td>
<td class="paramname"><span class="paramname"><em>n</em></span></td>
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

access to successor

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="afc94db3b8f35616347c25fae68e09509"></span>

## <span class="permalink">[◆ ](#afc94db3b8f35616347c25fae68e09509)</span>set_end()

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
<td class="memname">void <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::set_end</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td></td>
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

set the iterator past the last value

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

<span id="a96557c87bc9b3adf6aa0b1a6b6209525"></span>

## <span class="permalink">[◆ ](#a96557c87bc9b3adf6aa0b1a6b6209525)</span>value()

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
<td class="memname"><a href="#ac0cfb3a9727e77580cb1beada093ee81"
class="el">reference</a> <a href="classdetail_1_1iter__impl.html"
class="el">detail::iter_impl</a>&lt; BasicJsonType &gt;::value</td>
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

return the value of an iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

</div>

</div>

## Friends And Related Symbol Documentation

<span id="a94108d1a7563e103534f23eb5c1ee175"></span>

## <span class="permalink">[◆ ](#a94108d1a7563e103534f23eb5c1ee175)</span>operator+

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
<td class="memname"><a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a> operator+</td>
<td>(</td>
<td class="paramtype"><a href="#a6d51e1372282929d1c240223aa973c6e"
class="el">difference_type</a></td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classdetail_1_1iter__impl.html"
class="el">iter_impl</a>&lt; BasicJsonType &gt; &amp;</td>
<td class="paramname"><span class="paramname"><em>it</em></span> )</td>
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

addition of distance and iterator

Precondition  
The iterator is initialized; i.e. `m_object != nullptr`.

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
