---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: ordered_map\\< Key, T, IgnoredLess, Allocator \\> Struct
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

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[List of all members](structordered__map-members.html)

</div>

<div class="headertitle">

<div class="title">

ordered_map\< Key, T, IgnoredLess, Allocator \> Struct Template
Reference

</div>

</div>

</div>

<div class="contents">

a minimal map-like container that preserves insertion order
[More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for ordered_map\< Key, T, IgnoredLess, Allocator \>:

</div>

<div class="dyncontent">

<div class="center">

![](structordered__map.png)

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
<tr id="r_abe63d891859a3d0b156933d5b44ac85f"
class="even memitem:abe63d891859a3d0b156933d5b44ac85f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="abe63d891859a3d0b156933d5b44ac85f"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>key_type</strong>
= Key</td>
</tr>
<tr class="odd separator:abe63d891859a3d0b156933d5b44ac85f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a50a68289ec9c8554e5bbb7d0a2128c33"
class="even memitem:a50a68289ec9c8554e5bbb7d0a2128c33">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a50a68289ec9c8554e5bbb7d0a2128c33"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>mapped_type</strong> = T</td>
</tr>
<tr class="odd separator:a50a68289ec9c8554e5bbb7d0a2128c33">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a18acd5b0134d2e378160031996ed3ddc"
class="even memitem:a18acd5b0134d2e378160031996ed3ddc">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a18acd5b0134d2e378160031996ed3ddc"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>Container</strong>
= std::vector&lt;std::pair&lt;const Key, T&gt;, Allocator&gt;</td>
</tr>
<tr class="odd separator:a18acd5b0134d2e378160031996ed3ddc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a57c27034b40422a4b37ab8f4f60b9f14"
class="even memitem:a57c27034b40422a4b37ab8f4f60b9f14">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a57c27034b40422a4b37ab8f4f60b9f14"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>iterator</strong>
= typename Container::iterator</td>
</tr>
<tr class="odd separator:a57c27034b40422a4b37ab8f4f60b9f14">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aeb48abad4ceb24e60002c6220d8b18b4"
class="even memitem:aeb48abad4ceb24e60002c6220d8b18b4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aeb48abad4ceb24e60002c6220d8b18b4"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>const_iterator</strong> = typename
Container::const_iterator</td>
</tr>
<tr class="odd separator:aeb48abad4ceb24e60002c6220d8b18b4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a832acce07db0bec6c73675b35ad399c2"
class="even memitem:a832acce07db0bec6c73675b35ad399c2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a832acce07db0bec6c73675b35ad399c2"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>size_type</strong>
= typename Container::size_type</td>
</tr>
<tr class="odd separator:a832acce07db0bec6c73675b35ad399c2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a49a3a4f4eb960dcbcc15fd2692f18a91"
class="even memitem:a49a3a4f4eb960dcbcc15fd2692f18a91">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a49a3a4f4eb960dcbcc15fd2692f18a91"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>value_type</strong> = typename
Container::value_type</td>
</tr>
<tr class="odd separator:a49a3a4f4eb960dcbcc15fd2692f18a91">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4bbf207217197f997a9f3da8f149368b"
class="even memitem:a4bbf207217197f997a9f3da8f149368b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4bbf207217197f997a9f3da8f149368b"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>key_compare</strong> =
std::equal_to&lt;Key&gt;</td>
</tr>
<tr class="odd separator:a4bbf207217197f997a9f3da8f149368b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5d64ca358ee69b09b53645baefe317cf"
class="even memitem:a5d64ca358ee69b09b53645baefe317cf">
<td colspan="2" class="memTemplParams">template&lt;typename InputIt
&gt;</td>
</tr>
<tr class="odd memitem:a5d64ca358ee69b09b53645baefe317cf">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a5d64ca358ee69b09b53645baefe317cf"
class="el">require_input_iter</a></td>
</tr>
<tr class="even separator:a5d64ca358ee69b09b53645baefe317cf">
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
<tr id="r_a50b6eea717a66fb6241bbd2e0246849f"
class="even memitem:a50b6eea717a66fb6241bbd2e0246849f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a50b6eea717a66fb6241bbd2e0246849f"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>ordered_map</strong> (const Allocator
&amp;alloc) noexcept(noexcept(Container(alloc)))</td>
</tr>
<tr class="odd separator:a50b6eea717a66fb6241bbd2e0246849f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac0fa192a94f9d4bba7ae4fc3eedd583f"
class="even memitem:ac0fa192a94f9d4bba7ae4fc3eedd583f">
<td colspan="2" class="memTemplParams"><span
id="ac0fa192a94f9d4bba7ae4fc3eedd583f"></span> template&lt;class It
&gt;</td>
</tr>
<tr class="odd memitem:ac0fa192a94f9d4bba7ae4fc3eedd583f">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>ordered_map</strong> (It first, It last,
const Allocator &amp;alloc=Allocator())</td>
</tr>
<tr class="even separator:ac0fa192a94f9d4bba7ae4fc3eedd583f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab57d658b6e341a80a7a882c0d5cf38e0"
class="odd memitem:ab57d658b6e341a80a7a882c0d5cf38e0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab57d658b6e341a80a7a882c0d5cf38e0"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>ordered_map</strong>
(std::initializer_list&lt; value_type &gt; init, const Allocator
&amp;alloc=Allocator())</td>
</tr>
<tr class="even separator:ab57d658b6e341a80a7a882c0d5cf38e0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af10e949a24c4732fd00cb562f2100bf2"
class="odd memitem:af10e949a24c4732fd00cb562f2100bf2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="af10e949a24c4732fd00cb562f2100bf2"></span>
std::pair&lt; iterator, bool &gt; </td>
<td class="memItemRight" data-valign="bottom"><strong>emplace</strong>
(const key_type &amp;key, T &amp;&amp;t)</td>
</tr>
<tr class="even separator:af10e949a24c4732fd00cb562f2100bf2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a96f82e84243f3d17fb9d584262df183e"
class="odd memitem:a96f82e84243f3d17fb9d584262df183e">
<td colspan="2" class="memTemplParams"><span
id="a96f82e84243f3d17fb9d584262df183e"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a96f82e84243f3d17fb9d584262df183e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">std::pair&lt; iterator, bool &gt; </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>emplace</strong> (KeyType &amp;&amp;key, T
&amp;&amp;t)</td>
</tr>
<tr class="odd separator:a96f82e84243f3d17fb9d584262df183e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a77e420320702cc341ea1a3be4389c321"
class="even memitem:a77e420320702cc341ea1a3be4389c321">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a77e420320702cc341ea1a3be4389c321"></span> T
&amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator[]</strong> (const key_type
&amp;key)</td>
</tr>
<tr class="odd separator:a77e420320702cc341ea1a3be4389c321">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a51784a0c6bb5f61d123d729d8380448b"
class="even memitem:a51784a0c6bb5f61d123d729d8380448b">
<td colspan="2" class="memTemplParams"><span
id="a51784a0c6bb5f61d123d729d8380448b"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a51784a0c6bb5f61d123d729d8380448b">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">T &amp; </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator[]</strong> (KeyType
&amp;&amp;key)</td>
</tr>
<tr class="even separator:a51784a0c6bb5f61d123d729d8380448b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac6c0136296a6ad89948fc23e057f14e0"
class="odd memitem:ac6c0136296a6ad89948fc23e057f14e0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ac6c0136296a6ad89948fc23e057f14e0"></span>
const T &amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator[]</strong> (const key_type
&amp;key) const</td>
</tr>
<tr class="even separator:ac6c0136296a6ad89948fc23e057f14e0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5ff84bb2df6faf249535aa196373155a"
class="odd memitem:a5ff84bb2df6faf249535aa196373155a">
<td colspan="2" class="memTemplParams"><span
id="a5ff84bb2df6faf249535aa196373155a"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a5ff84bb2df6faf249535aa196373155a">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">const T &amp; </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator[]</strong> (KeyType &amp;&amp;key)
const</td>
</tr>
<tr class="odd separator:a5ff84bb2df6faf249535aa196373155a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad76186edef70d3249c26efe3c2efcd4b"
class="even memitem:ad76186edef70d3249c26efe3c2efcd4b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad76186edef70d3249c26efe3c2efcd4b"></span> T
&amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>at</strong> (const
key_type &amp;key)</td>
</tr>
<tr class="odd separator:ad76186edef70d3249c26efe3c2efcd4b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5f4b6b084c11eafdad36171487c4b724"
class="even memitem:a5f4b6b084c11eafdad36171487c4b724">
<td colspan="2" class="memTemplParams"><span
id="a5f4b6b084c11eafdad36171487c4b724"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a5f4b6b084c11eafdad36171487c4b724">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">T &amp; </td>
<td class="memTemplItemRight" data-valign="bottom"><strong>at</strong>
(KeyType &amp;&amp;key)</td>
</tr>
<tr class="even separator:a5f4b6b084c11eafdad36171487c4b724">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6c80b0a9084177596ec87759d683dc7f"
class="odd memitem:a6c80b0a9084177596ec87759d683dc7f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6c80b0a9084177596ec87759d683dc7f"></span>
const T &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>at</strong> (const
key_type &amp;key) const</td>
</tr>
<tr class="even separator:a6c80b0a9084177596ec87759d683dc7f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a57d4781cdf5ce839172d3537bb8c67da"
class="odd memitem:a57d4781cdf5ce839172d3537bb8c67da">
<td colspan="2" class="memTemplParams"><span
id="a57d4781cdf5ce839172d3537bb8c67da"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a57d4781cdf5ce839172d3537bb8c67da">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">const T &amp; </td>
<td class="memTemplItemRight" data-valign="bottom"><strong>at</strong>
(KeyType &amp;&amp;key) const</td>
</tr>
<tr class="odd separator:a57d4781cdf5ce839172d3537bb8c67da">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aaa50926fc8df543dbe294859db97514e"
class="even memitem:aaa50926fc8df543dbe294859db97514e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aaa50926fc8df543dbe294859db97514e"></span>
size_type </td>
<td class="memItemRight" data-valign="bottom"><strong>erase</strong>
(const key_type &amp;key)</td>
</tr>
<tr class="odd separator:aaa50926fc8df543dbe294859db97514e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7d72919fabb5f477e69add51877e415f"
class="even memitem:a7d72919fabb5f477e69add51877e415f">
<td colspan="2" class="memTemplParams"><span
id="a7d72919fabb5f477e69add51877e415f"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a7d72919fabb5f477e69add51877e415f">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">size_type </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>erase</strong> (KeyType &amp;&amp;key)</td>
</tr>
<tr class="even separator:a7d72919fabb5f477e69add51877e415f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4c3baa0920e81bd651ea01b9d735951b"
class="odd memitem:a4c3baa0920e81bd651ea01b9d735951b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4c3baa0920e81bd651ea01b9d735951b"></span>
iterator </td>
<td class="memItemRight" data-valign="bottom"><strong>erase</strong>
(iterator pos)</td>
</tr>
<tr class="even separator:a4c3baa0920e81bd651ea01b9d735951b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6945910b941f51c9a81250d99ae34441"
class="odd memitem:a6945910b941f51c9a81250d99ae34441">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6945910b941f51c9a81250d99ae34441"></span>
iterator </td>
<td class="memItemRight" data-valign="bottom"><strong>erase</strong>
(iterator first, iterator last)</td>
</tr>
<tr class="even separator:a6945910b941f51c9a81250d99ae34441">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a94ced73a996cf385aa68b6aae1f85dfe"
class="odd memitem:a94ced73a996cf385aa68b6aae1f85dfe">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a94ced73a996cf385aa68b6aae1f85dfe"></span>
size_type </td>
<td class="memItemRight" data-valign="bottom"><strong>count</strong>
(const key_type &amp;key) const</td>
</tr>
<tr class="even separator:a94ced73a996cf385aa68b6aae1f85dfe">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abd35ff8bb3cfe4b8951f382fdfb617e5"
class="odd memitem:abd35ff8bb3cfe4b8951f382fdfb617e5">
<td colspan="2" class="memTemplParams"><span
id="abd35ff8bb3cfe4b8951f382fdfb617e5"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:abd35ff8bb3cfe4b8951f382fdfb617e5">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">size_type </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>count</strong> (KeyType &amp;&amp;key)
const</td>
</tr>
<tr class="odd separator:abd35ff8bb3cfe4b8951f382fdfb617e5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a67c6dfc6bc7817980067b40db5c252a4"
class="even memitem:a67c6dfc6bc7817980067b40db5c252a4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a67c6dfc6bc7817980067b40db5c252a4"></span>
iterator </td>
<td class="memItemRight" data-valign="bottom"><strong>find</strong>
(const key_type &amp;key)</td>
</tr>
<tr class="odd separator:a67c6dfc6bc7817980067b40db5c252a4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad3072ca1fdc7dd9f88d5d043deab9639"
class="even memitem:ad3072ca1fdc7dd9f88d5d043deab9639">
<td colspan="2" class="memTemplParams"><span
id="ad3072ca1fdc7dd9f88d5d043deab9639"></span> template&lt;class KeyType
, detail::enable_if_t&lt; detail::is_usable_as_key_type&lt; key_compare,
key_type, KeyType &gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:ad3072ca1fdc7dd9f88d5d043deab9639">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">iterator </td>
<td class="memTemplItemRight" data-valign="bottom"><strong>find</strong>
(KeyType &amp;&amp;key)</td>
</tr>
<tr class="even separator:ad3072ca1fdc7dd9f88d5d043deab9639">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a73a21fcebe6f068cd2226c5586ac93d7"
class="odd memitem:a73a21fcebe6f068cd2226c5586ac93d7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a73a21fcebe6f068cd2226c5586ac93d7"></span>
const_iterator </td>
<td class="memItemRight" data-valign="bottom"><strong>find</strong>
(const key_type &amp;key) const</td>
</tr>
<tr class="even separator:a73a21fcebe6f068cd2226c5586ac93d7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1df7da27bb3596044089f9a074a8f6d2"
class="odd memitem:a1df7da27bb3596044089f9a074a8f6d2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a1df7da27bb3596044089f9a074a8f6d2"></span>
std::pair&lt; iterator, bool &gt; </td>
<td class="memItemRight" data-valign="bottom"><strong>insert</strong>
(value_type &amp;&amp;value)</td>
</tr>
<tr class="even separator:a1df7da27bb3596044089f9a074a8f6d2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab78e859d8a867e7673bfb7f27c447ed8"
class="odd memitem:ab78e859d8a867e7673bfb7f27c447ed8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab78e859d8a867e7673bfb7f27c447ed8"></span>
std::pair&lt; iterator, bool &gt; </td>
<td class="memItemRight" data-valign="bottom"><strong>insert</strong>
(const value_type &amp;value)</td>
</tr>
<tr class="even separator:ab78e859d8a867e7673bfb7f27c447ed8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8e19c1dfa836a39b16b0ce259447a61a"
class="odd memitem:a8e19c1dfa836a39b16b0ce259447a61a">
<td colspan="2" class="memTemplParams"><span
id="a8e19c1dfa836a39b16b0ce259447a61a"></span> template&lt;typename
InputIt , typename = require_input_iter&lt;InputIt&gt;&gt;</td>
</tr>
<tr class="even memitem:a8e19c1dfa836a39b16b0ce259447a61a">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>insert</strong> (InputIt first, InputIt
last)</td>
</tr>
<tr class="odd separator:a8e19c1dfa836a39b16b0ce259447a61a">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<class Key, class T, class IgnoredLess = std::less\<Key\>,
class Allocator = std::allocator\<std::pair\<const Key, T\>\>\>  
struct ordered_map\< Key, T, IgnoredLess, Allocator \>

