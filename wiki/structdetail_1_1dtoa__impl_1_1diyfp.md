---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::dtoa_impl::diyfp Struct Reference"
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
- <a href="namespacedetail_1_1dtoa__impl.html" class="el">dtoa_impl</a>
- <a href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Static Public Member
Functions](#pub-static-methods) \| [Public Attributes](#pub-attribs) \|
[Static Public Attributes](#pub-static-attribs) \| [List of all
members](structdetail_1_1dtoa__impl_1_1diyfp-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::dtoa_impl::diyfp Struct Reference

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
<td colspan="2"><h2 id="public-member-functions"
class="groupheader"><span id="pub-methods"></span> Public Member
Functions</h2></td>
</tr>
<tr id="r_a7c8377d2b931fcb3088d54c41b99c53b"
class="even memitem:a7c8377d2b931fcb3088d54c41b99c53b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a7c8377d2b931fcb3088d54c41b99c53b"></span>
constexpr </td>
<td class="memItemRight" data-valign="bottom"><strong>diyfp</strong>
(std::uint64_t f_, int e_) noexcept</td>
</tr>
<tr class="odd separator:a7c8377d2b931fcb3088d54c41b99c53b">
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
<tr id="r_a75142bace0b78b1e1433b1d35a7ff252"
class="even memitem:a75142bace0b78b1e1433b1d35a7ff252">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a75142bace0b78b1e1433b1d35a7ff252" class="el">sub</a> (const <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
&amp;x, const <a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> &amp;y) noexcept</td>
</tr>
<tr class="odd memdesc:a75142bace0b78b1e1433b1d35a7ff252">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns x - y<br />
</td>
</tr>
<tr class="even separator:a75142bace0b78b1e1433b1d35a7ff252">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a046c61f2c13411677eedfb5b9b7a8226"
class="odd memitem:a046c61f2c13411677eedfb5b9b7a8226">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a046c61f2c13411677eedfb5b9b7a8226" class="el">mul</a> (const <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
&amp;x, const <a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> &amp;y) noexcept</td>
</tr>
<tr class="even memdesc:a046c61f2c13411677eedfb5b9b7a8226">
<td class="mdescLeft"> </td>
<td class="mdescRight">returns x * y<br />
</td>
</tr>
<tr class="odd separator:a046c61f2c13411677eedfb5b9b7a8226">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5bad735c2cb50b194938a8a89b82f6ed"
class="even memitem:a5bad735c2cb50b194938a8a89b82f6ed">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5bad735c2cb50b194938a8a89b82f6ed" class="el">normalize</a> (<a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a> x)
noexcept</td>
</tr>
<tr class="odd memdesc:a5bad735c2cb50b194938a8a89b82f6ed">
<td class="mdescLeft"> </td>
<td class="mdescRight">normalize x such that the significand is &gt;=
2^(q-1)<br />
</td>
</tr>
<tr class="even separator:a5bad735c2cb50b194938a8a89b82f6ed">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5a9ce83c6c1663c9aaac7ffd9009b971"
class="odd memitem:a5a9ce83c6c1663c9aaac7ffd9009b971">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a5a9ce83c6c1663c9aaac7ffd9009b971" class="el">normalize_to</a>
(const <a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a> &amp;x, const int target_exponent) noexcept</td>
</tr>
<tr class="even memdesc:a5a9ce83c6c1663c9aaac7ffd9009b971">
<td class="mdescLeft"> </td>
<td class="mdescRight">normalize x such that the result has the exponent
E<br />
</td>
</tr>
<tr class="odd separator:a5a9ce83c6c1663c9aaac7ffd9009b971">
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
<tr id="r_ae1518119517cb69d79aa64ffb93c8375"
class="even memitem:ae1518119517cb69d79aa64ffb93c8375">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae1518119517cb69d79aa64ffb93c8375"></span>
std::uint64_t </td>
<td class="memItemRight" data-valign="bottom"><strong>f</strong> =
0</td>
</tr>
<tr class="odd separator:ae1518119517cb69d79aa64ffb93c8375">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae2b59fab8dee9ef0192eb6b568fa7314"
class="even memitem:ae2b59fab8dee9ef0192eb6b568fa7314">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae2b59fab8dee9ef0192eb6b568fa7314"></span>
int </td>
<td class="memItemRight" data-valign="bottom"><strong>e</strong> =
0</td>
</tr>
<tr class="odd separator:ae2b59fab8dee9ef0192eb6b568fa7314">
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
<td colspan="2"><h2 id="static-public-attributes"
class="groupheader"><span id="pub-static-attribs"></span> Static Public
Attributes</h2></td>
</tr>
<tr id="r_a80cf8cc846a7bf96362d3b11886994e3"
class="even memitem:a80cf8cc846a7bf96362d3b11886994e3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a80cf8cc846a7bf96362d3b11886994e3"></span>
static constexpr int </td>
<td class="memItemRight"
data-valign="bottom"><strong>kPrecision</strong> = 64</td>
</tr>
<tr class="odd separator:a80cf8cc846a7bf96362d3b11886994e3">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Function Documentation

