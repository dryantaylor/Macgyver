---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Component.h Source File"
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

Component.h

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

<span id="l00002"></span><span class="lineno"> 2</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include \<functional\></span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include \<vector\></span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include
"ComponentDataWrapper.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="preprocessor">\#include "Vector3.h"</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno">
9</span><span class="keyword">namespace </span>Macgyver::Gameobjects{

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>
<span class="keyword">class </span>Scene;

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>
<span class="keyword">class </span>GameObject;

</div>

<div id="foldopen00015" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00015"></span><span class="lineno">
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="line">15</a></span> <span class="keyword">class
</span><a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Component</a> {

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<span class="keyword">friend</span>
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="code hl_class">GameObject</a>;

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#afcb07412715f07063168cc40f1a213c8"
class="code hl_function">Component</a>();

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="code hl_class">GameObject</a>\* <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ac6186df35dea96b00215fe8eb09cd1a8"
class="code hl_function">getParent</a>();

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> 30</span>

</div>

<div class="line">

<span id="l00040"></span><span class="lineno"> 40</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ab56e2f9909e747e69fa08554418e2270"
class="code hl_function">addData</a>(<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="code hl_struct">Components::ComponentData</a>\* data, std::size_t
dataTypeHash);

</div>

<div class="line">

<span id="l00041"></span><span class="lineno"> 41</span>

</div>

<div class="line">

<span id="l00053"></span><span class="lineno"> 53</span>
<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="code hl_struct">Components::ComponentData</a>\* <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ae5f3db39ad5c8f64175b92e402bd7bf4"
class="code hl_function">getData</a>(std::size_t dataTypeHash);

</div>

<div class="line">

<span id="l00054"></span><span class="lineno"> 54</span>

</div>

<div class="line">

<span id="l00055"></span><span class="lineno"> 55</span>
<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="code hl_struct">Components::ComponentData</a>\* <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ae5f3db39ad5c8f64175b92e402bd7bf4"
class="code hl_function">getData</a>(<span class="keywordtype">int</span>
index);

</div>

<div class="line">

<span id="l00061"></span><span class="lineno"> 61</span> COMPONENT_TYPE
<a
href="class_macgyver_1_1_gameobjects_1_1_component.html#a50c295e01fe69a2f43685e9890a5359f"
class="code hl_function">getComponentProperties</a>();

</div>

<div class="line">

<span id="l00062"></span><span class="lineno"> 62</span>

</div>

<div class="line">

<span id="l00068"></span><span class="lineno"> 68</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#a0123c164d78ecafbc08686b110997915"
class="code hl_function">setComponentProperties</a>(COMPONENT_TYPE
types);

</div>

<div class="line">

<span id="l00069"></span><span class="lineno"> 69</span>

</div>

<div class="line">

<span id="l00074"></span><span class="lineno"> 74</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Macgyver::Math::Vector3</a> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ae5d464e0bce97db3047dc42f66325d92"
class="code hl_function">getWorldTransform</a>();

</div>

<div class="line">

<span id="l00075"></span><span class="lineno"> 75</span>

</div>

<div class="line">

<span id="l00079"></span><span class="lineno"> 79</span>
<a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="code hl_class">Scene</a>\* <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ab3c9033561496927b4ad2fce2e651293"
class="code hl_function">getWorldScene</a>();

</div>

<div class="line">

<span id="l00080"></span><span class="lineno"> 80</span>

</div>

<div class="line">

<span id="l00083"></span><span class="lineno"> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#a8c731b26091d06f104caceec257a8127"
class="line">83</a></span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Macgyver::Math::Vector3</a> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#a8c731b26091d06f104caceec257a8127"
class="code hl_variable">localTransform</a>;

</div>

<div class="line">

<span id="l00084"></span><span class="lineno"> 84</span>

</div>

<div class="line">

<span id="l00088"></span><span class="lineno"> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ab3329d1c3da95d5c0578f8ad08fd1570"
class="line">88</a></span>
std::function\<void(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Component</a>\*,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span>)\> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#ab3329d1c3da95d5c0578f8ad08fd1570"
class="code hl_variable">update</a>;

</div>

<div class="line">

<span id="l00089"></span><span class="lineno"> 89</span>

</div>

<div class="line">

<span id="l00093"></span><span class="lineno"> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#a667da47a162a7c56e2f62458448e9f8e"
class="line">93</a></span>
std::function\<void(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Component</a>\*)\> <a
href="class_macgyver_1_1_gameobjects_1_1_component.html#a667da47a162a7c56e2f62458448e9f8e"
class="code hl_variable">physicsUpdate</a>;

</div>

<div class="line">

<span id="l00094"></span><span class="lineno"> 94</span>

</div>

<div class="line">

<span id="l00095"></span><span class="lineno"> 95</span>
<span class="keywordtype">bool</span> enabled =
<span class="keyword">true</span>;

</div>

<div class="line">

<span id="l00096"></span><span class="lineno"> 96</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00099"></span><span class="lineno"> 99</span>
std::vector\<Components::ComponentDataWrapper\*\> data;

</div>

<div class="line">

<span id="l00101"></span><span class="lineno"> 101</span>
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="code hl_class">GameObject</a>\* parent;

</div>

<div class="line">

<span id="l00104"></span><span class="lineno"> 104</span> COMPONENT_TYPE
componentProperties = 0x0000;

</div>

<div class="line">

<span id="l00105"></span><span class="lineno"> 105</span>

</div>

<div class="line">

<span id="l00106"></span><span class="lineno"> 106</span> };

</div>

</div>

<div class="line">

<span id="l00107"></span><span class="lineno"> 107</span>}

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

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_a0123c164d78ecafbc08686b110997915"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::setComponentProperties](class_macgyver_1_1_gameobjects_1_1_component.html#a0123c164d78ecafbc08686b110997915)

