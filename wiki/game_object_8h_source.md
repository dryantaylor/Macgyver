---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/GameObject.h Source File"
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

GameObject.h

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
2</span><span class="preprocessor">\#include \<typeinfo\></span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include \<typeindex\></span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include \<vector\></span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno"> 5</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include "Vector3.h"</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno">
9</span><span class="keyword">namespace </span>Macgyver::Gameobjects {

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>
<span class="keyword">class </span>Component;

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>
<span class="keyword">class </span>Scene;

</div>

<div id="foldopen00015" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00015"></span><span class="lineno">
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="line">15</a></span> <span class="keyword">class
</span><a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="code hl_class">GameObject</a> {

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<span class="keyword">friend</span>
<a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="code hl_class">Scene</a>;

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#adad86c5feb1cd727e4919727348b659c"
class="line">19</a></span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Math::Vector3</a> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#adad86c5feb1cd727e4919727348b659c"
class="code hl_variable">transform</a>;

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#a526e591b65196a1af90d294db7306c39"
class="line">21</a></span>
std::vector\<Macgyver::Gameobjects::Component\*\> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#a526e591b65196a1af90d294db7306c39"
class="code hl_variable">components</a> = {};

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#a0273c889cea933c2fd9eaba9104f8cb8"
class="code hl_function">GameObject</a>(<span class="keywordtype">int</span>
x = 0, <span class="keywordtype">int</span> y = 0,
<span class="keywordtype">int</span> z = 0);

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> 34</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#aa2748c9b76c5d316ebea2731cc2ddcbf"
class="code hl_function">addComponent</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Component</a>\* comp);

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span>

</div>

<div class="line">

<span id="l00045"></span><span class="lineno"> 45</span>
std::vector\<Component\*\> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#a6947bfb7c95b76e590a285c39b29f91d"
class="code hl_function">getComponentsWithProperty</a>(Components::COMPONENT_TYPES
type);

</div>

<div class="line">

<span id="l00046"></span><span class="lineno"> 46</span>

</div>

<div class="line">

<span id="l00053"></span><span class="lineno"> 53</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#a6ffd10b6c9510d1f9ea502017d6d92ef"
class="code hl_function">update</a>(<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00054"></span><span class="lineno"> 54</span>

</div>

<div class="line">

<span id="l00060"></span><span class="lineno"> 60</span>
<a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="code hl_class">Scene</a>\* <a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html#a6be9d2a46c2b8432494ded09f7c93e06"
class="code hl_function">getParentScene</a>();

</div>

<div class="line">

<span id="l00061"></span><span class="lineno"> 61</span>

</div>

<div class="line">

<span id="l00062"></span><span class="lineno"> 62</span>
<span class="keywordtype">bool</span> enabled =
<span class="keyword">true</span>;

</div>

<div class="line">

<span id="l00063"></span><span class="lineno"> 63</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00065"></span><span class="lineno"> 65</span>
<a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="code hl_class">Scene</a>\* parentScene;

</div>

<div class="line">

<span id="l00066"></span><span class="lineno"> 66</span> };

</div>

</div>

<div class="line">

<span id="l00067"></span><span class="lineno"> 67</span>}

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

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html_a0273c889cea933c2fd9eaba9104f8cb8"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject::GameObject](class_macgyver_1_1_gameobjects_1_1_game_object.html#a0273c889cea933c2fd9eaba9104f8cb8)

</div>

<div class="ttdeci">

GameObject(int x=0, int y=0, int z=0)

</div>

<div class="ttdef">

**Definition** GameObject.cpp:8

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html_a526e591b65196a1af90d294db7306c39"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject::components](class_macgyver_1_1_gameobjects_1_1_game_object.html#a526e591b65196a1af90d294db7306c39)

</div>

<div class="ttdeci">

std::vector\< Macgyver::Gameobjects::Component \* \> components

</div>

<div class="ttdoc">

Stores all the components of the object.

</div>

<div class="ttdef">

**Definition** GameObject.h:21

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html_a6947bfb7c95b76e590a285c39b29f91d"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject::getComponentsWithProperty](class_macgyver_1_1_gameobjects_1_1_game_object.html#a6947bfb7c95b76e590a285c39b29f91d)

</div>

<div class="ttdeci">

std::vector\< Component \* \>
getComponentsWithProperty(Components::COMPONENT_TYPES type)

</div>

<div class="ttdef">

**Definition** GameObject.cpp:19

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html_a6be9d2a46c2b8432494ded09f7c93e06"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject::getParentScene](class_macgyver_1_1_gameobjects_1_1_game_object.html#a6be9d2a46c2b8432494ded09f7c93e06)

</div>

<div class="ttdeci">

Scene \* getParentScene()

</div>

<div class="ttdef">

**Definition** GameObject.cpp:53

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html_a6ffd10b6c9510d1f9ea502017d6d92ef"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject::update](class_macgyver_1_1_gameobjects_1_1_game_object.html#a6ffd10b6c9510d1f9ea502017d6d92ef)

</div>

<div class="ttdeci">

void update(unsigned int deltaTime)

</div>

<div class="ttdef">

**Definition** GameObject.cpp:30

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html_aa2748c9b76c5d316ebea2731cc2ddcbf"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject::addComponent](class_macgyver_1_1_gameobjects_1_1_game_object.html#aa2748c9b76c5d316ebea2731cc2ddcbf)

</div>

<div class="ttdeci">

void addComponent(Component \*comp)

</div>

<div class="ttdef">

**Definition** GameObject.cpp:13

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_game_object_html_adad86c5feb1cd727e4919727348b659c"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::GameObject::transform](class_macgyver_1_1_gameobjects_1_1_game_object.html#adad86c5feb1cd727e4919727348b659c)

</div>

<div class="ttdeci">

Math::Vector3 transform

</div>

<div class="ttdoc">

Represents the position of the object in world space.

</div>

<div class="ttdef">

**Definition** GameObject.h:19

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

<div id="aclass_macgyver_1_1_math_1_1_vector3_html" class="ttc">

<div class="ttname">

[Macgyver::Math::Vector3](class_macgyver_1_1_math_1_1_vector3.html)

</div>

<div class="ttdef">

**Definition** Vector3.h:12

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
