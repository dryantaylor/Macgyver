---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: byte_container_with_subtype\\< BinaryType \\> Class
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
[List of all members](classbyte__container__with__subtype-members.html)

</div>

<div class="headertitle">

<div class="title">

byte_container_with_subtype\< BinaryType \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

an internal type for a backed binary type [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<div class="dynheader">

Inheritance diagram for byte_container_with_subtype\< BinaryType \>:

</div>

<div class="dyncontent">

<div class="center">

![](classbyte__container__with__subtype.png)

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
<tr id="r_a29aa3b98709ae1fcdaf8b55766935c08"
class="even memitem:a29aa3b98709ae1fcdaf8b55766935c08">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a29aa3b98709ae1fcdaf8b55766935c08"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>container_type</strong> = BinaryType</td>
</tr>
<tr class="odd separator:a29aa3b98709ae1fcdaf8b55766935c08">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a1b423c8cd161e67e1af1c72bbc2c8b90"
class="even memitem:a1b423c8cd161e67e1af1c72bbc2c8b90">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a1b423c8cd161e67e1af1c72bbc2c8b90"></span>
using </td>
<td class="memItemRight"
data-valign="bottom"><strong>subtype_type</strong> = std::uint64_t</td>
</tr>
<tr class="odd separator:a1b423c8cd161e67e1af1c72bbc2c8b90">
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
<tr id="r_a17bc4a2dabb6c7a5ec2cba3f3aaf0431"
class="even memitem:a17bc4a2dabb6c7a5ec2cba3f3aaf0431">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a17bc4a2dabb6c7a5ec2cba3f3aaf0431"
class="el">byte_container_with_subtype</a> ()
noexcept(noexcept(container_type()))</td>
</tr>
<tr class="odd separator:a17bc4a2dabb6c7a5ec2cba3f3aaf0431">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a7f9fb60d4a835e97fbf1c2de7fa382e2"
class="even memitem:a7f9fb60d4a835e97fbf1c2de7fa382e2">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a7f9fb60d4a835e97fbf1c2de7fa382e2"
class="el">byte_container_with_subtype</a> (const container_type &amp;b)
noexcept(noexcept(container_type(b)))</td>
</tr>
<tr class="odd separator:a7f9fb60d4a835e97fbf1c2de7fa382e2">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a42b8b66b00eb5c0057d4420e196dadf0"
class="even memitem:a42b8b66b00eb5c0057d4420e196dadf0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a42b8b66b00eb5c0057d4420e196dadf0"
class="el">byte_container_with_subtype</a> (container_type &amp;&amp;b)
noexcept(noexcept(container_type(std::move(b))))</td>
</tr>
<tr class="odd separator:a42b8b66b00eb5c0057d4420e196dadf0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a759c6a582dd0684adf7fb9641ef586a4"
class="even memitem:a759c6a582dd0684adf7fb9641ef586a4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a759c6a582dd0684adf7fb9641ef586a4"
class="el">byte_container_with_subtype</a> (const container_type &amp;b,
subtype_type subtype_) noexcept(noexcept(container_type(b)))</td>
</tr>
<tr class="odd separator:a759c6a582dd0684adf7fb9641ef586a4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3b43bde08a4bff8917bcfad01d9e6089"
class="even memitem:a3b43bde08a4bff8917bcfad01d9e6089">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3b43bde08a4bff8917bcfad01d9e6089"
class="el">byte_container_with_subtype</a> (container_type &amp;&amp;b,
subtype_type subtype_)
noexcept(noexcept(container_type(std::move(b))))</td>
</tr>
<tr class="odd separator:a3b43bde08a4bff8917bcfad01d9e6089">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a263d63d0a518cfe9a6b6e508f9a22e85"
class="even memitem:a263d63d0a518cfe9a6b6e508f9a22e85">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a263d63d0a518cfe9a6b6e508f9a22e85"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator==</strong> (const <a
href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a> &amp;rhs) const</td>
</tr>
<tr class="odd separator:a263d63d0a518cfe9a6b6e508f9a22e85">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a07f26c9ed1e216c1c3a1a286b9c4c197"
class="even memitem:a07f26c9ed1e216c1c3a1a286b9c4c197">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a07f26c9ed1e216c1c3a1a286b9c4c197"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>operator!=</strong> (const <a
href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a> &amp;rhs) const</td>
</tr>
<tr class="odd separator:a07f26c9ed1e216c1c3a1a286b9c4c197">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa211ecfe3f0a626e96c54ea7e160491b"
class="even memitem:aa211ecfe3f0a626e96c54ea7e160491b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa211ecfe3f0a626e96c54ea7e160491b" class="el">set_subtype</a>
(subtype_type subtype_) noexcept</td>
</tr>
<tr class="odd memdesc:aa211ecfe3f0a626e96c54ea7e160491b">
<td class="mdescLeft"> </td>
<td class="mdescRight">sets the binary subtype<br />
</td>
</tr>
<tr class="even separator:aa211ecfe3f0a626e96c54ea7e160491b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a678460360dd494c33fbfde782e7c8201"
class="odd memitem:a678460360dd494c33fbfde782e7c8201">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr subtype_type </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a678460360dd494c33fbfde782e7c8201" class="el">subtype</a> ()
const noexcept</td>
</tr>
<tr class="even memdesc:a678460360dd494c33fbfde782e7c8201">
<td class="mdescLeft"> </td>
<td class="mdescRight">return the binary subtype<br />
</td>
</tr>
<tr class="odd separator:a678460360dd494c33fbfde782e7c8201">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a793fab04ad06741b6909dde032d9ea35"
class="even memitem:a793fab04ad06741b6909dde032d9ea35">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">constexpr bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a793fab04ad06741b6909dde032d9ea35" class="el">has_subtype</a> ()
const noexcept</td>
</tr>
<tr class="odd memdesc:a793fab04ad06741b6909dde032d9ea35">
<td class="mdescLeft"> </td>
<td class="mdescRight">return whether the value has a subtype<br />
</td>
</tr>
<tr class="even separator:a793fab04ad06741b6909dde032d9ea35">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad18f6a7557a2bfce28f1ed8d4d10607c"
class="odd memitem:ad18f6a7557a2bfce28f1ed8d4d10607c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ad18f6a7557a2bfce28f1ed8d4d10607c" class="el">clear_subtype</a>
() noexcept</td>
</tr>
<tr class="even memdesc:ad18f6a7557a2bfce28f1ed8d4d10607c">
<td class="mdescLeft"> </td>
<td class="mdescRight">clears the binary subtype<br />
</td>
</tr>
<tr class="odd separator:ad18f6a7557a2bfce28f1ed8d4d10607c">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BinaryType\>  
class byte_container_with_subtype\< BinaryType \>

