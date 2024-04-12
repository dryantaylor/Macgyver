---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::UI::TextRenderer Class Reference"
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

- **Macgyver**
- **UI**
- <a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
  class="el">TextRenderer</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Static Public Member
Functions](#pub-static-methods) \| [List of all
members](class_macgyver_1_1_u_i_1_1_text_renderer-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::UI::TextRenderer Class Reference

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
<tr id="r_a7e81a98e1d1513f4cfbfa918304dc392"
class="even memitem:a7e81a98e1d1513f4cfbfa918304dc392">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a7e81a98e1d1513f4cfbfa918304dc392"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>TextRenderer</strong> (const <a
href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="el">TextRenderer</a> &amp;)=delete</td>
</tr>
<tr class="odd separator:a7e81a98e1d1513f4cfbfa918304dc392">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2a694e81c2b0b488c8edc2e470ee0dc8"
class="even memitem:a2a694e81c2b0b488c8edc2e470ee0dc8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a2a694e81c2b0b488c8edc2e470ee0dc8"></span>
void </td>
<td class="memItemRight" data-valign="bottom"><strong>addFont</strong>
(std::string textureName, <a href="class_macgyver_1_1_u_i_1_1_font.html"
class="el">Font</a> *font)</td>
</tr>
<tr class="odd separator:a2a694e81c2b0b488c8edc2e470ee0dc8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8639b469c865217ba40018dd1b104e1e"
class="even memitem:a8639b469c865217ba40018dd1b104e1e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8639b469c865217ba40018dd1b104e1e"></span>
void </td>
<td class="memItemRight"
data-valign="bottom"><strong>addFontUsage</strong> (std::string
fontName)</td>
</tr>
<tr class="odd separator:a8639b469c865217ba40018dd1b104e1e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a634878bf3e7bbcbe0b68a70fb12d6849"
class="even memitem:a634878bf3e7bbcbe0b68a70fb12d6849">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a634878bf3e7bbcbe0b68a70fb12d6849"></span>
void </td>
<td class="memItemRight"
data-valign="bottom"><strong>removeFontUsage</strong> (std::string
fontName)</td>
</tr>
<tr class="odd separator:a634878bf3e7bbcbe0b68a70fb12d6849">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6f13cfb6440d0270308e17dc516f60aa"
class="even memitem:a6f13cfb6440d0270308e17dc516f60aa">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6f13cfb6440d0270308e17dc516f60aa"></span>
SDL_Texture * </td>
<td class="memItemRight"
data-valign="bottom"><strong>displayText</strong> (SDL_Renderer
*renderer, std::string fontName, std::string text, SDL_Rect *dstRect,
SDL_Color displayColour={ 255, 255, 255 }, int ptSize=-1)</td>
</tr>
<tr class="odd separator:a6f13cfb6440d0270308e17dc516f60aa">
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
<tr id="r_ae1904e8d7d94438384c2a825f04022e9"
class="even memitem:ae1904e8d7d94438384c2a825f04022e9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae1904e8d7d94438384c2a825f04022e9"></span>
static <a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="el">TextRenderer</a> &amp; </td>
<td class="memItemRight"
data-valign="bottom"><strong>getInstance</strong> ()</td>
</tr>
<tr class="odd separator:ae1904e8d7d94438384c2a825f04022e9">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

- MacGyver/<a href="_text_renderer_8h_source.html" class="el">TextRenderer.h</a>
- MacGyver/**TextRenderer.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