<span id="a046c61f2c13411677eedfb5b9b7a8226"></span>

## <span class="permalink">[◆ ](#a046c61f2c13411677eedfb5b9b7a8226)</span>mul()

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
<td class="memname">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
detail::dtoa_impl::diyfp::mul</td>
<td>(</td>
<td class="paramtype">const <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
&amp;</td>
<td class="paramname"><span class="paramname"><em>x</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
&amp;</td>
<td class="paramname"><span class="paramname"><em>y</em></span> )</td>
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

returns x \* y

Note  
The result is rounded. (Only the upper q bits are returned.)

</div>

</div>

<span id="a5bad735c2cb50b194938a8a89b82f6ed"></span>

## <span class="permalink">[◆ ](#a5bad735c2cb50b194938a8a89b82f6ed)</span>normalize()

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
<td class="memname">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
detail::dtoa_impl::diyfp::normalize</td>
<td>(</td>
<td class="paramtype"><a href="structdetail_1_1dtoa__impl_1_1diyfp.html"
class="el">diyfp</a></td>
<td class="paramname"><span class="paramname"><em>x</em></span></td>
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

normalize x such that the significand is \>= 2^(q-1)

Precondition  
x.f != 0

</div>

</div>

<span id="a5a9ce83c6c1663c9aaac7ffd9009b971"></span>

## <span class="permalink">[◆ ](#a5a9ce83c6c1663c9aaac7ffd9009b971)</span>normalize_to()

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
<td class="memname">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
detail::dtoa_impl::diyfp::normalize_to</td>
<td>(</td>
<td class="paramtype">const <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
&amp;</td>
<td class="paramname"><span class="paramname"><em>x</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const int</td>
<td class="paramname"><span
class="paramname"><em>target_exponent</em></span> )</td>
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

normalize x such that the result has the exponent E

Precondition  
e \>= x.e and the upper e - x.e bits of x.f must be zero.

</div>

</div>

<span id="a75142bace0b78b1e1433b1d35a7ff252"></span>

## <span class="permalink">[◆ ](#a75142bace0b78b1e1433b1d35a7ff252)</span>sub()

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
<td class="memname">static <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
detail::dtoa_impl::diyfp::sub</td>
<td>(</td>
<td class="paramtype">const <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
&amp;</td>
<td class="paramname"><span class="paramname"><em>x</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">const <a
href="structdetail_1_1dtoa__impl_1_1diyfp.html" class="el">diyfp</a>
&amp;</td>
<td class="paramname"><span class="paramname"><em>y</em></span> )</td>
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

returns x - y

Precondition  
x.e == y.e and x.f \>= y.f

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
