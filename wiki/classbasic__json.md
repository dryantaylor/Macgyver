---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: basic_json\\< ObjectType, ArrayType, StringType,
  BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
  AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \\> Class
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

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[Static Public Member Functions](#pub-static-methods) \| [Public
Attributes](#pub-attribs) \| [Friends](#friends) \| [List of all
members](classbasic__json-members.html)

</div>

<div class="headertitle">

<div class="title">

basic_json\< ObjectType, ArrayType, StringType, BooleanType,
NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType,
JSONSerializer, BinaryType, CustomBaseClass \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

namespace for Niels Lohmann [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for basic_json\< ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>:

</div>

<div class="dyncontent">

<div class="center">

![](classbasic__json.png)

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
<tr id="r_a966e900415e66f3ab60f7b5ef52fd63b"
class="even memitem:a966e900415e66f3ab60f7b5ef52fd63b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a966e900415e66f3ab60f7b5ef52fd63b"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>value_t</strong> =
<a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">detail::value_t</a></td>
</tr>
<tr class="odd separator:a966e900415e66f3ab60f7b5ef52fd63b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afe66720a34c11920f359394a4430a16e"
class="even memitem:afe66720a34c11920f359394a4430a16e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="afe66720a34c11920f359394a4430a16e"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>json_pointer</strong> =
::nlohmann::json_pointer&lt;StringType&gt;</td>
</tr>
<tr class="odd memdesc:afe66720a34c11920f359394a4430a16e">
<td class="mdescLeft"> </td>
<td class="mdescRight">JSON Pointer, see nlohmann::json_pointer.<br />
</td>
</tr>
<tr class="even separator:afe66720a34c11920f359394a4430a16e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab75fd791f0b8fca724e5ed70b4956414"
class="odd memitem:ab75fd791f0b8fca724e5ed70b4956414">
<td colspan="2" class="memTemplParams"><span
id="ab75fd791f0b8fca724e5ed70b4956414"></span> template&lt;typename T ,
typename SFINAE &gt;</td>
</tr>
<tr class="even memitem:ab75fd791f0b8fca724e5ed70b4956414">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>json_serializer</strong> =
JSONSerializer&lt;T, SFINAE&gt;</td>
</tr>
<tr class="odd separator:ab75fd791f0b8fca724e5ed70b4956414">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2ebde9badb4f1b4cf6517f6b8e302d0d"
class="even memitem:a2ebde9badb4f1b4cf6517f6b8e302d0d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2ebde9badb4f1b4cf6517f6b8e302d0d"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>error_handler_t</strong> = <a
href="namespacedetail.html#abe7cfa1fd8fa706ff4392bff9d1a8298"
class="el">detail::error_handler_t</a></td>
</tr>
<tr class="odd memdesc:a2ebde9badb4f1b4cf6517f6b8e302d0d">
<td class="mdescLeft"> </td>
<td class="mdescRight">how to treat decoding errors<br />
</td>
</tr>
<tr class="even separator:a2ebde9badb4f1b4cf6517f6b8e302d0d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a067b4f0e63e55055272fec0a26b5b991"
class="odd memitem:a067b4f0e63e55055272fec0a26b5b991">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a067b4f0e63e55055272fec0a26b5b991"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>cbor_tag_handler_t</strong> = <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">detail::cbor_tag_handler_t</a></td>
</tr>
<tr class="even memdesc:a067b4f0e63e55055272fec0a26b5b991">
<td class="mdescLeft"> </td>
<td class="mdescRight">how to treat CBOR tags<br />
</td>
</tr>
<tr class="odd separator:a067b4f0e63e55055272fec0a26b5b991">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6dc15c0f6c156e43c956ad6ca0c19de3"
class="even memitem:a6dc15c0f6c156e43c956ad6ca0c19de3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6dc15c0f6c156e43c956ad6ca0c19de3"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>initializer_list_t</strong> =
std::initializer_list&lt;<a href="classdetail_1_1json__ref.html"
class="el">detail::json_ref</a>&lt;<a href="classbasic__json.html"
class="el">basic_json</a>&gt;&gt;</td>
</tr>
<tr class="odd memdesc:a6dc15c0f6c156e43c956ad6ca0c19de3">
<td class="mdescLeft"> </td>
<td class="mdescRight">helper type for initializer lists of <a
href="classbasic__json.html" class="el"
title="namespace for Niels Lohmann">basic_json</a> values<br />
</td>
</tr>
<tr class="even separator:a6dc15c0f6c156e43c956ad6ca0c19de3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a143e447269d8beb1d02400093eccd018"
class="odd memitem:a143e447269d8beb1d02400093eccd018">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a143e447269d8beb1d02400093eccd018"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>input_format_t</strong> = <a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">detail::input_format_t</a></td>
</tr>
<tr class="even separator:a143e447269d8beb1d02400093eccd018">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acefb05e1022be791038db86c9963cec7"
class="odd memitem:acefb05e1022be791038db86c9963cec7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="acefb05e1022be791038db86c9963cec7"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>json_sax_t</strong> = <a
href="structjson__sax.html" class="el">json_sax</a>&lt;<a
href="classbasic__json.html" class="el">basic_json</a>&gt;</td>
</tr>
<tr class="even memdesc:acefb05e1022be791038db86c9963cec7">
<td class="mdescLeft"> </td>
<td class="mdescRight">SAX interface type, see nlohmann::json_sax.<br />
</td>
</tr>
<tr class="odd separator:acefb05e1022be791038db86c9963cec7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a53b6bf8ee18c48f4609c8bdd4bb95107"
class="even memitem:a53b6bf8ee18c48f4609c8bdd4bb95107">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a53b6bf8ee18c48f4609c8bdd4bb95107" class="el">parse_event_t</a> =
<a href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312ef"
class="el">detail::parse_event_t</a></td>
</tr>
<tr class="odd memdesc:a53b6bf8ee18c48f4609c8bdd4bb95107">
<td class="mdescLeft"> </td>
<td class="mdescRight">parser event types<br />
</td>
</tr>
<tr class="even separator:a53b6bf8ee18c48f4609c8bdd4bb95107">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a50644d655c9283aaf0e2a0f3a5428867"
class="odd memitem:a50644d655c9283aaf0e2a0f3a5428867">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a50644d655c9283aaf0e2a0f3a5428867"
class="el">parser_callback_t</a> = detail::parser_callback_t&lt;<a
href="classbasic__json.html" class="el">basic_json</a>&gt;</td>
</tr>
<tr class="even memdesc:a50644d655c9283aaf0e2a0f3a5428867">
<td class="mdescLeft"> </td>
<td class="mdescRight">per-element parser callback type<br />
</td>
</tr>
<tr class="odd separator:a50644d655c9283aaf0e2a0f3a5428867">
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
<tr id="r_a15b177614647598e238e15ab1cc889c7"
class="even memitem:a15b177614647598e238e15ab1cc889c7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">JSON_HEDLEY_RETURNS_NON_NULL const char * </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a15b177614647598e238e15ab1cc889c7" class="el">type_name</a> ()
const noexcept</td>
</tr>
<tr class="odd memdesc:a15b177614647598e238e15ab1cc889c7">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the type as string<br />
</td>
</tr>
<tr class="even separator:a15b177614647598e238e15ab1cc889c7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab4b684342f67317a21b2d9e33ec8feb0"
class="odd memitem:ab4b684342f67317a21b2d9e33ec8feb0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ab4b684342f67317a21b2d9e33ec8feb0"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>data</strong>
(const <a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> v)</td>
</tr>
<tr class="even separator:ab4b684342f67317a21b2d9e33ec8feb0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2430d63f0ffd335f276c085c33c11b17"
class="odd memitem:a2430d63f0ffd335f276c085c33c11b17">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2430d63f0ffd335f276c085c33c11b17"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>data</strong> (<a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> cnt,
const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;val)</td>
</tr>
<tr class="even separator:a2430d63f0ffd335f276c085c33c11b17">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac8aaf6afe755ea6c586ab9920389d6bf"
class="odd memitem:ac8aaf6afe755ea6c586ab9920389d6bf">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ac8aaf6afe755ea6c586ab9920389d6bf"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>data</strong> ()
noexcept=default</td>
</tr>
<tr class="even separator:ac8aaf6afe755ea6c586ab9920389d6bf">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a08ad05755736ab9e3416f0556bb47a6a"
class="odd memitem:a08ad05755736ab9e3416f0556bb47a6a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a08ad05755736ab9e3416f0556bb47a6a"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>data</strong>
(data &amp;&amp;) noexcept=default</td>
</tr>
<tr class="even separator:a08ad05755736ab9e3416f0556bb47a6a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a416abf41e6c61061dd2be762a88cceb8"
class="odd memitem:a416abf41e6c61061dd2be762a88cceb8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a416abf41e6c61061dd2be762a88cceb8"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>data</strong>
(const data &amp;) noexcept=delete</td>
</tr>
<tr class="even separator:a416abf41e6c61061dd2be762a88cceb8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a927438868ffbf6535f63714d47834cd1"
class="odd memitem:a927438868ffbf6535f63714d47834cd1">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a927438868ffbf6535f63714d47834cd1"></span>
data &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(data &amp;&amp;) noexcept=delete</td>
</tr>
<tr class="even separator:a927438868ffbf6535f63714d47834cd1">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4961a9b6e8be5c581766516572989b2e"
class="odd memitem:a4961a9b6e8be5c581766516572989b2e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4961a9b6e8be5c581766516572989b2e"></span>
data &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const data &amp;) noexcept=delete</td>
</tr>
<tr class="even separator:a4961a9b6e8be5c581766516572989b2e">
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
<td colspan="2"><h2 id="static-public-member-functions"
class="groupheader"><span id="pub-static-methods"></span> Static Public
Member Functions</h2></td>
</tr>
<tr id="r_a4bceecf563151eb58af179416d8e6299"
class="even memitem:a4bceecf563151eb58af179416d8e6299">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static <a href="#a83f845db2d54cedad97279bad70aea52"
class="el">allocator_type</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4bceecf563151eb58af179416d8e6299" class="el">get_allocator</a>
()</td>
</tr>
<tr class="odd memdesc:a4bceecf563151eb58af179416d8e6299">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the allocator associated with the
container<br />
</td>
</tr>
<tr class="even separator:a4bceecf563151eb58af179416d8e6299">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7b435c2ed2db99cb1daa78ae3c6c4580"
class="odd memitem:a7b435c2ed2db99cb1daa78ae3c6c4580">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a7b435c2ed2db99cb1daa78ae3c6c4580" class="el">meta</a> ()</td>
</tr>
<tr class="even memdesc:a7b435c2ed2db99cb1daa78ae3c6c4580">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns version information on the library<br />
</td>
</tr>
<tr class="odd separator:a7b435c2ed2db99cb1daa78ae3c6c4580">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_addedd5e53fa6eff6cd621f1615741c3d"
class="even memitem:addedd5e53fa6eff6cd621f1615741c3d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="addedd5e53fa6eff6cd621f1615741c3d"></span>
JSON_PRIVATE_UNLESS_TESTED <a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> bool static SAX bool </td>
<td class="memItemRight" data-valign="bottom"><strong>sax_parse</strong>
(InputType &amp;&amp;i, SAX *sax, <a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a> format=input_format_t::json, const bool
strict=true, const bool ignore_comments=false)</td>
</tr>
<tr class="odd separator:addedd5e53fa6eff6cd621f1615741c3d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a94cbf1844fef86e9301282ad8ca0f822"
class="even memitem:a94cbf1844fef86e9301282ad8ca0f822">
<td colspan="2" class="memTemplParams">template&lt;class IteratorType ,
class SAX &gt;</td>
</tr>
<tr class="odd memitem:a94cbf1844fef86e9301282ad8ca0f822">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a94cbf1844fef86e9301282ad8ca0f822" class="el">sax_parse</a>
(IteratorType first, IteratorType last, SAX *sax, <a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a> format=input_format_t::json, const bool
strict=true, const bool ignore_comments=false)</td>
</tr>
<tr class="even memdesc:a94cbf1844fef86e9301282ad8ca0f822">
<td class="mdescLeft"> </td>
<td class="mdescRight">generate SAX events<br />
</td>
</tr>
<tr class="odd separator:a94cbf1844fef86e9301282ad8ca0f822">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad018e709338c810c56eaad606186a77e"
class="even memitem:ad018e709338c810c56eaad606186a77e">
<td colspan="2" class="memTemplParams">template&lt;typename SAX
&gt;</td>
</tr>
<tr class="odd memitem:ad018e709338c810c56eaad606186a77e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ad018e709338c810c56eaad606186a77e" class="el">sax_parse</a> (<a
href="classdetail_1_1span__input__adapter.html"
class="el">detail::span_input_adapter</a> &amp;&amp;i, SAX *sax, <a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a> format=input_format_t::json, const bool
strict=true, const bool ignore_comments=false)</td>
</tr>
<tr class="even memdesc:ad018e709338c810c56eaad606186a77e">
<td class="mdescLeft"> </td>
<td class="mdescRight">generate SAX events<br />
</td>
</tr>
<tr class="odd separator:ad018e709338c810c56eaad606186a77e">
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
<tr id="r_a27054edf6738852b42e0218fe4337e1c"
class="even memitem:a27054edf6738852b42e0218fe4337e1c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a27054edf6738852b42e0218fe4337e1c"></span>
JSON_PRIVATE_UNLESS_TESTED </td>
<td class="memItemRight" data-valign="bottom">: struct data { <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> m_type = value_t::null</td>
</tr>
<tr class="odd separator:a27054edf6738852b42e0218fe4337e1c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acd0f167153f047a246b51858d7c921b8"
class="even memitem:acd0f167153f047a246b51858d7c921b8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="acd0f167153f047a246b51858d7c921b8"></span>
json_value </td>
<td class="memItemRight" data-valign="bottom"><strong>m_value</strong> =
{}</td>
</tr>
<tr class="odd memdesc:acd0f167153f047a246b51858d7c921b8">
<td class="mdescLeft"> </td>
<td class="mdescRight">the value of the current element<br />
</td>
</tr>
<tr class="even separator:acd0f167153f047a246b51858d7c921b8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4f7fd3c3afd2abb77797652506ab6bc0"
class="odd memitem:a4f7fd3c3afd2abb77797652506ab6bc0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4f7fd3c3afd2abb77797652506ab6bc0"></span>
data </td>
<td class="memItemRight" data-valign="bottom"><strong>m_data</strong> =
{}</td>
</tr>
<tr class="even separator:a4f7fd3c3afd2abb77797652506ab6bc0">
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
<tr id="r_a6275ed57bae6866cdf5db5370a7ad47c"
class="even memitem:a6275ed57bae6866cdf5db5370a7ad47c">
<td colspan="2" class="memTemplParams"><span
id="a6275ed57bae6866cdf5db5370a7ad47c"></span> template&lt;<a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">detail::value_t</a> &gt;</td>
</tr>
<tr class="odd memitem:a6275ed57bae6866cdf5db5370a7ad47c">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">struct </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>detail::external_constructor</strong></td>
</tr>
<tr class="even separator:a6275ed57bae6866cdf5db5370a7ad47c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a43f901b14cf3f7135269b0c75c9ac233"
class="odd memitem:a43f901b14cf3f7135269b0c75c9ac233">
<td colspan="2" class="memTemplParams"><span
id="a43f901b14cf3f7135269b0c75c9ac233"></span> template&lt;typename
&gt;</td>
</tr>
<tr class="even memitem:a43f901b14cf3f7135269b0c75c9ac233">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">class </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>::nlohmann::json_pointer</strong></td>
</tr>
<tr class="odd separator:a43f901b14cf3f7135269b0c75c9ac233">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac8f3125911eb018ef4ab00d879487baf"
class="even memitem:ac8f3125911eb018ef4ab00d879487baf">
<td colspan="2" class="memTemplParams"><span
id="ac8f3125911eb018ef4ab00d879487baf"></span> template&lt;typename
BasicJsonType , typename InputType &gt;</td>
</tr>
<tr class="odd memitem:ac8f3125911eb018ef4ab00d879487baf">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">class </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>::nlohmann::detail::parser</strong></td>
</tr>
<tr class="even separator:ac8f3125911eb018ef4ab00d879487baf">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a842e5c7ca096025c18b11e715d3401f4"
class="odd memitem:a842e5c7ca096025c18b11e715d3401f4">
<td colspan="2" class="memTemplParams"><span
id="a842e5c7ca096025c18b11e715d3401f4"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="even memitem:a842e5c7ca096025c18b11e715d3401f4">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">class </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>::nlohmann::detail::iter_impl</strong></td>
</tr>
<tr class="odd separator:a842e5c7ca096025c18b11e715d3401f4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a69d491bbda88ade6d3c7a2b11309e8bf"
class="even memitem:a69d491bbda88ade6d3c7a2b11309e8bf">
<td colspan="2" class="memTemplParams"><span
id="a69d491bbda88ade6d3c7a2b11309e8bf"></span> template&lt;typename
BasicJsonType , typename CharType &gt;</td>
</tr>
<tr class="odd memitem:a69d491bbda88ade6d3c7a2b11309e8bf">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">class </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>::nlohmann::detail::binary_writer</strong></td>
</tr>
<tr class="even separator:a69d491bbda88ade6d3c7a2b11309e8bf">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa226ed5103dfd10e27e562d35a3a106b"
class="odd memitem:aa226ed5103dfd10e27e562d35a3a106b">
<td colspan="2" class="memTemplParams"><span
id="aa226ed5103dfd10e27e562d35a3a106b"></span> template&lt;typename
BasicJsonType , typename InputType , typename SAX &gt;</td>
</tr>
<tr class="even memitem:aa226ed5103dfd10e27e562d35a3a106b">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">class </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>::nlohmann::detail::binary_reader</strong></td>
</tr>
<tr class="odd separator:aa226ed5103dfd10e27e562d35a3a106b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a47aabb1eceae32e8a6e8e7f0ff34be60"
class="even memitem:a47aabb1eceae32e8a6e8e7f0ff34be60">
<td colspan="2" class="memTemplParams"><span
id="a47aabb1eceae32e8a6e8e7f0ff34be60"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="odd memitem:a47aabb1eceae32e8a6e8e7f0ff34be60">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">class </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>::nlohmann::detail::json_sax_dom_parser</strong></td>
</tr>
<tr class="even separator:a47aabb1eceae32e8a6e8e7f0ff34be60">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a95574da8d12905ea99dc348934c837da"
class="odd memitem:a95574da8d12905ea99dc348934c837da">
<td colspan="2" class="memTemplParams"><span
id="a95574da8d12905ea99dc348934c837da"></span> template&lt;typename
BasicJsonType &gt;</td>
</tr>
<tr class="even memitem:a95574da8d12905ea99dc348934c837da">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">class </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>::nlohmann::detail::json_sax_dom_callback_parser</strong></td>
</tr>
<tr class="odd separator:a95574da8d12905ea99dc348934c837da">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abdcb15d025676b4d3db0f32a50f4393f"
class="even memitem:abdcb15d025676b4d3db0f32a50f4393f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="abdcb15d025676b4d3db0f32a50f4393f"></span>
class </td>
<td class="memItemRight"
data-valign="bottom"><strong>::nlohmann::detail::exception</strong></td>
</tr>
<tr class="odd separator:abdcb15d025676b4d3db0f32a50f4393f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af9907af448f7ff794120033e132025f6"
class="even memitem:af9907af448f7ff794120033e132025f6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::istream &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af9907af448f7ff794120033e132025f6"
class="el">operator&lt;&lt;</a> (<a href="classbasic__json.html"
class="el">basic_json</a> &amp;j, std::istream &amp;i)</td>
</tr>
<tr class="odd memdesc:af9907af448f7ff794120033e132025f6">
<td class="mdescLeft"> </td>
<td class="mdescRight">deserialize from stream<br />
</td>
</tr>
<tr class="even separator:af9907af448f7ff794120033e132025f6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aea0de29387d532e0bc5f2475cb83995d"
class="odd memitem:aea0de29387d532e0bc5f2475cb83995d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::istream &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aea0de29387d532e0bc5f2475cb83995d"
class="el">operator&gt;&gt;</a> (std::istream &amp;i, <a
href="classbasic__json.html" class="el">basic_json</a> &amp;j)</td>
</tr>
<tr class="even memdesc:aea0de29387d532e0bc5f2475cb83995d">
<td class="mdescLeft"> </td>
<td class="mdescRight">deserialize from stream<br />
</td>
</tr>
<tr class="odd separator:aea0de29387d532e0bc5f2475cb83995d">
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
<td colspan="2"><h2 id="element-access" class="groupheader">element
access</h2></td>
</tr>
<tr class="even">
<td colspan="2" class="ititle"><p>Access to the JSON value.</p></td>
</tr>
<tr id="r_a899e4623fe377af5c9ad14c40c64280c"
class="odd memitem:a899e4623fe377af5c9ad14c40c64280c">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a899e4623fe377af5c9ad14c40c64280c" class="el">at</a> (<a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a>
idx)</td>
</tr>
<tr class="even memdesc:a899e4623fe377af5c9ad14c40c64280c">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified array element with bounds
checking<br />
</td>
</tr>
<tr class="odd separator:a899e4623fe377af5c9ad14c40c64280c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af076d8a80f4263cf821da2033d5773b6"
class="even memitem:af076d8a80f4263cf821da2033d5773b6">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af076d8a80f4263cf821da2033d5773b6" class="el">at</a> (<a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> idx)
const</td>
</tr>
<tr class="odd memdesc:af076d8a80f4263cf821da2033d5773b6">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified array element with bounds
checking<br />
</td>
</tr>
<tr class="even separator:af076d8a80f4263cf821da2033d5773b6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_accafaaf23f60bb245ddb1fa0972b33a3"
class="odd memitem:accafaaf23f60bb245ddb1fa0972b33a3">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#accafaaf23f60bb245ddb1fa0972b33a3" class="el">at</a> (const
typename object_t::key_type &amp;key)</td>
</tr>
<tr class="even memdesc:accafaaf23f60bb245ddb1fa0972b33a3">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element with bounds
checking<br />
</td>
</tr>
<tr class="odd separator:accafaaf23f60bb245ddb1fa0972b33a3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4cd9ba2f2164d9cee83b07f76d40843f"
class="even memitem:a4cd9ba2f2164d9cee83b07f76d40843f">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a4cd9ba2f2164d9cee83b07f76d40843f">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a4cd9ba2f2164d9cee83b07f76d40843f" class="el">at</a> (KeyType
&amp;&amp;key)</td>
</tr>
<tr class="even memdesc:a4cd9ba2f2164d9cee83b07f76d40843f">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element with bounds
checking<br />
</td>
</tr>
<tr class="odd separator:a4cd9ba2f2164d9cee83b07f76d40843f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aba9a21714e81e98fc5786a2339ea1665"
class="even memitem:aba9a21714e81e98fc5786a2339ea1665">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aba9a21714e81e98fc5786a2339ea1665" class="el">at</a> (const
typename object_t::key_type &amp;key) const</td>
</tr>
<tr class="odd memdesc:aba9a21714e81e98fc5786a2339ea1665">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element with bounds
checking<br />
</td>
</tr>
<tr class="even separator:aba9a21714e81e98fc5786a2339ea1665">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7ae6267ca4bd85e25f61dc5ba30204da"
class="odd memitem:a7ae6267ca4bd85e25f61dc5ba30204da">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a7ae6267ca4bd85e25f61dc5ba30204da">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a7ae6267ca4bd85e25f61dc5ba30204da" class="el">at</a> (KeyType
&amp;&amp;key) const</td>
</tr>
<tr class="odd memdesc:a7ae6267ca4bd85e25f61dc5ba30204da">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element with bounds
checking<br />
</td>
</tr>
<tr class="even separator:a7ae6267ca4bd85e25f61dc5ba30204da">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab4f511db82b9d5eba85d5b2b8e1c6dbb"
class="odd memitem:ab4f511db82b9d5eba85d5b2b8e1c6dbb">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab4f511db82b9d5eba85d5b2b8e1c6dbb" class="el">operator[]</a> (<a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a>
idx)</td>
</tr>
<tr class="even memdesc:ab4f511db82b9d5eba85d5b2b8e1c6dbb">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified array element<br />
</td>
</tr>
<tr class="odd separator:ab4f511db82b9d5eba85d5b2b8e1c6dbb">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae369d1565482903c3af75bf99467776b"
class="even memitem:ae369d1565482903c3af75bf99467776b">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae369d1565482903c3af75bf99467776b" class="el">operator[]</a> (<a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> idx)
const</td>
</tr>
<tr class="odd memdesc:ae369d1565482903c3af75bf99467776b">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified array element<br />
</td>
</tr>
<tr class="even separator:ae369d1565482903c3af75bf99467776b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9c5825034534bf9256a33d2dd995c25a"
class="odd memitem:a9c5825034534bf9256a33d2dd995c25a">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a9c5825034534bf9256a33d2dd995c25a" class="el">operator[]</a>
(typename object_t::key_type key)</td>
</tr>
<tr class="even memdesc:a9c5825034534bf9256a33d2dd995c25a">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element<br />
</td>
</tr>
<tr class="odd separator:a9c5825034534bf9256a33d2dd995c25a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3d3ea17617e94886f3e86ac921095a13"
class="even memitem:a3d3ea17617e94886f3e86ac921095a13">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3d3ea17617e94886f3e86ac921095a13" class="el">operator[]</a>
(const typename object_t::key_type &amp;key) const</td>
</tr>
<tr class="odd memdesc:a3d3ea17617e94886f3e86ac921095a13">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element<br />
</td>
</tr>
<tr class="even separator:a3d3ea17617e94886f3e86ac921095a13">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a87cae3810ae0a9c56b17842b06fc405e"
class="odd memitem:a87cae3810ae0a9c56b17842b06fc405e">
<td colspan="2" class="memTemplParams"><span
id="a87cae3810ae0a9c56b17842b06fc405e"></span> template&lt;typename T
&gt;</td>
</tr>
<tr class="even memitem:a87cae3810ae0a9c56b17842b06fc405e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator[]</strong> (T *key)</td>
</tr>
<tr class="odd separator:a87cae3810ae0a9c56b17842b06fc405e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab12a4386e6913012ca4dffa0245fdf99"
class="even memitem:ab12a4386e6913012ca4dffa0245fdf99">
<td colspan="2" class="memTemplParams"><span
id="ab12a4386e6913012ca4dffa0245fdf99"></span> template&lt;typename T
&gt;</td>
</tr>
<tr class="odd memitem:ab12a4386e6913012ca4dffa0245fdf99">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator[]</strong> (T *key) const</td>
</tr>
<tr class="even separator:ab12a4386e6913012ca4dffa0245fdf99">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a06fe1a1c7aa8c193c73aa40b17ee5f68"
class="odd memitem:a06fe1a1c7aa8c193c73aa40b17ee5f68">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a06fe1a1c7aa8c193c73aa40b17ee5f68">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a06fe1a1c7aa8c193c73aa40b17ee5f68" class="el">operator[]</a>
(KeyType &amp;&amp;key)</td>
</tr>
<tr class="odd memdesc:a06fe1a1c7aa8c193c73aa40b17ee5f68">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element<br />
</td>
</tr>
<tr class="even separator:a06fe1a1c7aa8c193c73aa40b17ee5f68">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2e11a3f2a234cd296b515173b6a3b986"
class="odd memitem:a2e11a3f2a234cd296b515173b6a3b986">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a2e11a3f2a234cd296b515173b6a3b986">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a2e11a3f2a234cd296b515173b6a3b986" class="el">operator[]</a>
(KeyType &amp;&amp;key) const</td>
</tr>
<tr class="odd memdesc:a2e11a3f2a234cd296b515173b6a3b986">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element<br />
</td>
</tr>
<tr class="even separator:a2e11a3f2a234cd296b515173b6a3b986">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a80c2436388fd16a1529ce9afce8229ef"
class="odd memitem:a80c2436388fd16a1529ce9afce8229ef">
<td colspan="2" class="memTemplParams">template&lt;class ValueType ,
detail::enable_if_t&lt; !<a href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>&lt; <a
href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> &gt;::value &amp;&amp;<a
href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ValueType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a80c2436388fd16a1529ce9afce8229ef">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ValueType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">value</a> (const
typename object_t::key_type &amp;key, const ValueType
&amp;default_value) const</td>
</tr>
<tr class="odd memdesc:a80c2436388fd16a1529ce9afce8229ef">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element with default
value<br />
</td>
</tr>
<tr class="even separator:a80c2436388fd16a1529ce9afce8229ef">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a56244e0ed0943ad62faf61b06e7ba139"
class="odd memitem:a56244e0ed0943ad62faf61b06e7ba139">
<td colspan="2" class="memTemplParams">template&lt;class ValueType ,
class ReturnType = typename value_return_type&lt;ValueType&gt;::type,
detail::enable_if_t&lt; !<a href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>&lt; <a
href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> &gt;::value &amp;&amp;<a
href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ReturnType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a56244e0ed0943ad62faf61b06e7ba139">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ReturnType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a56244e0ed0943ad62faf61b06e7ba139" class="el">value</a> (const
typename object_t::key_type &amp;key, ValueType &amp;&amp;default_value)
const</td>
</tr>
<tr class="odd memdesc:a56244e0ed0943ad62faf61b06e7ba139">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element with default
value<br />
</td>
</tr>
<tr class="even separator:a56244e0ed0943ad62faf61b06e7ba139">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acbe572bbfbd4687a7a9167465e4d41f2"
class="odd memitem:acbe572bbfbd4687a7a9167465e4d41f2">
<td colspan="2" class="memTemplParams">template&lt;class ValueType ,
class KeyType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>&lt; <a
href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> &gt;::value
&amp;&amp;!detail::is_json_pointer&lt; KeyType &gt;::value &amp;&amp;<a
href="structdetail_1_1is__comparable.html"
class="el">is_comparable_with_object_key</a>&lt; KeyType &gt;::value
&amp;&amp;<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ValueType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:acbe572bbfbd4687a7a9167465e4d41f2">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ValueType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#acbe572bbfbd4687a7a9167465e4d41f2" class="el">value</a> (KeyType
&amp;&amp;key, const ValueType &amp;default_value) const</td>
</tr>
<tr class="odd memdesc:acbe572bbfbd4687a7a9167465e4d41f2">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element with default
value<br />
</td>
</tr>
<tr class="even separator:acbe572bbfbd4687a7a9167465e4d41f2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a694398741710ce1c22797ad47109898b"
class="odd memitem:a694398741710ce1c22797ad47109898b">
<td colspan="2" class="memTemplParams">template&lt;class ValueType ,
class KeyType , class ReturnType = typename
value_return_type&lt;ValueType&gt;::type, detail::enable_if_t&lt; <a
href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>&lt; <a
href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> &gt;::value
&amp;&amp;!detail::is_json_pointer&lt; KeyType &gt;::value &amp;&amp;<a
href="structdetail_1_1is__comparable.html"
class="el">is_comparable_with_object_key</a>&lt; KeyType &gt;::value
&amp;&amp;<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ReturnType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a694398741710ce1c22797ad47109898b">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ReturnType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a694398741710ce1c22797ad47109898b" class="el">value</a> (KeyType
&amp;&amp;key, ValueType &amp;&amp;default_value) const</td>
</tr>
<tr class="odd memdesc:a694398741710ce1c22797ad47109898b">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element via JSON Pointer
with default value<br />
</td>
</tr>
<tr class="even separator:a694398741710ce1c22797ad47109898b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac63045992eb552c11f77fefddd801591"
class="odd memitem:ac63045992eb552c11f77fefddd801591">
<td colspan="2" class="memTemplParams">template&lt;class ValueType ,
detail::enable_if_t&lt; <a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ValueType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:ac63045992eb552c11f77fefddd801591">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ValueType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ac63045992eb552c11f77fefddd801591" class="el">value</a> (const <a
href="#afe66720a34c11920f359394a4430a16e" class="el">json_pointer</a>
&amp;ptr, const ValueType &amp;default_value) const</td>
</tr>
<tr class="odd memdesc:ac63045992eb552c11f77fefddd801591">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element via JSON Pointer
with default value<br />
</td>
</tr>
<tr class="even separator:ac63045992eb552c11f77fefddd801591">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1ab7b5edf8e5831195940f8d377a6ee3"
class="odd memitem:a1ab7b5edf8e5831195940f8d377a6ee3">
<td colspan="2" class="memTemplParams">template&lt;class ValueType ,
class ReturnType = typename value_return_type&lt;ValueType&gt;::type,
detail::enable_if_t&lt; <a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ReturnType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a1ab7b5edf8e5831195940f8d377a6ee3">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ReturnType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a1ab7b5edf8e5831195940f8d377a6ee3" class="el">value</a> (const <a
href="#afe66720a34c11920f359394a4430a16e" class="el">json_pointer</a>
&amp;ptr, ValueType &amp;&amp;default_value) const</td>
</tr>
<tr class="odd memdesc:a1ab7b5edf8e5831195940f8d377a6ee3">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified object element via JSON Pointer
with default value<br />
</td>
</tr>
<tr class="even separator:a1ab7b5edf8e5831195940f8d377a6ee3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7e65cc92d9f1db5edb42294a705c2d4e"
class="odd memitem:a7e65cc92d9f1db5edb42294a705c2d4e">
<td colspan="2" class="memTemplParams"><span
id="a7e65cc92d9f1db5edb42294a705c2d4e"></span> template&lt;class
ValueType , class BasicJsonType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;::value
&amp;&amp;<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ValueType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a7e65cc92d9f1db5edb42294a705c2d4e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ValueType </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>value</strong> (const
::nlohmann::json_pointer&lt; BasicJsonType &gt; &amp;ptr, const
ValueType &amp;default_value) const</td>
</tr>
<tr class="odd separator:a7e65cc92d9f1db5edb42294a705c2d4e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a001e11f0e7bef081d390651f69acf346"
class="even memitem:a001e11f0e7bef081d390651f69acf346">
<td colspan="2" class="memTemplParams"><span
id="a001e11f0e7bef081d390651f69acf346"></span> template&lt;class
ValueType , class BasicJsonType , class ReturnType = typename
value_return_type&lt;ValueType&gt;::type, detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;::value
&amp;&amp;<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>&lt; basic_json_t, ReturnType
&gt;::value &amp;&amp;!std::is_same&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t&lt; ValueType &gt;
&gt;::value, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a001e11f0e7bef081d390651f69acf346">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ReturnType </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>value</strong> (const
::nlohmann::json_pointer&lt; BasicJsonType &gt; &amp;ptr, ValueType
&amp;&amp;default_value) const</td>
</tr>
<tr class="even separator:a001e11f0e7bef081d390651f69acf346">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad4dd162b4990cfb69925193797415f7e"
class="odd memitem:ad4dd162b4990cfb69925193797415f7e">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad4dd162b4990cfb69925193797415f7e" class="el">front</a> ()</td>
</tr>
<tr class="even memdesc:ad4dd162b4990cfb69925193797415f7e">
<td class="mdescLeft"> </td>
<td class="mdescRight">access the first element<br />
</td>
</tr>
<tr class="odd separator:ad4dd162b4990cfb69925193797415f7e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a162089e94f24182ba3e4484be63c0c1a"
class="even memitem:a162089e94f24182ba3e4484be63c0c1a">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a162089e94f24182ba3e4484be63c0c1a" class="el">front</a> ()
const</td>
</tr>
<tr class="odd memdesc:a162089e94f24182ba3e4484be63c0c1a">
<td class="mdescLeft"> </td>
<td class="mdescRight">access the first element<br />
</td>
</tr>
<tr class="even separator:a162089e94f24182ba3e4484be63c0c1a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0d93dc1dbdf67a6ee3a5cf1d2439ca77"
class="odd memitem:a0d93dc1dbdf67a6ee3a5cf1d2439ca77">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a0d93dc1dbdf67a6ee3a5cf1d2439ca77" class="el">back</a> ()</td>
</tr>
<tr class="even memdesc:a0d93dc1dbdf67a6ee3a5cf1d2439ca77">
<td class="mdescLeft"> </td>
<td class="mdescRight">access the last element<br />
</td>
</tr>
<tr class="odd separator:a0d93dc1dbdf67a6ee3a5cf1d2439ca77">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a41eee3066cd1ebfea746f9f07fd03f6f"
class="even memitem:a41eee3066cd1ebfea746f9f07fd03f6f">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a41eee3066cd1ebfea746f9f07fd03f6f" class="el">back</a> ()
const</td>
</tr>
<tr class="odd memdesc:a41eee3066cd1ebfea746f9f07fd03f6f">
<td class="mdescLeft"> </td>
<td class="mdescRight">access the last element<br />
</td>
</tr>
<tr class="even separator:a41eee3066cd1ebfea746f9f07fd03f6f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7d0fef086b1b72372113db6ce7446189"
class="odd memitem:a7d0fef086b1b72372113db6ce7446189">
<td colspan="2" class="memTemplParams">template&lt;class IteratorType ,
detail::enable_if_t&lt; std::is_same&lt; IteratorType, typename
basic_json_t::iterator &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>||std::is_same&lt; IteratorType, typename
basic_json_t::const_iterator &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a7d0fef086b1b72372113db6ce7446189">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">IteratorType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a7d0fef086b1b72372113db6ce7446189" class="el">erase</a>
(IteratorType pos)</td>
</tr>
<tr class="odd memdesc:a7d0fef086b1b72372113db6ce7446189">
<td class="mdescLeft"> </td>
<td class="mdescRight">remove element given an iterator<br />
</td>
</tr>
<tr class="even separator:a7d0fef086b1b72372113db6ce7446189">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a437b81c6e968a4192a22bc0de6c4df80"
class="odd memitem:a437b81c6e968a4192a22bc0de6c4df80">
<td colspan="2" class="memTemplParams">template&lt;class IteratorType ,
detail::enable_if_t&lt; std::is_same&lt; IteratorType, typename
basic_json_t::iterator &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>||std::is_same&lt; IteratorType, typename
basic_json_t::const_iterator &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a437b81c6e968a4192a22bc0de6c4df80">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">IteratorType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a437b81c6e968a4192a22bc0de6c4df80" class="el">erase</a>
(IteratorType first, IteratorType last)</td>
</tr>
<tr class="odd memdesc:a437b81c6e968a4192a22bc0de6c4df80">
<td class="mdescLeft"> </td>
<td class="mdescRight">remove elements given an iterator range<br />
</td>
</tr>
<tr class="even separator:a437b81c6e968a4192a22bc0de6c4df80">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a05da3b93f2d4a7164589abffaa9acb33"
class="odd memitem:a05da3b93f2d4a7164589abffaa9acb33">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a05da3b93f2d4a7164589abffaa9acb33" class="el">erase</a> (const
typename object_t::key_type &amp;key)</td>
</tr>
<tr class="even memdesc:a05da3b93f2d4a7164589abffaa9acb33">
<td class="mdescLeft"> </td>
<td class="mdescRight">remove element from a JSON object given a
key<br />
</td>
</tr>
<tr class="odd separator:a05da3b93f2d4a7164589abffaa9acb33">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5f763336e84232f38e2d80e142f9820e"
class="even memitem:a5f763336e84232f38e2d80e142f9820e">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a5f763336e84232f38e2d80e142f9820e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a5f763336e84232f38e2d80e142f9820e" class="el">erase</a> (KeyType
&amp;&amp;key)</td>
</tr>
<tr class="even memdesc:a5f763336e84232f38e2d80e142f9820e">
<td class="mdescLeft"> </td>
<td class="mdescRight">remove element from a JSON object given a
key<br />
</td>
</tr>
<tr class="odd separator:a5f763336e84232f38e2d80e142f9820e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac2c58b5f34c2ff56e27630214f5a9df4"
class="even memitem:ac2c58b5f34c2ff56e27630214f5a9df4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac2c58b5f34c2ff56e27630214f5a9df4" class="el">erase</a> (const <a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a>
idx)</td>
</tr>
<tr class="odd memdesc:ac2c58b5f34c2ff56e27630214f5a9df4">
<td class="mdescLeft"> </td>
<td class="mdescRight">remove element from a JSON array given an
index<br />
</td>
</tr>
<tr class="even separator:ac2c58b5f34c2ff56e27630214f5a9df4">
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
<td colspan="2"><h2 id="exceptions"
class="groupheader">exceptions</h2></td>
</tr>
<tr class="even">
<td colspan="2" class="ititle"><p>Classes to implement user-defined
exceptions.</p></td>
</tr>
<tr id="r_a4ed57fa411e69ae5741bc2f333a967c9"
class="odd memitem:a4ed57fa411e69ae5741bc2f333a967c9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4ed57fa411e69ae5741bc2f333a967c9"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>exception</strong>
= <a href="classdetail_1_1exception.html"
class="el">detail::exception</a></td>
</tr>
<tr class="even separator:a4ed57fa411e69ae5741bc2f333a967c9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0fe1802a6a2de032f3c4e4f0f555ae10"
class="odd memitem:a0fe1802a6a2de032f3c4e4f0f555ae10">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a0fe1802a6a2de032f3c4e4f0f555ae10"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>parse_error</strong> = <a
href="classdetail_1_1parse__error.html"
class="el">detail::parse_error</a></td>
</tr>
<tr class="even separator:a0fe1802a6a2de032f3c4e4f0f555ae10">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a34b69b2a91df080e00cc8f36c342bb6b"
class="odd memitem:a34b69b2a91df080e00cc8f36c342bb6b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a34b69b2a91df080e00cc8f36c342bb6b"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>invalid_iterator</strong> = <a
href="classdetail_1_1invalid__iterator.html"
class="el">detail::invalid_iterator</a></td>
</tr>
<tr class="even separator:a34b69b2a91df080e00cc8f36c342bb6b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2c52f112e54d1be294055ea9186a1c35"
class="odd memitem:a2c52f112e54d1be294055ea9186a1c35">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2c52f112e54d1be294055ea9186a1c35"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>type_error</strong> = <a
href="classdetail_1_1type__error.html"
class="el">detail::type_error</a></td>
</tr>
<tr class="even separator:a2c52f112e54d1be294055ea9186a1c35">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa45e2d88a6cf9236c1f45a1fad18442d"
class="odd memitem:aa45e2d88a6cf9236c1f45a1fad18442d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aa45e2d88a6cf9236c1f45a1fad18442d"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>out_of_range</strong> = <a
href="classdetail_1_1out__of__range.html"
class="el">detail::out_of_range</a></td>
</tr>
<tr class="even separator:aa45e2d88a6cf9236c1f45a1fad18442d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_adb2d18607e0835c4695f53996b181379"
class="odd memitem:adb2d18607e0835c4695f53996b181379">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="adb2d18607e0835c4695f53996b181379"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>other_error</strong> = <a
href="classdetail_1_1other__error.html"
class="el">detail::other_error</a></td>
</tr>
<tr class="even separator:adb2d18607e0835c4695f53996b181379">
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
<td colspan="2"><h2 id="container-types" class="groupheader">container
types</h2></td>
</tr>
<tr class="even">
<td colspan="2" class="ititle"><p>The canonic container types to use <a
href="classbasic__json.html" class="el">basic_json</a> like any other
STL container.</p></td>
</tr>
<tr id="r_a0d9e6a7acee2992e310ea21a7b59c67a"
class="odd memitem:a0d9e6a7acee2992e310ea21a7b59c67a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a0d9e6a7acee2992e310ea21a7b59c67a"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>value_type</strong> = <a
href="classbasic__json.html" class="el">basic_json</a></td>
</tr>
<tr class="even memdesc:a0d9e6a7acee2992e310ea21a7b59c67a">
<td class="mdescLeft"> </td>
<td class="mdescRight">the type of elements in a <a
href="classbasic__json.html" class="el"
title="namespace for Niels Lohmann">basic_json</a> container<br />
</td>
</tr>
<tr class="odd separator:a0d9e6a7acee2992e310ea21a7b59c67a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6ca7bfb35987ce7cb8d27447cda5b80a"
class="even memitem:a6ca7bfb35987ce7cb8d27447cda5b80a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6ca7bfb35987ce7cb8d27447cda5b80a"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>reference</strong>
= <a href="#a0d9e6a7acee2992e310ea21a7b59c67a"
class="el">value_type</a>&amp;</td>
</tr>
<tr class="odd memdesc:a6ca7bfb35987ce7cb8d27447cda5b80a">
<td class="mdescLeft"> </td>
<td class="mdescRight">the type of an element reference<br />
</td>
</tr>
<tr class="even separator:a6ca7bfb35987ce7cb8d27447cda5b80a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a31370bb451b78198d42c86dd31955deb"
class="odd memitem:a31370bb451b78198d42c86dd31955deb">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a31370bb451b78198d42c86dd31955deb"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>const_reference</strong> = const <a
href="#a0d9e6a7acee2992e310ea21a7b59c67a"
class="el">value_type</a>&amp;</td>
</tr>
<tr class="even memdesc:a31370bb451b78198d42c86dd31955deb">
<td class="mdescLeft"> </td>
<td class="mdescRight">the type of an element const reference<br />
</td>
</tr>
<tr class="odd separator:a31370bb451b78198d42c86dd31955deb">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae45e8f7ce7c3e62035cd097a39910399"
class="even memitem:ae45e8f7ce7c3e62035cd097a39910399">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae45e8f7ce7c3e62035cd097a39910399"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>difference_type</strong> =
std::ptrdiff_t</td>
</tr>
<tr class="odd memdesc:ae45e8f7ce7c3e62035cd097a39910399">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type to represent differences between
iterators<br />
</td>
</tr>
<tr class="even separator:ae45e8f7ce7c3e62035cd097a39910399">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2c086af43cf06b1b7118f5351cab3ec9"
class="odd memitem:a2c086af43cf06b1b7118f5351cab3ec9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2c086af43cf06b1b7118f5351cab3ec9"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>size_type</strong>
= std::size_t</td>
</tr>
<tr class="even memdesc:a2c086af43cf06b1b7118f5351cab3ec9">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type to represent container sizes<br />
</td>
</tr>
<tr class="odd separator:a2c086af43cf06b1b7118f5351cab3ec9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a83f845db2d54cedad97279bad70aea52"
class="even memitem:a83f845db2d54cedad97279bad70aea52">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a83f845db2d54cedad97279bad70aea52"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>allocator_type</strong> =
AllocatorType&lt;<a href="classbasic__json.html"
class="el">basic_json</a>&gt;</td>
</tr>
<tr class="odd memdesc:a83f845db2d54cedad97279bad70aea52">
<td class="mdescLeft"> </td>
<td class="mdescRight">the allocator type<br />
</td>
</tr>
<tr class="even separator:a83f845db2d54cedad97279bad70aea52">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a84279673ab13fb6360cf17173a29a1f1"
class="odd memitem:a84279673ab13fb6360cf17173a29a1f1">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a84279673ab13fb6360cf17173a29a1f1"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>pointer</strong> =
typename std::allocator_traits&lt;<a
href="#a83f845db2d54cedad97279bad70aea52"
class="el">allocator_type</a>&gt;::pointer</td>
</tr>
<tr class="even memdesc:a84279673ab13fb6360cf17173a29a1f1">
<td class="mdescLeft"> </td>
<td class="mdescRight">the type of an element pointer<br />
</td>
</tr>
<tr class="odd separator:a84279673ab13fb6360cf17173a29a1f1">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2862fa42527f5c14d9f737411e0facd4"
class="even memitem:a2862fa42527f5c14d9f737411e0facd4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2862fa42527f5c14d9f737411e0facd4"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>const_pointer</strong> = typename
std::allocator_traits&lt;<a href="#a83f845db2d54cedad97279bad70aea52"
class="el">allocator_type</a>&gt;::const_pointer</td>
</tr>
<tr class="odd memdesc:a2862fa42527f5c14d9f737411e0facd4">
<td class="mdescLeft"> </td>
<td class="mdescRight">the type of an element const pointer<br />
</td>
</tr>
<tr class="even separator:a2862fa42527f5c14d9f737411e0facd4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae206a491161d043f8efaa1330f1ccf97"
class="odd memitem:ae206a491161d043f8efaa1330f1ccf97">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae206a491161d043f8efaa1330f1ccf97"></span>
using </td>
<td class="memItemRight" data-valign="bottom"><strong>iterator</strong>
= iter_impl&lt;<a href="classbasic__json.html"
class="el">basic_json</a>&gt;</td>
</tr>
<tr class="even memdesc:ae206a491161d043f8efaa1330f1ccf97">
<td class="mdescLeft"> </td>
<td class="mdescRight">an iterator for a <a href="classbasic__json.html"
class="el" title="namespace for Niels Lohmann">basic_json</a>
container<br />
</td>
</tr>
<tr class="odd separator:ae206a491161d043f8efaa1330f1ccf97">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1f5af3d9d06d43b91fefe1767794b1e8"
class="even memitem:a1f5af3d9d06d43b91fefe1767794b1e8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a1f5af3d9d06d43b91fefe1767794b1e8"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>const_iterator</strong> =
iter_impl&lt;const <a href="classbasic__json.html"
class="el">basic_json</a>&gt;</td>
</tr>
<tr class="odd memdesc:a1f5af3d9d06d43b91fefe1767794b1e8">
<td class="mdescLeft"> </td>
<td class="mdescRight">a const iterator for a <a
href="classbasic__json.html" class="el"
title="namespace for Niels Lohmann">basic_json</a> container<br />
</td>
</tr>
<tr class="even separator:a1f5af3d9d06d43b91fefe1767794b1e8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aedc059cdae078322bb0d434b2127d1cf"
class="odd memitem:aedc059cdae078322bb0d434b2127d1cf">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aedc059cdae078322bb0d434b2127d1cf"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>reverse_iterator</strong> =
json_reverse_iterator&lt;typename <a
href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">basic_json::iterator</a>&gt;</td>
</tr>
<tr class="even memdesc:aedc059cdae078322bb0d434b2127d1cf">
<td class="mdescLeft"> </td>
<td class="mdescRight">a reverse iterator for a <a
href="classbasic__json.html" class="el"
title="namespace for Niels Lohmann">basic_json</a> container<br />
</td>
</tr>
<tr class="odd separator:aedc059cdae078322bb0d434b2127d1cf">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a240f61567d8acffe831532f4f9b379cb"
class="even memitem:a240f61567d8acffe831532f4f9b379cb">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a240f61567d8acffe831532f4f9b379cb"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>const_reverse_iterator</strong> =
json_reverse_iterator&lt;typename <a
href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">basic_json::const_iterator</a>&gt;</td>
</tr>
<tr class="odd memdesc:a240f61567d8acffe831532f4f9b379cb">
<td class="mdescLeft"> </td>
<td class="mdescRight">a const reverse iterator for a <a
href="classbasic__json.html" class="el"
title="namespace for Niels Lohmann">basic_json</a> container<br />
</td>
</tr>
<tr class="even separator:a240f61567d8acffe831532f4f9b379cb">
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
<td colspan="2"><h2 id="json-value-data-types" class="groupheader">JSON
value data types</h2></td>
</tr>
<tr class="even">
<td colspan="2" class="ititle"><p>The data types to store a JSON value.
These types are derived from the template arguments passed to class <a
href="classbasic__json.html" class="el">basic_json</a>.</p></td>
</tr>
<tr id="r_a991d005e7f648cbf37bb36daf85183ca"
class="odd memitem:a991d005e7f648cbf37bb36daf85183ca">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a991d005e7f648cbf37bb36daf85183ca"
class="el">default_object_comparator_t</a> =
std::less&lt;StringType&gt;</td>
</tr>
<tr class="even memdesc:a991d005e7f648cbf37bb36daf85183ca">
<td class="mdescLeft"> </td>
<td class="mdescRight">default object key comparator type The actual
object key comparator type (<a href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a>) may be different.<br />
</td>
</tr>
<tr class="odd separator:a991d005e7f648cbf37bb36daf85183ca">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a67bb0d6dfaf1709d918b7107f5b94a3d"
class="even memitem:a67bb0d6dfaf1709d918b7107f5b94a3d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a67bb0d6dfaf1709d918b7107f5b94a3d" class="el">object_t</a></td>
</tr>
<tr class="odd memdesc:a67bb0d6dfaf1709d918b7107f5b94a3d">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for an object<br />
</td>
</tr>
<tr class="even separator:a67bb0d6dfaf1709d918b7107f5b94a3d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a60644b7dccc409e6b367361d37841333"
class="odd memitem:a60644b7dccc409e6b367361d37841333">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a60644b7dccc409e6b367361d37841333" class="el">array_t</a> =
ArrayType&lt;<a href="classbasic__json.html" class="el">basic_json</a>,
AllocatorType&lt;<a href="classbasic__json.html"
class="el">basic_json</a>&gt;&gt;</td>
</tr>
<tr class="even memdesc:a60644b7dccc409e6b367361d37841333">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for an array<br />
</td>
</tr>
<tr class="odd separator:a60644b7dccc409e6b367361d37841333">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac8c9cde32146e6c343e1960aefc11fba"
class="even memitem:ac8c9cde32146e6c343e1960aefc11fba">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac8c9cde32146e6c343e1960aefc11fba" class="el">string_t</a> =
StringType</td>
</tr>
<tr class="odd memdesc:ac8c9cde32146e6c343e1960aefc11fba">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for a string<br />
</td>
</tr>
<tr class="even separator:ac8c9cde32146e6c343e1960aefc11fba">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9301890c48e9b957edc07f9eb767bd10"
class="odd memitem:a9301890c48e9b957edc07f9eb767bd10">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a9301890c48e9b957edc07f9eb767bd10" class="el">boolean_t</a> =
BooleanType</td>
</tr>
<tr class="even memdesc:a9301890c48e9b957edc07f9eb767bd10">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for a boolean<br />
</td>
</tr>
<tr class="odd separator:a9301890c48e9b957edc07f9eb767bd10">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aba48b0bdee31228a4e19b7c040b6d2a5"
class="even memitem:aba48b0bdee31228a4e19b7c040b6d2a5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aba48b0bdee31228a4e19b7c040b6d2a5"
class="el">number_integer_t</a> = NumberIntegerType</td>
</tr>
<tr class="odd memdesc:aba48b0bdee31228a4e19b7c040b6d2a5">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for a number (integer)<br />
</td>
</tr>
<tr class="even separator:aba48b0bdee31228a4e19b7c040b6d2a5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae8505b599e706768a1e0bd6718cc7117"
class="odd memitem:ae8505b599e706768a1e0bd6718cc7117">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae8505b599e706768a1e0bd6718cc7117"
class="el">number_unsigned_t</a> = NumberUnsignedType</td>
</tr>
<tr class="even memdesc:ae8505b599e706768a1e0bd6718cc7117">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for a number (unsigned)<br />
</td>
</tr>
<tr class="odd separator:ae8505b599e706768a1e0bd6718cc7117">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a80a229dbc84c1334171ce9c49c873c56"
class="even memitem:a80a229dbc84c1334171ce9c49c873c56">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a80a229dbc84c1334171ce9c49c873c56" class="el">number_float_t</a>
= NumberFloatType</td>
</tr>
<tr class="odd memdesc:a80a229dbc84c1334171ce9c49c873c56">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for a number (floating-point)<br />
</td>
</tr>
<tr class="even separator:a80a229dbc84c1334171ce9c49c873c56">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4c1b5ea434b48cf31097617bb1c1ca1e"
class="odd memitem:a4c1b5ea434b48cf31097617bb1c1ca1e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4c1b5ea434b48cf31097617bb1c1ca1e" class="el">binary_t</a> =
nlohmann::byte_container_with_subtype&lt;BinaryType&gt;</td>
</tr>
<tr class="even memdesc:a4c1b5ea434b48cf31097617bb1c1ca1e">
<td class="mdescLeft"> </td>
<td class="mdescRight">a type for a packed binary type<br />
</td>
</tr>
<tr class="odd separator:a4c1b5ea434b48cf31097617bb1c1ca1e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af12040e0663db54840d73d363979643a"
class="even memitem:af12040e0663db54840d73d363979643a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> =
detail::actual_object_comparator_t&lt;<a href="classbasic__json.html"
class="el">basic_json</a>&gt;</td>
</tr>
<tr class="odd memdesc:af12040e0663db54840d73d363979643a">
<td class="mdescLeft"> </td>
<td class="mdescRight">object key comparator type<br />
</td>
</tr>
<tr class="even separator:af12040e0663db54840d73d363979643a">
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
<td colspan="2"><h2 id="modifiers"
class="groupheader">modifiers</h2></td>
</tr>
<tr id="r_a44c98b48b8a0b5e53087776fbb63961f"
class="even memitem:a44c98b48b8a0b5e53087776fbb63961f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a44c98b48b8a0b5e53087776fbb63961f" class="el">swap</a> (<a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> left,
<a href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a>
right) noexcept(std::is_nothrow_move_constructible&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_assignable&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_constructible&lt;
json_value &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>
&amp;&amp;//NOLINT(cppcoreguidelines-noexcept-swap,
performance-noexcept-swap) std::is_nothrow_move_assignable&lt;
json_value &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>)</td>
</tr>
<tr class="odd memdesc:a44c98b48b8a0b5e53087776fbb63961f">
<td class="mdescLeft"> </td>
<td class="mdescRight">exchanges the values<br />
</td>
</tr>
<tr class="even separator:a44c98b48b8a0b5e53087776fbb63961f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad8cb21b66e4a4de652828345d51a8fc1"
class="odd memitem:ad8cb21b66e4a4de652828345d51a8fc1">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad8cb21b66e4a4de652828345d51a8fc1" class="el">clear</a> ()
noexcept</td>
</tr>
<tr class="even memdesc:ad8cb21b66e4a4de652828345d51a8fc1">
<td class="mdescLeft"> </td>
<td class="mdescRight">clears the contents<br />
</td>
</tr>
<tr class="odd separator:ad8cb21b66e4a4de652828345d51a8fc1">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3d13acce4e49e0d5ee768643a7b89010"
class="even memitem:a3d13acce4e49e0d5ee768643a7b89010">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3d13acce4e49e0d5ee768643a7b89010" class="el">push_back</a> (<a
href="classbasic__json.html" class="el">basic_json</a>
&amp;&amp;val)</td>
</tr>
<tr class="odd memdesc:a3d13acce4e49e0d5ee768643a7b89010">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an array<br />
</td>
</tr>
<tr class="even separator:a3d13acce4e49e0d5ee768643a7b89010">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac444a656905e3f207ad9fc19275faf25"
class="odd memitem:ac444a656905e3f207ad9fc19275faf25">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac444a656905e3f207ad9fc19275faf25" class="el">operator+=</a> (<a
href="classbasic__json.html" class="el">basic_json</a>
&amp;&amp;val)</td>
</tr>
<tr class="even memdesc:ac444a656905e3f207ad9fc19275faf25">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an array<br />
</td>
</tr>
<tr class="odd separator:ac444a656905e3f207ad9fc19275faf25">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aca01ca3a9bc310e5c5d067a39dca6933"
class="even memitem:aca01ca3a9bc310e5c5d067a39dca6933">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aca01ca3a9bc310e5c5d067a39dca6933" class="el">push_back</a>
(const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;val)</td>
</tr>
<tr class="odd memdesc:aca01ca3a9bc310e5c5d067a39dca6933">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an array<br />
</td>
</tr>
<tr class="even separator:aca01ca3a9bc310e5c5d067a39dca6933">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4475e951f51506808ca6fe7e77eb38ca"
class="odd memitem:a4475e951f51506808ca6fe7e77eb38ca">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4475e951f51506808ca6fe7e77eb38ca" class="el">operator+=</a>
(const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;val)</td>
</tr>
<tr class="even memdesc:a4475e951f51506808ca6fe7e77eb38ca">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an array<br />
</td>
</tr>
<tr class="odd separator:a4475e951f51506808ca6fe7e77eb38ca">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af17fe93acad9b0b991600225dabd42be"
class="even memitem:af17fe93acad9b0b991600225dabd42be">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af17fe93acad9b0b991600225dabd42be" class="el">push_back</a>
(const typename object_t::value_type &amp;val)</td>
</tr>
<tr class="odd memdesc:af17fe93acad9b0b991600225dabd42be">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an object<br />
</td>
</tr>
<tr class="even separator:af17fe93acad9b0b991600225dabd42be">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a996a58d60e4badd9beadfd3e2e7ffdc1"
class="odd memitem:a996a58d60e4badd9beadfd3e2e7ffdc1">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a996a58d60e4badd9beadfd3e2e7ffdc1" class="el">operator+=</a>
(const typename object_t::value_type &amp;val)</td>
</tr>
<tr class="even memdesc:a996a58d60e4badd9beadfd3e2e7ffdc1">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an object<br />
</td>
</tr>
<tr class="odd separator:a996a58d60e4badd9beadfd3e2e7ffdc1">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4fcacc90f17b156f0b6c8e0430624853"
class="even memitem:a4fcacc90f17b156f0b6c8e0430624853">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4fcacc90f17b156f0b6c8e0430624853" class="el">push_back</a> (<a
href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a> init)</td>
</tr>
<tr class="odd memdesc:a4fcacc90f17b156f0b6c8e0430624853">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an object<br />
</td>
</tr>
<tr class="even separator:a4fcacc90f17b156f0b6c8e0430624853">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3af74b651da5642cd8b77a3ecc635331"
class="odd memitem:a3af74b651da5642cd8b77a3ecc635331">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3af74b651da5642cd8b77a3ecc635331" class="el">operator+=</a> (<a
href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a> init)</td>
</tr>
<tr class="even memdesc:a3af74b651da5642cd8b77a3ecc635331">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an object<br />
</td>
</tr>
<tr class="odd separator:a3af74b651da5642cd8b77a3ecc635331">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac5f0a15957842b188826aea98a9cfd3d"
class="even memitem:ac5f0a15957842b188826aea98a9cfd3d">
<td colspan="2" class="memTemplParams">template&lt;class...
Args&gt;</td>
</tr>
<tr class="odd memitem:ac5f0a15957842b188826aea98a9cfd3d">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ac5f0a15957842b188826aea98a9cfd3d" class="el">emplace_back</a>
(Args &amp;&amp;... args)</td>
</tr>
<tr class="even memdesc:ac5f0a15957842b188826aea98a9cfd3d">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an array<br />
</td>
</tr>
<tr class="odd separator:ac5f0a15957842b188826aea98a9cfd3d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af298488e59ff260d2ca950070cf19196"
class="even memitem:af298488e59ff260d2ca950070cf19196">
<td colspan="2" class="memTemplParams">template&lt;class...
Args&gt;</td>
</tr>
<tr class="odd memitem:af298488e59ff260d2ca950070cf19196">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">std::pair&lt; <a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a>, bool
&gt; </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#af298488e59ff260d2ca950070cf19196" class="el">emplace</a> (Args
&amp;&amp;... args)</td>
</tr>
<tr class="even memdesc:af298488e59ff260d2ca950070cf19196">
<td class="mdescLeft"> </td>
<td class="mdescRight">add an object to an object if key does not
exist<br />
</td>
</tr>
<tr class="odd separator:af298488e59ff260d2ca950070cf19196">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af8c5ca19d22a32054452470669c43bb9"
class="even memitem:af8c5ca19d22a32054452470669c43bb9">
<td colspan="2" class="memTemplParams">template&lt;typename...
Args&gt;</td>
</tr>
<tr class="odd memitem:af8c5ca19d22a32054452470669c43bb9">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#af8c5ca19d22a32054452470669c43bb9" class="el">insert_iterator</a>
(<a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> pos, Args &amp;&amp;... args)</td>
</tr>
<tr class="even separator:af8c5ca19d22a32054452470669c43bb9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7f3817060c2bec896a99cb2c236b9c27"
class="odd memitem:a7f3817060c2bec896a99cb2c236b9c27">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a7f3817060c2bec896a99cb2c236b9c27" class="el">insert</a> (<a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
pos, const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;val)</td>
</tr>
<tr class="even memdesc:a7f3817060c2bec896a99cb2c236b9c27">
<td class="mdescLeft"> </td>
<td class="mdescRight">inserts element into array<br />
</td>
</tr>
<tr class="odd separator:a7f3817060c2bec896a99cb2c236b9c27">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae5da62116a40a0f86e87f11fdd54e9f0"
class="even memitem:ae5da62116a40a0f86e87f11fdd54e9f0">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae5da62116a40a0f86e87f11fdd54e9f0" class="el">insert</a> (<a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
pos, <a href="classbasic__json.html" class="el">basic_json</a>
&amp;&amp;val)</td>
</tr>
<tr class="odd memdesc:ae5da62116a40a0f86e87f11fdd54e9f0">
<td class="mdescLeft"> </td>
<td class="mdescRight">inserts element into array<br />
</td>
</tr>
<tr class="even separator:ae5da62116a40a0f86e87f11fdd54e9f0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a47b623200562da188886a385c716d101"
class="odd memitem:a47b623200562da188886a385c716d101">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a47b623200562da188886a385c716d101" class="el">insert</a> (<a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
pos, <a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> cnt, const <a href="classbasic__json.html"
class="el">basic_json</a> &amp;val)</td>
</tr>
<tr class="even memdesc:a47b623200562da188886a385c716d101">
<td class="mdescLeft"> </td>
<td class="mdescRight">inserts copies of element into array<br />
</td>
</tr>
<tr class="odd separator:a47b623200562da188886a385c716d101">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a68e1707248a00a2608a304da5ae5c911"
class="even memitem:a68e1707248a00a2608a304da5ae5c911">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a68e1707248a00a2608a304da5ae5c911" class="el">insert</a> (<a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
pos, <a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> first, <a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
last)</td>
</tr>
<tr class="odd memdesc:a68e1707248a00a2608a304da5ae5c911">
<td class="mdescLeft"> </td>
<td class="mdescRight">inserts range of elements into array<br />
</td>
</tr>
<tr class="even separator:a68e1707248a00a2608a304da5ae5c911">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abdfee6a3db80431a24c68bfaf038c47d"
class="odd memitem:abdfee6a3db80431a24c68bfaf038c47d">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#abdfee6a3db80431a24c68bfaf038c47d" class="el">insert</a> (<a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
pos, <a href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a> ilist)</td>
</tr>
<tr class="even memdesc:abdfee6a3db80431a24c68bfaf038c47d">
<td class="mdescLeft"> </td>
<td class="mdescRight">inserts elements from initializer list into
array<br />
</td>
</tr>
<tr class="odd separator:abdfee6a3db80431a24c68bfaf038c47d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aaf55c485c75ddd7bd5f9791e59d3aec7"
class="even memitem:aaf55c485c75ddd7bd5f9791e59d3aec7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aaf55c485c75ddd7bd5f9791e59d3aec7" class="el">insert</a> (<a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
first, <a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> last)</td>
</tr>
<tr class="odd memdesc:aaf55c485c75ddd7bd5f9791e59d3aec7">
<td class="mdescLeft"> </td>
<td class="mdescRight">inserts range of elements into object<br />
</td>
</tr>
<tr class="even separator:aaf55c485c75ddd7bd5f9791e59d3aec7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3819f393e82396782ccc22785575b01d"
class="odd memitem:a3819f393e82396782ccc22785575b01d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3819f393e82396782ccc22785575b01d" class="el">update</a> (<a
href="#a31370bb451b78198d42c86dd31955deb" class="el">const_reference</a>
j, bool merge_objects=false)</td>
</tr>
<tr class="even memdesc:a3819f393e82396782ccc22785575b01d">
<td class="mdescLeft"> </td>
<td class="mdescRight">updates a JSON object from another object,
overwriting existing keys<br />
</td>
</tr>
<tr class="odd separator:a3819f393e82396782ccc22785575b01d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4ea2b8cef5e4aba5b92d14e6ebe25936"
class="even memitem:a4ea2b8cef5e4aba5b92d14e6ebe25936">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4ea2b8cef5e4aba5b92d14e6ebe25936" class="el">update</a> (<a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
first, <a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> last, bool merge_objects=false)</td>
</tr>
<tr class="odd memdesc:a4ea2b8cef5e4aba5b92d14e6ebe25936">
<td class="mdescLeft"> </td>
<td class="mdescRight">updates a JSON object from another object,
overwriting existing keys<br />
</td>
</tr>
<tr class="even separator:a4ea2b8cef5e4aba5b92d14e6ebe25936">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1a94e5348ebb34852092d51a44e21d24"
class="odd memitem:a1a94e5348ebb34852092d51a44e21d24">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a1a94e5348ebb34852092d51a44e21d24" class="el">swap</a> (<a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a>
other) noexcept(std::is_nothrow_move_constructible&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_assignable&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_constructible&lt;
json_value &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>
&amp;&amp;//NOLINT(cppcoreguidelines-noexcept-swap,
performance-noexcept-swap) std::is_nothrow_move_assignable&lt;
json_value &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>)</td>
</tr>
<tr class="even memdesc:a1a94e5348ebb34852092d51a44e21d24">
<td class="mdescLeft"> </td>
<td class="mdescRight">exchanges the values<br />
</td>
</tr>
<tr class="odd separator:a1a94e5348ebb34852092d51a44e21d24">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac1e32c91d5e641c25c52486341f5a9db"
class="even memitem:ac1e32c91d5e641c25c52486341f5a9db">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac1e32c91d5e641c25c52486341f5a9db" class="el">swap</a> (<a
href="#a60644b7dccc409e6b367361d37841333" class="el">array_t</a>
&amp;other)</td>
</tr>
<tr class="odd memdesc:ac1e32c91d5e641c25c52486341f5a9db">
<td class="mdescLeft"> </td>
<td class="mdescRight">exchanges the values<br />
</td>
</tr>
<tr class="even separator:ac1e32c91d5e641c25c52486341f5a9db">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abc9ea6dec87e254de172c2bfeaeef7df"
class="odd memitem:abc9ea6dec87e254de172c2bfeaeef7df">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#abc9ea6dec87e254de172c2bfeaeef7df" class="el">swap</a> (<a
href="#a67bb0d6dfaf1709d918b7107f5b94a3d" class="el">object_t</a>
&amp;other)</td>
</tr>
<tr class="even memdesc:abc9ea6dec87e254de172c2bfeaeef7df">
<td class="mdescLeft"> </td>
<td class="mdescRight">exchanges the values<br />
</td>
</tr>
<tr class="odd separator:abc9ea6dec87e254de172c2bfeaeef7df">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aeac8816c033c659ef8b43a5f03d5f553"
class="even memitem:aeac8816c033c659ef8b43a5f03d5f553">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aeac8816c033c659ef8b43a5f03d5f553" class="el">swap</a> (<a
href="#ac8c9cde32146e6c343e1960aefc11fba" class="el">string_t</a>
&amp;other)</td>
</tr>
<tr class="odd memdesc:aeac8816c033c659ef8b43a5f03d5f553">
<td class="mdescLeft"> </td>
<td class="mdescRight">exchanges the values<br />
</td>
</tr>
<tr class="even separator:aeac8816c033c659ef8b43a5f03d5f553">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3624e1bbc880bd196e3fa4a220554755"
class="odd memitem:a3624e1bbc880bd196e3fa4a220554755">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3624e1bbc880bd196e3fa4a220554755" class="el">swap</a> (<a
href="#a4c1b5ea434b48cf31097617bb1c1ca1e" class="el">binary_t</a>
&amp;other)</td>
</tr>
<tr class="even memdesc:a3624e1bbc880bd196e3fa4a220554755">
<td class="mdescLeft"> </td>
<td class="mdescRight">exchanges the values<br />
</td>
</tr>
<tr class="odd separator:a3624e1bbc880bd196e3fa4a220554755">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa987625005046c81e7748dca1e84a0e3"
class="even memitem:aa987625005046c81e7748dca1e84a0e3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa987625005046c81e7748dca1e84a0e3" class="el">swap</a> (typename
binary_t::container_type &amp;other)</td>
</tr>
<tr class="odd memdesc:aa987625005046c81e7748dca1e84a0e3">
<td class="mdescLeft"> </td>
<td class="mdescRight">exchanges the values<br />
</td>
</tr>
<tr class="even separator:aa987625005046c81e7748dca1e84a0e3">
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
<td colspan="2"><h2 id="lexicographical-comparison-operators"
class="groupheader">lexicographical comparison operators</h2></td>
</tr>
<tr id="r_a7dd56e6dab5328365a3c9b9d15f98e1b"
class="even memitem:a7dd56e6dab5328365a3c9b9d15f98e1b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a7dd56e6dab5328365a3c9b9d15f98e1b"></span>
JSON_PRIVATE_UNLESS_TESTED </td>
<td class="memItemRight" data-valign="bottom">: static bool
compares_unordered(<a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> lhs</td>
</tr>
<tr class="odd separator:a7dd56e6dab5328365a3c9b9d15f98e1b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3a549b97cc690cd390145249335d3768"
class="even memitem:a3a549b97cc690cd390145249335d3768">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3a549b97cc690cd390145249335d3768"></span>
JSON_PRIVATE_UNLESS_TESTED <a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><strong>rhs</strong></td>
</tr>
<tr class="odd separator:a3a549b97cc690cd390145249335d3768">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a54aba2f4314135e3ccf511fb17ca45a5"
class="even memitem:a54aba2f4314135e3ccf511fb17ca45a5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a54aba2f4314135e3ccf511fb17ca45a5"></span>
JSON_PRIVATE_UNLESS_TESTED <a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>inverse</strong></td>
</tr>
<tr class="odd separator:a54aba2f4314135e3ccf511fb17ca45a5">
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
<td colspan="2"><h2 id="value-access" class="groupheader">value
access</h2></td>
</tr>
<tr class="even">
<td colspan="2" class="ititle"><p>Direct access to the stored value of a
JSON value.</p></td>
</tr>
<tr id="r_aba60354728e2f7f64e3e5c6b02c5b820"
class="odd memitem:aba60354728e2f7f64e3e5c6b02c5b820">
<td colspan="2" class="memTemplParams">template&lt;typename PointerType
, typename std::enable_if&lt; std::is_pointer&lt; PointerType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt;<a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a> =
0&gt;</td>
</tr>
<tr class="even memitem:aba60354728e2f7f64e3e5c6b02c5b820">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">auto </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#aba60354728e2f7f64e3e5c6b02c5b820" class="el">get_ptr</a> ()
noexcept -&gt; decltype(std::declval&lt; basic_json_t &amp;
&gt;().get_impl_ptr(std::declval&lt; PointerType &gt;()))</td>
</tr>
<tr class="odd memdesc:aba60354728e2f7f64e3e5c6b02c5b820">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a pointer value (implicit)<br />
</td>
</tr>
<tr class="even separator:aba60354728e2f7f64e3e5c6b02c5b820">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9db8d5e59277a70a736f899c4aec0af0"
class="odd memitem:a9db8d5e59277a70a736f899c4aec0af0">
<td colspan="2" class="memTemplParams">template&lt;typename PointerType
, typename std::enable_if&lt; std::is_pointer&lt; PointerType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&amp;&amp;std::is_const&lt; typename std::remove_pointer&lt; PointerType
&gt;<a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
&gt;<a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int &gt;<a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef"
class="el">::type</a> = 0&gt;</td>
</tr>
<tr class="even memitem:a9db8d5e59277a70a736f899c4aec0af0">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">constexpr auto </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a9db8d5e59277a70a736f899c4aec0af0" class="el">get_ptr</a> ()
const noexcept -&gt; decltype(std::declval&lt; const basic_json_t &amp;
&gt;().get_impl_ptr(std::declval&lt; PointerType &gt;()))</td>
</tr>
<tr class="odd memdesc:a9db8d5e59277a70a736f899c4aec0af0">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a pointer value (implicit)<br />
</td>
</tr>
<tr class="even separator:a9db8d5e59277a70a736f899c4aec0af0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0ab31c7fdbab38898070bca01637f886"
class="odd memitem:a0ab31c7fdbab38898070bca01637f886">
<td colspan="2" class="memTemplParams">template&lt;typename ValueTypeCV
, typename ValueType = detail::uncvref_t&lt;ValueTypeCV&gt;&gt;</td>
</tr>
<tr class="even memitem:a0ab31c7fdbab38898070bca01637f886">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">auto </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a0ab31c7fdbab38898070bca01637f886" class="el">get</a> () const
noexcept(noexcept(std::declval&lt; const basic_json_t &amp;
&gt;().template get_impl&lt; ValueType &gt;(<a
href="structdetail_1_1priority__tag.html"
class="el">detail::priority_tag</a>&lt; 4 &gt; {}))) -&gt;
decltype(std::declval&lt; const basic_json_t &amp; &gt;().template
get_impl&lt; ValueType &gt;(<a href="structdetail_1_1priority__tag.html"
class="el">detail::priority_tag</a>&lt; 4 &gt; {}))</td>
</tr>
<tr class="odd memdesc:a0ab31c7fdbab38898070bca01637f886">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a (pointer) value (explicit)<br />
</td>
</tr>
<tr class="even separator:a0ab31c7fdbab38898070bca01637f886">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab11f66d4edc50a209fab3f8c48664a53"
class="odd memitem:ab11f66d4edc50a209fab3f8c48664a53">
<td colspan="2" class="memTemplParams">template&lt;typename PointerType
, typename std::enable_if&lt; std::is_pointer&lt; PointerType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt;<a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a> =
0&gt;</td>
</tr>
<tr class="even memitem:ab11f66d4edc50a209fab3f8c48664a53">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">auto </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ab11f66d4edc50a209fab3f8c48664a53" class="el">get</a> () noexcept
-&gt; decltype(std::declval&lt; basic_json_t &amp; &gt;().template <a
href="#aba60354728e2f7f64e3e5c6b02c5b820" class="el">get_ptr</a>&lt;
PointerType &gt;())</td>
</tr>
<tr class="odd memdesc:ab11f66d4edc50a209fab3f8c48664a53">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a pointer value (explicit)<br />
</td>
</tr>
<tr class="even separator:ab11f66d4edc50a209fab3f8c48664a53">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8773ee34154b4f492549f5496c640ce5"
class="odd memitem:a8773ee34154b4f492549f5496c640ce5">
<td colspan="2" class="memTemplParams">template&lt;typename ValueType ,
detail::enable_if_t&lt; !<a href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; ValueType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&amp;&amp;<a href="structdetail_1_1has__from__json.html"
class="el">detail::has_from_json</a>&lt; basic_json_t, ValueType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a8773ee34154b4f492549f5496c640ce5">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ValueType &amp; </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a8773ee34154b4f492549f5496c640ce5" class="el">get_to</a>
(ValueType &amp;v) const noexcept(noexcept(JSONSerializer&lt; ValueType
&gt;::from_json(std::declval&lt; const basic_json_t &amp; &gt;(),
v)))</td>
</tr>
<tr class="odd memdesc:a8773ee34154b4f492549f5496c640ce5">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a value (explicit)<br />
</td>
</tr>
<tr class="even separator:a8773ee34154b4f492549f5496c640ce5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5105a87bfca21ce2700960f9c4e4cf0a"
class="odd memitem:a5105a87bfca21ce2700960f9c4e4cf0a">
<td colspan="2" class="memTemplParams"><span
id="a5105a87bfca21ce2700960f9c4e4cf0a"></span> template&lt;typename
ValueType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; ValueType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a5105a87bfca21ce2700960f9c4e4cf0a">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ValueType &amp; </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>get_to</strong> (ValueType &amp;v)
const</td>
</tr>
<tr class="odd separator:a5105a87bfca21ce2700960f9c4e4cf0a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab8ffeca3b8431bbc7bab0280f843f79e"
class="even memitem:ab8ffeca3b8431bbc7bab0280f843f79e">
<td colspan="2" class="memTemplParams"><span
id="ab8ffeca3b8431bbc7bab0280f843f79e"></span> template&lt;typename T ,
std::size_t N, typename Array = T (&amp;)[N], detail::enable_if_t&lt; <a
href="structdetail_1_1has__from__json.html"
class="el">detail::has_from_json</a>&lt; basic_json_t, Array &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:ab8ffeca3b8431bbc7bab0280f843f79e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">Array </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>get_to</strong> (T(&amp;v)[N]) const
noexcept(noexcept(JSONSerializer&lt; Array
&gt;::from_json(std::declval&lt; const basic_json_t &amp; &gt;(),
v)))</td>
</tr>
<tr class="even separator:ab8ffeca3b8431bbc7bab0280f843f79e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3697078e748abc4a99c23e36e321b439"
class="odd memitem:a3697078e748abc4a99c23e36e321b439">
<td colspan="2" class="memTemplParams">template&lt;typename
ReferenceType , typename std::enable_if&lt; std::is_reference&lt;
ReferenceType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt;<a
href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a> =
0&gt;</td>
</tr>
<tr class="even memitem:a3697078e748abc4a99c23e36e321b439">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ReferenceType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a3697078e748abc4a99c23e36e321b439" class="el">get_ref</a> ()</td>
</tr>
<tr class="odd memdesc:a3697078e748abc4a99c23e36e321b439">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a reference value (implicit)<br />
</td>
</tr>
<tr class="even separator:a3697078e748abc4a99c23e36e321b439">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a39c5dbafcc6eef79143c251096827549"
class="odd memitem:a39c5dbafcc6eef79143c251096827549">
<td colspan="2" class="memTemplParams">template&lt;typename
ReferenceType , typename std::enable_if&lt; std::is_reference&lt;
ReferenceType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_const&lt; typename
std::remove_reference&lt; ReferenceType &gt;<a
href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a> &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt;<a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a> =
0&gt;</td>
</tr>
<tr class="even memitem:a39c5dbafcc6eef79143c251096827549">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">ReferenceType </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a39c5dbafcc6eef79143c251096827549" class="el">get_ref</a> ()
const</td>
</tr>
<tr class="odd memdesc:a39c5dbafcc6eef79143c251096827549">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a reference value (implicit)<br />
</td>
</tr>
<tr class="even separator:a39c5dbafcc6eef79143c251096827549">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a747e3e19891143442991bbdb33edb917"
class="odd memitem:a747e3e19891143442991bbdb33edb917">
<td colspan="2" class="memTemplParams">template&lt;typename ValueType ,
typename std::enable_if&lt; <a href="structdetail_1_1conjunction.html"
class="el">detail::conjunction</a>&lt; <a
href="structdetail_1_1negation.html" class="el">detail::negation</a>&lt;
std::is_pointer&lt; ValueType &gt; &gt;, <a
href="structdetail_1_1negation.html" class="el">detail::negation</a>&lt;
std::is_same&lt; ValueType, std::nullptr_t &gt; &gt;, <a
href="structdetail_1_1negation.html" class="el">detail::negation</a>&lt;
std::is_same&lt; ValueType, <a href="classdetail_1_1json__ref.html"
class="el">detail::json_ref</a>&lt; <a href="classbasic__json.html"
class="el">basic_json</a> &gt; &gt; &gt;, <a
href="structdetail_1_1negation.html" class="el">detail::negation</a>&lt;
std::is_same&lt; ValueType, typename string_t::value_type &gt; &gt;, <a
href="structdetail_1_1negation.html" class="el">detail::negation</a>&lt;
<a href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; ValueType &gt; &gt;, <a
href="structdetail_1_1negation.html" class="el">detail::negation</a>&lt;
std::is_same&lt; ValueType, std::initializer_list&lt; typename
string_t::value_type &gt; &gt; &gt;, <a
href="structdetail_1_1is__detected__lazy.html"
class="el">detail::is_detected_lazy</a>&lt;
detail::get_template_function, const basic_json_t &amp;, ValueType &gt;
&gt;<a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int &gt;<a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef"
class="el">::type</a> = 0&gt;</td>
</tr>
<tr class="even memitem:a747e3e19891143442991bbdb33edb917">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">JSON_EXPLICIT </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a747e3e19891143442991bbdb33edb917" class="el">operator
ValueType</a> () const</td>
</tr>
<tr class="odd memdesc:a747e3e19891143442991bbdb33edb917">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a value (implicit)<br />
</td>
</tr>
<tr class="even separator:a747e3e19891143442991bbdb33edb917">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aaa2432a7c01833b02c6330709211ede7"
class="odd memitem:aaa2432a7c01833b02c6330709211ede7">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a4c1b5ea434b48cf31097617bb1c1ca1e" class="el">binary_t</a>
&amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aaa2432a7c01833b02c6330709211ede7" class="el">get_binary</a>
()</td>
</tr>
<tr class="even memdesc:aaa2432a7c01833b02c6330709211ede7">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a binary value<br />
</td>
</tr>
<tr class="odd separator:aaa2432a7c01833b02c6330709211ede7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a67d6da9fb8325a87d9513f960d88512a"
class="even memitem:a67d6da9fb8325a87d9513f960d88512a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">const <a href="#a4c1b5ea434b48cf31097617bb1c1ca1e"
class="el">binary_t</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a67d6da9fb8325a87d9513f960d88512a" class="el">get_binary</a> ()
const</td>
</tr>
<tr class="odd memdesc:a67d6da9fb8325a87d9513f960d88512a">
<td class="mdescLeft"> </td>
<td class="mdescRight">get a binary value<br />
</td>
</tr>
<tr class="even separator:a67d6da9fb8325a87d9513f960d88512a">
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
<td colspan="2"><h2 id="constructors-and-destructors"
class="groupheader">constructors and destructors</h2></td>
</tr>
<tr class="even">
<td colspan="2" class="ititle"><p>Constructors of class <a
href="classbasic__json.html" class="el">basic_json</a>, copy/move
constructor, copy assignment, static functions creating objects, and the
destructor.</p></td>
</tr>
<tr id="r_a743ac3bcbc4b0f7897244d4cea387eee"
class="odd memitem:a743ac3bcbc4b0f7897244d4cea387eee">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a743ac3bcbc4b0f7897244d4cea387eee" class="el">binary</a> (const
typename binary_t::container_type &amp;init)</td>
</tr>
<tr class="even memdesc:a743ac3bcbc4b0f7897244d4cea387eee">
<td class="mdescLeft"> </td>
<td class="mdescRight">explicitly create a binary array (without
subtype)<br />
</td>
</tr>
<tr class="odd separator:a743ac3bcbc4b0f7897244d4cea387eee">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a45e65e73d9ecf780537d632372fa2c51"
class="even memitem:a45e65e73d9ecf780537d632372fa2c51">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a45e65e73d9ecf780537d632372fa2c51" class="el">binary</a> (const
typename binary_t::container_type &amp;init, typename
binary_t::subtype_type subtype)</td>
</tr>
<tr class="odd memdesc:a45e65e73d9ecf780537d632372fa2c51">
<td class="mdescLeft"> </td>
<td class="mdescRight">explicitly create a binary array (with
subtype)<br />
</td>
</tr>
<tr class="even separator:a45e65e73d9ecf780537d632372fa2c51">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5af2196a9acde33f742ef054e7c2109c"
class="odd memitem:a5af2196a9acde33f742ef054e7c2109c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5af2196a9acde33f742ef054e7c2109c" class="el">binary</a>
(typename binary_t::container_type &amp;&amp;init)</td>
</tr>
<tr class="even memdesc:a5af2196a9acde33f742ef054e7c2109c">
<td class="mdescLeft"> </td>
<td class="mdescRight">explicitly create a binary array<br />
</td>
</tr>
<tr class="odd separator:a5af2196a9acde33f742ef054e7c2109c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac00a2a38929ce21eae65f9dd09b03ce3"
class="even memitem:ac00a2a38929ce21eae65f9dd09b03ce3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac00a2a38929ce21eae65f9dd09b03ce3" class="el">binary</a>
(typename binary_t::container_type &amp;&amp;init, typename
binary_t::subtype_type subtype)</td>
</tr>
<tr class="odd memdesc:ac00a2a38929ce21eae65f9dd09b03ce3">
<td class="mdescLeft"> </td>
<td class="mdescRight">explicitly create a binary array (with
subtype)<br />
</td>
</tr>
<tr class="even separator:ac00a2a38929ce21eae65f9dd09b03ce3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac736994a792cb8460a30a3f4dd86fd78"
class="odd memitem:ac736994a792cb8460a30a3f4dd86fd78">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac736994a792cb8460a30a3f4dd86fd78" class="el">array</a> (<a
href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a> init={})</td>
</tr>
<tr class="even memdesc:ac736994a792cb8460a30a3f4dd86fd78">
<td class="mdescLeft"> </td>
<td class="mdescRight">explicitly create an array from an initializer
list<br />
</td>
</tr>
<tr class="odd separator:ac736994a792cb8460a30a3f4dd86fd78">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a50a0e8dacc0f4aa12162da666595e6fd"
class="even memitem:a50a0e8dacc0f4aa12162da666595e6fd">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a50a0e8dacc0f4aa12162da666595e6fd" class="el">object</a> (<a
href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a> init={})</td>
</tr>
<tr class="odd memdesc:a50a0e8dacc0f4aa12162da666595e6fd">
<td class="mdescLeft"> </td>
<td class="mdescRight">explicitly create an object from an initializer
list<br />
</td>
</tr>
<tr class="even separator:a50a0e8dacc0f4aa12162da666595e6fd">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae2d5bc42270881ed3e219e8b1456fec5"
class="odd memitem:ae2d5bc42270881ed3e219e8b1456fec5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae2d5bc42270881ed3e219e8b1456fec5" class="el">basic_json</a>
(const <a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> v)</td>
</tr>
<tr class="even memdesc:ae2d5bc42270881ed3e219e8b1456fec5">
<td class="mdescLeft"> </td>
<td class="mdescRight">create an empty value with a given type<br />
</td>
</tr>
<tr class="odd separator:ae2d5bc42270881ed3e219e8b1456fec5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5b1fab9ded0a2a182837bd66c0e5189e"
class="even memitem:a5b1fab9ded0a2a182837bd66c0e5189e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5b1fab9ded0a2a182837bd66c0e5189e" class="el">basic_json</a>
(std::nullptr_t=nullptr) noexcept</td>
</tr>
<tr class="odd memdesc:a5b1fab9ded0a2a182837bd66c0e5189e">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a null object<br />
</td>
</tr>
<tr class="even separator:a5b1fab9ded0a2a182837bd66c0e5189e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0f24e66b152203259eaf05c33ebaeed4"
class="odd memitem:a0f24e66b152203259eaf05c33ebaeed4">
<td colspan="2" class="memTemplParams">template&lt;typename
CompatibleType , typename U = detail::uncvref_t&lt;CompatibleType&gt;,
detail::enable_if_t&lt; !<a href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; U &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&amp;&amp;<a href="structdetail_1_1is__compatible__type.html"
class="el">detail::is_compatible_type</a>&lt; basic_json_t, U &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a0f24e66b152203259eaf05c33ebaeed4">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a0f24e66b152203259eaf05c33ebaeed4" class="el">basic_json</a>
(CompatibleType &amp;&amp;val)
noexcept(noexcept(//NOLINT(bugprone-forwarding-<a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a>-overload, bugprone-<a
href="classdetail_1_1exception.html" class="el">exception</a>-escape)
JSONSerializer&lt; U &gt;::to_json(std::declval&lt; basic_json_t &amp;
&gt;(), std::forward&lt; CompatibleType &gt;(val))))</td>
</tr>
<tr class="odd memdesc:a0f24e66b152203259eaf05c33ebaeed4">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from compatible types<br />
</td>
</tr>
<tr class="even separator:a0f24e66b152203259eaf05c33ebaeed4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aeaf10402e79a1acce9a74f5a9654d403"
class="odd memitem:aeaf10402e79a1acce9a74f5a9654d403">
<td colspan="2" class="memTemplParams">template&lt;typename
BasicJsonType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&amp;&amp;!std::is_same&lt; <a href="classbasic__json.html"
class="el">basic_json</a>, BasicJsonType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:aeaf10402e79a1acce9a74f5a9654d403">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#aeaf10402e79a1acce9a74f5a9654d403" class="el">basic_json</a>
(const BasicJsonType &amp;val)</td>
</tr>
<tr class="odd memdesc:aeaf10402e79a1acce9a74f5a9654d403">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an existing one<br />
</td>
</tr>
<tr class="even separator:aeaf10402e79a1acce9a74f5a9654d403">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa911d47d3c99184a301bf4fd304199b2"
class="odd memitem:aa911d47d3c99184a301bf4fd304199b2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa911d47d3c99184a301bf4fd304199b2" class="el">basic_json</a> (<a
href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a> init, bool type_deduction=true, <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> manual_type=value_t::array)</td>
</tr>
<tr class="even memdesc:aa911d47d3c99184a301bf4fd304199b2">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a container (array or object) from an
initializer list<br />
</td>
</tr>
<tr class="odd separator:aa911d47d3c99184a301bf4fd304199b2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7b6f0605b09a002567fd18a289cef31b"
class="even memitem:a7b6f0605b09a002567fd18a289cef31b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a7b6f0605b09a002567fd18a289cef31b" class="el">basic_json</a> (<a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> cnt,
const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;val)</td>
</tr>
<tr class="odd memdesc:a7b6f0605b09a002567fd18a289cef31b">
<td class="mdescLeft"> </td>
<td class="mdescRight">construct an array with count copies of given
value<br />
</td>
</tr>
<tr class="even separator:a7b6f0605b09a002567fd18a289cef31b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af97b4fcd01509076c8a7b32ec1a10aec"
class="odd memitem:af97b4fcd01509076c8a7b32ec1a10aec">
<td colspan="2" class="memTemplParams">template&lt;class InputIT ,
typename std::enable_if&lt; std::is_same&lt; InputIT, typename
basic_json_t::iterator &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>||std::is_same&lt; InputIT, typename
basic_json_t::const_iterator &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt;<a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a> =
0&gt;</td>
</tr>
<tr class="even memitem:af97b4fcd01509076c8a7b32ec1a10aec">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#af97b4fcd01509076c8a7b32ec1a10aec" class="el">basic_json</a>
(InputIT first, InputIT last)</td>
</tr>
<tr class="odd memdesc:af97b4fcd01509076c8a7b32ec1a10aec">
<td class="mdescLeft"> </td>
<td class="mdescRight">construct a JSON container given an iterator
range<br />
</td>
</tr>
<tr class="even separator:af97b4fcd01509076c8a7b32ec1a10aec">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab6712795591ec744415b50bc01d768ed"
class="odd memitem:ab6712795591ec744415b50bc01d768ed">
<td colspan="2" class="memTemplParams"><span
id="ab6712795591ec744415b50bc01d768ed"></span> template&lt;typename
JsonRef , detail::enable_if_t&lt; <a
href="structdetail_1_1conjunction.html"
class="el">detail::conjunction</a>&lt; <a
href="structdetail_1_1is__json__ref.html"
class="el">detail::is_json_ref</a>&lt; JsonRef &gt;, std::is_same&lt;
typename JsonRef::value_type, <a href="classbasic__json.html"
class="el">basic_json</a> &gt; &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:ab6712795591ec744415b50bc01d768ed">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>basic_json</strong> (const JsonRef
&amp;ref)</td>
</tr>
<tr class="odd separator:ab6712795591ec744415b50bc01d768ed">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af15244e1249b6e7282127d460b5b2e3e"
class="even memitem:af15244e1249b6e7282127d460b5b2e3e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af15244e1249b6e7282127d460b5b2e3e" class="el">basic_json</a>
(const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;other)</td>
</tr>
<tr class="odd memdesc:af15244e1249b6e7282127d460b5b2e3e">
<td class="mdescLeft"> </td>
<td class="mdescRight">copy constructor<br />
</td>
</tr>
<tr class="even separator:af15244e1249b6e7282127d460b5b2e3e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae18629aae4bd76e6f7920cf4e7b4dd60"
class="odd memitem:ae18629aae4bd76e6f7920cf4e7b4dd60">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae18629aae4bd76e6f7920cf4e7b4dd60" class="el">basic_json</a> (<a
href="classbasic__json.html" class="el">basic_json</a> &amp;&amp;other)
noexcept</td>
</tr>
<tr class="even memdesc:ae18629aae4bd76e6f7920cf4e7b4dd60">
<td class="mdescLeft"> </td>
<td class="mdescRight">move constructor<br />
</td>
</tr>
<tr class="odd separator:ae18629aae4bd76e6f7920cf4e7b4dd60">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab8154023fc24515222c9cf61d677871e"
class="even memitem:ab8154023fc24515222c9cf61d677871e">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classbasic__json.html" class="el">basic_json</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab8154023fc24515222c9cf61d677871e" class="el">operator=</a> (<a
href="classbasic__json.html" class="el">basic_json</a> other)
noexcept(std::is_nothrow_move_constructible&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_assignable&lt; <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_constructible&lt;
json_value &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_assignable&lt;
json_value &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a> &amp;&amp;std::is_nothrow_move_assignable&lt;
json_base_class_t &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>)</td>
</tr>
<tr class="odd memdesc:ab8154023fc24515222c9cf61d677871e">
<td class="mdescLeft"> </td>
<td class="mdescRight">copy assignment<br />
</td>
</tr>
<tr class="even separator:ab8154023fc24515222c9cf61d677871e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9f3bcb6dc54f447ad95085715104494e"
class="odd memitem:a9f3bcb6dc54f447ad95085715104494e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a9f3bcb6dc54f447ad95085715104494e" class="el">~basic_json</a> ()
noexcept</td>
</tr>
<tr class="even memdesc:a9f3bcb6dc54f447ad95085715104494e">
<td class="mdescLeft"> </td>
<td class="mdescRight">destructor<br />
</td>
</tr>
<tr class="odd separator:a9f3bcb6dc54f447ad95085715104494e">
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
<td colspan="2"><h2 id="iterators"
class="groupheader">iterators</h2></td>
</tr>
<tr id="r_ab8b4e0acdea49e5f0a77abdf1ce465d2"
class="even memitem:ab8b4e0acdea49e5f0a77abdf1ce465d2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static iteration_proxy&lt; <a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a>
&gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab8b4e0acdea49e5f0a77abdf1ce465d2"
class="el">iterator_wrapper</a> (<a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> ref)
noexcept</td>
</tr>
<tr class="odd memdesc:ab8b4e0acdea49e5f0a77abdf1ce465d2">
<td class="mdescLeft"> </td>
<td class="mdescRight">wrapper to access iterator member functions in
range-based for<br />
</td>
</tr>
<tr class="even separator:ab8b4e0acdea49e5f0a77abdf1ce465d2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7c0314258e5347eade0c6851017bf5a5"
class="odd memitem:a7c0314258e5347eade0c6851017bf5a5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static iteration_proxy&lt; <a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
&gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a7c0314258e5347eade0c6851017bf5a5"
class="el">iterator_wrapper</a> (<a
href="#a31370bb451b78198d42c86dd31955deb" class="el">const_reference</a>
ref) noexcept</td>
</tr>
<tr class="even memdesc:a7c0314258e5347eade0c6851017bf5a5">
<td class="mdescLeft"> </td>
<td class="mdescRight">wrapper to access iterator member functions in
range-based for<br />
</td>
</tr>
<tr class="odd separator:a7c0314258e5347eade0c6851017bf5a5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5251a08382864af52c854fca1bdba61c"
class="even memitem:a5251a08382864af52c854fca1bdba61c">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5251a08382864af52c854fca1bdba61c" class="el">begin</a> ()
noexcept</td>
</tr>
<tr class="odd memdesc:a5251a08382864af52c854fca1bdba61c">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to the first element<br />
</td>
</tr>
<tr class="even separator:a5251a08382864af52c854fca1bdba61c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aac84462424ea7a14f9abb4ddb8e6dd7f"
class="odd memitem:aac84462424ea7a14f9abb4ddb8e6dd7f">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aac84462424ea7a14f9abb4ddb8e6dd7f" class="el">begin</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:aac84462424ea7a14f9abb4ddb8e6dd7f">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to the first element<br />
</td>
</tr>
<tr class="odd separator:aac84462424ea7a14f9abb4ddb8e6dd7f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9ab2ece6530b3b2be5b876f80c68dc78"
class="even memitem:a9ab2ece6530b3b2be5b876f80c68dc78">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a9ab2ece6530b3b2be5b876f80c68dc78" class="el">cbegin</a> () const
noexcept</td>
</tr>
<tr class="odd memdesc:a9ab2ece6530b3b2be5b876f80c68dc78">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns a const iterator to the first
element<br />
</td>
</tr>
<tr class="even separator:a9ab2ece6530b3b2be5b876f80c68dc78">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4dbc83213b31a171aa8ba65ff00fa954"
class="odd memitem:a4dbc83213b31a171aa8ba65ff00fa954">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4dbc83213b31a171aa8ba65ff00fa954" class="el">end</a> ()
noexcept</td>
</tr>
<tr class="even memdesc:a4dbc83213b31a171aa8ba65ff00fa954">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to one past the last
element<br />
</td>
</tr>
<tr class="odd separator:a4dbc83213b31a171aa8ba65ff00fa954">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0c10232619bee4e73749dae621c01376"
class="even memitem:a0c10232619bee4e73749dae621c01376">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a0c10232619bee4e73749dae621c01376" class="el">end</a> () const
noexcept</td>
</tr>
<tr class="odd memdesc:a0c10232619bee4e73749dae621c01376">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to one past the last
element<br />
</td>
</tr>
<tr class="even separator:a0c10232619bee4e73749dae621c01376">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a57c63700f006c54624eb2433ec6526b0"
class="odd memitem:a57c63700f006c54624eb2433ec6526b0">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a57c63700f006c54624eb2433ec6526b0" class="el">cend</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:a57c63700f006c54624eb2433ec6526b0">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to one past the last
element<br />
</td>
</tr>
<tr class="odd separator:a57c63700f006c54624eb2433ec6526b0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a11da8db436685032e97563cbb7490ff5"
class="even memitem:a11da8db436685032e97563cbb7490ff5">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#aedc059cdae078322bb0d434b2127d1cf"
class="el">reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a11da8db436685032e97563cbb7490ff5" class="el">rbegin</a> ()
noexcept</td>
</tr>
<tr class="odd memdesc:a11da8db436685032e97563cbb7490ff5">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to the
reverse-beginning<br />
</td>
</tr>
<tr class="even separator:a11da8db436685032e97563cbb7490ff5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4ef4aee2259af5183267f6e8f774d0eb"
class="odd memitem:a4ef4aee2259af5183267f6e8f774d0eb">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4ef4aee2259af5183267f6e8f774d0eb" class="el">rbegin</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:a4ef4aee2259af5183267f6e8f774d0eb">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to the
reverse-beginning<br />
</td>
</tr>
<tr class="odd separator:a4ef4aee2259af5183267f6e8f774d0eb">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8d8855a8c04ee7986ae8bab283c4f0de"
class="even memitem:a8d8855a8c04ee7986ae8bab283c4f0de">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#aedc059cdae078322bb0d434b2127d1cf"
class="el">reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a8d8855a8c04ee7986ae8bab283c4f0de" class="el">rend</a> ()
noexcept</td>
</tr>
<tr class="odd memdesc:a8d8855a8c04ee7986ae8bab283c4f0de">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to the reverse-end<br />
</td>
</tr>
<tr class="even separator:a8d8855a8c04ee7986ae8bab283c4f0de">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae81c3b38089a63d988a1efefe3ebc4bf"
class="odd memitem:ae81c3b38089a63d988a1efefe3ebc4bf">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae81c3b38089a63d988a1efefe3ebc4bf" class="el">rend</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:ae81c3b38089a63d988a1efefe3ebc4bf">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns an iterator to the reverse-end<br />
</td>
</tr>
<tr class="odd separator:ae81c3b38089a63d988a1efefe3ebc4bf">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acdde2a6628e43b3e3f7f27c6af6998f8"
class="even memitem:acdde2a6628e43b3e3f7f27c6af6998f8">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#acdde2a6628e43b3e3f7f27c6af6998f8" class="el">crbegin</a> ()
const noexcept</td>
</tr>
<tr class="odd memdesc:acdde2a6628e43b3e3f7f27c6af6998f8">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns a const reverse iterator to the last
element<br />
</td>
</tr>
<tr class="even separator:acdde2a6628e43b3e3f7f27c6af6998f8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa52cc6cc0de1e81d9cc21f9c48feb588"
class="odd memitem:aa52cc6cc0de1e81d9cc21f9c48feb588">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa52cc6cc0de1e81d9cc21f9c48feb588" class="el">crend</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:aa52cc6cc0de1e81d9cc21f9c48feb588">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns a const reverse iterator to one before
the first<br />
</td>
</tr>
<tr class="odd separator:aa52cc6cc0de1e81d9cc21f9c48feb588">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac12884e86980aa85b6a9ffbb8b84de6a"
class="even memitem:ac12884e86980aa85b6a9ffbb8b84de6a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">iteration_proxy&lt; <a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a>
&gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac12884e86980aa85b6a9ffbb8b84de6a" class="el">items</a> ()
noexcept</td>
</tr>
<tr class="odd memdesc:ac12884e86980aa85b6a9ffbb8b84de6a">
<td class="mdescLeft"> </td>
<td class="mdescRight">helper to access iterator member functions in
range-based for<br />
</td>
</tr>
<tr class="even separator:ac12884e86980aa85b6a9ffbb8b84de6a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3f2fdaf6048ea339c901b5208b93a64d"
class="odd memitem:a3f2fdaf6048ea339c901b5208b93a64d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">iteration_proxy&lt; <a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
&gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3f2fdaf6048ea339c901b5208b93a64d" class="el">items</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:a3f2fdaf6048ea339c901b5208b93a64d">
<td class="mdescLeft"> </td>
<td class="mdescRight">helper to access iterator member functions in
range-based for<br />
</td>
</tr>
<tr class="odd separator:a3f2fdaf6048ea339c901b5208b93a64d">
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
<td colspan="2"><h2 id="binary-serializationdeserialization-support"
class="groupheader">binary serialization/deserialization
support</h2></td>
</tr>
<tr id="r_a7c47280dbbb39288384058b771f8eec6"
class="even memitem:a7c47280dbbb39288384058b771f8eec6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static std::vector&lt; std::uint8_t &gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a7c47280dbbb39288384058b771f8eec6" class="el">to_cbor</a> (const
<a href="classbasic__json.html" class="el">basic_json</a> &amp;j)</td>
</tr>
<tr class="odd memdesc:a7c47280dbbb39288384058b771f8eec6">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a CBOR serialization of a given JSON
value<br />
</td>
</tr>
<tr class="even separator:a7c47280dbbb39288384058b771f8eec6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a706ccab0e47bd75cd36911db84451cd1"
class="odd memitem:a706ccab0e47bd75cd36911db84451cd1">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a706ccab0e47bd75cd36911db84451cd1" class="el">to_cbor</a> (const
<a href="classbasic__json.html" class="el">basic_json</a> &amp;j, <a
href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt; o)</td>
</tr>
<tr class="even memdesc:a706ccab0e47bd75cd36911db84451cd1">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a CBOR serialization of a given JSON
value<br />
</td>
</tr>
<tr class="odd separator:a706ccab0e47bd75cd36911db84451cd1">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af31f5ee23264fb21bd31e16bc27adab2"
class="even memitem:af31f5ee23264fb21bd31e16bc27adab2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af31f5ee23264fb21bd31e16bc27adab2" class="el">to_cbor</a> (const
<a href="classbasic__json.html" class="el">basic_json</a> &amp;j, <a
href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt; o)</td>
</tr>
<tr class="odd memdesc:af31f5ee23264fb21bd31e16bc27adab2">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a CBOR serialization of a given JSON
value<br />
</td>
</tr>
<tr class="even separator:af31f5ee23264fb21bd31e16bc27adab2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aea0ea0404f7ea72f66b0d5d0032b1367"
class="odd memitem:aea0ea0404f7ea72f66b0d5d0032b1367">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static std::vector&lt; std::uint8_t &gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aea0ea0404f7ea72f66b0d5d0032b1367" class="el">to_msgpack</a>
(const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;j)</td>
</tr>
<tr class="even memdesc:aea0ea0404f7ea72f66b0d5d0032b1367">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a MessagePack serialization of a given
JSON value<br />
</td>
</tr>
<tr class="odd separator:aea0ea0404f7ea72f66b0d5d0032b1367">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af46fdac62559d4c38e623d99ad7064e9"
class="even memitem:af46fdac62559d4c38e623d99ad7064e9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af46fdac62559d4c38e623d99ad7064e9" class="el">to_msgpack</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
<a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt; o)</td>
</tr>
<tr class="odd memdesc:af46fdac62559d4c38e623d99ad7064e9">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a MessagePack serialization of a given
JSON value<br />
</td>
</tr>
<tr class="even separator:af46fdac62559d4c38e623d99ad7064e9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a51da13ff4e850d4ad1cf23ce4f3b9e4a"
class="odd memitem:a51da13ff4e850d4ad1cf23ce4f3b9e4a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a51da13ff4e850d4ad1cf23ce4f3b9e4a" class="el">to_msgpack</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
<a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt; o)</td>
</tr>
<tr class="even memdesc:a51da13ff4e850d4ad1cf23ce4f3b9e4a">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a MessagePack serialization of a given
JSON value<br />
</td>
</tr>
<tr class="odd separator:a51da13ff4e850d4ad1cf23ce4f3b9e4a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a906e81d488ebcac169960a1d48f6b065"
class="even memitem:a906e81d488ebcac169960a1d48f6b065">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static std::vector&lt; std::uint8_t &gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a906e81d488ebcac169960a1d48f6b065" class="el">to_ubjson</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
const bool use_size=false, const bool use_type=false)</td>
</tr>
<tr class="odd memdesc:a906e81d488ebcac169960a1d48f6b065">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a UBJSON serialization of a given JSON
value<br />
</td>
</tr>
<tr class="even separator:a906e81d488ebcac169960a1d48f6b065">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ada3d71f1dcfea24465d364b815d11445"
class="odd memitem:ada3d71f1dcfea24465d364b815d11445">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ada3d71f1dcfea24465d364b815d11445" class="el">to_ubjson</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
<a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt; o, const
bool use_size=false, const bool use_type=false)</td>
</tr>
<tr class="even memdesc:ada3d71f1dcfea24465d364b815d11445">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a UBJSON serialization of a given JSON
value<br />
</td>
</tr>
<tr class="odd separator:ada3d71f1dcfea24465d364b815d11445">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab8b6c6cc3ba1b49af628fe0ec8c73b77"
class="even memitem:ab8b6c6cc3ba1b49af628fe0ec8c73b77">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab8b6c6cc3ba1b49af628fe0ec8c73b77" class="el">to_ubjson</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
<a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt; o, const bool
use_size=false, const bool use_type=false)</td>
</tr>
<tr class="odd memdesc:ab8b6c6cc3ba1b49af628fe0ec8c73b77">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a UBJSON serialization of a given JSON
value<br />
</td>
</tr>
<tr class="even separator:ab8b6c6cc3ba1b49af628fe0ec8c73b77">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0912e7738f47e604ac96fe8cdde1a96e"
class="odd memitem:a0912e7738f47e604ac96fe8cdde1a96e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static std::vector&lt; std::uint8_t &gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a0912e7738f47e604ac96fe8cdde1a96e" class="el">to_bjdata</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
const bool use_size=false, const bool use_type=false)</td>
</tr>
<tr class="even memdesc:a0912e7738f47e604ac96fe8cdde1a96e">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a BJData serialization of a given JSON
value<br />
</td>
</tr>
<tr class="odd separator:a0912e7738f47e604ac96fe8cdde1a96e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2736658c256401394059599f97139ee9"
class="even memitem:a2736658c256401394059599f97139ee9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a2736658c256401394059599f97139ee9" class="el">to_bjdata</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
<a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt; o, const
bool use_size=false, const bool use_type=false)</td>
</tr>
<tr class="odd memdesc:a2736658c256401394059599f97139ee9">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a BJData serialization of a given JSON
value<br />
</td>
</tr>
<tr class="even separator:a2736658c256401394059599f97139ee9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1fa9828fcbe4e33c9a036834564f7dbd"
class="odd memitem:a1fa9828fcbe4e33c9a036834564f7dbd">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a1fa9828fcbe4e33c9a036834564f7dbd" class="el">to_bjdata</a>
(const <a href="classbasic__json.html" class="el">basic_json</a> &amp;j,
<a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt; o, const bool
use_size=false, const bool use_type=false)</td>
</tr>
<tr class="even memdesc:a1fa9828fcbe4e33c9a036834564f7dbd">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a BJData serialization of a given JSON
value<br />
</td>
</tr>
<tr class="odd separator:a1fa9828fcbe4e33c9a036834564f7dbd">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4ea6478022ab79b47216fda4b53ae1d4"
class="even memitem:a4ea6478022ab79b47216fda4b53ae1d4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static std::vector&lt; std::uint8_t &gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4ea6478022ab79b47216fda4b53ae1d4" class="el">to_bson</a> (const
<a href="classbasic__json.html" class="el">basic_json</a> &amp;j)</td>
</tr>
<tr class="odd memdesc:a4ea6478022ab79b47216fda4b53ae1d4">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a BSON serialization of a given JSON
value<br />
</td>
</tr>
<tr class="even separator:a4ea6478022ab79b47216fda4b53ae1d4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afd718b745034da1f4eea4c69f45cebda"
class="odd memitem:afd718b745034da1f4eea4c69f45cebda">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#afd718b745034da1f4eea4c69f45cebda" class="el">to_bson</a> (const
<a href="classbasic__json.html" class="el">basic_json</a> &amp;j, <a
href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt; o)</td>
</tr>
<tr class="even memdesc:afd718b745034da1f4eea4c69f45cebda">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a BSON serialization of a given JSON
value<br />
</td>
</tr>
<tr class="odd separator:afd718b745034da1f4eea4c69f45cebda">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a71794547dde3dd67e444aa45131ca861"
class="even memitem:a71794547dde3dd67e444aa45131ca861">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a71794547dde3dd67e444aa45131ca861" class="el">to_bson</a> (const
<a href="classbasic__json.html" class="el">basic_json</a> &amp;j, <a
href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt; o)</td>
</tr>
<tr class="odd memdesc:a71794547dde3dd67e444aa45131ca861">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a BSON serialization of a given JSON
value<br />
</td>
</tr>
<tr class="even separator:a71794547dde3dd67e444aa45131ca861">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5bc3c67eaf6e9b22c8b446f9695249e9"
class="odd memitem:a5bc3c67eaf6e9b22c8b446f9695249e9">
<td colspan="2" class="memTemplParams">template&lt;typename InputType
&gt;</td>
</tr>
<tr class="even memitem:a5bc3c67eaf6e9b22c8b446f9695249e9">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a5bc3c67eaf6e9b22c8b446f9695249e9" class="el">from_cbor</a>
(InputType &amp;&amp;i, const bool strict=true, const bool
allow_exceptions=true, const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a>
tag_handler=cbor_tag_handler_t::error)</td>
</tr>
<tr class="odd memdesc:a5bc3c67eaf6e9b22c8b446f9695249e9">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in CBOR
format<br />
</td>
</tr>
<tr class="even separator:a5bc3c67eaf6e9b22c8b446f9695249e9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a08ab03513b96f5a864bf623aeb70f122"
class="odd memitem:a08ab03513b96f5a864bf623aeb70f122">
<td colspan="2" class="memTemplParams">template&lt;typename IteratorType
&gt;</td>
</tr>
<tr class="even memitem:a08ab03513b96f5a864bf623aeb70f122">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a08ab03513b96f5a864bf623aeb70f122" class="el">from_cbor</a>
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true, const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a>
tag_handler=cbor_tag_handler_t::error)</td>
</tr>
<tr class="odd memdesc:a08ab03513b96f5a864bf623aeb70f122">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in CBOR
format<br />
</td>
</tr>
<tr class="even separator:a08ab03513b96f5a864bf623aeb70f122">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a89a8b31922ebb7a637e723ac7873fa4a"
class="odd memitem:a89a8b31922ebb7a637e723ac7873fa4a">
<td colspan="2" class="memTemplParams"><span
id="a89a8b31922ebb7a637e723ac7873fa4a"></span> template&lt;typename T
&gt;</td>
</tr>
<tr class="even memitem:a89a8b31922ebb7a637e723ac7873fa4a">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>from_cbor</strong> (const T *ptr,
std::size_t len, const bool strict=true, const bool
allow_exceptions=true, const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a>
tag_handler=cbor_tag_handler_t::error)</td>
</tr>
<tr class="odd separator:a89a8b31922ebb7a637e723ac7873fa4a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8680ff0784c185b6898839a98de88486"
class="even memitem:a8680ff0784c185b6898839a98de88486">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8680ff0784c185b6898839a98de88486"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT <a href="classbasic__json.html"
class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><strong>from_cbor</strong>
(<a href="classdetail_1_1span__input__adapter.html"
class="el">detail::span_input_adapter</a> &amp;&amp;i, const bool
strict=true, const bool allow_exceptions=true, const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a>
tag_handler=cbor_tag_handler_t::error)</td>
</tr>
<tr class="odd separator:a8680ff0784c185b6898839a98de88486">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab0c025488572f913ca5529a2ef62d066"
class="even memitem:ab0c025488572f913ca5529a2ef62d066">
<td colspan="2" class="memTemplParams">template&lt;typename InputType
&gt;</td>
</tr>
<tr class="odd memitem:ab0c025488572f913ca5529a2ef62d066">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#ab0c025488572f913ca5529a2ef62d066" class="el">from_msgpack</a>
(InputType &amp;&amp;i, const bool strict=true, const bool
allow_exceptions=true)</td>
</tr>
<tr class="even memdesc:ab0c025488572f913ca5529a2ef62d066">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in MessagePack
format<br />
</td>
</tr>
<tr class="odd separator:ab0c025488572f913ca5529a2ef62d066">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af7d84b161b2d93f9b2b3ac8d68afeb96"
class="even memitem:af7d84b161b2d93f9b2b3ac8d68afeb96">
<td colspan="2" class="memTemplParams">template&lt;typename IteratorType
&gt;</td>
</tr>
<tr class="odd memitem:af7d84b161b2d93f9b2b3ac8d68afeb96">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#af7d84b161b2d93f9b2b3ac8d68afeb96" class="el">from_msgpack</a>
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)</td>
</tr>
<tr class="even memdesc:af7d84b161b2d93f9b2b3ac8d68afeb96">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in MessagePack
format<br />
</td>
</tr>
<tr class="odd separator:af7d84b161b2d93f9b2b3ac8d68afeb96">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2a721efc291300b45ac410ab75b8478b"
class="even memitem:a2a721efc291300b45ac410ab75b8478b">
<td colspan="2" class="memTemplParams"><span
id="a2a721efc291300b45ac410ab75b8478b"></span> template&lt;typename T
&gt;</td>
</tr>
<tr class="odd memitem:a2a721efc291300b45ac410ab75b8478b">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>from_msgpack</strong> (const T *ptr,
std::size_t len, const bool strict=true, const bool
allow_exceptions=true)</td>
</tr>
<tr class="even separator:a2a721efc291300b45ac410ab75b8478b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae8c5fdb783d4f97a9062ab41809ec0c6"
class="odd memitem:ae8c5fdb783d4f97a9062ab41809ec0c6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae8c5fdb783d4f97a9062ab41809ec0c6"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT <a href="classbasic__json.html"
class="el">basic_json</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>from_msgpack</strong> (<a
href="classdetail_1_1span__input__adapter.html"
class="el">detail::span_input_adapter</a> &amp;&amp;i, const bool
strict=true, const bool allow_exceptions=true)</td>
</tr>
<tr class="even separator:ae8c5fdb783d4f97a9062ab41809ec0c6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4588941095d03624ada4f0023d93944a"
class="odd memitem:a4588941095d03624ada4f0023d93944a">
<td colspan="2" class="memTemplParams">template&lt;typename InputType
&gt;</td>
</tr>
<tr class="even memitem:a4588941095d03624ada4f0023d93944a">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a4588941095d03624ada4f0023d93944a" class="el">from_ubjson</a>
(InputType &amp;&amp;i, const bool strict=true, const bool
allow_exceptions=true)</td>
</tr>
<tr class="odd memdesc:a4588941095d03624ada4f0023d93944a">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in UBJSON
format<br />
</td>
</tr>
<tr class="even separator:a4588941095d03624ada4f0023d93944a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5dd7470a3be83b27cf162c0261e6b63d"
class="odd memitem:a5dd7470a3be83b27cf162c0261e6b63d">
<td colspan="2" class="memTemplParams">template&lt;typename IteratorType
&gt;</td>
</tr>
<tr class="even memitem:a5dd7470a3be83b27cf162c0261e6b63d">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a5dd7470a3be83b27cf162c0261e6b63d" class="el">from_ubjson</a>
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)</td>
</tr>
<tr class="odd memdesc:a5dd7470a3be83b27cf162c0261e6b63d">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in UBJSON
format<br />
</td>
</tr>
<tr class="even separator:a5dd7470a3be83b27cf162c0261e6b63d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa375318d8ef6052fd4d606d596d9c424"
class="odd memitem:aa375318d8ef6052fd4d606d596d9c424">
<td colspan="2" class="memTemplParams"><span
id="aa375318d8ef6052fd4d606d596d9c424"></span> template&lt;typename T
&gt;</td>
</tr>
<tr class="even memitem:aa375318d8ef6052fd4d606d596d9c424">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>from_ubjson</strong> (const T *ptr,
std::size_t len, const bool strict=true, const bool
allow_exceptions=true)</td>
</tr>
<tr class="odd separator:aa375318d8ef6052fd4d606d596d9c424">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad915ce03b8ec612764bb67d09e658a0d"
class="even memitem:ad915ce03b8ec612764bb67d09e658a0d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad915ce03b8ec612764bb67d09e658a0d"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT <a href="classbasic__json.html"
class="el">basic_json</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>from_ubjson</strong> (<a
href="classdetail_1_1span__input__adapter.html"
class="el">detail::span_input_adapter</a> &amp;&amp;i, const bool
strict=true, const bool allow_exceptions=true)</td>
</tr>
<tr class="odd separator:ad915ce03b8ec612764bb67d09e658a0d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a59327f708c0555e2928487bcddf71293"
class="even memitem:a59327f708c0555e2928487bcddf71293">
<td colspan="2" class="memTemplParams">template&lt;typename InputType
&gt;</td>
</tr>
<tr class="odd memitem:a59327f708c0555e2928487bcddf71293">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a59327f708c0555e2928487bcddf71293" class="el">from_bjdata</a>
(InputType &amp;&amp;i, const bool strict=true, const bool
allow_exceptions=true)</td>
</tr>
<tr class="even memdesc:a59327f708c0555e2928487bcddf71293">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in BJData
format<br />
</td>
</tr>
<tr class="odd separator:a59327f708c0555e2928487bcddf71293">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_accf7ae6f9b2fee171484c5ef54f08d1e"
class="even memitem:accf7ae6f9b2fee171484c5ef54f08d1e">
<td colspan="2" class="memTemplParams">template&lt;typename IteratorType
&gt;</td>
</tr>
<tr class="odd memitem:accf7ae6f9b2fee171484c5ef54f08d1e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#accf7ae6f9b2fee171484c5ef54f08d1e" class="el">from_bjdata</a>
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)</td>
</tr>
<tr class="even memdesc:accf7ae6f9b2fee171484c5ef54f08d1e">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in BJData
format<br />
</td>
</tr>
<tr class="odd separator:accf7ae6f9b2fee171484c5ef54f08d1e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4b0dfca88b11ea59a2568707767622d8"
class="even memitem:a4b0dfca88b11ea59a2568707767622d8">
<td colspan="2" class="memTemplParams">template&lt;typename InputType
&gt;</td>
</tr>
<tr class="odd memitem:a4b0dfca88b11ea59a2568707767622d8">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a4b0dfca88b11ea59a2568707767622d8" class="el">from_bson</a>
(InputType &amp;&amp;i, const bool strict=true, const bool
allow_exceptions=true)</td>
</tr>
<tr class="even memdesc:a4b0dfca88b11ea59a2568707767622d8">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in BSON
format<br />
</td>
</tr>
<tr class="odd separator:a4b0dfca88b11ea59a2568707767622d8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2513159e8df9a81bf03ed34e1147b42e"
class="even memitem:a2513159e8df9a81bf03ed34e1147b42e">
<td colspan="2" class="memTemplParams">template&lt;typename IteratorType
&gt;</td>
</tr>
<tr class="odd memitem:a2513159e8df9a81bf03ed34e1147b42e">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a2513159e8df9a81bf03ed34e1147b42e" class="el">from_bson</a>
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)</td>
</tr>
<tr class="even memdesc:a2513159e8df9a81bf03ed34e1147b42e">
<td class="mdescLeft"> </td>
<td class="mdescRight">create a JSON value from an input in BSON
format<br />
</td>
</tr>
<tr class="odd separator:a2513159e8df9a81bf03ed34e1147b42e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7e33baaab9ab497f0fe6b797134c9524"
class="even memitem:a7e33baaab9ab497f0fe6b797134c9524">
<td colspan="2" class="memTemplParams"><span
id="a7e33baaab9ab497f0fe6b797134c9524"></span> template&lt;typename T
&gt;</td>
</tr>
<tr class="odd memitem:a7e33baaab9ab497f0fe6b797134c9524">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>from_bson</strong> (const T *ptr,
std::size_t len, const bool strict=true, const bool
allow_exceptions=true)</td>
</tr>
<tr class="even separator:a7e33baaab9ab497f0fe6b797134c9524">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aed9761fba9571455a96309f7ba647757"
class="odd memitem:aed9761fba9571455a96309f7ba647757">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aed9761fba9571455a96309f7ba647757"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT <a href="classbasic__json.html"
class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><strong>from_bson</strong>
(<a href="classdetail_1_1span__input__adapter.html"
class="el">detail::span_input_adapter</a> &amp;&amp;i, const bool
strict=true, const bool allow_exceptions=true)</td>
</tr>
<tr class="even separator:aed9761fba9571455a96309f7ba647757">
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
<td colspan="2"><h2 id="json-patch-functions" class="groupheader">JSON
Patch functions</h2></td>
</tr>
<tr id="r_a699ef418df577e75f28dfce6b04d6c2f"
class="even memitem:a699ef418df577e75f28dfce6b04d6c2f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a699ef418df577e75f28dfce6b04d6c2f" class="el">diff</a> (const <a
href="classbasic__json.html" class="el">basic_json</a> &amp;source,
const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;target, const std::string &amp;path="")</td>
</tr>
<tr class="odd memdesc:a699ef418df577e75f28dfce6b04d6c2f">
<td class="mdescLeft"> </td>
<td class="mdescRight">creates a diff as a JSON patch<br />
</td>
</tr>
<tr class="even separator:a699ef418df577e75f28dfce6b04d6c2f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a693812b31e106dec9166e93d8f6dd7d7"
class="odd memitem:a693812b31e106dec9166e93d8f6dd7d7">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a693812b31e106dec9166e93d8f6dd7d7" class="el">patch_inplace</a>
(const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;json_patch)</td>
</tr>
<tr class="even memdesc:a693812b31e106dec9166e93d8f6dd7d7">
<td class="mdescLeft"> </td>
<td class="mdescRight">applies a JSON patch in-place without copying the
object<br />
</td>
</tr>
<tr class="odd separator:a693812b31e106dec9166e93d8f6dd7d7">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a145a004c0a2fa5be84b260ecc98ab5d9"
class="even memitem:a145a004c0a2fa5be84b260ecc98ab5d9">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a145a004c0a2fa5be84b260ecc98ab5d9" class="el">patch</a> (const <a
href="classbasic__json.html" class="el">basic_json</a> &amp;json_patch)
const</td>
</tr>
<tr class="odd memdesc:a145a004c0a2fa5be84b260ecc98ab5d9">
<td class="mdescLeft"> </td>
<td class="mdescRight">applies a JSON patch to a copy of the current
object<br />
</td>
</tr>
<tr class="even separator:a145a004c0a2fa5be84b260ecc98ab5d9">
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
<td colspan="2"><h2 id="object-inspection" class="groupheader">object
inspection</h2></td>
</tr>
<tr class="even">
<td colspan="2" class="ititle"><p>Functions to inspect the type of a
JSON value.</p></td>
</tr>
<tr id="r_a85df48caed9e341bb14d98ab88891d1e"
class="odd memitem:a85df48caed9e341bb14d98ab88891d1e">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ac8c9cde32146e6c343e1960aefc11fba" class="el">string_t</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a85df48caed9e341bb14d98ab88891d1e" class="el">dump</a> (const int
indent=-1, const char indent_char=' ', const bool ensure_ascii=false,
const <a href="namespacedetail.html#abe7cfa1fd8fa706ff4392bff9d1a8298"
class="el">error_handler_t</a> error_handler=error_handler_t::strict)
const</td>
</tr>
<tr class="even memdesc:a85df48caed9e341bb14d98ab88891d1e">
<td class="mdescLeft"> </td>
<td class="mdescRight">serialization<br />
</td>
</tr>
<tr class="odd separator:a85df48caed9e341bb14d98ab88891d1e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac5e52dbb3cb4e9fcabd1b88c37985aef"
class="even memitem:ac5e52dbb3cb4e9fcabd1b88c37985aef">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">type</a> () const
noexcept</td>
</tr>
<tr class="odd memdesc:ac5e52dbb3cb4e9fcabd1b88c37985aef">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the type of the JSON value
(explicit)<br />
</td>
</tr>
<tr class="even separator:ac5e52dbb3cb4e9fcabd1b88c37985aef">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad650dd5a7e019b970abce3d8864b5654"
class="odd memitem:ad650dd5a7e019b970abce3d8864b5654">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad650dd5a7e019b970abce3d8864b5654" class="el">is_primitive</a> ()
const noexcept</td>
</tr>
<tr class="even memdesc:ad650dd5a7e019b970abce3d8864b5654">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether type is primitive<br />
</td>
</tr>
<tr class="odd separator:ad650dd5a7e019b970abce3d8864b5654">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2d3a5f8761bc6f163f4119bddaf7b092"
class="even memitem:a2d3a5f8761bc6f163f4119bddaf7b092">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a2d3a5f8761bc6f163f4119bddaf7b092" class="el">is_structured</a>
() const noexcept</td>
</tr>
<tr class="odd memdesc:a2d3a5f8761bc6f163f4119bddaf7b092">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether type is structured<br />
</td>
</tr>
<tr class="even separator:a2d3a5f8761bc6f163f4119bddaf7b092">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad8789d0a365d5afaab61e7492908d8b2"
class="odd memitem:ad8789d0a365d5afaab61e7492908d8b2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad8789d0a365d5afaab61e7492908d8b2" class="el">is_null</a> ()
const noexcept</td>
</tr>
<tr class="even memdesc:ad8789d0a365d5afaab61e7492908d8b2">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is null<br />
</td>
</tr>
<tr class="odd separator:ad8789d0a365d5afaab61e7492908d8b2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_acfe2e3c359b545f8edbb72f6bd78718c"
class="even memitem:acfe2e3c359b545f8edbb72f6bd78718c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#acfe2e3c359b545f8edbb72f6bd78718c" class="el">is_boolean</a> ()
const noexcept</td>
</tr>
<tr class="odd memdesc:acfe2e3c359b545f8edbb72f6bd78718c">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is a boolean<br />
</td>
</tr>
<tr class="even separator:acfe2e3c359b545f8edbb72f6bd78718c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aacf244be5088fb183f4ba21a66af9631"
class="odd memitem:aacf244be5088fb183f4ba21a66af9631">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aacf244be5088fb183f4ba21a66af9631" class="el">is_number</a> ()
const noexcept</td>
</tr>
<tr class="even memdesc:aacf244be5088fb183f4ba21a66af9631">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is a number<br />
</td>
</tr>
<tr class="odd separator:aacf244be5088fb183f4ba21a66af9631">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2330e35cda16540058fef090abc709bf"
class="even memitem:a2330e35cda16540058fef090abc709bf">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a2330e35cda16540058fef090abc709bf"
class="el">is_number_integer</a> () const noexcept</td>
</tr>
<tr class="odd memdesc:a2330e35cda16540058fef090abc709bf">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is an integer number<br />
</td>
</tr>
<tr class="even separator:a2330e35cda16540058fef090abc709bf">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4de72635745144ee519157d23fe7189a"
class="odd memitem:a4de72635745144ee519157d23fe7189a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a4de72635745144ee519157d23fe7189a"
class="el">is_number_unsigned</a> () const noexcept</td>
</tr>
<tr class="even memdesc:a4de72635745144ee519157d23fe7189a">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is an unsigned integer
number<br />
</td>
</tr>
<tr class="odd separator:a4de72635745144ee519157d23fe7189a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8d5bb82dfc8cceae1753b52a588eef92"
class="even memitem:a8d5bb82dfc8cceae1753b52a588eef92">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a8d5bb82dfc8cceae1753b52a588eef92" class="el">is_number_float</a>
() const noexcept</td>
</tr>
<tr class="odd memdesc:a8d5bb82dfc8cceae1753b52a588eef92">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is a floating-point
number<br />
</td>
</tr>
<tr class="even separator:a8d5bb82dfc8cceae1753b52a588eef92">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af355a2b131068acf3d623eb6d80a711c"
class="odd memitem:af355a2b131068acf3d623eb6d80a711c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af355a2b131068acf3d623eb6d80a711c" class="el">is_object</a> ()
const noexcept</td>
</tr>
<tr class="even memdesc:af355a2b131068acf3d623eb6d80a711c">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is an object<br />
</td>
</tr>
<tr class="odd separator:af355a2b131068acf3d623eb6d80a711c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a184ba4a6b47e6da3703af19349bd776f"
class="even memitem:a184ba4a6b47e6da3703af19349bd776f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a184ba4a6b47e6da3703af19349bd776f" class="el">is_array</a> ()
const noexcept</td>
</tr>
<tr class="odd memdesc:a184ba4a6b47e6da3703af19349bd776f">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is an array<br />
</td>
</tr>
<tr class="even separator:a184ba4a6b47e6da3703af19349bd776f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a007ecebde9a7d40714e300ce0ff52908"
class="odd memitem:a007ecebde9a7d40714e300ce0ff52908">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a007ecebde9a7d40714e300ce0ff52908" class="el">is_string</a> ()
const noexcept</td>
</tr>
<tr class="even memdesc:a007ecebde9a7d40714e300ce0ff52908">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is a string<br />
</td>
</tr>
<tr class="odd separator:a007ecebde9a7d40714e300ce0ff52908">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abbdd993df08641faa3e24b5d2151e8f8"
class="even memitem:abbdd993df08641faa3e24b5d2151e8f8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#abbdd993df08641faa3e24b5d2151e8f8" class="el">is_binary</a> ()
const noexcept</td>
</tr>
<tr class="odd memdesc:abbdd993df08641faa3e24b5d2151e8f8">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is a binary array<br />
</td>
</tr>
<tr class="even separator:abbdd993df08641faa3e24b5d2151e8f8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a39e4946a414cc978b88939ed1b343d46"
class="odd memitem:a39e4946a414cc978b88939ed1b343d46">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a39e4946a414cc978b88939ed1b343d46" class="el">is_discarded</a> ()
const noexcept</td>
</tr>
<tr class="even memdesc:a39e4946a414cc978b88939ed1b343d46">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether value is discarded<br />
</td>
</tr>
<tr class="odd separator:a39e4946a414cc978b88939ed1b343d46">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a70e1c8fbdb62f3f8bc04e69eef9cc9cf"
class="even memitem:a70e1c8fbdb62f3f8bc04e69eef9cc9cf">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a70e1c8fbdb62f3f8bc04e69eef9cc9cf" class="el">operator
value_t</a> () const noexcept</td>
</tr>
<tr class="odd memdesc:a70e1c8fbdb62f3f8bc04e69eef9cc9cf">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the type of the JSON value
(implicit)<br />
</td>
</tr>
<tr class="even separator:a70e1c8fbdb62f3f8bc04e69eef9cc9cf">
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
<td colspan="2"><h2 id="lookup" class="groupheader">lookup</h2></td>
</tr>
<tr id="r_a727e3cfb5a874314d8deb12cb53a8105"
class="even memitem:a727e3cfb5a874314d8deb12cb53a8105">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a727e3cfb5a874314d8deb12cb53a8105" class="el">find</a> (const
typename object_t::key_type &amp;key)</td>
</tr>
<tr class="odd memdesc:a727e3cfb5a874314d8deb12cb53a8105">
<td class="mdescLeft"> </td>
<td class="mdescRight">find an element in a JSON object<br />
</td>
</tr>
<tr class="even separator:a727e3cfb5a874314d8deb12cb53a8105">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7bf93ae61eb63a9e543cafb3f723900c"
class="odd memitem:a7bf93ae61eb63a9e543cafb3f723900c">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a7bf93ae61eb63a9e543cafb3f723900c" class="el">find</a> (const
typename object_t::key_type &amp;key) const</td>
</tr>
<tr class="even memdesc:a7bf93ae61eb63a9e543cafb3f723900c">
<td class="mdescLeft"> </td>
<td class="mdescRight">find an element in a JSON object<br />
</td>
</tr>
<tr class="odd separator:a7bf93ae61eb63a9e543cafb3f723900c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a89dd769ce700326266883ba96a98a8f2"
class="even memitem:a89dd769ce700326266883ba96a98a8f2">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a89dd769ce700326266883ba96a98a8f2">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a89dd769ce700326266883ba96a98a8f2" class="el">find</a> (KeyType
&amp;&amp;key)</td>
</tr>
<tr class="even memdesc:a89dd769ce700326266883ba96a98a8f2">
<td class="mdescLeft"> </td>
<td class="mdescRight">find an element in a JSON object<br />
</td>
</tr>
<tr class="odd separator:a89dd769ce700326266883ba96a98a8f2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afe1bb257797042aef7142c91f35390d8"
class="even memitem:afe1bb257797042aef7142c91f35390d8">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:afe1bb257797042aef7142c91f35390d8">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#afe1bb257797042aef7142c91f35390d8" class="el">find</a> (KeyType
&amp;&amp;key) const</td>
</tr>
<tr class="even memdesc:afe1bb257797042aef7142c91f35390d8">
<td class="mdescLeft"> </td>
<td class="mdescRight">find an element in a JSON object<br />
</td>
</tr>
<tr class="odd separator:afe1bb257797042aef7142c91f35390d8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad1e1eff03a320299e6a8639a7579ca46"
class="even memitem:ad1e1eff03a320299e6a8639a7579ca46">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad1e1eff03a320299e6a8639a7579ca46" class="el">count</a> (const
typename object_t::key_type &amp;key) const</td>
</tr>
<tr class="odd memdesc:ad1e1eff03a320299e6a8639a7579ca46">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the number of occurrences of a key in a
JSON object<br />
</td>
</tr>
<tr class="even separator:ad1e1eff03a320299e6a8639a7579ca46">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1ba1cd73d36a2cd58a9da7021b0f7317"
class="odd memitem:a1ba1cd73d36a2cd58a9da7021b0f7317">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a1ba1cd73d36a2cd58a9da7021b0f7317">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a1ba1cd73d36a2cd58a9da7021b0f7317" class="el">count</a> (KeyType
&amp;&amp;key) const</td>
</tr>
<tr class="odd memdesc:a1ba1cd73d36a2cd58a9da7021b0f7317">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the number of occurrences of a key in a
JSON object<br />
</td>
</tr>
<tr class="even separator:a1ba1cd73d36a2cd58a9da7021b0f7317">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afd5ea67fe1a4778be5189423e2545d7a"
class="odd memitem:afd5ea67fe1a4778be5189423e2545d7a">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#afd5ea67fe1a4778be5189423e2545d7a" class="el">contains</a> (const
typename object_t::key_type &amp;key) const</td>
</tr>
<tr class="even memdesc:afd5ea67fe1a4778be5189423e2545d7a">
<td class="mdescLeft"> </td>
<td class="mdescRight">check the existence of an element in a JSON
object<br />
</td>
</tr>
<tr class="odd separator:afd5ea67fe1a4778be5189423e2545d7a">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7053bdd8e9ee2fcb0ca9c54ec85f1297"
class="even memitem:a7053bdd8e9ee2fcb0ca9c54ec85f1297">
<td colspan="2" class="memTemplParams">template&lt;class KeyType ,
detail::enable_if_t&lt; detail::is_usable_as_basic_json_key_type&lt;
basic_json_t, KeyType &gt;<a href="#a80c2436388fd16a1529ce9afce8229ef"
class="el">::value</a>, int &gt; = 0&gt;</td>
</tr>
<tr class="odd memitem:a7053bdd8e9ee2fcb0ca9c54ec85f1297">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a7053bdd8e9ee2fcb0ca9c54ec85f1297" class="el">contains</a>
(KeyType &amp;&amp;key) const</td>
</tr>
<tr class="even memdesc:a7053bdd8e9ee2fcb0ca9c54ec85f1297">
<td class="mdescLeft"> </td>
<td class="mdescRight">check the existence of an element in a JSON
object<br />
</td>
</tr>
<tr class="odd separator:a7053bdd8e9ee2fcb0ca9c54ec85f1297">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac4c37affef3aa8c79cab9f3bfa2cb5e1"
class="even memitem:ac4c37affef3aa8c79cab9f3bfa2cb5e1">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac4c37affef3aa8c79cab9f3bfa2cb5e1" class="el">contains</a> (const
<a href="#afe66720a34c11920f359394a4430a16e" class="el">json_pointer</a>
&amp;ptr) const</td>
</tr>
<tr class="odd memdesc:ac4c37affef3aa8c79cab9f3bfa2cb5e1">
<td class="mdescLeft"> </td>
<td class="mdescRight">check the existence of an element in a JSON
object given a JSON pointer<br />
</td>
</tr>
<tr class="even separator:ac4c37affef3aa8c79cab9f3bfa2cb5e1">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a90d85402530880892f708ce056cf9fa1"
class="odd memitem:a90d85402530880892f708ce056cf9fa1">
<td colspan="2" class="memTemplParams"><span
id="a90d85402530880892f708ce056cf9fa1"></span> template&lt;typename
BasicJsonType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a90d85402530880892f708ce056cf9fa1">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>contains</strong> (const typename
::nlohmann::json_pointer&lt; BasicJsonType &gt; &amp;ptr) const</td>
</tr>
<tr class="odd separator:a90d85402530880892f708ce056cf9fa1">
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
<td colspan="2"><h2 id="capacity" class="groupheader">capacity</h2></td>
</tr>
<tr id="r_ac1e01c92bcf41fb7d857f72e5de7ca11"
class="even memitem:ac1e01c92bcf41fb7d857f72e5de7ca11">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac1e01c92bcf41fb7d857f72e5de7ca11" class="el">empty</a> () const
noexcept</td>
</tr>
<tr class="odd memdesc:ac1e01c92bcf41fb7d857f72e5de7ca11">
<td class="mdescLeft"> </td>
<td class="mdescRight">checks whether the container is empty.<br />
</td>
</tr>
<tr class="even separator:ac1e01c92bcf41fb7d857f72e5de7ca11">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a086cbfd1ad4ba83a8127c87467a92f47"
class="odd memitem:a086cbfd1ad4ba83a8127c87467a92f47">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a086cbfd1ad4ba83a8127c87467a92f47" class="el">size</a> () const
noexcept</td>
</tr>
<tr class="even memdesc:a086cbfd1ad4ba83a8127c87467a92f47">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the number of elements<br />
</td>
</tr>
<tr class="odd separator:a086cbfd1ad4ba83a8127c87467a92f47">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a380f98b02e7d50cf28af056a6ad8ffe6"
class="even memitem:a380f98b02e7d50cf28af056a6ad8ffe6">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a2c086af43cf06b1b7118f5351cab3ec9" class="el">size_type</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a380f98b02e7d50cf28af056a6ad8ffe6" class="el">max_size</a> ()
const noexcept</td>
</tr>
<tr class="odd memdesc:a380f98b02e7d50cf28af056a6ad8ffe6">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns the maximum possible number of
elements<br />
</td>
</tr>
<tr class="even separator:a380f98b02e7d50cf28af056a6ad8ffe6">
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
<td colspan="2"><h2 id="json-pointer-functions" class="groupheader">JSON
Pointer functions</h2></td>
</tr>
<tr id="r_a274307158c76b820701077dd471cc75b"
class="even memitem:a274307158c76b820701077dd471cc75b">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a274307158c76b820701077dd471cc75b" class="el">operator[]</a>
(const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;ptr)</td>
</tr>
<tr class="odd memdesc:a274307158c76b820701077dd471cc75b">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified element via JSON Pointer<br />
</td>
</tr>
<tr class="even separator:a274307158c76b820701077dd471cc75b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1aae035a602172b9a7f35b9f83b908d3"
class="odd memitem:a1aae035a602172b9a7f35b9f83b908d3">
<td colspan="2" class="memTemplParams"><span
id="a1aae035a602172b9a7f35b9f83b908d3"></span> template&lt;typename
BasicJsonType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a1aae035a602172b9a7f35b9f83b908d3">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator[]</strong> (const
::nlohmann::json_pointer&lt; BasicJsonType &gt; &amp;ptr)</td>
</tr>
<tr class="odd separator:a1aae035a602172b9a7f35b9f83b908d3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6aedef6230f66b1271d71a6f77e7fed3"
class="even memitem:a6aedef6230f66b1271d71a6f77e7fed3">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6aedef6230f66b1271d71a6f77e7fed3" class="el">operator[]</a>
(const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;ptr) const</td>
</tr>
<tr class="odd memdesc:a6aedef6230f66b1271d71a6f77e7fed3">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified element via JSON Pointer<br />
</td>
</tr>
<tr class="even separator:a6aedef6230f66b1271d71a6f77e7fed3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4d87a097dc4c82b046d2ba13b256a355"
class="odd memitem:a4d87a097dc4c82b046d2ba13b256a355">
<td colspan="2" class="memTemplParams"><span
id="a4d87a097dc4c82b046d2ba13b256a355"></span> template&lt;typename
BasicJsonType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a4d87a097dc4c82b046d2ba13b256a355">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator[]</strong> (const
::nlohmann::json_pointer&lt; BasicJsonType &gt; &amp;ptr) const</td>
</tr>
<tr class="odd separator:a4d87a097dc4c82b046d2ba13b256a355">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a91d1ad7e10a1c3aae885ddd992385612"
class="even memitem:a91d1ad7e10a1c3aae885ddd992385612">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a6ca7bfb35987ce7cb8d27447cda5b80a" class="el">reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a91d1ad7e10a1c3aae885ddd992385612" class="el">at</a> (const <a
href="#afe66720a34c11920f359394a4430a16e" class="el">json_pointer</a>
&amp;ptr)</td>
</tr>
<tr class="odd memdesc:a91d1ad7e10a1c3aae885ddd992385612">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified element via JSON Pointer<br />
</td>
</tr>
<tr class="even separator:a91d1ad7e10a1c3aae885ddd992385612">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af743fd1dc4ad2ca92d7a5e7f2b93d601"
class="odd memitem:af743fd1dc4ad2ca92d7a5e7f2b93d601">
<td colspan="2" class="memTemplParams"><span
id="af743fd1dc4ad2ca92d7a5e7f2b93d601"></span> template&lt;typename
BasicJsonType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:af743fd1dc4ad2ca92d7a5e7f2b93d601">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><strong>at</strong>
(const ::nlohmann::json_pointer&lt; BasicJsonType &gt; &amp;ptr)</td>
</tr>
<tr class="odd separator:af743fd1dc4ad2ca92d7a5e7f2b93d601">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5a3a35d456e3250640a90c6f7a7fd555"
class="even memitem:a5a3a35d456e3250640a90c6f7a7fd555">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5a3a35d456e3250640a90c6f7a7fd555" class="el">at</a> (const <a
href="#afe66720a34c11920f359394a4430a16e" class="el">json_pointer</a>
&amp;ptr) const</td>
</tr>
<tr class="odd memdesc:a5a3a35d456e3250640a90c6f7a7fd555">
<td class="mdescLeft"> </td>
<td class="mdescRight">access specified element via JSON Pointer<br />
</td>
</tr>
<tr class="even separator:a5a3a35d456e3250640a90c6f7a7fd555">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3e37c3b53deca782b81e5a1b45aa4182"
class="odd memitem:a3e37c3b53deca782b81e5a1b45aa4182">
<td colspan="2" class="memTemplParams"><span
id="a3e37c3b53deca782b81e5a1b45aa4182"></span> template&lt;typename
BasicJsonType , detail::enable_if_t&lt; <a
href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>&lt; BasicJsonType &gt;<a
href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>, int
&gt; = 0&gt;</td>
</tr>
<tr class="even memitem:a3e37c3b53deca782b81e5a1b45aa4182">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><strong>at</strong>
(const ::nlohmann::json_pointer&lt; BasicJsonType &gt; &amp;ptr)
const</td>
</tr>
<tr class="odd separator:a3e37c3b53deca782b81e5a1b45aa4182">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5cd6c211f030b109f7ef361250366bb0"
class="even memitem:a5cd6c211f030b109f7ef361250366bb0">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5cd6c211f030b109f7ef361250366bb0" class="el">flatten</a> ()
const</td>
</tr>
<tr class="odd memdesc:a5cd6c211f030b109f7ef361250366bb0">
<td class="mdescLeft"> </td>
<td class="mdescRight">return flattened JSON value<br />
</td>
</tr>
<tr class="even separator:a5cd6c211f030b109f7ef361250366bb0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abdb57996898f80522e9abbb5e1e61e46"
class="odd memitem:abdb57996898f80522e9abbb5e1e61e46">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="classbasic__json.html" class="el">basic_json</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#abdb57996898f80522e9abbb5e1e61e46" class="el">unflatten</a> ()
const</td>
</tr>
<tr class="even memdesc:abdb57996898f80522e9abbb5e1e61e46">
<td class="mdescLeft"> </td>
<td class="mdescRight">unflatten a previously flattened JSON value<br />
</td>
</tr>
<tr class="odd separator:abdb57996898f80522e9abbb5e1e61e46">
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
<td colspan="2"><h2 id="json-merge-patch-functions"
class="groupheader">JSON Merge Patch functions</h2></td>
</tr>
<tr id="r_a8676ac2433fe299b8d420f00a0741395"
class="even memitem:a8676ac2433fe299b8d420f00a0741395">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a8676ac2433fe299b8d420f00a0741395" class="el">merge_patch</a>
(const <a href="classbasic__json.html" class="el">basic_json</a>
&amp;apply_patch)</td>
</tr>
<tr class="odd memdesc:a8676ac2433fe299b8d420f00a0741395">
<td class="mdescLeft"> </td>
<td class="mdescRight">applies a JSON Merge Patch<br />
</td>
</tr>
<tr class="even separator:a8676ac2433fe299b8d420f00a0741395">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>  
class basic_json\< ObjectType, ArrayType, StringType, BooleanType,
NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType,
JSONSerializer, BinaryType, CustomBaseClass \>

