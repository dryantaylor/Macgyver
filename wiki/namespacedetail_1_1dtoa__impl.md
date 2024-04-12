---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::dtoa_impl Namespace Reference"
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
- <a href="namespacedetail_1_1dtoa__impl.html" class="el">dtoa_impl</a>

</div>

</div>

<div class="header">

<div class="summary">

[Classes](#nested-classes) \| [Functions](#func-members) \|
[Variables](#var-members)

</div>

<div class="headertitle">

<div class="title">

detail::dtoa_impl Namespace Reference

</div>

</div>

</div>

<div class="contents">

implements the Grisu2 algorithm for binary to decimal floating-point
conversion. [More...](#details)

<table class="memberdecls">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd heading">
<td colspan="2"><h2 id="classes" class="groupheader"><span
id="nested-classes"></span> Classes</h2></td>
</tr>
<tr class="even memitem:">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">struct  </td>
<td class="memItemRight" data-valign="bottom"><a
href="structdetail_1_1dtoa__impl_1_1boundaries.html"
class="el">boundaries</a></td>
</tr>
<tr class="odd separator:">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr class="even memitem:">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">struct  </td>
<td class="memItemRight" data-valign="bottom"><a
href="structdetail_1_1dtoa__impl_1_1cached__power.html"
class="el">cached_power</a></td>
</tr>
<tr class="odd separator:">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr class="even memitem:">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">struct  </td>
<td class="memItemRight" data-valign="bottom"><a
href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
</tr>
<tr class="odd separator:">
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
<td colspan="2"><h2 id="functions" class="groupheader"><span
id="func-members"></span> Functions</h2></td>
</tr>
<tr id="r_a3c879bf97b806cacbcbb2da07a5ff5c8"
class="even memitem:a3c879bf97b806cacbcbb2da07a5ff5c8">
<td colspan="2" class="memTemplParams"><span
id="a3c879bf97b806cacbcbb2da07a5ff5c8"></span> template&lt;typename
Target , typename Source &gt;</td>
</tr>
<tr class="odd memitem:a3c879bf97b806cacbcbb2da07a5ff5c8">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">Target </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>reinterpret_bits</strong> (const Source
source)</td>
</tr>
<tr class="even separator:a3c879bf97b806cacbcbb2da07a5ff5c8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6a5ccf11847aab7a0f42f587b33935df"
class="odd memitem:a6a5ccf11847aab7a0f42f587b33935df">
<td colspan="2" class="memTemplParams">template&lt;typename FloatType
&gt;</td>
</tr>
<tr class="even memitem:a6a5ccf11847aab7a0f42f587b33935df">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top"><a
href="structdetail_1_1dtoa__impl_1_1boundaries.html"
class="el">boundaries</a> </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#a6a5ccf11847aab7a0f42f587b33935df"
class="el">compute_boundaries</a> (FloatType <a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">value</a>)</td>
</tr>
<tr class="odd separator:a6a5ccf11847aab7a0f42f587b33935df">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a29ae6574f6be09a5c8ab08da9a3f71b4"
class="even memitem:a29ae6574f6be09a5c8ab08da9a3f71b4">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="structdetail_1_1dtoa__impl_1_1cached__power.html"
class="el">cached_power</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a29ae6574f6be09a5c8ab08da9a3f71b4"
class="el">get_cached_power_for_binary_exponent</a> (int e)</td>
</tr>
<tr class="odd separator:a29ae6574f6be09a5c8ab08da9a3f71b4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a04eb234a28617519974fc962cd4da666"
class="even memitem:a04eb234a28617519974fc962cd4da666">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">int </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a04eb234a28617519974fc962cd4da666"
class="el">find_largest_pow10</a> (const std::uint32_t n, std::uint32_t
&amp;pow10)</td>
</tr>
<tr class="odd separator:a04eb234a28617519974fc962cd4da666">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a73a15efcb5c2157ea0e1375b98ef0e83"
class="even memitem:a73a15efcb5c2157ea0e1375b98ef0e83">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a73a15efcb5c2157ea0e1375b98ef0e83"></span>
void </td>
<td class="memItemRight"
data-valign="bottom"><strong>grisu2_round</strong> (char *buf, int len,
std::uint64_t dist, std::uint64_t delta, std::uint64_t rest,
std::uint64_t ten_k)</td>
</tr>
<tr class="odd separator:a73a15efcb5c2157ea0e1375b98ef0e83">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae877aa13ab872c99a1c614e5e1524807"
class="even memitem:ae877aa13ab872c99a1c614e5e1524807">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae877aa13ab872c99a1c614e5e1524807"
class="el">grisu2_digit_gen</a> (char *buffer, int &amp;length, int
&amp;decimal_exponent, <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
M_minus, <a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> w, <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
M_plus)</td>
</tr>
<tr class="odd separator:ae877aa13ab872c99a1c614e5e1524807">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad549352ed1a9676a092d143a2daa3dee"
class="even memitem:ad549352ed1a9676a092d143a2daa3dee">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad549352ed1a9676a092d143a2daa3dee" class="el">grisu2</a> (char
*buf, int &amp;len, int &amp;decimal_exponent, <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
m_minus, <a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> v, <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
m_plus)</td>
</tr>
<tr class="odd separator:ad549352ed1a9676a092d143a2daa3dee">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_abdf6bc05c54068a5930f66c2e803e8b8"
class="even memitem:abdf6bc05c54068a5930f66c2e803e8b8">
<td colspan="2" class="memTemplParams">template&lt;typename FloatType
&gt;</td>
</tr>
<tr class="odd memitem:abdf6bc05c54068a5930f66c2e803e8b8">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memTemplItemRight" data-valign="bottom"><a
href="#abdf6bc05c54068a5930f66c2e803e8b8" class="el">grisu2</a> (char
*buf, int &amp;len, int &amp;decimal_exponent, FloatType <a
href="namespacedetail.html#a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804"
class="el">value</a>)</td>
</tr>
<tr class="even separator:abdf6bc05c54068a5930f66c2e803e8b8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aec9f6655c3b629aeb0e8c887aea5da87"
class="odd memitem:aec9f6655c3b629aeb0e8c887aea5da87">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">JSON_HEDLEY_RETURNS_NON_NULL char * </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aec9f6655c3b629aeb0e8c887aea5da87" class="el">append_exponent</a>
(char *buf, int e)</td>
</tr>
<tr class="even memdesc:aec9f6655c3b629aeb0e8c887aea5da87">
<td class="mdescLeft"> </td>
<td class="mdescRight">appends a decimal representation of e to
buf<br />
</td>
</tr>
<tr class="odd separator:aec9f6655c3b629aeb0e8c887aea5da87">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_afab91abfdd1cdf43cc2fcd5b9c4a7456"
class="even memitem:afab91abfdd1cdf43cc2fcd5b9c4a7456">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">JSON_HEDLEY_RETURNS_NON_NULL char * </td>
<td class="memItemRight" data-valign="bottom"><a
href="#afab91abfdd1cdf43cc2fcd5b9c4a7456" class="el">format_buffer</a>
(char *buf, int len, int decimal_exponent, int min_exp, int
max_exp)</td>
</tr>
<tr class="odd memdesc:afab91abfdd1cdf43cc2fcd5b9c4a7456">
<td class="mdescLeft"> </td>
<td class="mdescRight">prettify v = buf * 10^decimal_exponent<br />
</td>
</tr>
<tr class="even separator:afab91abfdd1cdf43cc2fcd5b9c4a7456">
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
<td colspan="2"><h2 id="variables" class="groupheader"><span
id="var-members"></span> Variables</h2></td>
</tr>
<tr id="r_a95c569b7627a9372686f1f77d73e8660"
class="even memitem:a95c569b7627a9372686f1f77d73e8660">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a95c569b7627a9372686f1f77d73e8660"></span>
constexpr int </td>
<td class="memItemRight" data-valign="bottom"><strong>kAlpha</strong> =
-60</td>
</tr>
<tr class="odd separator:a95c569b7627a9372686f1f77d73e8660">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae152a095d2dd1a6dd41ef8ad39c26e19"
class="even memitem:ae152a095d2dd1a6dd41ef8ad39c26e19">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae152a095d2dd1a6dd41ef8ad39c26e19"></span>
constexpr int </td>
<td class="memItemRight" data-valign="bottom"><strong>kGamma</strong> =
-32</td>
</tr>
<tr class="odd separator:ae152a095d2dd1a6dd41ef8ad39c26e19">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

implements the Grisu2 algorithm for binary to decimal floating-point
conversion.

This implementation is a slightly modified version of the reference
implementation which may be obtained from
<http://florian.loitsch.com/publications> (bench.tar.gz).

The code is distributed under the MIT license, Copyright (c) 2009
Florian Loitsch.

For a detailed description of the algorithm see:

\[1\] Loitsch, "Printing Floating-Point Numbers Quickly and Accurately
with Integers", Proceedings of the ACM SIGPLAN 2010 Conference on
Programming Language Design and Implementation, PLDI 2010 \[2\] Burger,
Dybvig, "Printing Floating-Point Numbers Quickly and Accurately",
Proceedings of the ACM SIGPLAN 1996 Conference on Programming Language
Design and Implementation, PLDI 1996

</div>

## Function Documentation

<span id="aec9f6655c3b629aeb0e8c887aea5da87"></span>

## <span class="permalink">[◆ ](#aec9f6655c3b629aeb0e8c887aea5da87)</span>append_exponent()

<div class="memitem">

<div class="memproto">

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
<td class="memname">JSON_HEDLEY_RETURNS_NON_NULL char *
detail::dtoa_impl::append_exponent</td>
<td>(</td>
<td class="paramtype">char *</td>
<td class="paramname"><span class="paramname"><em>buf</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"><em>e</em></span> )</td>
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

appends a decimal representation of e to buf

Returns  
a pointer to the element following the exponent.

<!-- -->

Precondition  
-1000 \< e \< 1000

</div>

</div>

<span id="a6a5ccf11847aab7a0f42f587b33935df"></span>

## <span class="permalink">[◆ ](#a6a5ccf11847aab7a0f42f587b33935df)</span>compute_boundaries()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename FloatType \>

</div>

|                                                                 |     |           |                                        |     |     |
|-----------------------------------------------------------------|-----|-----------|----------------------------------------|-----|-----|
| <a href="structdetail_1_1dtoa__impl_1_1boundaries.html"         
 class="el">boundaries</a> detail::dtoa_impl::compute_boundaries  | (   | FloatType | <span class="paramname">*value*</span> | )   |     |

</div>

<div class="memdoc">

Compute the (normalized) diyfp representing the input number 'value' and
its boundaries.

Precondition  
value must be finite and positive

</div>

</div>

<span id="a04eb234a28617519974fc962cd4da666"></span>

## <span class="permalink">[◆ ](#a04eb234a28617519974fc962cd4da666)</span>find_largest_pow10()

<div class="memitem">

<div class="memproto">

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
<td class="memname">int detail::dtoa_impl::find_largest_pow10</td>
<td>(</td>
<td class="paramtype">const std::uint32_t</td>
<td class="paramname"><span class="paramname"><em>n</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">std::uint32_t &amp;</td>
<td class="paramname"><span
class="paramname"><em>pow10</em></span> )</td>
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

For n != 0, returns k, such that pow10 := 10^(k-1) \<= n \< 10^k. For n
== 0, returns 1 and sets pow10 := 1.

</div>

</div>

<span id="afab91abfdd1cdf43cc2fcd5b9c4a7456"></span>

## <span class="permalink">[◆ ](#afab91abfdd1cdf43cc2fcd5b9c4a7456)</span>format_buffer()

<div class="memitem">

<div class="memproto">

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
<td class="memname">JSON_HEDLEY_RETURNS_NON_NULL char *
detail::dtoa_impl::format_buffer</td>
<td>(</td>
<td class="paramtype">char *</td>
<td class="paramname"><span class="paramname"><em>buf</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"><em>len</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"><em>decimal_exponent</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"><em>min_exp</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int</td>
<td class="paramname"><span
class="paramname"><em>max_exp</em></span> )</td>
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

prettify v = buf \* 10^decimal_exponent

If v is in the range \[10^min_exp, 10^max_exp) it will be printed in
fixed-point notation. Otherwise it will be printed in exponential
notation.

Precondition  
min_exp \< 0

max_exp \> 0

</div>

</div>

<span id="a29ae6574f6be09a5c8ab08da9a3f71b4"></span>

## <span class="permalink">[◆ ](#a29ae6574f6be09a5c8ab08da9a3f71b4)</span>get_cached_power_for_binary_exponent()

<div class="memitem">

<div class="memproto">

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
<td class="memname"><a
href="structdetail_1_1dtoa__impl_1_1cached__power.html"
class="el">cached_power</a>
detail::dtoa_impl::get_cached_power_for_binary_exponent</td>
<td>(</td>
<td class="paramtype">int</td>
<td class="paramname"><span class="paramname"><em>e</em></span></td>
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

For a normalized diyfp w = f \* 2^e, this function returns a
(normalized) cached power-of-ten c = f_c \* 2^e_c, such that the
exponent of the product w \* c satisfies (Definition 3.2 from \[1\])

``` fragment
 alpha <= e_c + e + q <= gamma.
```

</div>

</div>

<span id="ad549352ed1a9676a092d143a2daa3dee"></span>

## <span class="permalink">[◆ ](#ad549352ed1a9676a092d143a2daa3dee)</span>grisu2() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

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
<td class="memname">void detail::dtoa_impl::grisu2</td>
<td>(</td>
<td class="paramtype">char *</td>
<td class="paramname"><span class="paramname"><em>buf</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int &amp;</td>
<td class="paramname"><span class="paramname"><em>len</em>, </span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int &amp;</td>
<td class="paramname"><span class="paramname"><em>decimal_exponent</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
<td class="paramname"><span class="paramname"><em>m_minus</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
<td class="paramname"><span class="paramname"><em>v</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
<td class="paramname"><span
class="paramname"><em>m_plus</em></span> )</td>
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

v = buf \* 10^decimal_exponent len is the length of the buffer (number
of decimal digits) The buffer must be large enough, i.e. \>=
max_digits10.

</div>

</div>

<span id="abdf6bc05c54068a5930f66c2e803e8b8"></span>

## <span class="permalink">[◆ ](#abdf6bc05c54068a5930f66c2e803e8b8)</span>grisu2() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename FloatType \>

</div>

|                                |     |           |                                                     |
|--------------------------------|-----|-----------|-----------------------------------------------------|
| void detail::dtoa_impl::grisu2 | (   | char \*   | <span class="paramname">*buf*, </span>              |
|                                |     | int &     | <span class="paramname">*len*, </span>              |
|                                |     | int &     | <span class="paramname">*decimal_exponent*, </span> |
|                                |     | FloatType | <span class="paramname">*value*</span> )            |

</div>

<div class="memdoc">

v = buf \* 10^decimal_exponent len is the length of the buffer (number
of decimal digits) The buffer must be large enough, i.e. \>=
max_digits10.

</div>

</div>

<span id="ae877aa13ab872c99a1c614e5e1524807"></span>

## <span class="permalink">[◆ ](#ae877aa13ab872c99a1c614e5e1524807)</span>grisu2_digit_gen()

<div class="memitem">

<div class="memproto">

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
<td class="memname">void detail::dtoa_impl::grisu2_digit_gen</td>
<td>(</td>
<td class="paramtype">char *</td>
<td class="paramname"><span class="paramname"><em>buffer</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int &amp;</td>
<td class="paramname"><span class="paramname"><em>length</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">int &amp;</td>
<td class="paramname"><span class="paramname"><em>decimal_exponent</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
<td class="paramname"><span class="paramname"><em>M_minus</em>,
</span></td>
</tr>
<tr class="odd">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
<td class="paramname"><span class="paramname"><em>w</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype"><a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
<td class="paramname"><span
class="paramname"><em>M_plus</em></span> )</td>
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

Generates V = buffer \* 10^decimal_exponent, such that M- \<= V \<= M+.
M- and M+ must be normalized and share the same exponent -60 \<= e \<=
-32.

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
