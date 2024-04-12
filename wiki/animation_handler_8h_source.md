---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/AnimationHandler.h Source File"
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

AnimationHandler.h

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
2</span><span class="preprocessor">\#include "AnimationData.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "ActiveAnimation.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "Renderable.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include \<SDL.h\></span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include \<iostream\></span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="preprocessor">\#include \<map\></span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno">
8</span><span class="preprocessor">\#include \<queue\></span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>

</div>

<div class="line">

<span id="l00010"></span><span class="lineno">
10</span><span class="preprocessor">\#define getAnimationHandler
Macgyver::AnimationHandler::getInstance()</span>

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>

</div>

<div class="line">

<span id="l00012"></span><span class="lineno">
12</span><span class="keyword">namespace </span>Macgyver {

</div>

<div id="foldopen00025" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00025"></span><span class="lineno">
<a href="class_macgyver_1_1_animation_handler.html" class="line">25</a></span>
<span class="keyword">class
</span><a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a> {

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span>
<span class="keyword">public</span>:

</div>

<div id="foldopen00031" class="foldopen" data-start="{" end="}">

<div class="line">

<span id="l00031"></span><span class="lineno"> <a
href="class_macgyver_1_1_animation_handler.html#a47d6dc2ae1e4731dd83ad9dac28caa9f"
class="line">31</a></span> <span class="keyword">static</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a>& <a
href="class_macgyver_1_1_animation_handler.html#a47d6dc2ae1e4731dd83ad9dac28caa9f"
class="code hl_function">getInstance</a>() {

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> 32</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a> instance;

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span>
<span class="keywordflow">return</span> instance;

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> 34</span> }

</div>

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span>

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a>(<span class="keyword">const</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a>&) =
<span class="keyword">delete</span>;

</div>

<div class="line">

<span id="l00037"></span><span class="lineno"> 37</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a>&
operator=(<span class="keyword">const</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a>&) =
<span class="keyword">delete</span>;

</div>

<div class="line">

<span id="l00038"></span><span class="lineno"> 38</span>

</div>

<div class="line">

<span id="l00043"></span><span class="lineno"> 43</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a367dc496d779b11d8d3e38bf9c0ace0b"
class="code hl_function">attachRenderer</a>(SDL_Renderer\* renderer);

</div>

<div class="line">

<span id="l00055"></span><span class="lineno"> 55</span>
<span class="keywordtype">bool</span> <a
href="class_macgyver_1_1_animation_handler.html#ab56e8354ac281aef131e2cef2d751c7f"
class="code hl_function">addAnimation</a>(std::string name, std::string
path);

</div>

<div class="line">

<span id="l00070"></span><span class="lineno"> 70</span>
<span class="keywordtype">bool</span> <a
href="class_macgyver_1_1_animation_handler.html#ab56e8354ac281aef131e2cef2d751c7f"
class="code hl_function">addAnimation</a>(std::string name,
<a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="code hl_struct">Animations::AnimationData</a>\* animation);

</div>

<div class="line">

<span id="l00071"></span><span class="lineno"> 71</span>

</div>

<div class="line">

<span id="l00077"></span><span class="lineno"> 77</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a3069e1496b3c52a26b5ea9c47188035b"
class="code hl_function">closeAnimationData</a>(std::string name);

</div>

<div class="line">

<span id="l00078"></span><span class="lineno"> 78</span>

</div>

<div class="line">

<span id="l00082"></span><span class="lineno"> 82</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#aa14ef2174adb148bf4981d02909ff7c9"
class="code hl_function">closeAllAnimationData</a>();

</div>

<div class="line">

<span id="l00102"></span><span class="lineno"> 102</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> <a
href="class_macgyver_1_1_animation_handler.html#af6317d69b1920a4c65bb2316006bd332"
class="code hl_function">beginAnimation</a>(<a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="code hl_struct">Components::RenderableData</a>\*
attachedRenderable, std::string animName);

</div>

<div class="line">

<span id="l00103"></span><span class="lineno"> 103</span>

</div>

<div class="line">

<span id="l00115"></span><span class="lineno"> 115</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a3ee78800ee93904ea16578a0612f4595"
class="code hl_function">changeActiveAnimation</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>
<span class="keywordtype">id</span>, std::string animationName);

</div>

<div class="line">

<span id="l00116"></span><span class="lineno"> 116</span>

</div>

<div class="line">

<span id="l00129"></span><span class="lineno"> 129</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a6e0a7159f7873c00466f7c7f1f381e77"
class="code hl_function">changeCurrentFrame</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>
<span class="keywordtype">id</span>,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> frame);

