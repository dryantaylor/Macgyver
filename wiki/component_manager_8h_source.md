---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/ComponentManager.h Source File"
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

ComponentManager.h

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

<span id="l00003"></span><span class="lineno"> 3</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#define COMPONENT_TYPE unsigned
int</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno"> 5</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="keyword">namespace </span>Macgyver::Components {

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>
<span class="keyword">enum</span> COMPONENT_TYPES:
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> {

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span> NONE = 0,

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span>
<span class="comment">//Commitment to have a RenderableData data
attached</span>

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span> RENDERABLE =
0b00000000000000000000000000000001,

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<span class="comment">//commitment to handle sprite drawing</span>

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span> RENDERER =
0b00000000000000000000000000000010,

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<span class="comment">//Commitment to have Physics 2D data with a
collision box</span>

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span> COLLIDER =
0b00000000000000000000000000000100,

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>
<span class="comment">//Commitment to have Physics2DData where velocity
will act on GameObjects Transform</span>

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span> VELOCITY =
0b00000000000000000000000000001000,

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>
<span class="comment">//Same commitment as PHYSICS2D_VELOCITY but
allowing gravity to act on it</span>

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span> GRAV_IMPACTED =
0b00000000000000000000000000010000,

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>
<span class="comment">//commitment to only have one in the scene</span>

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span> GRAV_IMPACTING
= 0b00000000000000000000000000100000,

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>
<span class="comment">//Don't update with other objects, call UIUpdate
at after all world objects are done updating</span>

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span> UI_RENDERABLE =
0b00000000000000000000000001000000,

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span> UI_INTERACTABLE
= 0b00000000000000000000000010000000

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span> };

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span>
<span class="keyword">constexpr</span>
<span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> MIN_PLAYER_TYPE_VAL = 128U \<\< 1;

</div>

<div class="line">

<span id="l00038"></span><span class="lineno"> 38</span>
<span class="keywordtype">bool</span> hasProperty(COMPONENT_TYPES
targetType, <span class="keywordtype">unsigned</span>
<span class="keywordtype">int</span> component);

</div>

<div class="line">

<span id="l00039"></span><span class="lineno"> 39</span>};

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