</div>

namespace for Niels Lohmann

a class to store JSON values

See also  
<https://json.nlohmann.me/api/basic_json/>

<https://github.com/nlohmann>

<!-- -->

Since  
version 1.0.0

a class to store JSON values

Since  
version 1.0.0

</div>

## Member Typedef Documentation

<span id="a60644b7dccc409e6b367361d37841333"></span>

## <span class="permalink">[◆ ](#a60644b7dccc409e6b367361d37841333)</span>array_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::array_t = ArrayType\<<a href="classbasic__json.html" class="el">basic_json</a>, AllocatorType\<<a href="classbasic__json.html" class="el">basic_json</a>\>\> |

</div>

<div class="memdoc">

a type for an array

See also  
<https://json.nlohmann.me/api/basic_json/array_t/>

</div>

</div>

<span id="a4c1b5ea434b48cf31097617bb1c1ca1e"></span>

## <span class="permalink">[◆ ](#a4c1b5ea434b48cf31097617bb1c1ca1e)</span>binary_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                                                         |
|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::binary_t = nlohmann::byte_container_with_subtype\<BinaryType\> |

</div>

<div class="memdoc">

a type for a packed binary type

See also  
<https://json.nlohmann.me/api/basic_json/binary_t/>

</div>

</div>

<span id="a9301890c48e9b957edc07f9eb767bd10"></span>

