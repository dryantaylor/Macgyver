---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Vector3.h Source File"
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

Vector3.h

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
2</span><span class="preprocessor">\#include \<iostream\></span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno"> 3</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="keyword">namespace </span>Macgyver::Math {

</div>

<div class="line">

<span id="l00005"></span><span class="lineno"> 5</span>
<span class="keyword">class </span>Force2D;

</div>

<div id="foldopen00012" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00012"></span><span class="lineno">
<a href="class_macgyver_1_1_math_1_1_vector3.html" class="line">12</a></span>
<span class="keyword">class
</span><a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>{

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>
<span class="keywordtype">float</span> x, y, z;

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span> <a
href="class_macgyver_1_1_math_1_1_vector3.html#a61fb1b28cf667c8ef1a90bcd8b405b15"
class="code hl_function">Vector3</a>(<span class="keywordtype">float</span>
x = 0, <span class="keywordtype">float</span> y = 0,
<span class="keywordtype">float</span> z = 0);

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>
operator+(<span class="keyword">const</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>& a);

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>
operator-(<span class="keyword">const</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>& a);

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>
operator\*(<span class="keyword">const</span>
<span class="keywordtype">float</span> b);

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>
operator/(<span class="keyword">const</span>
<span class="keywordtype">float</span> b);

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>&
operator+=(<span class="keyword">const</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a>& a);

</div>

<div class="line">

<span id="l00027"></span><span class="lineno"> 27</span>

</div>

<div class="line">

<span id="l00035"></span><span class="lineno"> 35</span>
<a href="class_macgyver_1_1_math_1_1_force2_d.html"
class="code hl_class">Force2D</a> <a
href="class_macgyver_1_1_math_1_1_vector3.html#a279e0d8f02439f19d6d75af18650f7a3"
class="code hl_function">copyToForce2D</a>();

</div>

<div class="line">

<span id="l00036"></span><span class="lineno"> 36</span>

</div>

<div class="line">

<span id="l00037"></span><span class="lineno"> 37</span> };

</div>

</div>

<div class="line">

<span id="l00038"></span><span class="lineno"> 38</span>}

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html" class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D](class_macgyver_1_1_math_1_1_force2_d.html)

</div>

<div class="ttdef">

**Definition** Force2D.h:10

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

<div id="aclass_macgyver_1_1_math_1_1_vector3_html_a279e0d8f02439f19d6d75af18650f7a3"
class="ttc">

<div class="ttname">

[Macgyver::Math::Vector3::copyToForce2D](class_macgyver_1_1_math_1_1_vector3.html#a279e0d8f02439f19d6d75af18650f7a3)

</div>

<div class="ttdeci">

Force2D copyToForce2D()

</div>

<div class="ttdef">

**Definition** Vector3.cpp:55

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_vector3_html_a61fb1b28cf667c8ef1a90bcd8b405b15"
class="ttc">

<div class="ttname">

[Macgyver::Math::Vector3::Vector3](class_macgyver_1_1_math_1_1_vector3.html#a61fb1b28cf667c8ef1a90bcd8b405b15)

</div>

<div class="ttdeci">

Vector3(float x=0, float y=0, float z=0)

</div>

<div class="ttdef">

**Definition** Vector3.cpp:5

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