</div>

<div class="line">

<span id="l00130"></span><span class="lineno"> 130</span>

</div>

<div class="line">

<span id="l00140"></span><span class="lineno"> 140</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a9474aafdf72a30bbc1d0172b1c68d386"
class="code hl_function">changeCurrentTick</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>
<span class="keywordtype">id</span>,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> tick);

</div>

<div class="line">

<span id="l00141"></span><span class="lineno"> 141</span>

</div>

<div class="line">

<span id="l00153"></span><span class="lineno"> 153</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a2a58f9b4bec9540afd2b6ea20e985dc3"
class="code hl_function">getCurrentFrameProperties</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>
<span class="keywordtype">id</span>,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>\* outFrameNumber,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>\* outTick);

</div>

<div class="line">

<span id="l00154"></span><span class="lineno"> 154</span>

</div>

<div class="line">

<span id="l00161"></span><span class="lineno"> 161</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a3ff3c3c57c83894f8371661c66c89879"
class="code hl_function">closeActiveAnimation</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>
<span class="keywordtype">id</span>);

</div>

<div class="line">

<span id="l00162"></span><span class="lineno"> 162</span>

</div>

<div class="line">

<span id="l00166"></span><span class="lineno"> 166</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#a0de546eeaafb90223fda419f6c904cb9"
class="code hl_function">closeAllActiveAnimations</a>();

</div>

<div class="line">

<span id="l00167"></span><span class="lineno"> 167</span>

</div>

<div class="line">

<span id="l00174"></span><span class="lineno"> 174</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_animation_handler.html#aaed2122d1268881c37da014864dd777d"
class="code hl_function">update</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00175"></span><span class="lineno"> 175</span>

</div>

<div class="line">

<span id="l00176"></span><span class="lineno"> 176</span>

</div>

<div class="line">

<span id="l00177"></span><span class="lineno"> 177</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00178"></span><span class="lineno"> 178</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">AnimationHandler</a>();

</div>

<div class="line">

<span id="l00179"></span><span class="lineno"> 179</span>
<a href="class_macgyver_1_1_animation_handler.html"
class="code hl_class">~AnimationHandler</a>();

</div>

<div class="line">

<span id="l00180"></span><span class="lineno"> 180</span>

</div>

<div class="line">

<span id="l00182"></span><span class="lineno"> 182</span>
std::map\<std::string, Animations::AnimationData\*\> animations;

</div>

<div class="line">

<span id="l00184"></span><span class="lineno"> 184</span>
std::map\<unsigned int, Animations::ActiveAnimation\*\>
activeAnimations;

</div>

<div class="line">

<span id="l00186"></span><span class="lineno"> 186</span>
std::queue\<unsigned int\> freeIds;

</div>

<div class="line">

<span id="l00188"></span><span class="lineno"> 188</span> SDL_Renderer\*
c_renderer;

</div>

<div class="line">

<span id="l00189"></span><span class="lineno"> 189</span> };

</div>

</div>

<div class="line">

<span id="l00190"></span><span class="lineno"> 190</span>}

</div>

<div class="line">

<span id="l00191"></span><span class="lineno"> 191</span>

</div>

<div class="line">

<span id="l00192"></span><span class="lineno"> 192</span>

</div>

<div class="line">

<span id="l00193"></span><span class="lineno"> 193</span>

</div>

<div class="line">

<span id="l00194"></span><span class="lineno"> 194</span>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html" class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler](class_macgyver_1_1_animation_handler.html)

</div>

<div class="ttdef">

**Definition** AnimationHandler.h:25

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a0de546eeaafb90223fda419f6c904cb9"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::closeAllActiveAnimations](class_macgyver_1_1_animation_handler.html#a0de546eeaafb90223fda419f6c904cb9)

</div>

<div class="ttdeci">

