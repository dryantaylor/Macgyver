---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Text.h Source File"
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

Text.h

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
2</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "ComponentData.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "SDL.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="keyword">namespace </span>Macgyver::Components::UI
{

</div>

<div class="line">

<span id="l00007"></span><span class="lineno"> 7</span>

</div>

<div id="foldopen00011" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00011"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text.html"
class="line">11</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text.html"
class="code hl_struct">Text</a> {

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text.html#aa82ad75be88138ac97e8a94c79dec9a3"
class="code hl_function">update</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
attachNew(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp, std::string
font, std::string text,

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> ptSize, SDL_Rect size);

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span> };

</div>

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>

</div>

<div id="foldopen00027" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00027"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html"
class="line">27</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html"
class="code hl_struct">TextData</a> {

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>
<a href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html"
class="code hl_struct">TextData</a>(SDL_Renderer\* renderer, std::string
txt,

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span> std::string
fnt, <span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a53f25e47d34ec0e2598cb52c023a7a95"
class="code hl_variable">ptSize</a>, SDL_Rect rect);

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> 30</span>

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#aeed5e9eaeab783aedf28b5ffd204a689"
class="line">32</a></span> std::string <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#aeed5e9eaeab783aedf28b5ffd204a689"
class="code hl_variable">text</a>;

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a7ec87ed9e7219d2648db89305f29542c"
class="line">34</a></span> std::string <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a7ec87ed9e7219d2648db89305f29542c"
class="code hl_variable">font</a>;

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a53f25e47d34ec0e2598cb52c023a7a95"
class="line">36</a></span> <span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a53f25e47d34ec0e2598cb52c023a7a95"
class="code hl_variable">ptSize</a>;

</div>

<div class="line">

<span id="l00039"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a1762f7a47312594561cbd2818a259bc8"
class="line">39</a></span> std::string <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a1762f7a47312594561cbd2818a259bc8"
class="code hl_variable">INTERNAL_cachedText</a>;

</div>

<div class="line">

<span id="l00040"></span><span class="lineno"> 40</span> std::string
INTERNAL_cachedFont;

</div>

<div class="line">

<span id="l00041"></span><span class="lineno"> 41</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> INTERNAL_cachedPtSize;

</div>

<div class="line">

<span id="l00042"></span><span class="lineno"> 42</span>

</div>

<div class="line">

<span id="l00044"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#afa8e9a0b8fc0ba2e20086e8bee510254"
class="line">44</a></span> SDL_Rect <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#afa8e9a0b8fc0ba2e20086e8bee510254"
class="code hl_variable">textBoundries</a>;

</div>

<div class="line">

<span id="l00045"></span><span class="lineno"> 45</span> };

</div>

</div>

<div class="line">

<span id="l00046"></span><span class="lineno"> 46</span>}

</div>

<div class="line">

<span id="l00047"></span><span class="lineno"> 47</span>

</div>

<div class="line">

<span id="l00048"></span><span class="lineno"> 48</span>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component](class_macgyver_1_1_gameobjects_1_1_component.html)

</div>

<div class="ttdef">

**Definition** Component.h:15

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::TextData](struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html)

</div>

<div class="ttdef">

**Definition** Text.h:27

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_data_html_a1762f7a47312594561cbd2818a259bc8"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::TextData::INTERNAL_cachedText](struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a1762f7a47312594561cbd2818a259bc8)

</div>

<div class="ttdeci">

std::string INTERNAL_cachedText

</div>

<div class="ttdef">

**Definition** Text.h:39

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_data_html_a53f25e47d34ec0e2598cb52c023a7a95"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::TextData::ptSize](struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a53f25e47d34ec0e2598cb52c023a7a95)

</div>

<div class="ttdeci">

unsigned int ptSize

</div>

<div class="ttdoc">

size the text is being rendered at

</div>

<div class="ttdef">

**Definition** Text.h:36

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_data_html_a7ec87ed9e7219d2648db89305f29542c"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::TextData::font](struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#a7ec87ed9e7219d2648db89305f29542c)

</div>

<div class="ttdeci">

std::string font

</div>

<div class="ttdoc">

name of font being used to render text

</div>

<div class="ttdef">

**Definition** Text.h:34

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_data_html_aeed5e9eaeab783aedf28b5ffd204a689"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::TextData::text](struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#aeed5e9eaeab783aedf28b5ffd204a689)

</div>

<div class="ttdeci">

std::string text

</div>

<div class="ttdoc">

Text currently being rendered.

</div>

<div class="ttdef">

**Definition** Text.h:32

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_data_html_afa8e9a0b8fc0ba2e20086e8bee510254"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::TextData::textBoundries](struct_macgyver_1_1_components_1_1_u_i_1_1_text_data.html#afa8e9a0b8fc0ba2e20086e8bee510254)

</div>

<div class="ttdeci">

SDL_Rect textBoundries

</div>

<div class="ttdoc">

boundry for the text to be rendered in

</div>

<div class="ttdef">

**Definition** Text.h:44

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::Text](struct_macgyver_1_1_components_1_1_u_i_1_1_text.html)

</div>

<div class="ttdef">

**Definition** Text.h:11

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_text_html_aa82ad75be88138ac97e8a94c79dec9a3"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::Text::update](struct_macgyver_1_1_components_1_1_u_i_1_1_text.html#aa82ad75be88138ac97e8a94c79dec9a3)

</div>

<div class="ttdeci">

static void update(Gameobjects::Component \*self, unsigned int
deltaTime)

</div>

<div class="ttdef">

**Definition** Text.cpp:4

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