## <span class="permalink">[◆ ](#a9301890c48e9b957edc07f9eb767bd10)</span>boolean_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                  |
|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::boolean_t = BooleanType |

</div>

<div class="memdoc">

a type for a boolean

See also  
<https://json.nlohmann.me/api/basic_json/boolean_t/>

</div>

</div>

<span id="a991d005e7f648cbf37bb36daf85183ca"></span>

## <span class="permalink">[◆ ](#a991d005e7f648cbf37bb36daf85183ca)</span>default_object_comparator_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                                                |
|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::default_object_comparator_t = std::less\<StringType\> |

</div>

<div class="memdoc">

default object key comparator type The actual object key comparator type
(<a href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a>) may be different.

See also  
<https://json.nlohmann.me/api/basic_json/default_object_comparator_t/>

</div>

</div>

<span id="a80a229dbc84c1334171ce9c49c873c56"></span>

## <span class="permalink">[◆ ](#a80a229dbc84c1334171ce9c49c873c56)</span>number_float_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                           |
|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::number_float_t = NumberFloatType |

</div>

<div class="memdoc">

a type for a number (floating-point)

See also  
<https://json.nlohmann.me/api/basic_json/number_float_t/>

</div>

</div>

<span id="aba48b0bdee31228a4e19b7c040b6d2a5"></span>