void closeAllActiveAnimations()

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:112

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a2a58f9b4bec9540afd2b6ea20e985dc3"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::getCurrentFrameProperties](class_macgyver_1_1_animation_handler.html#a2a58f9b4bec9540afd2b6ea20e985dc3)

</div>

<div class="ttdeci">

void getCurrentFrameProperties(unsigned int id, unsigned int
\*outFrameNumber, unsigned int \*outTick)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:91

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a3069e1496b3c52a26b5ea9c47188035b"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::closeAnimationData](class_macgyver_1_1_animation_handler.html#a3069e1496b3c52a26b5ea9c47188035b)

</div>

<div class="ttdeci">

void closeAnimationData(std::string name)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:29

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a367dc496d779b11d8d3e38bf9c0ace0b"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::attachRenderer](class_macgyver_1_1_animation_handler.html#a367dc496d779b11d8d3e38bf9c0ace0b)

</div>

<div class="ttdeci">

void attachRenderer(SDL_Renderer \*renderer)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:9

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a3ee78800ee93904ea16578a0612f4595"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::changeActiveAnimation](class_macgyver_1_1_animation_handler.html#a3ee78800ee93904ea16578a0612f4595)

</div>

<div class="ttdeci">

void changeActiveAnimation(unsigned int id, std::string animationName)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:62

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a3ff3c3c57c83894f8371661c66c89879"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::closeActiveAnimation](class_macgyver_1_1_animation_handler.html#a3ff3c3c57c83894f8371661c66c89879)

</div>

<div class="ttdeci">

void closeActiveAnimation(unsigned int id)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:103

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a47d6dc2ae1e4731dd83ad9dac28caa9f"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::getInstance](class_macgyver_1_1_animation_handler.html#a47d6dc2ae1e4731dd83ad9dac28caa9f)

</div>

<div class="ttdeci">

static AnimationHandler & getInstance()

</div>

<div class="ttdef">

**Definition** AnimationHandler.h:31

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a6e0a7159f7873c00466f7c7f1f381e77"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::changeCurrentFrame](class_macgyver_1_1_animation_handler.html#a6e0a7159f7873c00466f7c7f1f381e77)

</div>

<div class="ttdeci">

void changeCurrentFrame(unsigned int id, unsigned int frame)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:81

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_a9474aafdf72a30bbc1d0172b1c68d386"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::changeCurrentTick](class_macgyver_1_1_animation_handler.html#a9474aafdf72a30bbc1d0172b1c68d386)

</div>

<div class="ttdeci">

void changeCurrentTick(unsigned int id, unsigned int tick)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:86

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_aa14ef2174adb148bf4981d02909ff7c9"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::closeAllAnimationData](class_macgyver_1_1_animation_handler.html#aa14ef2174adb148bf4981d02909ff7c9)

</div>

<div class="ttdeci">

void closeAllAnimationData()

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:37

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_aaed2122d1268881c37da014864dd777d"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::update](class_macgyver_1_1_animation_handler.html#aaed2122d1268881c37da014864dd777d)

</div>

<div class="ttdeci">

void update(unsigned int deltaTime)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:123

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_ab56e8354ac281aef131e2cef2d751c7f"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::addAnimation](class_macgyver_1_1_animation_handler.html#ab56e8354ac281aef131e2cef2d751c7f)

</div>

<div class="ttdeci">

bool addAnimation(std::string name, std::string path)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:14

</div>

</div>

<div id="aclass_macgyver_1_1_animation_handler_html_af6317d69b1920a4c65bb2316006bd332"
class="ttc">

<div class="ttname">

[Macgyver::AnimationHandler::beginAnimation](class_macgyver_1_1_animation_handler.html#af6317d69b1920a4c65bb2316006bd332)

</div>

<div class="ttdeci">

unsigned int beginAnimation(Components::RenderableData
\*attachedRenderable, std::string animName)

</div>

<div class="ttdef">

**Definition** AnimationHandler.cpp:45

</div>

</div>

<div id="astruct_macgyver_1_1_animations_1_1_animation_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Animations::AnimationData](struct_macgyver_1_1_animations_1_1_animation_data.html)

</div>

<div class="ttdef">

**Definition** AnimationData.h:9

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_renderable_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::RenderableData](struct_macgyver_1_1_components_1_1_renderable_data.html)

</div>

<div class="ttdef">

**Definition** Renderable.h:14

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