</div>

<div class="ttdeci">

void setComponentProperties(COMPONENT_TYPE types)

</div>

<div class="ttdef">

**Definition** Component.cpp:46

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_a50c295e01fe69a2f43685e9890a5359f"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::getComponentProperties](class_macgyver_1_1_gameobjects_1_1_component.html#a50c295e01fe69a2f43685e9890a5359f)

</div>

<div class="ttdeci">

COMPONENT_TYPE getComponentProperties()

</div>

<div class="ttdef">

**Definition** Component.cpp:41

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_a667da47a162a7c56e2f62458448e9f8e"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::physicsUpdate](class_macgyver_1_1_gameobjects_1_1_component.html#a667da47a162a7c56e2f62458448e9f8e)

</div>

<div class="ttdeci">

std::function\< void(Component \*) physicsUpdate)

</div>

<div class="ttdef">

**Definition** Component.h:93

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_a8c731b26091d06f104caceec257a8127"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::localTransform](class_macgyver_1_1_gameobjects_1_1_component.html#a8c731b26091d06f104caceec257a8127)

</div>

<div class="ttdeci">

Macgyver::Math::Vector3 localTransform

</div>

<div class="ttdef">

**Definition** Component.h:83

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_ab3329d1c3da95d5c0578f8ad08fd1570"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::update](class_macgyver_1_1_gameobjects_1_1_component.html#ab3329d1c3da95d5c0578f8ad08fd1570)

</div>

<div class="ttdeci">

std::function\< void(Component \*, unsigned int) update)

</div>

<div class="ttdef">

**Definition** Component.h:88

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_ab3c9033561496927b4ad2fce2e651293"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::getWorldScene](class_macgyver_1_1_gameobjects_1_1_component.html#ab3c9033561496927b4ad2fce2e651293)

</div>

<div class="ttdeci">

Scene \* getWorldScene()

</div>

<div class="ttdef">

**Definition** Component.cpp:56

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_ab56e2f9909e747e69fa08554418e2270"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::addData](class_macgyver_1_1_gameobjects_1_1_component.html#ab56e2f9909e747e69fa08554418e2270)

</div>

<div class="ttdeci">

void addData(Components::ComponentData \*data, std::size_t dataTypeHash)

</div>

<div class="ttdef">

**Definition** Component.cpp:20

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_ac6186df35dea96b00215fe8eb09cd1a8"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::getParent](class_macgyver_1_1_gameobjects_1_1_component.html#ac6186df35dea96b00215fe8eb09cd1a8)

</div>

<div class="ttdeci">

GameObject \* getParent()

</div>

<div class="ttdef">

**Definition** Component.cpp:15

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_ae5d464e0bce97db3047dc42f66325d92"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::getWorldTransform](class_macgyver_1_1_gameobjects_1_1_component.html#ae5d464e0bce97db3047dc42f66325d92)

</div>

<div class="ttdeci">

Macgyver::Math::Vector3 getWorldTransform()

</div>

<div class="ttdef">

**Definition** Component.cpp:51

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_ae5f3db39ad5c8f64175b92e402bd7bf4"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::getData](class_macgyver_1_1_gameobjects_1_1_component.html#ae5f3db39ad5c8f64175b92e402bd7bf4)

</div>

<div class="ttdeci">

Components::ComponentData \* getData(std::size_t dataTypeHash)

</div>

<div class="ttdef">

**Definition** Component.cpp:26

</div>

</div>

<div id="aclass_macgyver_1_1_gameobjects_1_1_component_html_afcb07412715f07063168cc40f1a213c8"
class="ttc">

<div class="ttname">

[Macgyver::Gameobjects::Component::Component](class_macgyver_1_1_gameobjects_1_1_component.html#afcb07412715f07063168cc40f1a213c8)

</div>

<div class="ttdeci">

Component()

</div>

<div class="ttdef">

**Definition** Component.cpp:9

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

<div id="aclass_macgyver_1_1_math_1_1_vector3_html" class="ttc">

<div class="ttname">

[Macgyver::Math::Vector3](class_macgyver_1_1_math_1_1_vector3.html)

</div>

<div class="ttdef">

**Definition** Vector3.h:12

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_component_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::ComponentData](struct_macgyver_1_1_components_1_1_component_data.html)

</div>

<div class="ttdef">

**Definition** ComponentData.h:33

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
