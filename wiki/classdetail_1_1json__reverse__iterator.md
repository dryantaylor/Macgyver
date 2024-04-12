---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::json_reverse_iterator\\< Base \\> Class Template
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
- <a href="classdetail_1_1json__reverse__iterator.html"
  class="el">json_reverse_iterator</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[List of all
members](classdetail_1_1json__reverse__iterator-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::json_reverse_iterator\< Base \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

a template for a reverse iterator class [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for detail::json_reverse_iterator\< Base \>:

</div>

<div class="dyncontent">

<div class="center">

![](classdetail_1_1json__reverse__iterator.png)

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
<tr id="r_a474e450284b0bb060b248d20f2b03f93"
class="even memitem:a474e450284b0bb060b248d20f2b03f93">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a474e450284b0bb060b248d20f2b03f93"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>difference_type</strong> =
std::ptrdiff_t</td>
</tr>
<tr class="odd separator:a474e450284b0bb060b248d20f2b03f93">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab306723c375c396a5ccd90e2d31ad651"
class="even memitem:ab306723c375c396a5ccd90e2d31ad651">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab306723c375c396a5ccd90e2d31ad651"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>base_iterator</strong> =
std::reverse_iterator&lt;Base&gt;</td>
</tr>
<tr class="odd memdesc:ab306723c375c396a5ccd90e2d31ad651">
<td class="mdescLeft"> </td>
<td class="mdescRight">shortcut to the reverse iterator adapter<br />
</td>
</tr>
<tr class="even separator:ab306723c375c396a5ccd90e2d31ad651">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a81a4d0a61246d4ece37fd14eacfadda0"
class="odd memitem:a81a4d0a61246d4ece37fd14eacfadda0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a81a4d0a61246d4ece37fd14eacfadda0"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>reference</strong>
= typename Base::reference</td>
</tr>
<tr class="even memdesc:a81a4d0a61246d4ece37fd14eacfadda0">
<td class="mdescLeft"> </td>
<td class="mdescRight">the reference type for the pointed-to
element<br />
</td>
</tr>
<tr class="odd separator:a81a4d0a61246d4ece37fd14eacfadda0">
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
<tr id="r_ad0012dca9469c2d5669ca2e446c8957d"
class="even memitem:ad0012dca9469c2d5669ca2e446c8957d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad0012dca9469c2d5669ca2e446c8957d"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>json_reverse_iterator</strong> (const
typename base_iterator::iterator_type &amp;it) noexcept</td>
</tr>
<tr class="odd memdesc:ad0012dca9469c2d5669ca2e446c8957d">
<td class="mdescLeft"> </td>
<td class="mdescRight">create reverse iterator from iterator<br />
</td>
</tr>
<tr class="even separator:ad0012dca9469c2d5669ca2e446c8957d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a95ef832171f9aba019f284125bed75ca"
class="odd memitem:a95ef832171f9aba019f284125bed75ca">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a95ef832171f9aba019f284125bed75ca"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>json_reverse_iterator</strong> (const <a
href="#ab306723c375c396a5ccd90e2d31ad651" class="el">base_iterator</a>
&amp;it) noexcept</td>
</tr>
<tr class="even memdesc:a95ef832171f9aba019f284125bed75ca">
<td class="mdescLeft"> </td>
<td class="mdescRight">create reverse iterator from base class<br />
</td>
</tr>
<tr class="odd separator:a95ef832171f9aba019f284125bed75ca">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a000addec834a8db323312794737623da"
class="even memitem:a000addec834a8db323312794737623da">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a000addec834a8db323312794737623da"></span>
<a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator++</strong> (int) &amp;</td>
</tr>
<tr class="odd memdesc:a000addec834a8db323312794737623da">
<td class="mdescLeft"> </td>
<td class="mdescRight">post-increment (it++)<br />
</td>
</tr>
<tr class="even separator:a000addec834a8db323312794737623da">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3e611d63a209fdfd1278c2a9d86c40e3"
class="odd memitem:a3e611d63a209fdfd1278c2a9d86c40e3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3e611d63a209fdfd1278c2a9d86c40e3"></span>
<a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> &amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator++</strong> ()</td>
</tr>
<tr class="even memdesc:a3e611d63a209fdfd1278c2a9d86c40e3">
<td class="mdescLeft"> </td>
<td class="mdescRight">pre-increment (++it)<br />
</td>
</tr>
<tr class="odd separator:a3e611d63a209fdfd1278c2a9d86c40e3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1abdaf558ee194cdd44e9cee82fce77d"
class="even memitem:a1abdaf558ee194cdd44e9cee82fce77d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a1abdaf558ee194cdd44e9cee82fce77d"></span>
<a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator--</strong> (int) &amp;</td>
</tr>
<tr class="odd memdesc:a1abdaf558ee194cdd44e9cee82fce77d">
<td class="mdescLeft"> </td>
<td class="mdescRight">post-decrement (it–)<br />
</td>
</tr>
<tr class="even separator:a1abdaf558ee194cdd44e9cee82fce77d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9736216bab45871b1c62eb68df0613c3"
class="odd memitem:a9736216bab45871b1c62eb68df0613c3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9736216bab45871b1c62eb68df0613c3"></span>
<a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> &amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator--</strong> ()</td>
</tr>
<tr class="even memdesc:a9736216bab45871b1c62eb68df0613c3">
<td class="mdescLeft"> </td>
<td class="mdescRight">pre-decrement (–it)<br />
</td>
</tr>
<tr class="odd separator:a9736216bab45871b1c62eb68df0613c3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4e433b66cce1a79c88bfe645de9794dc"
class="even memitem:a4e433b66cce1a79c88bfe645de9794dc">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4e433b66cce1a79c88bfe645de9794dc"></span>
<a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> &amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator+=</strong> (difference_type
i)</td>
</tr>
<tr class="odd memdesc:a4e433b66cce1a79c88bfe645de9794dc">
<td class="mdescLeft"> </td>
<td class="mdescRight">add to iterator<br />
</td>
</tr>
<tr class="even separator:a4e433b66cce1a79c88bfe645de9794dc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_adff7b1171a9a154b5a339b0a0e85404d"
class="odd memitem:adff7b1171a9a154b5a339b0a0e85404d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="adff7b1171a9a154b5a339b0a0e85404d"></span>
<a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><strong>operator+</strong>
(difference_type i) const</td>
</tr>
<tr class="even memdesc:adff7b1171a9a154b5a339b0a0e85404d">
<td class="mdescLeft"> </td>
<td class="mdescRight">add to iterator<br />
</td>
</tr>
<tr class="odd separator:adff7b1171a9a154b5a339b0a0e85404d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abb64fbf5298d1bdc987496f57a288877"
class="even memitem:abb64fbf5298d1bdc987496f57a288877">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="abb64fbf5298d1bdc987496f57a288877"></span>
<a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><strong>operator-</strong>
(difference_type i) const</td>
</tr>
<tr class="odd memdesc:abb64fbf5298d1bdc987496f57a288877">
<td class="mdescLeft"> </td>
<td class="mdescRight">subtract from iterator<br />
</td>
</tr>
<tr class="even separator:abb64fbf5298d1bdc987496f57a288877">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6eba395b9f3f0b2c470c5a240a041128"
class="odd memitem:a6eba395b9f3f0b2c470c5a240a041128">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6eba395b9f3f0b2c470c5a240a041128"></span>
difference_type </td>
<td class="memItemRight" data-valign="bottom"><strong>operator-</strong>
(const <a href="classdetail_1_1json__reverse__iterator.html"
class="el">json_reverse_iterator</a> &amp;other) const</td>
</tr>
<tr class="even memdesc:a6eba395b9f3f0b2c470c5a240a041128">
<td class="mdescLeft"> </td>
<td class="mdescRight">return difference<br />
</td>
</tr>
<tr class="odd separator:a6eba395b9f3f0b2c470c5a240a041128">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a50a57718a9d49039b7592bf34f5819a2"
class="even memitem:a50a57718a9d49039b7592bf34f5819a2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a50a57718a9d49039b7592bf34f5819a2"></span>
<a href="#a81a4d0a61246d4ece37fd14eacfadda0"
class="el">reference</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator[]</strong> (difference_type n)
const</td>
</tr>
<tr class="odd memdesc:a50a57718a9d49039b7592bf34f5819a2">
<td class="mdescLeft"> </td>
<td class="mdescRight">access to successor<br />
</td>
</tr>
<tr class="even separator:a50a57718a9d49039b7592bf34f5819a2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a68d4f0c3e978afdc7509ee88e2f7b996"
class="odd memitem:a68d4f0c3e978afdc7509ee88e2f7b996">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a68d4f0c3e978afdc7509ee88e2f7b996"></span>
auto </td>
<td class="memItemRight" data-valign="bottom"><strong>key</strong> ()
const -&gt; decltype(std::declval&lt; Base &gt;().key())</td>
</tr>
<tr class="even memdesc:a68d4f0c3e978afdc7509ee88e2f7b996">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the key of an object iterator<br />
</td>
</tr>
<tr class="odd separator:a68d4f0c3e978afdc7509ee88e2f7b996">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a90132b4589e7b8c6cfdf4e25e1c311fe"
class="even memitem:a90132b4589e7b8c6cfdf4e25e1c311fe">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a90132b4589e7b8c6cfdf4e25e1c311fe"></span>
<a href="#a81a4d0a61246d4ece37fd14eacfadda0"
class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><strong>value</strong> ()
const</td>
</tr>
<tr class="odd memdesc:a90132b4589e7b8c6cfdf4e25e1c311fe">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the value of an iterator<br />
</td>
</tr>
<tr class="even separator:a90132b4589e7b8c6cfdf4e25e1c311fe">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename Base\>  
class detail::json_reverse_iterator\< Base \>

</div>

a template for a reverse iterator class

Template Parameters  
|      |                                                                                                                                                 |
|------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| Base | the base iterator type to reverse. Valid types are iterator (to create reverse_iterator) and const_iterator (to create const_reverse_iterator). |

@requirement The class satisfies the following concept requirements:

- [BidirectionalIterator](https://en.cppreference.com/w/cpp/named_req/BidirectionalIterator):
  The iterator that can be moved can be moved in both directions (i.e.
  incremented and decremented).
- [OutputIterator](https://en.cppreference.com/w/cpp/named_req/OutputIterator):
  It is possible to write to the pointed-to element (only if *Base* is
  iterator).

Since  
version 1.0.0

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
