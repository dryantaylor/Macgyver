---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/GameInputs.h Source File"
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

GameInputs.h

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
2</span><span class="keyword">namespace </span>DemoProject::GameInputs {

</div>

<div class="line">

<span id="l00003"></span><span class="lineno"> 3</span>
<span class="keyword">enum</span> FRAMEBUFFER_SHIFTS :uint16_t {

</div>

<div class="line">

<span id="l00004"></span><span class="lineno"> 4</span> SHIFTS_UP = 0,

</div>

<div class="line">

<span id="l00005"></span><span class="lineno"> 5</span> SHIFTS_DOWN = 1,

</div>

<div class="line">

<span id="l00006"></span><span class="lineno"> 6</span> SHIFTS_LEFT = 2,

</div>

<div class="line">

<span id="l00007"></span><span class="lineno"> 7</span> SHIFTS_RIGHT =
3,

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span> SHIFTS_DOWNLEFT
= 4,

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span> SHIFTS_DOWNRIGHT
= 5,

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span> SHIFTS_UPLEFT =
6,

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span> SHIFTS_UPRIGHT
= 7,

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span> SHIFTS_LKICK =
8,

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span> SHIFTS_MKICK =
10,

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span> SHIFTS_HKICK =
11,

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span> SHIFTS_LPUNCH =
12,

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span> SHIFTS_MPUNCH =
13,

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span> SHIFTS_HPUNCH =
14

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span> };

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>
<span class="keyword">enum</span> GameInputs : uint16_t

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span> {

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span> UP = 1 \<\<
SHIFTS_UP,

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span> DOWN = 1 \<\<
SHIFTS_DOWN,

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span> LEFT = 1 \<\<
SHIFTS_LEFT,

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span> RIGHT = 1 \<\<
SHIFTS_RIGHT,

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span> DOWNLEFT = 1
\<\< SHIFTS_DOWNLEFT,

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span> DOWNRIGHT = 1
\<\< SHIFTS_DOWNRIGHT,

</div>

<div class="line">

<span id="l00028"></span><span class="lineno"> 28</span> UPLEFT = 1 \<\<
SHIFTS_UPLEFT,

</div>

<div class="line">

<span id="l00029"></span><span class="lineno"> 29</span> UPRIGHT = 1
\<\< SHIFTS_UPRIGHT,

</div>

<div class="line">

<span id="l00030"></span><span class="lineno"> 30</span> LKICK = 1 \<\<
SHIFTS_LKICK,

</div>

<div class="line">

<span id="l00031"></span><span class="lineno"> 31</span> MKICK = 1 \<\<
SHIFTS_MKICK,

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> 32</span> HKICK = 1 \<\<
SHIFTS_HKICK,

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span> LPUNCH = 1 \<\<
SHIFTS_LPUNCH,

</div>

<div class="line">

<span id="l00034"></span><span class="lineno"> 34</span> MPUNCH = 1 \<\<
SHIFTS_MPUNCH,

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span> HPUNCH = 1 \<\<
SHIFTS_HPUNCH

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span> };

</div>

<div class="line">

<span id="l00037"></span><span class="lineno"> 37</span>

</div>

<div class="line">

<span id="l00038"></span><span class="lineno"> 38</span>}

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