## <span class="permalink">[◆ ](#aba48b0bdee31228a4e19b7c040b6d2a5)</span>number_integer_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                               |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::number_integer_t = NumberIntegerType |

</div>

<div class="memdoc">

a type for a number (integer)

See also  
<https://json.nlohmann.me/api/basic_json/number_integer_t/>

</div>

</div>

<span id="ae8505b599e706768a1e0bd6718cc7117"></span>

## <span class="permalink">[◆ ](#ae8505b599e706768a1e0bd6718cc7117)</span>number_unsigned_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                                 |
|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::number_unsigned_t = NumberUnsignedType |

</div>

<div class="memdoc">

a type for a number (unsigned)

See also  
<https://json.nlohmann.me/api/basic_json/number_unsigned_t/>

</div>

</div>

<span id="af12040e0663db54840d73d363979643a"></span>

## <span class="permalink">[◆ ](#af12040e0663db54840d73d363979643a)</span>object_comparator_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                                                                                                                |
|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::object_comparator_t = detail::actual_object_comparator_t\<<a href="classbasic__json.html" class="el">basic_json</a>\> |

</div>

<div class="memdoc">

object key comparator type

See also  
<https://json.nlohmann.me/api/basic_json/object_comparator_t/>

</div>

</div>

<span id="a67bb0d6dfaf1709d918b7107f5b94a3d"></span>

