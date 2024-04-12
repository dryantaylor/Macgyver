---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/UIMouseDetector.h Source File"
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

UIMouseDetector.h

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
3</span><span class="preprocessor">\#include "Velocity.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "ComponentManager.h"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "ComponentData.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno"> 6</span>

</div>

<div class="line">

<span id="l00007"></span><span class="lineno">
7</span><span class="keyword">namespace </span>Macgyver::Components::UI
{

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>

</div>

<div id="foldopen00014" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00014"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html"
class="line">14</a></span> <span class="keyword">struct </span><a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html"
class="code hl_struct">UIMouseDetector</a> {

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html#a61c2197b75c5b2f30a8f4f5151ebc762"
class="code hl_function">update</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* self,
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> deltaTime);

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html#aa3e62e2b5cd509843f3d3c6ee84c658a"
class="code hl_function">attachNew</a>(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="code hl_class">Gameobjects::Component</a>\* comp,

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span> SDL_Rect
location, <span class="keywordtype">size_t</span> messageIndex,
<span class="keywordtype">long</span>
<span class="keywordtype">long</span> hoverValue = 1);

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> 30</span> };

</div>

</div>

<div class="line">

<span id="l00031"></span><span class="lineno"> 31</span>

</div>

<div id="foldopen00032" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00032"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html"
class="line">32</a></span> <span class="keyword">struct </span><a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html"
class="code hl_struct">UIMouseDetectorData</a> {

</div>

<div class="line">

<span id="l00048"></span><span class="lineno"> 48</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#af0abf11f4055ab2cc41034a363484f98"
class="code hl_function">UIMouseDetectorData</a>(SDL_Rect <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a9481c3eac3a136dd9ba539c33d4e6d7a"
class="code hl_variable">collider</a>,

</div>

<div class="line">

<span id="l00049"></span><span class="lineno"> 49</span>
<span class="keywordtype">size_t</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a6c5d3215693cf39eb1a60d92fc983e0d"
class="code hl_variable">messageIndex</a>,
<span class="keywordtype">long</span>
<span class="keywordtype">long</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a1c5b9a178c29f0816de11c3791335af4"
class="code hl_variable">hoverValue</a>);

</div>

<div class="line">

<span id="l00050"></span><span class="lineno"> 50</span>

</div>

<div class="line">

<span id="l00052"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a9481c3eac3a136dd9ba539c33d4e6d7a"
class="line">52</a></span> SDL_Rect <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a9481c3eac3a136dd9ba539c33d4e6d7a"
class="code hl_variable">collider</a>;

</div>

<div class="line">

<span id="l00054"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a6c5d3215693cf39eb1a60d92fc983e0d"
class="line">54</a></span> <span class="keywordtype">size_t</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a6c5d3215693cf39eb1a60d92fc983e0d"
class="code hl_variable">messageIndex</a>;

</div>

<div class="line">

<span id="l00057"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a1c5b9a178c29f0816de11c3791335af4"
class="line">57</a></span> <span class="keywordtype">long</span>
<span class="keywordtype">long</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a1c5b9a178c29f0816de11c3791335af4"
class="code hl_variable">hoverValue</a>;

</div>

<div class="line">

<span id="l00061"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#ad3d77c6c0ea7eda3e6b2e18103b68d12"
class="line">61</a></span> <span class="keywordtype">long</span>
<span class="keywordtype">long</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#ad3d77c6c0ea7eda3e6b2e18103b68d12"
class="code hl_variable">resetValue</a>;

</div>

<div class="line">

<span id="l00062"></span><span class="lineno"> 62</span>

</div>

<div class="line">

<span id="l00064"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#af74265e1378b3407046e92f150f938ff"
class="line">64</a></span> SDL_Point <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#af74265e1378b3407046e92f150f938ff"
class="code hl_variable">INTERNAL_mousePoint</a>;

</div>

<div class="line">

<span id="l00066"></span><span class="lineno"> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#aea33e44b781e0d54297debb933c1fbeb"
class="line">66</a></span> <span class="keywordtype">bool</span> <a
href="struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#aea33e44b781e0d54297debb933c1fbeb"
class="code hl_variable">pressedPrevFrame</a>;

</div>

<div class="line">

<span id="l00067"></span><span class="lineno"> 67</span>

</div>

<div class="line">

<span id="l00068"></span><span class="lineno"> 68</span>

</div>

<div class="line">

<span id="l00069"></span><span class="lineno"> 69</span>

</div>

<div class="line">

<span id="l00070"></span><span class="lineno"> 70</span> };

