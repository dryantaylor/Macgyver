---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Deprecated List"
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

<div>

<div class="header">

<div class="headertitle">

<div class="title">

Deprecated List

</div>

</div>

</div>

<div class="contents">

<div class="textblock">

Member <a href="classbasic__json.html#ab8b4e0acdea49e5f0a77abdf1ce465d2"
class="el">basic_json&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::iterator_wrapper</a> (reference ref) noexcept  
<span id="_deprecated000001" class="anchor"></span>This function is
deprecated since 3.1.0 and will be removed in version 4.0.0 of the
library. Please use
<a href="classbasic__json.html#ac12884e86980aa85b6a9ffbb8b84de6a"
class="el">items()</a> instead; that is, replace
`json::iterator_wrapper(j)` with `j.items()`.

Member <a href="classbasic__json.html#a7c0314258e5347eade0c6851017bf5a5"
class="el">basic_json&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::iterator_wrapper</a> (const_reference ref) noexcept  
<span id="_deprecated000002" class="anchor"></span>This function is
deprecated since 3.1.0 and will be removed in version 4.0.0 of the
library. Please use
<a href="classbasic__json.html#ac12884e86980aa85b6a9ffbb8b84de6a"
class="el">items()</a> instead; that is, replace
`json::iterator_wrapper(j)` with `j.items()`.

Member <a href="classbasic__json.html#af9907af448f7ff794120033e132025f6"
class="el">basic_json&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::operator&lt;&lt;</a> (<a href="classbasic__json.html" class="el"
title="namespace for Niels Lohmann">basic_json</a> &j, std::istream &i)  
<span id="_deprecated000004" class="anchor"></span>This stream operator
is deprecated since 3.0.0 and will be removed in version 4.0.0 of the
library. Please use
<a href="classbasic__json.html#aea0de29387d532e0bc5f2475cb83995d"
class="el"
title="deserialize from stream">operator&gt;&gt;(std::istream&amp;,
basic_json&amp;)</a> instead; that is, replace calls like `j << i;` with
`i >> j;`.

Member <a href="classbasic__json.html#ad018e709338c810c56eaad606186a77e"
class="el">basic_json&lt; ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
&gt;::sax_parse</a> (<a href="classdetail_1_1span__input__adapter.html"
class="el">detail::span_input_adapter</a> &&i, SAX \*sax, input_format_t format=input_format_t::json, const bool strict=true, const bool ignore_comments=false)  
<span id="_deprecated000003" class="anchor"></span>This function is
deprecated since 3.8.0 and will be removed in version 4.0.0 of the
library. Please use sax_parse(ptr, ptr + len) instead.

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