## <span class="permalink">[◆ ](#a67bb0d6dfaf1709d918b7107f5b94a3d)</span>object_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                   |
|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::object_t |

</div>

<div class="memdoc">

**Initial value:**

<div class="fragment">

<div class="line">

ObjectType\<StringType,

</div>

<div class="line">

<a href="#ae2d5bc42270881ed3e219e8b1456fec5"
class="code hl_function">basic_json</a>,

</div>

<div class="line">

<a href="#a991d005e7f648cbf37bb36daf85183ca"
class="code hl_typedef">default_object_comparator_t</a>,

</div>

<div class="line">

AllocatorType\<std::pair\<<span class="keyword">const</span> StringType,

</div>

<div class="line">

<a href="classbasic__json.html" class="code hl_class">basic_json</a>\>\>\>

</div>

<div id="aclassbasic__json_html" class="ttc">

<div class="ttname">

[basic_json](classbasic__json.html)

</div>

<div class="ttdoc">

namespace for Niels Lohmann

</div>

<div class="ttdef">

**Definition** json.hpp:19401

</div>

</div>

<div id="aclassbasic__json_html_a991d005e7f648cbf37bb36daf85183ca"
class="ttc">

<div class="ttname">

[basic_json::default_object_comparator_t](#a991d005e7f648cbf37bb36daf85183ca)

</div>

<div class="ttdeci">

std::less\< StringType \> default_object_comparator_t

</div>

<div class="ttdoc">

default object key comparator type The actual object key comparator type
(object_comparator_t) may be...

</div>

<div class="ttdef">

**Definition** json.hpp:19630

</div>

</div>

<div id="aclassbasic__json_html_ae2d5bc42270881ed3e219e8b1456fec5"
class="ttc">

<div class="ttname">

[basic_json::basic_json](#ae2d5bc42270881ed3e219e8b1456fec5)

</div>

<div class="ttdeci">

basic_json(const value_t v)

</div>

<div class="ttdoc">

create an empty value with a given type

</div>

<div class="ttdef">

**Definition** json.hpp:20117

</div>

</div>

</div>

a type for an object

See also  
<https://json.nlohmann.me/api/basic_json/object_t/>

</div>

</div>

<span id="a53b6bf8ee18c48f4609c8bdd4bb95107"></span>

## <span class="permalink">[◆ ](#a53b6bf8ee18c48f4609c8bdd4bb95107)</span>parse_event_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                                                                           |
|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::parse_event_t = <a href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312ef" 
 class="el">detail::parse_event_t</a>                                                                                                                                                                                                                                                                                       |

</div>

<div class="memdoc">

parser event types

See also  
<https://json.nlohmann.me/api/basic_json/parse_event_t/>

</div>

</div>

<span id="a50644d655c9283aaf0e2a0f3a5428867"></span>

## <span class="permalink">[◆ ](#a50644d655c9283aaf0e2a0f3a5428867)</span>parser_callback_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                                                                                                     |
|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::parser_callback_t = detail::parser_callback_t\<<a href="classbasic__json.html" class="el">basic_json</a>\> |

</div>

<div class="memdoc">

per-element parser callback type

See also  
<https://json.nlohmann.me/api/basic_json/parser_callback_t/>

</div>

</div>

<span id="ac8c9cde32146e6c343e1960aefc11fba"></span>

## <span class="permalink">[◆ ](#ac8c9cde32146e6c343e1960aefc11fba)</span>string_t

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

|                                                                                                                                                                                                                                                                |
|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| using <a href="classbasic__json.html" class="el">basic_json</a>\< ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass \>::string_t = StringType |

</div>

<div class="memdoc">

a type for a string

See also  
<https://json.nlohmann.me/api/basic_json/string_t/>

</div>

</div>

## Constructor & Destructor Documentation

<span id="ae2d5bc42270881ed3e219e8b1456fec5"></span>

## <span class="permalink">[◆ ](#ae2d5bc42270881ed3e219e8b1456fec5)</span>basic_json() <span class="overload">\[1/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype">const <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a></td>
<td class="paramname"><span class="paramname"><em>v</em></span></td>
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

create an empty value with a given type

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="a5b1fab9ded0a2a182837bd66c0e5189e"></span>

## <span class="permalink">[◆ ](#a5b1fab9ded0a2a182837bd66c0e5189e)</span>basic_json() <span class="overload">\[2/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype">std::nullptr_t</td>
<td class="paramname"><span class="paramname"><span class="paramdefsep">
= </span><span class="paramdefval">nullptr</span></span></td>
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

create a null object

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="a0f24e66b152203259eaf05c33ebaeed4"></span>

## <span class="permalink">[◆ ](#a0f24e66b152203259eaf05c33ebaeed4)</span>basic_json() <span class="overload">\[3/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename CompatibleType , typename U =
detail::uncvref_t\<CompatibleType\>, detail::enable_if_t\<
\!<a href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>\< U
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&&<a href="structdetail_1_1is__compatible__type.html"
class="el">detail::is_compatible_type</a>\< basic_json_t, U
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype">CompatibleType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

create a JSON value from compatible types

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="aeaf10402e79a1acce9a74f5a9654d403"></span>

## <span class="permalink">[◆ ](#aeaf10402e79a1acce9a74f5a9654d403)</span>basic_json() <span class="overload">\[4/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename BasicJsonType , detail::enable_if_t\<
<a href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>\< BasicJsonType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&&!std::is_same\<
<a href="classbasic__json.html" class="el">basic_json</a>, BasicJsonType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype">const BasicJsonType &amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

create a JSON value from an existing one

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="aa911d47d3c99184a301bf4fd304199b2"></span>

## <span class="permalink">[◆ ](#aa911d47d3c99184a301bf4fd304199b2)</span>basic_json() <span class="overload">\[5/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype"><a href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a></td>
<td class="paramname"><span class="paramname"><em>init</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">bool</td>
<td class="paramname"><span
class="paramname"><em>type_deduction</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a></td>
<td class="paramname"><span class="paramname"><em>manual_type</em><span
class="paramdefsep"> = </span><span
class="paramdefval">value_t::array</span></span> )</td>
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

create a container (array or object) from an initializer list

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="a7b6f0605b09a002567fd18a289cef31b"></span>

## <span class="permalink">[◆ ](#a7b6f0605b09a002567fd18a289cef31b)</span>basic_json() <span class="overload">\[6/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a></td>
<td class="paramname"><span class="paramname"><em>cnt</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span> )</td>
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

