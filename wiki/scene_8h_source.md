---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Scene.h Source File"
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

- <a href="dir_e610925873bfe0bf19b07ca2b4f6d40b.html"
  class="el">MacGyver</a>

</div>

</div>

<div class="header">

<div class="headertitle">

<div class="title">

Scene.h

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
3</span><span class="preprocessor">\#include \<vector\></span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno"> 5</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="keyword">namespace </span>Macgyver::Gameobjects {

</div>

<div class="line">

<span id="l00007"></span><span class="lineno"> 7</span>
<span class="keyword">class </span>GameObject;

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>
<span class="keyword">class </span>Component;

</div>

<div id="foldopen00012" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00012"></span><span class="lineno">
<a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="line">12</a></span> <span class="keyword">class
</span><a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="code hl_class">Scene</a> {

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>
<span class="keyword">friend</span>
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="code hl_class">GameObject</a>;

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> <a
href="class_macgyver_1_1_gameobjects_1_1_scene.html#a3fadb341532b9c8d259b05fa3d3f6c95"
class="line">16</a></span> SDL_Renderer\* <a
href="class_macgyver_1_1_gameobjects_1_1_scene.html#a3fadb341532b9c8d259b05fa3d3f6c95"
class="code hl_variable">scene_RENDERER</a>;

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span> <a
href="class_macgyver_1_1_gameobjects_1_1_scene.html#a889f0b8df198aad297ded0d4546a2aad"
class="code hl_function">Scene</a>();

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_gameobjects_1_1_scene.html#aeb1721685fd2c0f4049f2d052a1cd84c"
class="code hl_function">addObject</a>(<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="code hl_class">GameObject</a>\* obj);

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span>

</div>

<div class="line">

<span id="l00037"></span><span class="lineno"> 37</span>
std::vector\<Component\*\> <a
href="class_macgyver_1_1_gameobjects_1_1_scene.html#a58460843bde423dd9435dc69fd33f383"
class="code hl_function">getComponentsInWorldByType</a>(Components::COMPONENT_TYPES
type);

</div>

<div class="line">

<span id="l00038"></span><span class="lineno"> 38</span>

</div>

<div class="line">

<span id="l00048"></span><span class="lineno"> 48</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_gameobjects_1_1_scene.html#aa88683c13dc882a21d75bacd2ef4b8c4"
class="code hl_function">update</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00049"></span><span class="lineno"> 49</span>

</div>

<div class="line">

<span id="l00057"></span><span class="lineno"> 57</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_gameobjects_1_1_scene.html#ab639051b72eb45680720f0646972dd68"
class="code hl_function">physicsUpdate</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00058"></span><span class="lineno"> 58</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00060"></span><span class="lineno"> 60</span>
std::vector\<GameObject\*\> objects;

</div>

<div class="line">

<span id="l00061"></span><span class="lineno"> 61</span>
<span class="comment">// In order of calling in physicsUpdate. </span>

</div>

<div class="line">

<span id="l00062"></span><span class="lineno"> 62</span>
<span class="comment">// Updated every frame during the scenes update
method</span>

</div>

<div class="line">

<span id="l00063"></span><span class="lineno"> 63</span>

</div>

<div class="line">

<span id="l00065"></span><span class="lineno"> 65</span>
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Component</a>\* physicsGravImpactingCache;

</div>

<div class="line">

<span id="l00067"></span><span class="lineno"> 67</span>
std::vector\<Component\*\> physicsVelocityCache;

</div>

<div class="line">

<span id="l00069"></span><span class="lineno"> 69</span>
std::vector\<Component\*\> physicsGravImpactedCache;

</div>

<div class="line">

<span id="l00071"></span><span class="lineno"> 71</span>
std::vector\<Component\*\> physicsColliderCache;

</div>

<div class="line">

<span id="l00072"></span><span class="lineno"> 72</span>
<span class="comment">//stores the ticks since the last
physicsUpdate</span>

</div>

<div class="line">

<span id="l00073"></span><span class="lineno"> 73</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> physicsTick = 0;

</div>

<div class="line">

<span id="l00074"></span><span class="lineno"> 74</span> };

</div>

</div>

<div class="line">

<span id="l00075"></span><span class="lineno"> 75</span>}

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

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject](class_macgyver_1_1_gameobjects_1_1_game_object.html)

</div>

<div class="ttdef">

**Definition** GameObject.h:15

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_scene_html" class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Scene](class_macgyver_1_1_gameobjects_1_1_scene.html)

</div>

<div class="ttdef">

**Definition** Scene.h:12

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_scene_html_a3fadb341532b9c8d259b05fa3d3f6c95"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Scene::scene_RENDERER](class_macgyver_1_1_gameobjects_1_1_scene.html#a3fadb341532b9c8d259b05fa3d3f6c95)

</div>

<div class="ttdeci">

SDL_Renderer \* scene_RENDERER

</div>

<div class="ttdoc">

sdl renderer used for the scene

</div>

<div class="ttdef">

**Definition** Scene.h:16

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_scene_html_a58460843bde423dd9435dc69fd33f383"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Scene::getComponentsInWorldByType](class_macgyver_1_1_gameobjects_1_1_scene.html#a58460843bde423dd9435dc69fd33f383)

</div>

<div class="ttdeci">

std::vector\< Component \* \>
getComponentsInWorldByType(Components::COMPONENT_TYPES type)

</div>

<div class="ttdef">

**Definition** Scene.cpp:17

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_scene_html_a889f0b8df198aad297ded0d4546a2aad"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Scene::Scene](class_macgyver_1_1_gameobjects_1_1_scene.html#a889f0b8df198aad297ded0d4546a2aad)

</div>

<div class="ttdeci">

Scene()

</div>

<div class="ttdef">

**Definition** Scene.cpp:6

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_scene_html_aa88683c13dc882a21d75bacd2ef4b8c4"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Scene::update](class_macgyver_1_1_gameobjects_1_1_scene.html#aa88683c13dc882a21d75bacd2ef4b8c4)

</div>

<div class="ttdeci">

void update(unsigned int deltaTime)

</div>

<div class="ttdef">

**Definition** Scene.cpp:28

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_scene_html_ab639051b72eb45680720f0646972dd68"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Scene::physicsUpdate](class_macgyver_1_1_gameobjects_1_1_scene.html#ab639051b72eb45680720f0646972dd68)

</div>

<div class="ttdeci">

void physicsUpdate(unsigned int deltaTime)

</div>

<div class="ttdef">

**Definition** Scene.cpp:42

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_scene_html_aeb1721685fd2c0f4049f2d052a1cd84c"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Scene::addObject](class_macgyver_1_1_gameobjects_1_1_scene.html#aeb1721685fd2c0f4049f2d052a1cd84c)

</div>

<div class="ttdeci">

void addObject(GameObject \*obj)

</div>

<div class="ttdef">

**Definition** Scene.cpp:11

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
