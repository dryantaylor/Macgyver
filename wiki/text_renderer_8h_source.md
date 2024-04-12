---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/TextRenderer.h Source File"
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

TextRenderer.h

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

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include \<map\></span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno"> 6</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="preprocessor">\#include "Font.h"</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno">
9</span><span class="preprocessor">\#define getTextRenderer
Macgyver::UI::TextRenderer::getInstance()</span>

</div>

<div class="line">

<span id="l00010"></span><span class="lineno">
10</span><span class="keyword">namespace </span>Macgyver::UI {

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>

</div>

<div id="foldopen00012" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00012"></span><span class="lineno">
<a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="line">12</a></span> <span class="keyword">class
</span><a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="code hl_class">TextRenderer</a> {

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="code hl_class">TextRenderer</a>& getInstance() {

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="code hl_class">TextRenderer</a> instance;

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<span class="keywordflow">return</span> instance;

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span> }

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>
<a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="code hl_class">TextRenderer</a>(<span class="keyword">const</span>
<a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="code hl_class">TextRenderer</a>&) =
<span class="keyword">delete</span>;

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>
<span class="keywordtype">void</span> addFont(std::string textureName,
<a href="class_macgyver_1_1_u_i_1_1_font.html"
class="code hl_class">Font</a>\* font);

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>
<span class="keywordtype">void</span> addFontUsage(std::string
fontName);

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>
<span class="keywordtype">void</span> removeFontUsage(std::string
fontName);

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>
<span class="comment">/\*</span>

</div>

<div class="line">

<span id="l00024"></span><span class="lineno">
24</span><span class="comment"> \* TODO: ADD SCALING OF SIZE OF OUTPUT
TEXT FROM SINGLE FONT</span>

</div>

<div class="line">

<span id="l00025"></span><span class="lineno">
25</span><span class="comment"> \*/</span>

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span> SDL_Texture\*
displayText(SDL_Renderer\* renderer,std::string fontName , std::string
text, SDL_Rect\* dstRect,

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span> SDL_Color
displayColour = { 255,255,255 }, <span class="keywordtype">int</span>
ptSize = -1);

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>
std::map\<std::string, Font\*\> fonts;

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> 30</span>
<a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="code hl_class">TextRenderer</a>();

</div>

<div class="line">

<span id="l00031"></span><span class="lineno"> 31</span>
<a href="class_macgyver_1_1_u_i_1_1_text_renderer.html"
class="code hl_class">~TextRenderer</a>();

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> 32</span> };

</div>

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span>}

</div>

<div id="aclass_macgyver_1_1_u_i_1_1_font_html" class="ttc">

<div class="ttname">

[Macgyver::UI::Font](class_macgyver_1_1_u_i_1_1_font.html)

</div>

<div class="ttdef">

**Definition** Font.h:7

</div>

</div>

<div id="aclass_macgyver_1_1_u_i_1_1_text_renderer_html" class="ttc">

<div class="ttname">

[Macgyver::UI::TextRenderer](class_macgyver_1_1_u_i_1_1_text_renderer.html)

</div>

<div class="ttdef">

**Definition** TextRenderer.h:12

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