construct an array with count copies of given value

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="af97b4fcd01509076c8a7b32ec1a10aec"></span>

## <span class="permalink">[◆ ](#af97b4fcd01509076c8a7b32ec1a10aec)</span>basic_json() <span class="overload">\[7/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class InputIT , typename std::enable_if\< std::is_same\<
InputIT, typename basic_json_t::iterator
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>\|\|std::is_same\<
InputIT, typename basic_json_t::const_iterator
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
= 0\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype">InputIT</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">InputIT</td>
<td class="paramname"><span
class="paramname"><em>last</em></span> )</td>
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

construct a JSON container given an iterator range

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="af15244e1249b6e7282127d460b5b2e3e"></span>

## <span class="permalink">[◆ ](#af15244e1249b6e7282127d460b5b2e3e)</span>basic_json() <span class="overload">\[8/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

copy constructor

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="ae18629aae4bd76e6f7920cf4e7b4dd60"></span>

## <span class="permalink">[◆ ](#ae18629aae4bd76e6f7920cf4e7b4dd60)</span>basic_json() <span class="overload">\[9/9\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;<a
href="classbasic__json.html" class="el">::basic_json</a></td>
<td>(</td>
<td class="paramtype"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;&amp;</td>
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

move constructor

See also  
<https://json.nlohmann.me/api/basic_json/basic_json/>

</div>

</div>

<span id="a9f3bcb6dc54f447ad95085715104494e"></span>

## <span class="permalink">[◆ ](#a9f3bcb6dc54f447ad95085715104494e)</span>~basic_json()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::~<a
href="classbasic__json.html" class="el">basic_json</a></td>
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

destructor

See also  
<https://json.nlohmann.me/api/basic_json/~basic_json/>

</div>

</div>

## Member Function Documentation

<span id="ac736994a792cb8460a30a3f4dd86fd78"></span>

## <span class="permalink">[◆ ](#ac736994a792cb8460a30a3f4dd86fd78)</span>array()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::array</td>
<td>(</td>
<td class="paramtype"><a href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a></td>
<td class="paramname"><span class="paramname"><em>init</em><span
class="paramdefsep"> = </span><span
class="paramdefval">{}</span></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

explicitly create an array from an initializer list

See also  
<https://json.nlohmann.me/api/basic_json/array/>

</div>

</div>

<span id="a91d1ad7e10a1c3aae885ddd992385612"></span>

## <span class="permalink">[◆ ](#a91d1ad7e10a1c3aae885ddd992385612)</span>at() <span class="overload">\[1/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype">const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;</td>
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

access specified element via JSON Pointer

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="a5a3a35d456e3250640a90c6f7a7fd555"></span>

## <span class="permalink">[◆ ](#a5a3a35d456e3250640a90c6f7a7fd555)</span>at() <span class="overload">\[2/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype">const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>ptr</em></span></td>
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

access specified element via JSON Pointer

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="accafaaf23f60bb245ddb1fa0972b33a3"></span>

## <span class="permalink">[◆ ](#accafaaf23f60bb245ddb1fa0972b33a3)</span>at() <span class="overload">\[3/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element with bounds checking

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="aba9a21714e81e98fc5786a2339ea1665"></span>

## <span class="permalink">[◆ ](#aba9a21714e81e98fc5786a2339ea1665)</span>at() <span class="overload">\[4/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element with bounds checking

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="a4cd9ba2f2164d9cee83b07f76d40843f"></span>

## <span class="permalink">[◆ ](#a4cd9ba2f2164d9cee83b07f76d40843f)</span>at() <span class="overload">\[5/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element with bounds checking

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="a7ae6267ca4bd85e25f61dc5ba30204da"></span>

## <span class="permalink">[◆ ](#a7ae6267ca4bd85e25f61dc5ba30204da)</span>at() <span class="overload">\[6/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element with bounds checking

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="a899e4623fe377af5c9ad14c40c64280c"></span>

## <span class="permalink">[◆ ](#a899e4623fe377af5c9ad14c40c64280c)</span>at() <span class="overload">\[7/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a></td>
<td class="paramname"><span class="paramname"><em>idx</em></span></td>
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

access specified array element with bounds checking

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="af076d8a80f4263cf821da2033d5773b6"></span>

## <span class="permalink">[◆ ](#af076d8a80f4263cf821da2033d5773b6)</span>at() <span class="overload">\[8/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;::at</td>
<td>(</td>
<td class="paramtype"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a></td>
<td class="paramname"><span class="paramname"><em>idx</em></span></td>
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

access specified array element with bounds checking

See also  
<https://json.nlohmann.me/api/basic_json/at/>

</div>

</div>

<span id="a0d93dc1dbdf67a6ee3a5cf1d2439ca77"></span>

## <span class="permalink">[◆ ](#a0d93dc1dbdf67a6ee3a5cf1d2439ca77)</span>back() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::back</td>
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

access the last element

See also  
<https://json.nlohmann.me/api/basic_json/back/>

</div>

</div>

<span id="a41eee3066cd1ebfea746f9f07fd03f6f"></span>

## <span class="permalink">[◆ ](#a41eee3066cd1ebfea746f9f07fd03f6f)</span>back() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::back</td>
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

access the last element

See also  
<https://json.nlohmann.me/api/basic_json/back/>

</div>

</div>

<span id="aac84462424ea7a14f9abb4ddb8e6dd7f"></span>

## <span class="permalink">[◆ ](#aac84462424ea7a14f9abb4ddb8e6dd7f)</span>begin() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::begin</td>
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

returns an iterator to the first element

See also  
<https://json.nlohmann.me/api/basic_json/begin/>

</div>

</div>

<span id="a5251a08382864af52c854fca1bdba61c"></span>

## <span class="permalink">[◆ ](#a5251a08382864af52c854fca1bdba61c)</span>begin() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::begin</td>
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

returns an iterator to the first element

See also  
<https://json.nlohmann.me/api/basic_json/begin/>

</div>

</div>

<span id="a743ac3bcbc4b0f7897244d4cea387eee"></span>

## <span class="permalink">[◆ ](#a743ac3bcbc4b0f7897244d4cea387eee)</span>binary() <span class="overload">\[1/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::binary</td>
<td>(</td>
<td class="paramtype">const typename binary_t::container_type &amp;</td>
<td class="paramname"><span class="paramname"><em>init</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

explicitly create a binary array (without subtype)

See also  
<https://json.nlohmann.me/api/basic_json/binary/>

</div>

</div>

<span id="a45e65e73d9ecf780537d632372fa2c51"></span>

## <span class="permalink">[◆ ](#a45e65e73d9ecf780537d632372fa2c51)</span>binary() <span class="overload">\[2/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::binary</td>
<td>(</td>
<td class="paramtype">const typename binary_t::container_type &amp;</td>
<td class="paramname"><span class="paramname"><em>init</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">typename binary_t::subtype_type</td>
<td class="paramname"><span
class="paramname"><em>subtype</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

explicitly create a binary array (with subtype)

See also  
<https://json.nlohmann.me/api/basic_json/binary/>

</div>

</div>

<span id="a5af2196a9acde33f742ef054e7c2109c"></span>

## <span class="permalink">[◆ ](#a5af2196a9acde33f742ef054e7c2109c)</span>binary() <span class="overload">\[3/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::binary</td>
<td>(</td>
<td class="paramtype">typename binary_t::container_type &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>init</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

explicitly create a binary array

See also  
<https://json.nlohmann.me/api/basic_json/binary/>

</div>

</div>

<span id="ac00a2a38929ce21eae65f9dd09b03ce3"></span>

## <span class="permalink">[◆ ](#ac00a2a38929ce21eae65f9dd09b03ce3)</span>binary() <span class="overload">\[4/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::binary</td>
<td>(</td>
<td class="paramtype">typename binary_t::container_type &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>init</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">typename binary_t::subtype_type</td>
<td class="paramname"><span
class="paramname"><em>subtype</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

explicitly create a binary array (with subtype)

See also  
<https://json.nlohmann.me/api/basic_json/binary/>

</div>

</div>

<span id="a9ab2ece6530b3b2be5b876f80c68dc78"></span>

## <span class="permalink">[◆ ](#a9ab2ece6530b3b2be5b876f80c68dc78)</span>cbegin()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::cbegin</td>
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

returns a const iterator to the first element

See also  
<https://json.nlohmann.me/api/basic_json/cbegin/>

</div>

</div>

<span id="a57c63700f006c54624eb2433ec6526b0"></span>

## <span class="permalink">[◆ ](#a57c63700f006c54624eb2433ec6526b0)</span>cend()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::cend</td>
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

returns an iterator to one past the last element

See also  
<https://json.nlohmann.me/api/basic_json/cend/>

</div>

</div>

<span id="ad8cb21b66e4a4de652828345d51a8fc1"></span>

## <span class="permalink">[◆ ](#ad8cb21b66e4a4de652828345d51a8fc1)</span>clear()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::clear</td>
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

clears the contents

See also  
<https://json.nlohmann.me/api/basic_json/clear/>

</div>

</div>

<span id="ac4c37affef3aa8c79cab9f3bfa2cb5e1"></span>

## <span class="permalink">[◆ ](#ac4c37affef3aa8c79cab9f3bfa2cb5e1)</span>contains() <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::contains</td>
<td>(</td>
<td class="paramtype">const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>ptr</em></span></td>
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

check the existence of an element in a JSON object given a JSON pointer

See also  
<https://json.nlohmann.me/api/basic_json/contains/>

</div>

</div>

<span id="afd5ea67fe1a4778be5189423e2545d7a"></span>

## <span class="permalink">[◆ ](#afd5ea67fe1a4778be5189423e2545d7a)</span>contains() <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::contains</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

check the existence of an element in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/contains/>

</div>

</div>

<span id="a7053bdd8e9ee2fcb0ca9c54ec85f1297"></span>

## <span class="permalink">[◆ ](#a7053bdd8e9ee2fcb0ca9c54ec85f1297)</span>contains() <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname">bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::contains</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

check the existence of an element in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/contains/>

</div>

</div>

<span id="ad1e1eff03a320299e6a8639a7579ca46"></span>

## <span class="permalink">[◆ ](#ad1e1eff03a320299e6a8639a7579ca46)</span>count() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::count</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

returns the number of occurrences of a key in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/count/>

</div>

</div>

<span id="a1ba1cd73d36a2cd58a9da7021b0f7317"></span>

## <span class="permalink">[◆ ](#a1ba1cd73d36a2cd58a9da7021b0f7317)</span>count() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::count</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

returns the number of occurrences of a key in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/count/>

</div>

</div>

<span id="acdde2a6628e43b3e3f7f27c6af6998f8"></span>

## <span class="permalink">[◆ ](#acdde2a6628e43b3e3f7f27c6af6998f8)</span>crbegin()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::crbegin</td>
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

returns a const reverse iterator to the last element

See also  
<https://json.nlohmann.me/api/basic_json/crbegin/>

</div>

</div>

<span id="aa52cc6cc0de1e81d9cc21f9c48feb588"></span>

## <span class="permalink">[◆ ](#aa52cc6cc0de1e81d9cc21f9c48feb588)</span>crend()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::crend</td>
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

returns a const reverse iterator to one before the first

See also  
<https://json.nlohmann.me/api/basic_json/crend/>

</div>

</div>

<span id="a699ef418df577e75f28dfce6b04d6c2f"></span>

## <span class="permalink">[◆ ](#a699ef418df577e75f28dfce6b04d6c2f)</span>diff()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::diff</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>source</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>target</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const std::string &amp;</td>
<td class="paramname"><span class="paramname"><em>path</em><span
class="paramdefsep"> = </span><span
class="paramdefval">""</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

creates a diff as a JSON patch

See also  
<https://json.nlohmann.me/api/basic_json/diff/>

</div>

</div>

<span id="a85df48caed9e341bb14d98ab88891d1e"></span>

## <span class="permalink">[◆ ](#a85df48caed9e341bb14d98ab88891d1e)</span>dump()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ac8c9cde32146e6c343e1960aefc11fba"
class="el">string_t</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::dump</td>
<td>(</td>
<td class="paramtype">const int</td>
<td class="paramname"><span class="paramname"><em>indent</em><span
class="paramdefsep"> = </span><span class="paramdefval">-1</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const char</td>
<td class="paramname"><span class="paramname"><em>indent_char</em><span
class="paramdefsep"> = </span><span class="paramdefval">' '</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>ensure_ascii</em><span
class="paramdefsep"> = </span><span class="paramdefval">false</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a
href="namespacedetail.html#abe7cfa1fd8fa706ff4392bff9d1a8298"
class="el">error_handler_t</a></td>
<td class="paramname"><span
class="paramname"><em>error_handler</em><span class="paramdefsep"> =
</span><span class="paramdefval">error_handler_t::strict</span></span> )
const</td>
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

serialization

See also  
<https://json.nlohmann.me/api/basic_json/dump/>

</div>

</div>

<span id="af298488e59ff260d2ca950070cf19196"></span>

## <span class="permalink">[◆ ](#af298488e59ff260d2ca950070cf19196)</span>emplace()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class... Args\>

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
<td class="memname">std::pair&lt; <a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a>, bool
&gt; <a href="classbasic__json.html" class="el">basic_json</a>&lt;
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::emplace</td>
<td>(</td>
<td class="paramtype">Args &amp;&amp;...</td>
<td class="paramname"><span class="paramname"><em>args</em></span></td>
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

add an object to an object if key does not exist

See also  
<https://json.nlohmann.me/api/basic_json/emplace/>

</div>

</div>

<span id="ac5f0a15957842b188826aea98a9cfd3d"></span>

## <span class="permalink">[◆ ](#ac5f0a15957842b188826aea98a9cfd3d)</span>emplace_back()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class... Args\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::emplace_back</td>
<td>(</td>
<td class="paramtype">Args &amp;&amp;...</td>
<td class="paramname"><span class="paramname"><em>args</em></span></td>
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

add an object to an array

See also  
<https://json.nlohmann.me/api/basic_json/emplace_back/>

</div>

</div>

<span id="ac1e01c92bcf41fb7d857f72e5de7ca11"></span>

## <span class="permalink">[◆ ](#ac1e01c92bcf41fb7d857f72e5de7ca11)</span>empty()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::empty</td>
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

checks whether the container is empty.

See also  
<https://json.nlohmann.me/api/basic_json/empty/>

</div>

</div>

<span id="a0c10232619bee4e73749dae621c01376"></span>

## <span class="permalink">[◆ ](#a0c10232619bee4e73749dae621c01376)</span>end() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::end</td>
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

returns an iterator to one past the last element

See also  
<https://json.nlohmann.me/api/basic_json/end/>

</div>

</div>

<span id="a4dbc83213b31a171aa8ba65ff00fa954"></span>

## <span class="permalink">[◆ ](#a4dbc83213b31a171aa8ba65ff00fa954)</span>end() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::end</td>
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

returns an iterator to one past the last element

See also  
<https://json.nlohmann.me/api/basic_json/end/>

</div>

</div>

<span id="ac2c58b5f34c2ff56e27630214f5a9df4"></span>

## <span class="permalink">[◆ ](#ac2c58b5f34c2ff56e27630214f5a9df4)</span>erase() <span class="overload">\[1/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::erase</td>
<td>(</td>
<td class="paramtype">const <a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a></td>
<td class="paramname"><span class="paramname"><em>idx</em></span></td>
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

remove element from a JSON array given an index

See also  
<https://json.nlohmann.me/api/basic_json/erase/>

</div>

</div>

<span id="a05da3b93f2d4a7164589abffaa9acb33"></span>

## <span class="permalink">[◆ ](#a05da3b93f2d4a7164589abffaa9acb33)</span>erase() <span class="overload">\[2/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::erase</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

remove element from a JSON object given a key

See also  
<https://json.nlohmann.me/api/basic_json/erase/>

</div>

</div>

<span id="a437b81c6e968a4192a22bc0de6c4df80"></span>

## <span class="permalink">[◆ ](#a437b81c6e968a4192a22bc0de6c4df80)</span>erase() <span class="overload">\[3/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class IteratorType , detail::enable_if_t\< std::is_same\<
IteratorType, typename basic_json_t::iterator
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>\|\|std::is_same\<
IteratorType, typename basic_json_t::const_iterator
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname">IteratorType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::erase</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span
class="paramname"><em>last</em></span> )</td>
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

remove elements given an iterator range

See also  
<https://json.nlohmann.me/api/basic_json/erase/>

</div>

</div>

<span id="a7d0fef086b1b72372113db6ce7446189"></span>

## <span class="permalink">[◆ ](#a7d0fef086b1b72372113db6ce7446189)</span>erase() <span class="overload">\[4/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class IteratorType , detail::enable_if_t\< std::is_same\<
IteratorType, typename basic_json_t::iterator
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>\|\|std::is_same\<
IteratorType, typename basic_json_t::const_iterator
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname">IteratorType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::erase</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>pos</em></span></td>
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

remove element given an iterator

See also  
<https://json.nlohmann.me/api/basic_json/erase/>

</div>

</div>

<span id="a5f763336e84232f38e2d80e142f9820e"></span>

## <span class="permalink">[◆ ](#a5f763336e84232f38e2d80e142f9820e)</span>erase() <span class="overload">\[5/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::erase</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

remove element from a JSON object given a key

See also  
<https://json.nlohmann.me/api/basic_json/erase/>

</div>

</div>

<span id="a727e3cfb5a874314d8deb12cb53a8105"></span>

## <span class="permalink">[◆ ](#a727e3cfb5a874314d8deb12cb53a8105)</span>find() <span class="overload">\[1/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::find</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

find an element in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/find/>

</div>

</div>

<span id="a7bf93ae61eb63a9e543cafb3f723900c"></span>

## <span class="permalink">[◆ ](#a7bf93ae61eb63a9e543cafb3f723900c)</span>find() <span class="overload">\[2/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::find</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

find an element in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/find/>

</div>

</div>

<span id="a89dd769ce700326266883ba96a98a8f2"></span>

## <span class="permalink">[◆ ](#a89dd769ce700326266883ba96a98a8f2)</span>find() <span class="overload">\[3/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::find</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

find an element in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/find/>

</div>

</div>

<span id="afe1bb257797042aef7142c91f35390d8"></span>

## <span class="permalink">[◆ ](#afe1bb257797042aef7142c91f35390d8)</span>find() <span class="overload">\[4/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::find</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

find an element in a JSON object

See also  
<https://json.nlohmann.me/api/basic_json/find/>

</div>

</div>

<span id="a5cd6c211f030b109f7ef361250366bb0"></span>

## <span class="permalink">[◆ ](#a5cd6c211f030b109f7ef361250366bb0)</span>flatten()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::flatten</td>
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

return flattened JSON value

See also  
<https://json.nlohmann.me/api/basic_json/flatten/>

</div>

</div>

<span id="a59327f708c0555e2928487bcddf71293"></span>

## <span class="permalink">[◆ ](#a59327f708c0555e2928487bcddf71293)</span>from_bjdata() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename InputType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_bjdata</td>
<td>(</td>
<td class="paramtype">InputType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in BJData format

See also  
<https://json.nlohmann.me/api/basic_json/from_bjdata/>

</div>

</div>

<span id="accf7ae6f9b2fee171484c5ef54f08d1e"></span>

## <span class="permalink">[◆ ](#accf7ae6f9b2fee171484c5ef54f08d1e)</span>from_bjdata() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename IteratorType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_bjdata</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>last</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in BJData format

See also  
<https://json.nlohmann.me/api/basic_json/from_bjdata/>

</div>

</div>

<span id="a4b0dfca88b11ea59a2568707767622d8"></span>

## <span class="permalink">[◆ ](#a4b0dfca88b11ea59a2568707767622d8)</span>from_bson() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename InputType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_bson</td>
<td>(</td>
<td class="paramtype">InputType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in BSON format

See also  
<https://json.nlohmann.me/api/basic_json/from_bson/>

</div>

</div>

<span id="a2513159e8df9a81bf03ed34e1147b42e"></span>

## <span class="permalink">[◆ ](#a2513159e8df9a81bf03ed34e1147b42e)</span>from_bson() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename IteratorType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_bson</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>last</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in BSON format

See also  
<https://json.nlohmann.me/api/basic_json/from_bson/>

</div>

</div>

<span id="a5bc3c67eaf6e9b22c8b446f9695249e9"></span>

## <span class="permalink">[◆ ](#a5bc3c67eaf6e9b22c8b446f9695249e9)</span>from_cbor() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename InputType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_cbor</td>
<td>(</td>
<td class="paramtype">InputType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a></td>
<td class="paramname"><span class="paramname"><em>tag_handler</em><span
class="paramdefsep"> = </span><span
class="paramdefval">cbor_tag_handler_t::error</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in CBOR format

See also  
<https://json.nlohmann.me/api/basic_json/from_cbor/>

</div>

</div>

<span id="a08ab03513b96f5a864bf623aeb70f122"></span>

## <span class="permalink">[◆ ](#a08ab03513b96f5a864bf623aeb70f122)</span>from_cbor() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename IteratorType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_cbor</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>last</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a
href="namespacedetail.html#a7c070b2bf3d61e3d8b8013f6fb18d592"
class="el">cbor_tag_handler_t</a></td>
<td class="paramname"><span class="paramname"><em>tag_handler</em><span
class="paramdefsep"> = </span><span
class="paramdefval">cbor_tag_handler_t::error</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in CBOR format

See also  
<https://json.nlohmann.me/api/basic_json/from_cbor/>

</div>

</div>

<span id="ab0c025488572f913ca5529a2ef62d066"></span>

## <span class="permalink">[◆ ](#ab0c025488572f913ca5529a2ef62d066)</span>from_msgpack() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename InputType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_msgpack</td>
<td>(</td>
<td class="paramtype">InputType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in MessagePack format

See also  
<https://json.nlohmann.me/api/basic_json/from_msgpack/>

</div>

</div>

<span id="af7d84b161b2d93f9b2b3ac8d68afeb96"></span>

## <span class="permalink">[◆ ](#af7d84b161b2d93f9b2b3ac8d68afeb96)</span>from_msgpack() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename IteratorType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_msgpack</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>last</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in MessagePack format

See also  
<https://json.nlohmann.me/api/basic_json/from_msgpack/>

</div>

</div>

<span id="a4588941095d03624ada4f0023d93944a"></span>

## <span class="permalink">[◆ ](#a4588941095d03624ada4f0023d93944a)</span>from_ubjson() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename InputType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_ubjson</td>
<td>(</td>
<td class="paramtype">InputType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in UBJSON format

See also  
<https://json.nlohmann.me/api/basic_json/from_ubjson/>

</div>

</div>

<span id="a5dd7470a3be83b27cf162c0261e6b63d"></span>

## <span class="permalink">[◆ ](#a5dd7470a3be83b27cf162c0261e6b63d)</span>from_ubjson() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename IteratorType \>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::from_ubjson</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>last</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>allow_exceptions</em><span class="paramdefsep"> =
</span><span class="paramdefval">true</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a JSON value from an input in UBJSON format

See also  
<https://json.nlohmann.me/api/basic_json/from_ubjson/>

</div>

</div>

<span id="ad4dd162b4990cfb69925193797415f7e"></span>

## <span class="permalink">[◆ ](#ad4dd162b4990cfb69925193797415f7e)</span>front() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::front</td>
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

access the first element

See also  
<https://json.nlohmann.me/api/basic_json/front/>

</div>

</div>

<span id="a162089e94f24182ba3e4484be63c0c1a"></span>

## <span class="permalink">[◆ ](#a162089e94f24182ba3e4484be63c0c1a)</span>front() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::front</td>
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

access the first element

See also  
<https://json.nlohmann.me/api/basic_json/front/>

</div>

</div>

<span id="a0ab31c7fdbab38898070bca01637f886"></span>

## <span class="permalink">[◆ ](#a0ab31c7fdbab38898070bca01637f886)</span>get() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename ValueTypeCV , typename ValueType =
detail::uncvref_t\<ValueTypeCV\>\>

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
<td class="memname">auto <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const -&gt; decltype(std::declval&lt;const
basic_json_t&amp;&gt;().template get_impl&lt;ValueType&gt;(<a
href="structdetail_1_1priority__tag.html"
class="el">detail::priority_tag</a>&lt;4&gt; {}))</td>
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

get a (pointer) value (explicit)

Performs explicit type conversion between the JSON value and a
compatible value if required.

- If the requested type is a pointer to the internally stored JSON value
  that pointer is returned. No copies are made.
- If the requested type is the current
  <a href="classbasic__json.html" class="el">basic_json</a>, or a
  different <a href="classbasic__json.html" class="el">basic_json</a>
  convertible from the current
  <a href="classbasic__json.html" class="el">basic_json</a>.
- Otherwise the value is converted by calling the
  json_serializer\<ValueType\> `from_json()` method.

Template Parameters  
|             |                         |
|-------------|-------------------------|
| ValueTypeCV | the provided value type |
| ValueType   | the returned value type |

<!-- -->

Returns  
copy of the JSON value, converted to

<!-- -->

Template Parameters  
|           |              |
|-----------|--------------|
| ValueType | if necessary |

<!-- -->

Exceptions  
|      |                                                                                    |
|------|------------------------------------------------------------------------------------|
| what | json_serializer\<ValueType\> `from_json()` method throws if conversion is required |

<!-- -->

Since  
version 2.1.0

</div>

</div>

<span id="ab11f66d4edc50a209fab3f8c48664a53"></span>

## <span class="permalink">[◆ ](#ab11f66d4edc50a209fab3f8c48664a53)</span>get() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename PointerType , typename std::enable_if\<
std::is_pointer\< PointerType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
= 0\>

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
<td class="memname">auto <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>-&gt; decltype(std::declval&lt;basic_json_t&amp;&gt;().template <a
href="#aba60354728e2f7f64e3e5c6b02c5b820"
class="el">get_ptr</a>&lt;PointerType&gt;())</td>
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

get a pointer value (explicit)

Explicit pointer access to the internally stored JSON value. No copies
are made.

Warning  
The pointer becomes invalid if the underlying JSON object changes.

<!-- -->

Template Parameters  
|             |                                                                                                                                                                                                                                                                                                                                                                         |
|-------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| PointerType | pointer type; must be a pointer to <a href="#a60644b7dccc409e6b367361d37841333" class="el">array_t</a>, <a href="#a67bb0d6dfaf1709d918b7107f5b94a3d" class="el">object_t</a>, <a href="#ac8c9cde32146e6c343e1960aefc11fba" class="el">string_t</a>, <a href="#a9301890c48e9b957edc07f9eb767bd10" class="el">boolean_t</a>, <a href="#aba48b0bdee31228a4e19b7c040b6d2a5" 
               class="el">number_integer_t</a>, <a href="#ae8505b599e706768a1e0bd6718cc7117"                                                                                                                                                                                                                                                                                            
               class="el">number_unsigned_t</a>, or <a href="#a80a229dbc84c1334171ce9c49c873c56"                                                                                                                                                                                                                                                                                        
               class="el">number_float_t</a>.                                                                                                                                                                                                                                                                                                                                           |

<!-- -->

Returns  
pointer to the internally stored JSON value if the requested pointer
type *PointerType* fits to the JSON value; `nullptr` otherwise

@complexity Constant.

@liveexample{The example below shows how pointers to internal values of
a JSON value can be requested. Note that no type conversions are made
and a `nullptr` is returned if the value and the requested pointer type
does not match.,get\_\_PointerType}

See also  
see
<a href="#aba60354728e2f7f64e3e5c6b02c5b820" class="el">get_ptr()</a>
for explicit pointer-member access

<!-- -->

Since  
version 1.0.0

</div>

</div>

<span id="a4bceecf563151eb58af179416d8e6299"></span>

## <span class="permalink">[◆ ](#a4bceecf563151eb58af179416d8e6299)</span>get_allocator()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static <a href="#a83f845db2d54cedad97279bad70aea52"
class="el">allocator_type</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_allocator</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

returns the allocator associated with the container

See also  
<https://json.nlohmann.me/api/basic_json/get_allocator/>

</div>

</div>

<span id="aaa2432a7c01833b02c6330709211ede7"></span>

## <span class="permalink">[◆ ](#aaa2432a7c01833b02c6330709211ede7)</span>get_binary() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a4c1b5ea434b48cf31097617bb1c1ca1e"
class="el">binary_t</a> &amp; <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_binary</td>
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

get a binary value

See also  
<https://json.nlohmann.me/api/basic_json/get_binary/>

</div>

</div>

<span id="a67d6da9fb8325a87d9513f960d88512a"></span>

## <span class="permalink">[◆ ](#a67d6da9fb8325a87d9513f960d88512a)</span>get_binary() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">const <a href="#a4c1b5ea434b48cf31097617bb1c1ca1e"
class="el">binary_t</a> &amp; <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_binary</td>
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

get a binary value

See also  
<https://json.nlohmann.me/api/basic_json/get_binary/>

</div>

</div>

<span id="a9db8d5e59277a70a736f899c4aec0af0"></span>

## <span class="permalink">[◆ ](#a9db8d5e59277a70a736f899c4aec0af0)</span>get_ptr() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename PointerType , typename std::enable_if\<
std::is_pointer\< PointerType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&&std::is_const\< typename std::remove_pointer\< PointerType
\><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
= 0\>

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
<td class="memname">constexpr auto <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_ptr</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const -&gt; decltype(std::declval&lt;const
basic_json_t&amp;&gt;().get_impl_ptr(std::declval&lt;PointerType&gt;()))</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

get a pointer value (implicit)

See also  
<https://json.nlohmann.me/api/basic_json/get_ptr/>

</div>

</div>

<span id="aba60354728e2f7f64e3e5c6b02c5b820"></span>

## <span class="permalink">[◆ ](#aba60354728e2f7f64e3e5c6b02c5b820)</span>get_ptr() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename PointerType , typename std::enable_if\<
std::is_pointer\< PointerType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
= 0\>

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
<td class="memname">auto <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_ptr</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>-&gt;
decltype(std::declval&lt;basic_json_t&amp;&gt;().get_impl_ptr(std::declval&lt;PointerType&gt;()))</td>
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

get a pointer value (implicit)

See also  
<https://json.nlohmann.me/api/basic_json/get_ptr/>

</div>

</div>

<span id="a3697078e748abc4a99c23e36e321b439"></span>

## <span class="permalink">[◆ ](#a3697078e748abc4a99c23e36e321b439)</span>get_ref() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename ReferenceType , typename std::enable_if\<
std::is_reference\< ReferenceType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
= 0\>

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
<td class="memname">ReferenceType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_ref</td>
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

get a reference value (implicit)

See also  
<https://json.nlohmann.me/api/basic_json/get_ref/>

</div>

</div>

<span id="a39c5dbafcc6eef79143c251096827549"></span>

## <span class="permalink">[◆ ](#a39c5dbafcc6eef79143c251096827549)</span>get_ref() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename ReferenceType , typename std::enable_if\<
std::is_reference\< ReferenceType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&&std::is_const\< typename std::remove_reference\< ReferenceType
\><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
= 0\>

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
<td class="memname">ReferenceType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_ref</td>
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

get a reference value (implicit)

See also  
<https://json.nlohmann.me/api/basic_json/get_ref/>

</div>

</div>

<span id="a8773ee34154b4f492549f5496c640ce5"></span>

## <span class="permalink">[◆ ](#a8773ee34154b4f492549f5496c640ce5)</span>get_to()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename ValueType , detail::enable_if_t\<
\!<a href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>\< ValueType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>
&&<a href="structdetail_1_1has__from__json.html"
class="el">detail::has_from_json</a>\< basic_json_t, ValueType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname">ValueType &amp; <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::get_to</td>
<td>(</td>
<td class="paramtype">ValueType &amp;</td>
<td class="paramname"><span class="paramname"><em>v</em></span></td>
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

get a value (explicit)

See also  
<https://json.nlohmann.me/api/basic_json/get_to/>

</div>

</div>

<span id="aaf55c485c75ddd7bd5f9791e59d3aec7"></span>

## <span class="permalink">[◆ ](#aaf55c485c75ddd7bd5f9791e59d3aec7)</span>insert() <span class="overload">\[1/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::insert</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span
class="paramname"><em>last</em></span> )</td>
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

inserts range of elements into object

See also  
<https://json.nlohmann.me/api/basic_json/insert/>

</div>

</div>

<span id="ae5da62116a40a0f86e87f11fdd54e9f0"></span>

## <span class="permalink">[◆ ](#ae5da62116a40a0f86e87f11fdd54e9f0)</span>insert() <span class="overload">\[2/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::insert</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>pos</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span> )</td>
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

inserts element into array

See also  
<https://json.nlohmann.me/api/basic_json/insert/>

</div>

</div>

<span id="a7f3817060c2bec896a99cb2c236b9c27"></span>

## <span class="permalink">[◆ ](#a7f3817060c2bec896a99cb2c236b9c27)</span>insert() <span class="overload">\[3/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::insert</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>pos</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span> )</td>
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

inserts element into array

See also  
<https://json.nlohmann.me/api/basic_json/insert/>

</div>

</div>

<span id="a68e1707248a00a2608a304da5ae5c911"></span>

## <span class="permalink">[◆ ](#a68e1707248a00a2608a304da5ae5c911)</span>insert() <span class="overload">\[4/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::insert</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>pos</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span
class="paramname"><em>last</em></span> )</td>
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

inserts range of elements into array

See also  
<https://json.nlohmann.me/api/basic_json/insert/>

</div>

</div>

<span id="abdfee6a3db80431a24c68bfaf038c47d"></span>

## <span class="permalink">[◆ ](#abdfee6a3db80431a24c68bfaf038c47d)</span>insert() <span class="overload">\[5/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::insert</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>pos</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a></td>
<td class="paramname"><span
class="paramname"><em>ilist</em></span> )</td>
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

inserts elements from initializer list into array

See also  
<https://json.nlohmann.me/api/basic_json/insert/>

</div>

</div>

<span id="a47b623200562da188886a385c716d101"></span>

## <span class="permalink">[◆ ](#a47b623200562da188886a385c716d101)</span>insert() <span class="overload">\[6/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::insert</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>pos</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a></td>
<td class="paramname"><span class="paramname"><em>cnt</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span> )</td>
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

inserts copies of element into array

See also  
<https://json.nlohmann.me/api/basic_json/insert/>

</div>

</div>

<span id="af8c5ca19d22a32054452470669c43bb9"></span>

## <span class="permalink">[◆ ](#af8c5ca19d22a32054452470669c43bb9)</span>insert_iterator()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename... Args\>

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
<td class="memname"><a href="#ae206a491161d043f8efaa1330f1ccf97"
class="el">iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::insert_iterator</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>pos</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">Args &amp;&amp;...</td>
<td class="paramname"><span
class="paramname"><em>args</em></span> )</td>
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

Helper for insertion of an iterator

Note  
: This uses std::distance to support GCC 4.8, see
<https://github.com/nlohmann/json/pull/1257>

</div>

</div>

<span id="a184ba4a6b47e6da3703af19349bd776f"></span>

## <span class="permalink">[◆ ](#a184ba4a6b47e6da3703af19349bd776f)</span>is_array()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_array</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is an array

See also  
<https://json.nlohmann.me/api/basic_json/is_array/>

</div>

</div>

<span id="abbdd993df08641faa3e24b5d2151e8f8"></span>

## <span class="permalink">[◆ ](#abbdd993df08641faa3e24b5d2151e8f8)</span>is_binary()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_binary</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is a binary array

See also  
<https://json.nlohmann.me/api/basic_json/is_binary/>

</div>

</div>

<span id="acfe2e3c359b545f8edbb72f6bd78718c"></span>

## <span class="permalink">[◆ ](#acfe2e3c359b545f8edbb72f6bd78718c)</span>is_boolean()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_boolean</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is a boolean

See also  
<https://json.nlohmann.me/api/basic_json/is_boolean/>

</div>

</div>

<span id="a39e4946a414cc978b88939ed1b343d46"></span>

## <span class="permalink">[◆ ](#a39e4946a414cc978b88939ed1b343d46)</span>is_discarded()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_discarded</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is discarded

See also  
<https://json.nlohmann.me/api/basic_json/is_discarded/>

</div>

</div>

<span id="ad8789d0a365d5afaab61e7492908d8b2"></span>

## <span class="permalink">[◆ ](#ad8789d0a365d5afaab61e7492908d8b2)</span>is_null()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_null</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is null

See also  
<https://json.nlohmann.me/api/basic_json/is_null/>

</div>

</div>

<span id="aacf244be5088fb183f4ba21a66af9631"></span>

## <span class="permalink">[◆ ](#aacf244be5088fb183f4ba21a66af9631)</span>is_number()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_number</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is a number

See also  
<https://json.nlohmann.me/api/basic_json/is_number/>

</div>

</div>

<span id="a8d5bb82dfc8cceae1753b52a588eef92"></span>

## <span class="permalink">[◆ ](#a8d5bb82dfc8cceae1753b52a588eef92)</span>is_number_float()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_number_float</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is a floating-point number

See also  
<https://json.nlohmann.me/api/basic_json/is_number_float/>

</div>

</div>

<span id="a2330e35cda16540058fef090abc709bf"></span>

## <span class="permalink">[◆ ](#a2330e35cda16540058fef090abc709bf)</span>is_number_integer()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_number_integer</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is an integer number

See also  
<https://json.nlohmann.me/api/basic_json/is_number_integer/>

</div>

</div>

<span id="a4de72635745144ee519157d23fe7189a"></span>

## <span class="permalink">[◆ ](#a4de72635745144ee519157d23fe7189a)</span>is_number_unsigned()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_number_unsigned</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is an unsigned integer number

See also  
<https://json.nlohmann.me/api/basic_json/is_number_unsigned/>

</div>

</div>

<span id="af355a2b131068acf3d623eb6d80a711c"></span>

## <span class="permalink">[◆ ](#af355a2b131068acf3d623eb6d80a711c)</span>is_object()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_object</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is an object

See also  
<https://json.nlohmann.me/api/basic_json/is_object/>

</div>

</div>

<span id="ad650dd5a7e019b970abce3d8864b5654"></span>

## <span class="permalink">[◆ ](#ad650dd5a7e019b970abce3d8864b5654)</span>is_primitive()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_primitive</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether type is primitive

See also  
<https://json.nlohmann.me/api/basic_json/is_primitive/>

</div>

</div>

<span id="a007ecebde9a7d40714e300ce0ff52908"></span>

## <span class="permalink">[◆ ](#a007ecebde9a7d40714e300ce0ff52908)</span>is_string()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_string</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether value is a string

See also  
<https://json.nlohmann.me/api/basic_json/is_string/>

</div>

</div>

<span id="a2d3a5f8761bc6f163f4119bddaf7b092"></span>

## <span class="permalink">[◆ ](#a2d3a5f8761bc6f163f4119bddaf7b092)</span>is_structured()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::is_structured</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return whether type is structured

See also  
<https://json.nlohmann.me/api/basic_json/is_structured/>

</div>

</div>

<span id="a3f2fdaf6048ea339c901b5208b93a64d"></span>

## <span class="permalink">[◆ ](#a3f2fdaf6048ea339c901b5208b93a64d)</span>items() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">iteration_proxy&lt; <a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
&gt; <a href="classbasic__json.html" class="el">basic_json</a>&lt;
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::items</td>
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

helper to access iterator member functions in range-based for

See also  
<https://json.nlohmann.me/api/basic_json/items/>

</div>

</div>

<span id="ac12884e86980aa85b6a9ffbb8b84de6a"></span>

## <span class="permalink">[◆ ](#ac12884e86980aa85b6a9ffbb8b84de6a)</span>items() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">iteration_proxy&lt; <a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> &gt;
<a href="classbasic__json.html" class="el">basic_json</a>&lt;
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::items</td>
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

helper to access iterator member functions in range-based for

See also  
<https://json.nlohmann.me/api/basic_json/items/>

</div>

</div>

<span id="a7c0314258e5347eade0c6851017bf5a5"></span>

## <span class="permalink">[◆ ](#a7c0314258e5347eade0c6851017bf5a5)</span>iterator_wrapper() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static iteration_proxy&lt; <a
href="#a1f5af3d9d06d43b91fefe1767794b1e8" class="el">const_iterator</a>
&gt; <a href="classbasic__json.html" class="el">basic_json</a>&lt;
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::iterator_wrapper</td>
<td>(</td>
<td class="paramtype"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a></td>
<td class="paramname"><span class="paramname"><em>ref</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">static</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

wrapper to access iterator member functions in range-based for

See also  
<https://json.nlohmann.me/api/basic_json/items/>

<!-- -->

**<a href="deprecated.html#_deprecated000002" class="el">Deprecated</a>**  
This function is deprecated since 3.1.0 and will be removed in version
4.0.0 of the library. Please use
<a href="#ac12884e86980aa85b6a9ffbb8b84de6a" class="el">items()</a>
instead; that is, replace `json::iterator_wrapper(j)` with `j.items()`.

</div>

</div>

<span id="ab8b4e0acdea49e5f0a77abdf1ce465d2"></span>

## <span class="permalink">[◆ ](#ab8b4e0acdea49e5f0a77abdf1ce465d2)</span>iterator_wrapper() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static iteration_proxy&lt; <a
href="#ae206a491161d043f8efaa1330f1ccf97" class="el">iterator</a> &gt;
<a href="classbasic__json.html" class="el">basic_json</a>&lt;
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::iterator_wrapper</td>
<td>(</td>
<td class="paramtype"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a></td>
<td class="paramname"><span class="paramname"><em>ref</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">static</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

wrapper to access iterator member functions in range-based for

See also  
<https://json.nlohmann.me/api/basic_json/items/>

<!-- -->

**<a href="deprecated.html#_deprecated000001" class="el">Deprecated</a>**  
This function is deprecated since 3.1.0 and will be removed in version
4.0.0 of the library. Please use
<a href="#ac12884e86980aa85b6a9ffbb8b84de6a" class="el">items()</a>
instead; that is, replace `json::iterator_wrapper(j)` with `j.items()`.

</div>

</div>

<span id="a380f98b02e7d50cf28af056a6ad8ffe6"></span>

## <span class="permalink">[◆ ](#a380f98b02e7d50cf28af056a6ad8ffe6)</span>max_size()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::max_size</td>
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

returns the maximum possible number of elements

See also  
<https://json.nlohmann.me/api/basic_json/max_size/>

</div>

</div>

<span id="a8676ac2433fe299b8d420f00a0741395"></span>

## <span class="permalink">[◆ ](#a8676ac2433fe299b8d420f00a0741395)</span>merge_patch()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::merge_patch</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span
class="paramname"><em>apply_patch</em></span></td>
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

applies a JSON Merge Patch

See also  
<https://json.nlohmann.me/api/basic_json/merge_patch/>

</div>

</div>

<span id="a7b435c2ed2db99cb1daa78ae3c6c4580"></span>

## <span class="permalink">[◆ ](#a7b435c2ed2db99cb1daa78ae3c6c4580)</span>meta()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::meta</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

returns version information on the library

See also  
<https://json.nlohmann.me/api/basic_json/meta/>

</div>

</div>

<span id="a50a0e8dacc0f4aa12162da666595e6fd"></span>

## <span class="permalink">[◆ ](#a50a0e8dacc0f4aa12162da666595e6fd)</span>object()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static JSON_HEDLEY_WARN_UNUSED_RESULT <a
href="classbasic__json.html" class="el">basic_json</a> <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::object</td>
<td>(</td>
<td class="paramtype"><a href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a></td>
<td class="paramname"><span class="paramname"><em>init</em><span
class="paramdefsep"> = </span><span
class="paramdefval">{}</span></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

explicitly create an object from an initializer list

See also  
<https://json.nlohmann.me/api/basic_json/object/>

</div>

</div>

<span id="a70e1c8fbdb62f3f8bc04e69eef9cc9cf"></span>

## <span class="permalink">[◆ ](#a70e1c8fbdb62f3f8bc04e69eef9cc9cf)</span>operator value_t()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a></td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return the type of the JSON value (implicit)

See also  
<https://json.nlohmann.me/api/basic_json/operator_value_t/>

</div>

</div>

<span id="a747e3e19891143442991bbdb33edb917"></span>

## <span class="permalink">[◆ ](#a747e3e19891143442991bbdb33edb917)</span>operator ValueType()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename ValueType , typename std::enable_if\<
<a href="structdetail_1_1conjunction.html"
class="el">detail::conjunction</a>\<
<a href="structdetail_1_1negation.html" class="el">detail::negation</a>\<
std::is_pointer\< ValueType \> \>,
<a href="structdetail_1_1negation.html" class="el">detail::negation</a>\<
std::is_same\< ValueType, std::nullptr_t \> \>,
<a href="structdetail_1_1negation.html" class="el">detail::negation</a>\<
std::is_same\< ValueType,
<a href="classdetail_1_1json__ref.html" class="el">detail::json_ref</a>\<
<a href="classbasic__json.html" class="el">basic_json</a> \> \> \>,
<a href="structdetail_1_1negation.html" class="el">detail::negation</a>\<
std::is_same\< ValueType, typename string_t::value_type \> \>,
<a href="structdetail_1_1negation.html" class="el">detail::negation</a>\<
<a href="structdetail_1_1is__basic__json.html"
class="el">detail::is_basic_json</a>\< ValueType \> \>,
<a href="structdetail_1_1negation.html" class="el">detail::negation</a>\<
std::is_same\< ValueType, std::initializer_list\< typename
string_t::value_type \> \> \>,
<a href="structdetail_1_1is__detected__lazy.html"
class="el">detail::is_detected_lazy</a>\< detail::get_template_function,
const basic_json_t &, ValueType \>
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \><a href="#ac5e52dbb3cb4e9fcabd1b88c37985aef" class="el">::type</a>
= 0\>

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
<td class="memname">JSON_EXPLICIT <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator ValueType</td>
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

get a value (implicit)

Implicit type conversion between the JSON value and a compatible value.
The call is realized by calling
<a href="#a0ab31c7fdbab38898070bca01637f886" class="el">get() const</a>.

Template Parameters  
|           |                                                                                                                                                                                                                                                                                                                                                                                           |
|-----------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| ValueType | non-pointer type compatible to the JSON value, for instance `int` for JSON integer numbers, `bool` for JSON booleans, or `std::vector` types for JSON arrays. The character type of <a href="#ac8c9cde32146e6c343e1960aefc11fba" class="el">string_t</a> as well as an initializer list of this type is excluded to avoid ambiguities as these types implicitly convert to `std::string`. |

<!-- -->

Returns  
copy of the JSON value, converted to type *ValueType*

<!-- -->

Exceptions  
|                |                                                                                                                                                                |
|----------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| type_error.302 | in case passed type *ValueType* is incompatible to the JSON value type (e.g., the JSON value is of type boolean, but a string is requested); see example below |

@complexity Linear in the size of the JSON value.

@liveexample{The example below shows several conversions from JSON
values to other types. There a few things to note: (1) Floating-point
numbers can be converted to integers\\ (2) A JSON array can be converted
to a standard `std::vector<short>`\\ (3) A JSON object can be converted
to C++ associative containers such as
`std::unordered_map<std::string\, json>`.,operator\_\_ValueType}

Since  
version 1.0.0

</div>

</div>

<span id="ac444a656905e3f207ad9fc19275faf25"></span>

## <span class="permalink">[◆ ](#ac444a656905e3f207ad9fc19275faf25)</span>operator+=() <span class="overload">\[1/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator+=</td>
<td>(</td>
<td class="paramtype"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

add an object to an array

See also  
<https://json.nlohmann.me/api/basic_json/operator+=/>

</div>

</div>

<span id="a4475e951f51506808ca6fe7e77eb38ca"></span>

## <span class="permalink">[◆ ](#a4475e951f51506808ca6fe7e77eb38ca)</span>operator+=() <span class="overload">\[2/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator+=</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

add an object to an array

See also  
<https://json.nlohmann.me/api/basic_json/operator+=/>

</div>

</div>

<span id="a996a58d60e4badd9beadfd3e2e7ffdc1"></span>

## <span class="permalink">[◆ ](#a996a58d60e4badd9beadfd3e2e7ffdc1)</span>operator+=() <span class="overload">\[3/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator+=</td>
<td>(</td>
<td class="paramtype">const typename object_t::value_type &amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

add an object to an object

See also  
<https://json.nlohmann.me/api/basic_json/operator+=/>

</div>

</div>

<span id="a3af74b651da5642cd8b77a3ecc635331"></span>

## <span class="permalink">[◆ ](#a3af74b651da5642cd8b77a3ecc635331)</span>operator+=() <span class="overload">\[4/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator+=</td>
<td>(</td>
<td class="paramtype"><a href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a></td>
<td class="paramname"><span class="paramname"><em>init</em></span></td>
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

add an object to an object

See also  
<https://json.nlohmann.me/api/basic_json/operator+=/>

</div>

</div>

<span id="ab8154023fc24515222c9cf61d677871e"></span>

## <span class="permalink">[◆ ](#ab8154023fc24515222c9cf61d677871e)</span>operator=()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a> &amp; <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator=</td>
<td>(</td>
<td class="paramtype"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;</td>
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

copy assignment

See also  
<https://json.nlohmann.me/api/basic_json/operator=/>

</div>

</div>

<span id="a274307158c76b820701077dd471cc75b"></span>

## <span class="permalink">[◆ ](#a274307158c76b820701077dd471cc75b)</span>operator\[\]() <span class="overload">\[1/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype">const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;</td>
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

access specified element via JSON Pointer

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="a6aedef6230f66b1271d71a6f77e7fed3"></span>

## <span class="permalink">[◆ ](#a6aedef6230f66b1271d71a6f77e7fed3)</span>operator\[\]() <span class="overload">\[2/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype">const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>ptr</em></span></td>
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

access specified element via JSON Pointer

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="a3d3ea17617e94886f3e86ac921095a13"></span>

## <span class="permalink">[◆ ](#a3d3ea17617e94886f3e86ac921095a13)</span>operator\[\]() <span class="overload">\[3/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="a06fe1a1c7aa8c193c73aa40b17ee5f68"></span>

## <span class="permalink">[◆ ](#a06fe1a1c7aa8c193c73aa40b17ee5f68)</span>operator\[\]() <span class="overload">\[4/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="a2e11a3f2a234cd296b515173b6a3b986"></span>

## <span class="permalink">[◆ ](#a2e11a3f2a234cd296b515173b6a3b986)</span>operator\[\]() <span class="overload">\[5/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class KeyType , detail::enable_if_t\<
detail::is_usable_as_basic_json_key_type\< basic_json_t, KeyType
\><a href="#a80c2436388fd16a1529ce9afce8229ef" class="el">::value</a>,
int \> = 0\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="ab4f511db82b9d5eba85d5b2b8e1c6dbb"></span>

## <span class="permalink">[◆ ](#ab4f511db82b9d5eba85d5b2b8e1c6dbb)</span>operator\[\]() <span class="overload">\[6/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a></td>
<td class="paramname"><span class="paramname"><em>idx</em></span></td>
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

access specified array element

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="ae369d1565482903c3af75bf99467776b"></span>

## <span class="permalink">[◆ ](#ae369d1565482903c3af75bf99467776b)</span>operator\[\]() <span class="overload">\[7/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a></td>
<td class="paramname"><span class="paramname"><em>idx</em></span></td>
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

access specified array element

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="a9c5825034534bf9256a33d2dd995c25a"></span>

## <span class="permalink">[◆ ](#a9c5825034534bf9256a33d2dd995c25a)</span>operator\[\]() <span class="overload">\[8/8\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator[]</td>
<td>(</td>
<td class="paramtype">typename object_t::key_type</td>
<td class="paramname"><span class="paramname"><em>key</em></span></td>
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

access specified object element

See also  
<https://json.nlohmann.me/api/basic_json/operator%5B%5D/>

</div>

</div>

<span id="a145a004c0a2fa5be84b260ecc98ab5d9"></span>

## <span class="permalink">[◆ ](#a145a004c0a2fa5be84b260ecc98ab5d9)</span>patch()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::patch</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span
class="paramname"><em>json_patch</em></span></td>
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

applies a JSON patch to a copy of the current object

See also  
<https://json.nlohmann.me/api/basic_json/patch/>

</div>

</div>

<span id="a693812b31e106dec9166e93d8f6dd7d7"></span>

## <span class="permalink">[◆ ](#a693812b31e106dec9166e93d8f6dd7d7)</span>patch_inplace()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::patch_inplace</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span
class="paramname"><em>json_patch</em></span></td>
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

applies a JSON patch in-place without copying the object

See also  
<https://json.nlohmann.me/api/basic_json/patch/>

</div>

</div>

<span id="a3d13acce4e49e0d5ee768643a7b89010"></span>

## <span class="permalink">[◆ ](#a3d13acce4e49e0d5ee768643a7b89010)</span>push_back() <span class="overload">\[1/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::push_back</td>
<td>(</td>
<td class="paramtype"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

add an object to an array

See also  
<https://json.nlohmann.me/api/basic_json/push_back/>

</div>

</div>

<span id="aca01ca3a9bc310e5c5d067a39dca6933"></span>

## <span class="permalink">[◆ ](#aca01ca3a9bc310e5c5d067a39dca6933)</span>push_back() <span class="overload">\[2/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::push_back</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

add an object to an array

See also  
<https://json.nlohmann.me/api/basic_json/push_back/>

</div>

</div>

<span id="af17fe93acad9b0b991600225dabd42be"></span>

## <span class="permalink">[◆ ](#af17fe93acad9b0b991600225dabd42be)</span>push_back() <span class="overload">\[3/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::push_back</td>
<td>(</td>
<td class="paramtype">const typename object_t::value_type &amp;</td>
<td class="paramname"><span class="paramname"><em>val</em></span></td>
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

add an object to an object

See also  
<https://json.nlohmann.me/api/basic_json/push_back/>

</div>

</div>

<span id="a4fcacc90f17b156f0b6c8e0430624853"></span>

## <span class="permalink">[◆ ](#a4fcacc90f17b156f0b6c8e0430624853)</span>push_back() <span class="overload">\[4/4\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::push_back</td>
<td>(</td>
<td class="paramtype"><a href="#a6dc15c0f6c156e43c956ad6ca0c19de3"
class="el">initializer_list_t</a></td>
<td class="paramname"><span class="paramname"><em>init</em></span></td>
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

add an object to an object

See also  
<https://json.nlohmann.me/api/basic_json/push_back/>

</div>

</div>

<span id="a4ef4aee2259af5183267f6e8f774d0eb"></span>

## <span class="permalink">[◆ ](#a4ef4aee2259af5183267f6e8f774d0eb)</span>rbegin() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::rbegin</td>
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

returns an iterator to the reverse-beginning

See also  
<https://json.nlohmann.me/api/basic_json/rbegin/>

</div>

</div>

<span id="a11da8db436685032e97563cbb7490ff5"></span>

## <span class="permalink">[◆ ](#a11da8db436685032e97563cbb7490ff5)</span>rbegin() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#aedc059cdae078322bb0d434b2127d1cf"
class="el">reverse_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::rbegin</td>
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

returns an iterator to the reverse-beginning

See also  
<https://json.nlohmann.me/api/basic_json/rbegin/>

</div>

</div>

<span id="ae81c3b38089a63d988a1efefe3ebc4bf"></span>

## <span class="permalink">[◆ ](#ae81c3b38089a63d988a1efefe3ebc4bf)</span>rend() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a240f61567d8acffe831532f4f9b379cb"
class="el">const_reverse_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::rend</td>
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

returns an iterator to the reverse-end

See also  
<https://json.nlohmann.me/api/basic_json/rend/>

</div>

</div>

<span id="a8d8855a8c04ee7986ae8bab283c4f0de"></span>

## <span class="permalink">[◆ ](#a8d8855a8c04ee7986ae8bab283c4f0de)</span>rend() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#aedc059cdae078322bb0d434b2127d1cf"
class="el">reverse_iterator</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::rend</td>
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

returns an iterator to the reverse-end

See also  
<https://json.nlohmann.me/api/basic_json/rend/>

</div>

</div>

<span id="ad018e709338c810c56eaad606186a77e"></span>

## <span class="permalink">[◆ ](#ad018e709338c810c56eaad606186a77e)</span>sax_parse() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<typename SAX \>

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
<td class="memname">static bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::sax_parse</td>
<td>(</td>
<td class="paramtype"><a href="classdetail_1_1span__input__adapter.html"
class="el">detail::span_input_adapter</a> &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">SAX *</td>
<td class="paramname"><span class="paramname"><em>sax</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a></td>
<td class="paramname"><span class="paramname"><em>format</em><span
class="paramdefsep"> = </span><span
class="paramdefval">input_format_t::json</span>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>ignore_comments</em><span class="paramdefsep"> =
</span><span class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

generate SAX events

See also  
<https://json.nlohmann.me/api/basic_json/sax_parse/>

<!-- -->

**<a href="deprecated.html#_deprecated000003" class="el">Deprecated</a>**  
This function is deprecated since 3.8.0 and will be removed in version
4.0.0 of the library. Please use sax_parse(ptr, ptr + len) instead.

</div>

</div>

<span id="a94cbf1844fef86e9301282ad8ca0f822"></span>

## <span class="permalink">[◆ ](#a94cbf1844fef86e9301282ad8ca0f822)</span>sax_parse() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class IteratorType , class SAX \>

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
<td class="memname">static bool <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::sax_parse</td>
<td>(</td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">IteratorType</td>
<td class="paramname"><span class="paramname"><em>last</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">SAX *</td>
<td class="paramname"><span class="paramname"><em>sax</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a
href="namespacedetail.html#a0ab3b338d0eadc6890b72cccef0ea04f"
class="el">input_format_t</a></td>
<td class="paramname"><span class="paramname"><em>format</em><span
class="paramdefsep"> = </span><span
class="paramdefval">input_format_t::json</span>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span class="paramdefval">true</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span
class="paramname"><em>ignore_comments</em><span class="paramdefsep"> =
</span><span class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

generate SAX events

See also  
<https://json.nlohmann.me/api/basic_json/sax_parse/>

</div>

</div>

<span id="a086cbfd1ad4ba83a8127c87467a92f47"></span>

## <span class="permalink">[◆ ](#a086cbfd1ad4ba83a8127c87467a92f47)</span>size()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="#a2c086af43cf06b1b7118f5351cab3ec9"
class="el">size_type</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::size</td>
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

returns the number of elements

See also  
<https://json.nlohmann.me/api/basic_json/size/>

</div>

</div>

<span id="ac1e32c91d5e641c25c52486341f5a9db"></span>

## <span class="permalink">[◆ ](#ac1e32c91d5e641c25c52486341f5a9db)</span>swap() <span class="overload">\[1/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::swap</td>
<td>(</td>
<td class="paramtype"><a href="#a60644b7dccc409e6b367361d37841333"
class="el">array_t</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

exchanges the values

See also  
<https://json.nlohmann.me/api/basic_json/swap/>

</div>

</div>

<span id="a3624e1bbc880bd196e3fa4a220554755"></span>

## <span class="permalink">[◆ ](#a3624e1bbc880bd196e3fa4a220554755)</span>swap() <span class="overload">\[2/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::swap</td>
<td>(</td>
<td class="paramtype"><a href="#a4c1b5ea434b48cf31097617bb1c1ca1e"
class="el">binary_t</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

exchanges the values

See also  
<https://json.nlohmann.me/api/basic_json/swap/>

</div>

</div>

<span id="abc9ea6dec87e254de172c2bfeaeef7df"></span>

## <span class="permalink">[◆ ](#abc9ea6dec87e254de172c2bfeaeef7df)</span>swap() <span class="overload">\[3/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::swap</td>
<td>(</td>
<td class="paramtype"><a href="#a67bb0d6dfaf1709d918b7107f5b94a3d"
class="el">object_t</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

exchanges the values

See also  
<https://json.nlohmann.me/api/basic_json/swap/>

</div>

</div>

<span id="a1a94e5348ebb34852092d51a44e21d24"></span>

## <span class="permalink">[◆ ](#a1a94e5348ebb34852092d51a44e21d24)</span>swap() <span class="overload">\[4/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::swap</td>
<td>(</td>
<td class="paramtype"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a></td>
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

exchanges the values

See also  
<https://json.nlohmann.me/api/basic_json/swap/>

</div>

</div>

<span id="aeac8816c033c659ef8b43a5f03d5f553"></span>

## <span class="permalink">[◆ ](#aeac8816c033c659ef8b43a5f03d5f553)</span>swap() <span class="overload">\[5/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::swap</td>
<td>(</td>
<td class="paramtype"><a href="#ac8c9cde32146e6c343e1960aefc11fba"
class="el">string_t</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

exchanges the values

See also  
<https://json.nlohmann.me/api/basic_json/swap/>

</div>

</div>

<span id="aa987625005046c81e7748dca1e84a0e3"></span>

## <span class="permalink">[◆ ](#aa987625005046c81e7748dca1e84a0e3)</span>swap() <span class="overload">\[6/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::swap</td>
<td>(</td>
<td class="paramtype">typename binary_t::container_type &amp;</td>
<td class="paramname"><span class="paramname"><em>other</em></span></td>
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

exchanges the values

See also  
<https://json.nlohmann.me/api/basic_json/swap/>

</div>

</div>

<span id="a0912e7738f47e604ac96fe8cdde1a96e"></span>

## <span class="permalink">[◆ ](#a0912e7738f47e604ac96fe8cdde1a96e)</span>to_bjdata() <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static std::vector&lt; std::uint8_t &gt; <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::to_bjdata</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_size</em><span
class="paramdefsep"> = </span><span class="paramdefval">false</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_type</em><span
class="paramdefsep"> = </span><span
class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a BJData serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_bjdata/>

</div>

</div>

<span id="a1fa9828fcbe4e33c9a036834564f7dbd"></span>

## <span class="permalink">[◆ ](#a1fa9828fcbe4e33c9a036834564f7dbd)</span>to_bjdata() <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_bjdata</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_size</em><span
class="paramdefsep"> = </span><span class="paramdefval">false</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_type</em><span
class="paramdefsep"> = </span><span
class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a BJData serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_bjdata/>

</div>

</div>

<span id="a2736658c256401394059599f97139ee9"></span>

## <span class="permalink">[◆ ](#a2736658c256401394059599f97139ee9)</span>to_bjdata() <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_bjdata</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_size</em><span
class="paramdefsep"> = </span><span class="paramdefval">false</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_type</em><span
class="paramdefsep"> = </span><span
class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a BJData serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_bjdata/>

</div>

</div>

<span id="a4ea6478022ab79b47216fda4b53ae1d4"></span>

## <span class="permalink">[◆ ](#a4ea6478022ab79b47216fda4b53ae1d4)</span>to_bson() <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static std::vector&lt; std::uint8_t &gt; <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::to_bson</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a BSON serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_bson/>

</div>

</div>

<span id="a71794547dde3dd67e444aa45131ca861"></span>

## <span class="permalink">[◆ ](#a71794547dde3dd67e444aa45131ca861)</span>to_bson() <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_bson</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a BSON serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_bson/>

</div>

</div>

<span id="afd718b745034da1f4eea4c69f45cebda"></span>

## <span class="permalink">[◆ ](#afd718b745034da1f4eea4c69f45cebda)</span>to_bson() <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_bson</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a BSON serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_bson/>

</div>

</div>

<span id="a7c47280dbbb39288384058b771f8eec6"></span>

## <span class="permalink">[◆ ](#a7c47280dbbb39288384058b771f8eec6)</span>to_cbor() <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static std::vector&lt; std::uint8_t &gt; <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::to_cbor</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a CBOR serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_cbor/>

</div>

</div>

<span id="af31f5ee23264fb21bd31e16bc27adab2"></span>

## <span class="permalink">[◆ ](#af31f5ee23264fb21bd31e16bc27adab2)</span>to_cbor() <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_cbor</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a CBOR serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_cbor/>

</div>

</div>

<span id="a706ccab0e47bd75cd36911db84451cd1"></span>

## <span class="permalink">[◆ ](#a706ccab0e47bd75cd36911db84451cd1)</span>to_cbor() <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_cbor</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a CBOR serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_cbor/>

</div>

</div>

<span id="aea0ea0404f7ea72f66b0d5d0032b1367"></span>

## <span class="permalink">[◆ ](#aea0ea0404f7ea72f66b0d5d0032b1367)</span>to_msgpack() <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static std::vector&lt; std::uint8_t &gt; <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::to_msgpack</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a MessagePack serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_msgpack/>

</div>

</div>

<span id="a51da13ff4e850d4ad1cf23ce4f3b9e4a"></span>

## <span class="permalink">[◆ ](#a51da13ff4e850d4ad1cf23ce4f3b9e4a)</span>to_msgpack() <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_msgpack</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a MessagePack serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_msgpack/>

</div>

</div>

<span id="af46fdac62559d4c38e623d99ad7064e9"></span>

## <span class="permalink">[◆ ](#af46fdac62559d4c38e623d99ad7064e9)</span>to_msgpack() <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_msgpack</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a MessagePack serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_msgpack/>

</div>

</div>

<span id="a906e81d488ebcac169960a1d48f6b065"></span>

## <span class="permalink">[◆ ](#a906e81d488ebcac169960a1d48f6b065)</span>to_ubjson() <span class="overload">\[1/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static std::vector&lt; std::uint8_t &gt; <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::to_ubjson</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_size</em><span
class="paramdefsep"> = </span><span class="paramdefval">false</span>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_type</em><span
class="paramdefsep"> = </span><span
class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a UBJSON serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_ubjson/>

</div>

</div>

<span id="ab8b6c6cc3ba1b49af628fe0ec8c73b77"></span>

## <span class="permalink">[◆ ](#ab8b6c6cc3ba1b49af628fe0ec8c73b77)</span>to_ubjson() <span class="overload">\[2/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_ubjson</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; char &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_size</em><span
class="paramdefsep"> = </span><span class="paramdefval">false</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_type</em><span
class="paramdefsep"> = </span><span
class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a UBJSON serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_ubjson/>

</div>

</div>

<span id="ada3d71f1dcfea24465d364b815d11445"></span>

## <span class="permalink">[◆ ](#ada3d71f1dcfea24465d364b815d11445)</span>to_ubjson() <span class="overload">\[3/3\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">static void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::to_ubjson</td>
<td>(</td>
<td class="paramtype">const <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classdetail_1_1output__adapter.html"
class="el">detail::output_adapter</a>&lt; std::uint8_t &gt;</td>
<td class="paramname"><span class="paramname"><em>o</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_size</em><span
class="paramdefsep"> = </span><span class="paramdefval">false</span>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>use_type</em><span
class="paramdefsep"> = </span><span
class="paramdefval">false</span></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

create a UBJSON serialization of a given JSON value

See also  
<https://json.nlohmann.me/api/basic_json/to_ubjson/>

</div>

</div>

<span id="ac5e52dbb3cb4e9fcabd1b88c37985aef"></span>

## <span class="permalink">[◆ ](#ac5e52dbb3cb4e9fcabd1b88c37985aef)</span>type()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">constexpr <a
href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::type</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td>const</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span class="mlabel">constexpr</span><span
class="mlabel">noexcept</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

return the type of the JSON value (explicit)

See also  
<https://json.nlohmann.me/api/basic_json/type/>

</div>

</div>

<span id="a15b177614647598e238e15ab1cc889c7"></span>

## <span class="permalink">[◆ ](#a15b177614647598e238e15ab1cc889c7)</span>type_name()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">JSON_HEDLEY_RETURNS_NON_NULL const char * <a
href="classbasic__json.html" class="el">basic_json</a>&lt; ObjectType,
ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass &gt;::type_name</td>
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

return the type as string

See also  
<https://json.nlohmann.me/api/basic_json/type_name/>

</div>

</div>

<span id="abdb57996898f80522e9abbb5e1e61e46"></span>

## <span class="permalink">[◆ ](#abdb57996898f80522e9abbb5e1e61e46)</span>unflatten()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname"><a href="classbasic__json.html"
class="el">basic_json</a> <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::unflatten</td>
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

unflatten a previously flattened JSON value

See also  
<https://json.nlohmann.me/api/basic_json/unflatten/>

</div>

</div>

<span id="a4ea2b8cef5e4aba5b92d14e6ebe25936"></span>

## <span class="permalink">[◆ ](#a4ea2b8cef5e4aba5b92d14e6ebe25936)</span>update() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::update</td>
<td>(</td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>first</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="#a1f5af3d9d06d43b91fefe1767794b1e8"
class="el">const_iterator</a></td>
<td class="paramname"><span class="paramname"><em>last</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">bool</td>
<td class="paramname"><span
class="paramname"><em>merge_objects</em><span class="paramdefsep"> =
</span><span class="paramdefval">false</span></span> )</td>
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

updates a JSON object from another object, overwriting existing keys

See also  
<https://json.nlohmann.me/api/basic_json/update/>

</div>

</div>

<span id="a3819f393e82396782ccc22785575b01d"></span>

## <span class="permalink">[◆ ](#a3819f393e82396782ccc22785575b01d)</span>update() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::update</td>
<td>(</td>
<td class="paramtype"><a href="#a31370bb451b78198d42c86dd31955deb"
class="el">const_reference</a></td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">bool</td>
<td class="paramname"><span
class="paramname"><em>merge_objects</em><span class="paramdefsep"> =
</span><span class="paramdefval">false</span></span> )</td>
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

updates a JSON object from another object, overwriting existing keys

See also  
<https://json.nlohmann.me/api/basic_json/update/>

</div>

</div>

<span id="ac63045992eb552c11f77fefddd801591"></span>

## <span class="permalink">[◆ ](#ac63045992eb552c11f77fefddd801591)</span>value() <span class="overload">\[1/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class ValueType , detail::enable_if_t\<
<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>\< basic_json_t, ValueType \>::value
&&!std::is_same\<
<a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t\< ValueType \> \>::value, int
\> = 0\>

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
<td class="memname">ValueType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::value</td>
<td>(</td>
<td class="paramtype">const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>ptr</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const ValueType &amp;</td>
<td class="paramname"><span
class="paramname"><em>default_value</em></span> ) const</td>
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

access specified object element via JSON Pointer with default value

See also  
<https://json.nlohmann.me/api/basic_json/value/>

</div>

</div>

<span id="a1ab7b5edf8e5831195940f8d377a6ee3"></span>

## <span class="permalink">[◆ ](#a1ab7b5edf8e5831195940f8d377a6ee3)</span>value() <span class="overload">\[2/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class ValueType , class ReturnType = typename
value_return_type\<ValueType\>::type, detail::enable_if_t\<
<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>\< basic_json_t, ReturnType \>::value
&&!std::is_same\<
<a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t\< ValueType \> \>::value, int
\> = 0\>

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
<td class="memname">ReturnType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::value</td>
<td>(</td>
<td class="paramtype">const <a href="#afe66720a34c11920f359394a4430a16e"
class="el">json_pointer</a> &amp;</td>
<td class="paramname"><span class="paramname"><em>ptr</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">ValueType &amp;&amp;</td>
<td class="paramname"><span
class="paramname"><em>default_value</em></span> ) const</td>
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

access specified object element via JSON Pointer with default value

See also  
<https://json.nlohmann.me/api/basic_json/value/>

</div>

</div>

<span id="a80c2436388fd16a1529ce9afce8229ef"></span>

## <span class="permalink">[◆ ](#a80c2436388fd16a1529ce9afce8229ef)</span>value() <span class="overload">\[3/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class ValueType , detail::enable_if_t\<
\!<a href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>\<
<a href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> \>::value
&&<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>\< basic_json_t, ValueType \>::value
&&!std::is_same\<
<a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t\< ValueType \> \>::value, int
\> = 0\>

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
<td class="memname">ValueType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::value</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const ValueType &amp;</td>
<td class="paramname"><span
class="paramname"><em>default_value</em></span> ) const</td>
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

access specified object element with default value

See also  
<https://json.nlohmann.me/api/basic_json/value/>

</div>

</div>

<span id="a56244e0ed0943ad62faf61b06e7ba139"></span>

## <span class="permalink">[◆ ](#a56244e0ed0943ad62faf61b06e7ba139)</span>value() <span class="overload">\[4/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class ValueType , class ReturnType = typename
value_return_type\<ValueType\>::type, detail::enable_if_t\<
\!<a href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>\<
<a href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> \>::value
&&<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>\< basic_json_t, ReturnType \>::value
&&!std::is_same\<
<a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t\< ValueType \> \>::value, int
\> = 0\>

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
<td class="memname">ReturnType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::value</td>
<td>(</td>
<td class="paramtype">const typename object_t::key_type &amp;</td>
<td class="paramname"><span class="paramname"><em>key</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">ValueType &amp;&amp;</td>
<td class="paramname"><span
class="paramname"><em>default_value</em></span> ) const</td>
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

access specified object element with default value

See also  
<https://json.nlohmann.me/api/basic_json/value/>

</div>

</div>

<span id="acbe572bbfbd4687a7a9167465e4d41f2"></span>

## <span class="permalink">[◆ ](#acbe572bbfbd4687a7a9167465e4d41f2)</span>value() <span class="overload">\[5/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class ValueType , class KeyType , detail::enable_if_t\<
<a href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>\<
<a href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> \>::value
&&!detail::is_json_pointer\< KeyType \>::value
&&<a href="structdetail_1_1is__comparable.html"
class="el">is_comparable_with_object_key</a>\< KeyType \>::value
&&<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>\< basic_json_t, ValueType \>::value
&&!std::is_same\<
<a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t\< ValueType \> \>::value, int
\> = 0\>

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
<td class="memname">ValueType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::value</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const ValueType &amp;</td>
<td class="paramname"><span
class="paramname"><em>default_value</em></span> ) const</td>
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

access specified object element with default value

See also  
<https://json.nlohmann.me/api/basic_json/value/>

</div>

</div>

<span id="a694398741710ce1c22797ad47109898b"></span>

## <span class="permalink">[◆ ](#a694398741710ce1c22797ad47109898b)</span>value() <span class="overload">\[6/6\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

</div>

<div class="memtemplate">

template\<class ValueType , class KeyType , class ReturnType = typename
value_return_type\<ValueType\>::type, detail::enable_if_t\<
<a href="structdetail_1_1is__transparent.html"
class="el">detail::is_transparent</a>\<
<a href="#af12040e0663db54840d73d363979643a"
class="el">object_comparator_t</a> \>::value
&&!detail::is_json_pointer\< KeyType \>::value
&&<a href="structdetail_1_1is__comparable.html"
class="el">is_comparable_with_object_key</a>\< KeyType \>::value
&&<a href="structdetail_1_1is__getable.html"
class="el">detail::is_getable</a>\< basic_json_t, ReturnType \>::value
&&!std::is_same\<
<a href="namespacedetail.html#a917c3efabea8a20dc72d9ae2c673d632"
class="el">value_t</a>, detail::uncvref_t\< ValueType \> \>::value, int
\> = 0\>

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
<td class="memname">ReturnType <a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::value</td>
<td>(</td>
<td class="paramtype">KeyType &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>key</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">ValueType &amp;&amp;</td>
<td class="paramname"><span
class="paramname"><em>default_value</em></span> ) const</td>
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

access specified object element via JSON Pointer with default value

See also  
<https://json.nlohmann.me/api/basic_json/value/>

</div>

</div>

## Friends And Related Symbol Documentation

<span id="af9907af448f7ff794120033e132025f6"></span>

## <span class="permalink">[◆ ](#af9907af448f7ff794120033e132025f6)</span>operator\<\<

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">std::istream &amp; operator&lt;&lt;</td>
<td>(</td>
<td class="paramtype"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">std::istream &amp;</td>
<td class="paramname"><span class="paramname"><em>i</em></span> )</td>
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

deserialize from stream

See also  
<https://json.nlohmann.me/api/basic_json/operator_gtgt/>

<!-- -->

**<a href="deprecated.html#_deprecated000004" class="el">Deprecated</a>**  
This stream operator is deprecated since 3.0.0 and will be removed in
version 4.0.0 of the library. Please use
<a href="#aea0de29387d532e0bc5f2475cb83995d" class="el"
title="deserialize from stream">operator&gt;&gt;(std::istream&amp;,
basic_json&amp;)</a> instead; that is, replace calls like `j << i;` with
`i >> j;`.

</div>

</div>

<span id="aea0de29387d532e0bc5f2475cb83995d"></span>

## <span class="permalink">[◆ ](#aea0de29387d532e0bc5f2475cb83995d)</span>operator\>\>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">std::istream &amp; operator&gt;&gt;</td>
<td>(</td>
<td class="paramtype">std::istream &amp;</td>
<td class="paramname"><span class="paramname"><em>i</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="classbasic__json.html"
class="el">basic_json</a>&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass &gt;
&amp;</td>
<td class="paramname"><span class="paramname"><em>j</em></span> )</td>
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

deserialize from stream

See also  
<https://json.nlohmann.me/api/basic_json/operator_gtgt/>

</div>

</div>

<span id="a44c98b48b8a0b5e53087776fbb63961f"></span>

## <span class="permalink">[◆ ](#a44c98b48b8a0b5e53087776fbb63961f)</span>swap

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<template\< typename U, typename V, typename... Args \> class
ObjectType = std::map, template\< typename U, typename... Args \> class
ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template\< typename U \> class AllocatorType = std::allocator,
template\< typename T, typename SFINAE=void \> class JSONSerializer =
adl_serializer, class BinaryType = std::vector\<std::uint8_t\>, class
CustomBaseClass = void\>

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
<td class="memname">void swap</td>
<td>(</td>
<td class="paramtype"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a></td>
<td class="paramname"><span class="paramname"><em>left</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="#a6ca7bfb35987ce7cb8d27447cda5b80a"
class="el">reference</a></td>
<td class="paramname"><span
class="paramname"><em>right</em></span> )</td>
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

exchanges the values

See also  
<https://json.nlohmann.me/api/basic_json/swap/>

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
