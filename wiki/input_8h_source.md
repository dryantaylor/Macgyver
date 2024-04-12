---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Input.h Source File"
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

Input.h

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
2</span><span class="preprocessor">\#include \<SDL.h\></span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "MouseEnum.h"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include \<vector\></span>

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
7</span><span class="preprocessor">\#define getInput
Macgyver::Input::getInstance()</span>

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>

</div>

<div class="line">

<span id="l00009"></span><span class="lineno">
9</span><span class="keyword">namespace </span>Macgyver {

</div>

<div id="foldopen00013" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00013"></span><span class="lineno">
<a href="class_macgyver_1_1_input.html" class="line">13</a></span>
<span class="keyword">class
</span><a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>{

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span>

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>&
getInstance() {

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>
instance;

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>
<span class="keywordflow">return</span> instance;

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span> }

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>(<span class="keyword">const</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>&)
= <span class="keyword">delete</span>;

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>&
operator=(<span class="keyword">const</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>&)
= <span class="keyword">delete</span>;

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_input.html#aa7fe26710dd863d11737bf2f6de4ad05"
class="code hl_function">update</a>();

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> 30</span> int32_t
getNumConnectedControllers();

</div>

<div class="line">

<span id="l00031"></span><span class="lineno"> 31</span>

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> 32</span>
<span class="keywordtype">void</span> openController(int32_t
<span class="keywordtype">id</span>);

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span>

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> 34</span>
<span class="keywordtype">void</span> closeController(int32_t
<span class="keywordtype">id</span>);

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span>

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span>
<span class="keywordtype">void</span> closeAllControllers();

</div>

<div class="line">

<span id="l00045"></span><span class="lineno"> 45</span>
<span class="keywordtype">bool</span> <a
href="class_macgyver_1_1_input.html#a86e88130554b44ac6f32d82f6f22939e"
class="code hl_function">isKeyDown</a>(SDL_KeyCode key);

</div>

<div class="line">

<span id="l00051"></span><span class="lineno"> 51</span>
<span class="keywordtype">bool</span> <a
href="class_macgyver_1_1_input.html#a86e88130554b44ac6f32d82f6f22939e"
class="code hl_function">isKeyDown</a>(SDL_Scancode key);

</div>

<div class="line">

<span id="l00052"></span><span class="lineno"> 52</span>

</div>

<div class="line">

<span id="l00053"></span><span class="lineno"> 53</span>
<span class="keywordtype">bool</span> controller_isButtonDown(int32_t
<span class="keywordtype">id</span>, SDL_GameControllerButton button);

</div>

<div class="line">

<span id="l00054"></span><span class="lineno"> 54</span>

</div>

<div class="line">

<span id="l00055"></span><span class="lineno"> 55</span> int32_t
controller_getAxisPosition(int32_t <span class="keywordtype">id</span>,
SDL_GameControllerAxis axis);

</div>

<div class="line">

<span id="l00056"></span><span class="lineno"> 56</span>

</div>

<div class="line">

<span id="l00057"></span><span class="lineno"> 57</span>
<span class="keywordtype">bool</span> isMouseButtonDown(Mouse button);

</div>

<div class="line">

<span id="l00058"></span><span class="lineno"> 58</span>

</div>

<div class="line">

<span id="l00059"></span><span class="lineno"> 59</span>
<span class="keywordtype">void</span>
getMousePosition(<span class="keywordtype">int</span>\* x,
<span class="keywordtype">int</span>\* y);

</div>

<div class="line">

<span id="l00060"></span><span class="lineno"> 60</span>

</div>

<div class="line">

<span id="l00061"></span><span class="lineno"> 61</span>
<span class="keywordtype">void</span>
INTERNAL_addMouseWheel(<span class="keywordtype">int</span> value);

</div>

<div class="line">

<span id="l00062"></span><span class="lineno"> 62</span>

</div>

<div class="line">

<span id="l00063"></span><span class="lineno"> 63</span>
<span class="keywordtype">int</span> getMouseWheelPos();

</div>

<div class="line">

<span id="l00064"></span><span class="lineno"> 64</span>

</div>

<div class="line">

<span id="l00065"></span><span class="lineno"> 65</span>
<span class="keywordtype">void</span> resetMouseWheelPos();

</div>

<div class="line">

<span id="l00066"></span><span class="lineno"> 66</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00067"></span><span class="lineno"> 67</span>
std::map\<int,SDL_Joystick\*\> controllers;

</div>

<div class="line">

<span id="l00068"></span><span class="lineno"> 68</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">Input</a>();

</div>

<div class="line">

<span id="l00069"></span><span class="lineno"> 69</span>
<a href="class_macgyver_1_1_input.html" class="code hl_class">~Input</a>();

</div>

<div class="line">

<span id="l00071"></span><span class="lineno"> 71</span> Uint8\*
keyboardState;

</div>

<div class="line">

<span id="l00072"></span><span class="lineno"> 72</span>
<span class="comment">//state of the mouse</span>

</div>

<div class="line">

<span id="l00073"></span><span class="lineno"> 73</span> Uint32
mouseState;

</div>

<div class="line">

<span id="l00074"></span><span class="lineno"> 74</span>
<span class="keywordtype">int</span> \*x, \*y;

</div>

<div class="line">

<span id="l00075"></span><span class="lineno"> 75</span>
<span class="keywordtype">int</span> wheelPos;

</div>

<div class="line">

<span id="l00076"></span><span class="lineno"> 76</span>

</div>

<div class="line">

<span id="l00077"></span><span class="lineno"> 77</span> };

</div>

</div>

<div class="line">

<span id="l00078"></span><span class="lineno"> 78</span>}

</div>

<div id="aclass_macgyver_1_1_input_html" class="ttc">

<div class="ttname">

[Macgyver::Input](class_macgyver_1_1_input.html)

</div>

<div class="ttdef">

**Definition** Input.h:13

</div>

</div>

<div id="aclass_macgyver_1_1_input_html_a86e88130554b44ac6f32d82f6f22939e"
class="ttc">

<div class="ttname">

[Macgyver::Input::isKeyDown](class_macgyver_1_1_input.html#a86e88130554b44ac6f32d82f6f22939e)

</div>

<div class="ttdeci">

bool isKeyDown(SDL_KeyCode key)

</div>

<div class="ttdef">

**Definition** Input.cpp:50

</div>

</div>

<div id="aclass_macgyver_1_1_input_html_aa7fe26710dd863d11737bf2f6de4ad05"
class="ttc">

<div class="ttname">

[Macgyver::Input::update](class_macgyver_1_1_input.html#aa7fe26710dd863d11737bf2f6de4ad05)

</div>

<div class="ttdeci">

void update()

</div>

<div class="ttdef">

**Definition** Input.cpp:16

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