</div>

an internal type for a backed binary type

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/>

</div>

## Constructor & Destructor Documentation

<span id="a17bc4a2dabb6c7a5ec2cba3f3aaf0431"></span>

## <span class="permalink">[◆ ](#a17bc4a2dabb6c7a5ec2cba3f3aaf0431)</span>byte_container_with_subtype() <span class="overload">\[1/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname"><a href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType &gt;<a
href="classbyte__container__with__subtype.html"
class="el">::byte_container_with_subtype</a></td>
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

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/>

</div>

</div>

<span id="a7f9fb60d4a835e97fbf1c2de7fa382e2"></span>

## <span class="permalink">[◆ ](#a7f9fb60d4a835e97fbf1c2de7fa382e2)</span>byte_container_with_subtype() <span class="overload">\[2/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname"><a href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType &gt;<a
href="classbyte__container__with__subtype.html"
class="el">::byte_container_with_subtype</a></td>
<td>(</td>
<td class="paramtype">const container_type &amp;</td>
<td class="paramname"><span class="paramname"><em>b</em></span></td>
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

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/>

</div>

</div>

<span id="a42b8b66b00eb5c0057d4420e196dadf0"></span>

## <span class="permalink">[◆ ](#a42b8b66b00eb5c0057d4420e196dadf0)</span>byte_container_with_subtype() <span class="overload">\[3/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname"><a href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType &gt;<a
href="classbyte__container__with__subtype.html"
class="el">::byte_container_with_subtype</a></td>
<td>(</td>
<td class="paramtype">container_type &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>b</em></span></td>
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

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/>

</div>

</div>

<span id="a759c6a582dd0684adf7fb9641ef586a4"></span>

## <span class="permalink">[◆ ](#a759c6a582dd0684adf7fb9641ef586a4)</span>byte_container_with_subtype() <span class="overload">\[4/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname"><a href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType &gt;<a
href="classbyte__container__with__subtype.html"
class="el">::byte_container_with_subtype</a></td>
<td>(</td>
<td class="paramtype">const container_type &amp;</td>
<td class="paramname"><span class="paramname"><em>b</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">subtype_type</td>
<td class="paramname"><span
class="paramname"><em>subtype_</em></span> )</td>
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

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/>

</div>

</div>

<span id="a3b43bde08a4bff8917bcfad01d9e6089"></span>

## <span class="permalink">[◆ ](#a3b43bde08a4bff8917bcfad01d9e6089)</span>byte_container_with_subtype() <span class="overload">\[5/5\]</span>

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname"><a href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType &gt;<a
href="classbyte__container__with__subtype.html"
class="el">::byte_container_with_subtype</a></td>
<td>(</td>
<td class="paramtype">container_type &amp;&amp;</td>
<td class="paramname"><span class="paramname"><em>b</em>, </span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">subtype_type</td>
<td class="paramname"><span
class="paramname"><em>subtype_</em></span> )</td>
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

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/>

</div>

</div>

## Member Function Documentation

<span id="ad18f6a7557a2bfce28f1ed8d4d10607c"></span>

## <span class="permalink">[◆ ](#ad18f6a7557a2bfce28f1ed8d4d10607c)</span>clear_subtype()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname">void <a
href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType
&gt;::clear_subtype</td>
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

clears the binary subtype

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/clear_subtype/>

</div>

</div>

<span id="a793fab04ad06741b6909dde032d9ea35"></span>

## <span class="permalink">[◆ ](#a793fab04ad06741b6909dde032d9ea35)</span>has_subtype()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname">constexpr bool <a
href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType
&gt;::has_subtype</td>
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

return whether the value has a subtype

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/has_subtype/>

</div>

</div>

<span id="aa211ecfe3f0a626e96c54ea7e160491b"></span>

## <span class="permalink">[◆ ](#aa211ecfe3f0a626e96c54ea7e160491b)</span>set_subtype()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname">void <a
href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType
&gt;::set_subtype</td>
<td>(</td>
<td class="paramtype">subtype_type</td>
<td class="paramname"><span
class="paramname"><em>subtype_</em></span></td>
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

sets the binary subtype

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/set_subtype/>

</div>

</div>

<span id="a678460360dd494c33fbfde782e7c8201"></span>

## <span class="permalink">[◆ ](#a678460360dd494c33fbfde782e7c8201)</span>subtype()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BinaryType \>

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
<td class="memname">constexpr subtype_type <a
href="classbyte__container__with__subtype.html"
class="el">byte_container_with_subtype</a>&lt; BinaryType
&gt;::subtype</td>
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

return the binary subtype

See also  
<https://json.nlohmann.me/api/byte_container_with_subtype/subtype/>

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