</div>

</div>

<div class="line">

<span id="l00071"></span><span class="lineno"> 71</span>}

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

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html)

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:32

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html_a1c5b9a178c29f0816de11c3791335af4"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData::hoverValue](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a1c5b9a178c29f0816de11c3791335af4)

</div>

<div class="ttdeci">

long long hoverValue

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:57

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html_a6c5d3215693cf39eb1a60d92fc983e0d"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData::messageIndex](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a6c5d3215693cf39eb1a60d92fc983e0d)

</div>

<div class="ttdeci">

size_t messageIndex

</div>

<div class="ttdoc">

which messaganger cell to use

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:54

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html_a9481c3eac3a136dd9ba539c33d4e6d7a"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData::collider](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#a9481c3eac3a136dd9ba539c33d4e6d7a)

</div>

<div class="ttdeci">

SDL_Rect collider

</div>

<div class="ttdoc">

rect giving the bounds of the button

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:52

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html_ad3d77c6c0ea7eda3e6b2e18103b68d12"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData::resetValue](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#ad3d77c6c0ea7eda3e6b2e18103b68d12)

</div>

<div class="ttdeci">

long long resetValue

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:61

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html_aea33e44b781e0d54297debb933c1fbeb"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData::pressedPrevFrame](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#aea33e44b781e0d54297debb933c1fbeb)

</div>

<div class="ttdeci">

bool pressedPrevFrame

</div>

<div class="ttdoc">

used internally to handle button being released

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:66

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html_af0abf11f4055ab2cc41034a363484f98"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData::UIMouseDetectorData](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#af0abf11f4055ab2cc41034a363484f98)

</div>

<div class="ttdeci">

UIMouseDetectorData(SDL_Rect collider, size_t messageIndex, long long
hoverValue)

</div>

<div class="ttdef">

**Definition** UIMouseDetector.cpp:69

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data_html_af74265e1378b3407046e92f150f938ff"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetectorData::INTERNAL_mousePoint](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_data.html#af74265e1378b3407046e92f150f938ff)

</div>

<div class="ttdeci">

SDL_Point INTERNAL_mousePoint

</div>

<div class="ttdoc">

used internally for bounds checking

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:64

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_html"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetector](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html)

</div>

<div class="ttdef">

**Definition** UIMouseDetector.h:14

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_html_a61c2197b75c5b2f30a8f4f5151ebc762"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetector::update](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html#a61c2197b75c5b2f30a8f4f5151ebc762)

</div>

<div class="ttdeci">

static void update(Gameobjects::Component \*self, unsigned int
deltaTime)

</div>

<div class="ttdef">

**Definition** UIMouseDetector.cpp:13

</div>

</div>

<div id="astruct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector_html_aa3e62e2b5cd509843f3d3c6ee84c658a"
class="ttc">

<div class="ttname">

[Macgyver::Components::UI::UIMouseDetector::attachNew](struct_macgyver_1_1_components_1_1_u_i_1_1_u_i_mouse_detector.html#aa3e62e2b5cd509843f3d3c6ee84c658a)

</div>

<div class="ttdeci">

static void attachNew(Gameobjects::Component \*comp, SDL_Rect location,
size_t messageIndex, long long hoverValue=1)

</div>

<div class="ttdef">

**Definition** UIMouseDetector.cpp:55

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