</div>

a minimal map-like container that preserves insertion order

See also  
<https://json.nlohmann.me/api/ordered_map/>

<a href="structordered__map.html" class="el"
title="a minimal map-like container that preserves insertion order">ordered_map</a>:
a minimal map-like container that preserves insertion order for use
within nlohmann::basic_json\<ordered_map\>

</div>

## Member Typedef Documentation

<span id="a5d64ca358ee69b09b53645baefe317cf"></span>

## <span class="permalink">[◆ ](#a5d64ca358ee69b09b53645baefe317cf)</span>require_input_iter

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<class Key , class T , class IgnoredLess = std::less\<Key\>,
class Allocator = std::allocator\<std::pair\<const Key, T\>\>\>

</div>

<div class="memtemplate">

template\<typename InputIt \>

</div>

|                                                                                                                            |
|----------------------------------------------------------------------------------------------------------------------------|
| using <a href="structordered__map.html" class="el">ordered_map</a>\< Key, T, IgnoredLess, Allocator \>::require_input_iter |

</div>

<div class="memdoc">

**Initial value:**

<div class="fragment">

<div class="line">

<span class="keyword">typename</span>
std::enable_if\<std::is_convertible\<typename
std::iterator_traits\<InputIt\>::iterator_category,

</div>

<div class="line">

std::input_iterator_tag\>::value\>::type

</div>

</div>

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
