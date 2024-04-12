---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Force2D.h Source File"
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

Force2D.h

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
2</span><span class="preprocessor">\#include "Vector3.h"</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno"> 3</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="keyword">namespace </span>Macgyver::Math {

</div>

<div id="foldopen00010" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00010"></span><span class="lineno">
<a href="class_macgyver_1_1_math_1_1_force2_d.html" class="line">10</a></span>
<span class="keyword">class
</span><a href="class_macgyver_1_1_math_1_1_force2_d.html"
class="code hl_class">Force2D</a> : <span class="keyword">public</span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="code hl_class">Vector3</a> {

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span> <a
href="class_macgyver_1_1_math_1_1_force2_d.html#a15710f24ad428db74ead3a373e86e175"
class="code hl_function">Force2D</a>(<span class="keywordtype">float</span>
x = 0, <span class="keywordtype">float</span> y = 0);

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>
<a href="class_macgyver_1_1_math_1_1_force2_d.html"
class="code hl_class">Force2D</a>
operator+(<span class="keyword">const</span>
<a href="class_macgyver_1_1_math_1_1_force2_d.html"
class="code hl_class">Force2D</a>& a);

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span>
<span class="keywordtype">float</span> <a
href="class_macgyver_1_1_math_1_1_force2_d.html#aa4842b5726dd497eb168ad91be6111ea"
class="code hl_function">magnitude</a>();

</div>

<div class="line">

<span id="l00032"></span><span class="lineno"> 32</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_math_1_1_force2_d.html#aa060894629473f34159e97735cfb457c"
class="code hl_function">normalise</a>();

</div>

<div class="line">

<span id="l00033"></span><span class="lineno"> 33</span>
<span class="comment">// making programming accessible to the
wrongungs</span>

</div>

<div class="line">

<span id="l00039"></span><span class="lineno"> 39</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_math_1_1_force2_d.html#ab82a9250dd45109b9d1d6d714bbd1dff"
class="code hl_function">normalize</a>();

</div>

<div class="line">

<span id="l00050"></span><span class="lineno"> 50</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_math_1_1_force2_d.html#aa4b8fb91dd09c33145a4ec90f6acdc20"
class="code hl_function">scaleToMagnitude</a>(<span class="keywordtype">float</span>
<a
href="class_macgyver_1_1_math_1_1_force2_d.html#aa4842b5726dd497eb168ad91be6111ea"
class="code hl_function">magnitude</a>);

</div>

<div class="line">

<span id="l00057"></span><span class="lineno"> 57</span>
<span class="keywordtype">void</span> <a
href="class_macgyver_1_1_math_1_1_force2_d.html#a5cdc9621ffb56d4cc2750fc6a2abc5e2"
class="code hl_function">scalarMultiply</a>(<span class="keywordtype">float</span>
num);

</div>

<div class="line">

<span id="l00058"></span><span class="lineno"> 58</span>

</div>

<div class="line">

<span id="l00068"></span><span class="lineno"> 68</span>
<a href="class_macgyver_1_1_math_1_1_force2_d.html"
class="code hl_class">Math::Force2D</a> <a
href="class_macgyver_1_1_math_1_1_force2_d.html#aa8087e4599a852606436d556b6c4ab56"
class="code hl_function">returnScalarMultiply</a>(<span class="keywordtype">float</span>
num);

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

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html" class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D](class_macgyver_1_1_math_1_1_force2_d.html)

</div>

<div class="ttdef">

**Definition** Force2D.h:10

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html_a15710f24ad428db74ead3a373e86e175"
class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D::Force2D](class_macgyver_1_1_math_1_1_force2_d.html#a15710f24ad428db74ead3a373e86e175)

</div>

<div class="ttdeci">

Force2D(float x=0, float y=0)

</div>

<div class="ttdef">

**Definition** Force2D.cpp:6

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html_a5cdc9621ffb56d4cc2750fc6a2abc5e2"
class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D::scalarMultiply](class_macgyver_1_1_math_1_1_force2_d.html#a5cdc9621ffb56d4cc2750fc6a2abc5e2)

</div>

<div class="ttdeci">

void scalarMultiply(float num)

</div>

<div class="ttdef">

**Definition** Force2D.cpp:43

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html_aa060894629473f34159e97735cfb457c"
class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D::normalise](class_macgyver_1_1_math_1_1_force2_d.html#aa060894629473f34159e97735cfb457c)

</div>

<div class="ttdeci">

void normalise()

</div>

<div class="ttdef">

**Definition** Force2D.cpp:22

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html_aa4842b5726dd497eb168ad91be6111ea"
class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D::magnitude](class_macgyver_1_1_math_1_1_force2_d.html#aa4842b5726dd497eb168ad91be6111ea)

</div>

<div class="ttdeci">

float magnitude()

</div>

<div class="ttdef">

**Definition** Force2D.cpp:17

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html_aa4b8fb91dd09c33145a4ec90f6acdc20"
class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D::scaleToMagnitude](class_macgyver_1_1_math_1_1_force2_d.html#aa4b8fb91dd09c33145a4ec90f6acdc20)

</div>

<div class="ttdeci">

void scaleToMagnitude(float magnitude)

</div>

<div class="ttdef">

**Definition** Force2D.cpp:33

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html_aa8087e4599a852606436d556b6c4ab56"
class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D::returnScalarMultiply](class_macgyver_1_1_math_1_1_force2_d.html#aa8087e4599a852606436d556b6c4ab56)

</div>

<div class="ttdeci">

Math::Force2D returnScalarMultiply(float num)

</div>

<div class="ttdef">

**Definition** Force2D.cpp:49

</div>

</div>

<div id="aclass_macgyver_1_1_math_1_1_force2_d_html_ab82a9250dd45109b9d1d6d714bbd1dff"
class="ttc">

<div class="ttname">

[Macgyver::Math::Force2D::normalize](class_macgyver_1_1_math_1_1_force2_d.html#ab82a9250dd45109b9d1d6d714bbd1dff)

</div>

<div class="ttdeci">

void normalize()

</div>

<div class="ttdef">

**Definition** Force2D.cpp:29

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
