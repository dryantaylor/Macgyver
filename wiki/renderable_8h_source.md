---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Renderable.h Source File"
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

Renderable.h

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
2</span><span class="preprocessor">\#include \<string\></span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno"> 3</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "SDL_image.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "SDL.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno"> 6</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno">
8</span><span class="preprocessor">\#include "Component.h"</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>

</div>

<div class="line">

<span id="l00010"></span><span class="lineno">
10</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div id="foldopen00014" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00014"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="line">14</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="code hl_struct">RenderableData</a> {

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span> <a
href="struct_macgyver_1_1_components_1_1_renderable_data.html#ab605b4de043fad1fd600feb1d07f2a23"
class="code hl_function">RenderableData</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self, std::string
path, <span class="keywordtype">int</span> width,
<span class="keywordtype">int</span> height);

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span> <a
href="struct_macgyver_1_1_components_1_1_renderable_data.html#ab7574cbff921436361e6d5628debc1b8"
class="code hl_function">~RenderableData</a>();

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>

</div>

<div class="line">

<span id="l00031"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_renderable_data.html#a335788ed220e36c624dc0a4561f2192e"
class="line">31</a></span> SDL_Texture\* <a
href="struct_macgyver_1_1_components_1_1_renderable_data.html#a335788ed220e36c624dc0a4561f2192e"
class="code hl_variable">texture</a>;

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_renderable_data.html#ac7a0d6e566536c113c4e268da8e53e0e"
class="line">34</a></span> SDL_Rect <a
href="struct_macgyver_1_1_components_1_1_renderable_data.html#ac7a0d6e566536c113c4e268da8e53e0e"
class="code hl_variable">rect</a>;

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span> };

</div>

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span>

</div>

<div class="line">

<span id="l00037"></span><span class="lineno"> 37</span>
<span class="comment">/\*</span>

</div>

<div class="line">

<span id="l00038"></span><span class="lineno">
38</span><span class="comment"> Struct to hold a Renderable
Component</span>

</div>

<div class="line">

<span id="l00039"></span><span class="lineno">
39</span><span class="comment"> \*/</span>

</div>

<div id="foldopen00040" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00040"></span><span class="lineno">
<a href="struct_macgyver_1_1_components_1_1_renderable.html"
class="line">40</a></span> <span class="keyword">struct
</span><a href="struct_macgyver_1_1_components_1_1_renderable.html"
class="code hl_struct">Renderable</a> {

</div>

<div class="line">

<span id="l00041"></span><span class="lineno"> 41</span> COMPONENT_TYPE
flags = RENDERABLE;

</div>

<div class="line">

<span id="l00042"></span><span class="lineno"> 42</span>
<span class="comment">/\*</span>

</div>

<div class="line">

<span id="l00043"></span><span class="lineno">
43</span><span class="comment"> Renderables update method, does
nothing.</span>

</div>

<div class="line">

<span id="l00044"></span><span class="lineno">
44</span><span class="comment"></span>

</div>

<div class="line">

<span id="l00045"></span><span class="lineno">
45</span><span class="comment"> @param self pointer to the Component
which the renderable is part of</span>

</div>

<div class="line">

<span id="l00046"></span><span class="lineno">
46</span><span class="comment"> @param deltaTime time in milliseconds
since last frame and this one</span>

</div>

<div class="line">

<span id="l00047"></span><span class="lineno">
47</span><span class="comment"> \*/</span>

</div>

<div class="line">

<span id="l00048"></span><span class="lineno"> 48</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
update(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00049"></span><span class="lineno"> 49</span>

</div>

<div class="line">

<span id="l00050"></span><span class="lineno"> 50</span>
<span class="comment">/\*</span>

</div>

<div class="line">

<span id="l00051"></span><span class="lineno">
51</span><span class="comment"> Attaches a new Renderable to an existing
Component.</span>

</div>

<div class="line">

<span id="l00052"></span><span class="lineno">
52</span><span class="comment"> Note: a Component should only have one
thing attached to it</span>

</div>

<div class="line">

<span id="l00053"></span><span class="lineno">
53</span><span class="comment"></span>

</div>

<div class="line">

<span id="l00054"></span><span class="lineno">
54</span><span class="comment"> @param comp pointer to the component to
attach the Renderable to</span>

</div>

<div class="line">

<span id="l00055"></span><span class="lineno">
55</span><span class="comment"> \*/</span>

</div>

<div class="line">

<span id="l00056"></span><span class="lineno"> 56</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span>
AttachNew(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp, std::string
path, <span class="keywordtype">int</span> width,
<span class="keywordtype">int</span> height);

</div>

<div class="line">

<span id="l00057"></span><span class="lineno"> 57</span> };

</div>

</div>

<div class="line">

<span id="l00058"></span><span class="lineno"> 58</span>}

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

<div id="astruct_macgyver_1_1_components_1_1_renderable_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::RenderableData](struct_macgyver_1_1_components_1_1_renderable_data.html)

</div>

<div class="ttdef">

**Definition** Renderable.h:14

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_renderable_data_html_a335788ed220e36c624dc0a4561f2192e"
class="ttc">

<div class="ttname">

[Macgyver::Components::RenderableData::texture](struct_macgyver_1_1_components_1_1_renderable_data.html#a335788ed220e36c624dc0a4561f2192e)

</div>

<div class="ttdeci">

SDL_Texture \* texture

</div>

<div class="ttdoc">

Pointer to internal SDL texture.

</div>

<div class="ttdef">

**Definition** Renderable.h:31

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_renderable_data_html_ab605b4de043fad1fd600feb1d07f2a23"
class="ttc">

<div class="ttname">

[Macgyver::Components::RenderableData::RenderableData](struct_macgyver_1_1_components_1_1_renderable_data.html#ab605b4de043fad1fd600feb1d07f2a23)

</div>

<div class="ttdeci">

RenderableData(Gameobjects::Component \*self, std::string path, int
width, int height)

</div>

<div class="ttdef">

**Definition** Renderable.cpp:6

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_renderable_data_html_ab7574cbff921436361e6d5628debc1b8"
class="ttc">

<div class="ttname">

[Macgyver::Components::RenderableData::~RenderableData](struct_macgyver_1_1_components_1_1_renderable_data.html#ab7574cbff921436361e6d5628debc1b8)

</div>

<div class="ttdeci">

~RenderableData()

</div>

<div class="ttdef">

**Definition** Renderable.cpp:23

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_renderable_data_html_ac7a0d6e566536c113c4e268da8e53e0e"
class="ttc">

<div class="ttname">

[Macgyver::Components::RenderableData::rect](struct_macgyver_1_1_components_1_1_renderable_data.html#ac7a0d6e566536c113c4e268da8e53e0e)

</div>

<div class="ttdeci">

SDL_Rect rect

</div>

<div class="ttdef">

**Definition** Renderable.h:34

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_renderable_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::Renderable](struct_macgyver_1_1_components_1_1_renderable.html)

</div>

<div class="ttdef">

**Definition** Renderable.h:40

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
