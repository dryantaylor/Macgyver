---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Animations::ActiveAnimation Struct
  Reference"
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

- **Macgyver**
- **Animations**
- <a href="struct_macgyver_1_1_animations_1_1_active_animation.html"
  class="el">ActiveAnimation</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Attributes](#pub-attribs) \| [List of all
members](struct_macgyver_1_1_animations_1_1_active_animation-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Animations::ActiveAnimation Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_active_animation_8h_source.html"
class="el"><code>ActiveAnimation.h</code></a>`>`

<table class="memberdecls">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd heading">
<td colspan="2"><h2 id="public-attributes" class="groupheader"><span
id="pub-attribs"></span> Public Attributes</h2></td>
</tr>
<tr id="r_ae0842eecd0834fa3fa698fab31990fcc"
class="even memitem:ae0842eecd0834fa3fa698fab31990fcc">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae0842eecd0834fa3fa698fab31990fcc"></span>
unsigned int </td>
<td class="memItemRight" data-valign="bottom"><strong>currFrame</strong>
= 0</td>
</tr>
<tr class="odd memdesc:ae0842eecd0834fa3fa698fab31990fcc">
<td class="mdescLeft"> </td>
<td class="mdescRight">current frame of the animation<br />
</td>
</tr>
<tr class="even separator:ae0842eecd0834fa3fa698fab31990fcc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a8bd50bf4a52aecbc3a8555281216fa25"
class="odd memitem:a8bd50bf4a52aecbc3a8555281216fa25">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a8bd50bf4a52aecbc3a8555281216fa25"></span>
unsigned int </td>
<td class="memItemRight" data-valign="bottom"><strong>frameTick</strong>
= 0</td>
</tr>
<tr class="even memdesc:a8bd50bf4a52aecbc3a8555281216fa25">
<td class="mdescLeft"> </td>
<td class="mdescRight">how many ms/ticks into the current frame of the
animation<br />
</td>
</tr>
<tr class="odd separator:a8bd50bf4a52aecbc3a8555281216fa25">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a763ee7bba42a0dd413ee9b08b7197931"
class="even memitem:a763ee7bba42a0dd413ee9b08b7197931">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a763ee7bba42a0dd413ee9b08b7197931"></span>
<a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="el">AnimationData</a> * </td>
<td class="memItemRight"
data-valign="bottom"><strong>activeAnimation</strong></td>
</tr>
<tr class="odd memdesc:a763ee7bba42a0dd413ee9b08b7197931">
<td class="mdescLeft"> </td>
<td class="mdescRight">pointer to the animation currently being
animated<br />
</td>
</tr>
<tr class="even separator:a763ee7bba42a0dd413ee9b08b7197931">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0d1b21f53e77311864908ad6a7667a79"
class="odd memitem:a0d1b21f53e77311864908ad6a7667a79">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a0d1b21f53e77311864908ad6a7667a79"></span>
<a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="el">AnimationData</a> * </td>
<td class="memItemRight"
data-valign="bottom"><strong>idleAnimation</strong></td>
</tr>
<tr class="even memdesc:a0d1b21f53e77311864908ad6a7667a79">
<td class="mdescLeft"> </td>
<td class="mdescRight">fall back animation when a non-looping active
animation finishes<br />
</td>
</tr>
<tr class="odd separator:a0d1b21f53e77311864908ad6a7667a79">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a828150153ed9bcfcf8e5ef9de4d4ee01"
class="even memitem:a828150153ed9bcfcf8e5ef9de4d4ee01">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a828150153ed9bcfcf8e5ef9de4d4ee01"></span>
<a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="el">Components::RenderableData</a> * </td>
<td class="memItemRight"
data-valign="bottom"><strong>attachedRenderable</strong></td>
</tr>
<tr class="odd memdesc:a828150153ed9bcfcf8e5ef9de4d4ee01">
<td class="mdescLeft"> </td>
<td class="mdescRight">the renderable object to target the
animation<br />
</td>
</tr>
<tr class="even separator:a828150153ed9bcfcf8e5ef9de4d4ee01">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Holds an animation currently being ran each frame

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="_active_animation_8h_source.html"
  class="el">ActiveAnimation.h</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
