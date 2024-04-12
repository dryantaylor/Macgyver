---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Font.h Source File"
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

- <a href="dir_e610925873bfe0bf19b07ca2b4f6d40b.html"
  class="el">MacGyver</a>

</div>

</div>

<div class="header">

<div class="headertitle">

<div class="title">

Font.h

</div>

</div>

</div>

<div class="contents">

<div class="fragment">

<div class="line">

<span id="l00001"></span><span class="lineno">
1</span><span class="preprocessor">\#pragma once</span>

</div>

<div class="line">

<span id="l00002"></span><span class="lineno">
2</span><span class="preprocessor">\#include "SDL.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "SDL_ttf.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include \<string\></span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno"> 5</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="keyword">namespace </span>Macgyver::UI {

</div>

<div id="foldopen00007" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00007"></span><span class="lineno">
<a href="class_macgyver_1_1_u_i_1_1_font.html" class="line">7</a></span>
<span class="keyword">class
</span><a href="class_macgyver_1_1_u_i_1_1_font.html"
class="code hl_class">Font</a> {

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span> <a
href="class_macgyver_1_1_u_i_1_1_font.html#a7fc60a6a5ecf16b67c6ff1eeeaca4515"
class="code hl_function">Font</a>(SDL_Renderer\* renderer,std::string
fontName, <span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> ptSize);

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>
<a href="class_macgyver_1_1_u_i_1_1_font.html"
class="code hl_class">~Font</a>();

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<span class="keywordtype">void</span> addUsage();

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span>
<span class="keywordtype">bool</span> removeUsage();

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>
<span class="keyword">static</span> <span class="keyword">const</span>
<span class="keywordtype">int</span> numSymbols;

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>
<span class="keyword">static</span> <span class="keyword">const</span>
<span class="keywordtype">char</span>\* letters\[70\];

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span> SDL_Rect\*
symbolRects;

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span> SDL_Texture\*
fontMap;

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> storedRenderSize;

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>
<span class="keywordtype">int</span> usageCount;

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span> };

</div>

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span>}

</div>

<div id="aclass_macgyver_1_1_u_i_1_1_font_html" class="ttc">

<div class="ttname">

[Macgyver::UI::Font](class_macgyver_1_1_u_i_1_1_font.html)

</div>

<div class="ttdef">

**Definition** Font.h:7

</div>

</div>

<div id="aclass_macgyver_1_1_u_i_1_1_font_html_a7fc60a6a5ecf16b67c6ff1eeeaca4515"
class="ttc">

<div class="ttname">

[Macgyver::UI::Font::Font](class_macgyver_1_1_u_i_1_1_font.html#a7fc60a6a5ecf16b67c6ff1eeeaca4515)

</div>

<div class="ttdeci">

Font(SDL_Renderer \*renderer, std::string fontName, unsigned int ptSize)

</div>

<div class="ttdef">

**Definition** Font.cpp:12

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
