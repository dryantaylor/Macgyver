---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::iteration_proxy_value\\< IteratorType \\> Class
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

<div id="nav-path" class="navpath">

- <a href="namespacedetail.html" class="el">detail</a>
- <a href="classdetail_1_1iteration__proxy__value.html"
  class="el">iteration_proxy_value</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[List of all
members](classdetail_1_1iteration__proxy__value-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::iteration_proxy_value\< IteratorType \> Class Template Reference

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
<tr id="r_a3365781ff806e15a1cd99e6d0987c68d"
class="even memitem:a3365781ff806e15a1cd99e6d0987c68d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3365781ff806e15a1cd99e6d0987c68d"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>difference_type</strong> =
std::ptrdiff_t</td>
</tr>
<tr class="odd separator:a3365781ff806e15a1cd99e6d0987c68d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6d72d5deb611fb7c5c909328b37cd04e"
class="even memitem:a6d72d5deb611fb7c5c909328b37cd04e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6d72d5deb611fb7c5c909328b37cd04e"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>value_type</strong> = <a
href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a></td>
</tr>
<tr class="odd separator:a6d72d5deb611fb7c5c909328b37cd04e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac19cd4b8224e83f1c72f48bde9f069be"
class="even memitem:ac19cd4b8224e83f1c72f48bde9f069be">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ac19cd4b8224e83f1c72f48bde9f069be"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>pointer</strong> =
<a href="classdetail_1_1iteration__proxy__value.html"
class="el">value_type</a> *</td>
</tr>
<tr class="odd separator:ac19cd4b8224e83f1c72f48bde9f069be">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a42589c936453407a85968f970556e7cd"
class="even memitem:a42589c936453407a85968f970556e7cd">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a42589c936453407a85968f970556e7cd"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>reference</strong>
= <a href="classdetail_1_1iteration__proxy__value.html"
class="el">value_type</a> &amp;</td>
</tr>
<tr class="odd separator:a42589c936453407a85968f970556e7cd">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ada4177e3926d326dd4f6a3e0b5ae9bfb"
class="even memitem:ada4177e3926d326dd4f6a3e0b5ae9bfb">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ada4177e3926d326dd4f6a3e0b5ae9bfb"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>iterator_category</strong> =
std::input_iterator_tag</td>
</tr>
<tr class="odd separator:ada4177e3926d326dd4f6a3e0b5ae9bfb">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae24efb92078513900c5576c780f67438"
class="even memitem:ae24efb92078513900c5576c780f67438">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae24efb92078513900c5576c780f67438"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>string_type</strong> = typename
std::remove_cv&lt; typename std::remove_reference&lt;decltype(
std::declval&lt;IteratorType&gt;().<a
href="#ad12633bc0d3ac7a651381b174a7914ee" class="el">key</a>() )
&gt;::type &gt;::type</td>
</tr>
<tr class="odd separator:ae24efb92078513900c5576c780f67438">
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
<tr id="r_a527328f3b7fd0335c7bb16fb1b3ec12b"
class="even memitem:a527328f3b7fd0335c7bb16fb1b3ec12b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a527328f3b7fd0335c7bb16fb1b3ec12b"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>iteration_proxy_value</strong>
(IteratorType it, std::size_t array_index_=0)
noexcept(std::is_nothrow_move_constructible&lt; IteratorType &gt;<a
href="#aac08993af9f4f0bf3d058b4beae36a45" class="el">::value</a>
&amp;&amp;std::is_nothrow_default_constructible&lt; string_type &gt;<a
href="#aac08993af9f4f0bf3d058b4beae36a45" class="el">::value</a>)</td>
</tr>
<tr class="odd separator:a527328f3b7fd0335c7bb16fb1b3ec12b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0c41d6f7810d152718a9a3e316f74d1f"
class="even memitem:a0c41d6f7810d152718a9a3e316f74d1f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a0c41d6f7810d152718a9a3e316f74d1f"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>iteration_proxy_value</strong> (<a
href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> const &amp;)=default</td>
</tr>
<tr class="odd separator:a0c41d6f7810d152718a9a3e316f74d1f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad68cadcbba3dc7144f4a5071e1cae3f9"
class="even memitem:ad68cadcbba3dc7144f4a5071e1cae3f9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad68cadcbba3dc7144f4a5071e1cae3f9"></span>
<a href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> const &amp;)=default</td>
</tr>
<tr class="odd separator:ad68cadcbba3dc7144f4a5071e1cae3f9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9d77923fa65e59bd4934d1990a4cc6eb"
class="even memitem:a9d77923fa65e59bd4934d1990a4cc6eb">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a9d77923fa65e59bd4934d1990a4cc6eb"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>iteration_proxy_value</strong> (<a
href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp;&amp;)
noexcept(std::is_nothrow_move_constructible&lt; IteratorType &gt;<a
href="#aac08993af9f4f0bf3d058b4beae36a45" class="el">::value</a>
&amp;&amp;std::is_nothrow_move_constructible&lt; string_type &gt;<a
href="#aac08993af9f4f0bf3d058b4beae36a45"
class="el">::value</a>)=default</td>
</tr>
<tr class="odd separator:a9d77923fa65e59bd4934d1990a4cc6eb">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_adff567f158dbae5ef4d7f8c7e57ef4cc"
class="even memitem:adff567f158dbae5ef4d7f8c7e57ef4cc">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="adff567f158dbae5ef4d7f8c7e57ef4cc"></span>
<a href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(<a href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp;&amp;)
noexcept(std::is_nothrow_move_assignable&lt; IteratorType &gt;<a
href="#aac08993af9f4f0bf3d058b4beae36a45" class="el">::value</a>
&amp;&amp;std::is_nothrow_move_assignable&lt; string_type &gt;<a
href="#aac08993af9f4f0bf3d058b4beae36a45"
class="el">::value</a>)=default</td>
</tr>
<tr class="odd separator:adff567f158dbae5ef4d7f8c7e57ef4cc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a54d22aec1f615a38697466817d7cc819"
class="even memitem:a54d22aec1f615a38697466817d7cc819">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a54d22aec1f615a38697466817d7cc819"></span>
const <a href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator*</strong>
() const</td>
</tr>
<tr class="odd memdesc:a54d22aec1f615a38697466817d7cc819">
<td class="mdescLeft"> </td>
<td class="mdescRight">dereference operator (needed for range-based
for)<br />
</td>
</tr>
<tr class="even separator:a54d22aec1f615a38697466817d7cc819">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a52dffef3e0c58a6bcd5b8b9e6fcf4552"
class="odd memitem:a52dffef3e0c58a6bcd5b8b9e6fcf4552">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a52dffef3e0c58a6bcd5b8b9e6fcf4552"></span>
<a href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator++</strong> ()</td>
</tr>
<tr class="even memdesc:a52dffef3e0c58a6bcd5b8b9e6fcf4552">
<td class="mdescLeft"> </td>
<td class="mdescRight">increment operator (needed for range-based
for)<br />
</td>
</tr>
<tr class="odd separator:a52dffef3e0c58a6bcd5b8b9e6fcf4552">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a060a2100b3803588aa8693140d507fd8"
class="even memitem:a060a2100b3803588aa8693140d507fd8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a060a2100b3803588aa8693140d507fd8"></span>
<a href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator++</strong> (int) &amp;</td>
</tr>
<tr class="odd separator:a060a2100b3803588aa8693140d507fd8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a139d22be442a277268cfb78bb4eef95d"
class="even memitem:a139d22be442a277268cfb78bb4eef95d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a139d22be442a277268cfb78bb4eef95d"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator==</strong> (const <a
href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp;o) const</td>
</tr>
<tr class="odd memdesc:a139d22be442a277268cfb78bb4eef95d">
<td class="mdescLeft"> </td>
<td class="mdescRight">equality operator (needed for
InputIterator)<br />
</td>
</tr>
<tr class="even separator:a139d22be442a277268cfb78bb4eef95d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a23745b98de19578adc4efb509e59be28"
class="odd memitem:a23745b98de19578adc4efb509e59be28">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a23745b98de19578adc4efb509e59be28"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator!=</strong> (const <a
href="classdetail_1_1iteration__proxy__value.html"
class="el">iteration_proxy_value</a> &amp;o) const</td>
</tr>
<tr class="even memdesc:a23745b98de19578adc4efb509e59be28">
<td class="mdescLeft"> </td>
<td class="mdescRight">inequality operator (needed for range-based
for)<br />
</td>
</tr>
<tr class="odd separator:a23745b98de19578adc4efb509e59be28">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad12633bc0d3ac7a651381b174a7914ee"
class="even memitem:ad12633bc0d3ac7a651381b174a7914ee">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad12633bc0d3ac7a651381b174a7914ee"></span>
const string_type &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>key</strong> ()
const</td>
</tr>
<tr class="odd memdesc:ad12633bc0d3ac7a651381b174a7914ee">
<td class="mdescLeft"> </td>
<td class="mdescRight">return key of the iterator<br />
</td>
</tr>
<tr class="even separator:ad12633bc0d3ac7a651381b174a7914ee">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aac08993af9f4f0bf3d058b4beae36a45"
class="odd memitem:aac08993af9f4f0bf3d058b4beae36a45">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aac08993af9f4f0bf3d058b4beae36a45"></span>
IteratorType::reference </td>
<td class="memItemRight" data-valign="bottom"><strong>value</strong> ()
const</td>
</tr>
<tr class="even memdesc:aac08993af9f4f0bf3d058b4beae36a45">
<td class="mdescLeft"> </td>
<td class="mdescRight">return value of the iterator<br />
</td>
</tr>
<tr class="odd separator:aac08993af9f4f0bf3d058b4beae36a45">
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
