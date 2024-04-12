---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Animations::AnimationData Struct Reference"
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

- **Macgyver**
- **Animations**
- <a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
  class="el">AnimationData</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](struct_macgyver_1_1_animations_1_1_animation_data-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Animations::AnimationData Struct Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_animation_data_8h_source.html"
class="el"><code>AnimationData.h</code></a>`>`

<table class="memberdecls">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd heading">
<td colspan="2"><h2 id="public-member-functions"
class="groupheader"><span id="pub-methods"></span> Public Member
Functions</h2></td>
</tr>
<tr id="r_a1bba3352bfc5efab0bd48ef1a47f5eac"
class="even memitem:a1bba3352bfc5efab0bd48ef1a47f5eac">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a1bba3352bfc5efab0bd48ef1a47f5eac" class="el">AnimationData</a>
(SDL_Renderer *renderer, std::string path)</td>
</tr>
<tr class="odd separator:a1bba3352bfc5efab0bd48ef1a47f5eac">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9fce43b3e7113a424934320c647b53a3"
class="even memitem:a9fce43b3e7113a424934320c647b53a3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a9fce43b3e7113a424934320c647b53a3" class="el">~AnimationData</a>
()</td>
</tr>
<tr class="odd separator:a9fce43b3e7113a424934320c647b53a3">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

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
<tr id="r_a4a0bde5d5a63d192626b23bc418036b3"
class="even memitem:a4a0bde5d5a63d192626b23bc418036b3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4a0bde5d5a63d192626b23bc418036b3"></span>
SDL_Texture ** </td>
<td class="memItemRight"
data-valign="bottom"><strong>sprites</strong></td>
</tr>
<tr class="odd memdesc:a4a0bde5d5a63d192626b23bc418036b3">
<td class="mdescLeft"> </td>
<td class="mdescRight">the frames of the animation as an array<br />
</td>
</tr>
<tr class="even separator:a4a0bde5d5a63d192626b23bc418036b3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a5f6fd587810b2db1bc055430359a1fb6"
class="odd memitem:a5f6fd587810b2db1bc055430359a1fb6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a5f6fd587810b2db1bc055430359a1fb6"></span>
std::size_t </td>
<td class="memItemRight"
data-valign="bottom"><strong>numFrames</strong></td>
</tr>
<tr class="even memdesc:a5f6fd587810b2db1bc055430359a1fb6">
<td class="mdescLeft"> </td>
<td class="mdescRight">number of frames in the animation<br />
</td>
</tr>
<tr class="odd separator:a5f6fd587810b2db1bc055430359a1fb6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a4b70fa000e2c59c4ca297e3d17ed326c"
class="even memitem:a4b70fa000e2c59c4ca297e3d17ed326c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4b70fa000e2c59c4ca297e3d17ed326c"></span>
unsigned int * </td>
<td class="memItemRight"
data-valign="bottom"><strong>frameTimes</strong></td>
</tr>
<tr class="odd memdesc:a4b70fa000e2c59c4ca297e3d17ed326c">
<td class="mdescLeft"> </td>
<td class="mdescRight">how many milliseconds to display each frame for
as an array<br />
</td>
</tr>
<tr class="even separator:a4b70fa000e2c59c4ca297e3d17ed326c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a44f4dbe2a9769421dcf33b08828c24b5"
class="odd memitem:a44f4dbe2a9769421dcf33b08828c24b5">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a44f4dbe2a9769421dcf33b08828c24b5"></span>
bool </td>
<td class="memItemRight"
data-valign="bottom"><strong>doesLoop</strong></td>
</tr>
<tr class="even memdesc:a44f4dbe2a9769421dcf33b08828c24b5">
<td class="mdescLeft"> </td>
<td class="mdescRight">repeat the animation after it finishes?<br />
</td>
</tr>
<tr class="odd separator:a44f4dbe2a9769421dcf33b08828c24b5">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6119069396d7bcd0c727e71a0de48e55"
class="even memitem:a6119069396d7bcd0c727e71a0de48e55">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6119069396d7bcd0c727e71a0de48e55"></span>
SDL_Rect </td>
<td class="memItemRight" data-valign="bottom"><strong>size</strong></td>
</tr>
<tr class="odd memdesc:a6119069396d7bcd0c727e71a0de48e55">
<td class="mdescLeft"> </td>
<td class="mdescRight">x and y component = 0, w and h represent size of
the textures<br />
</td>
</tr>
<tr class="even separator:a6119069396d7bcd0c727e71a0de48e55">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Holds information about an animation loaded from disk

</div>

## Constructor & Destructor Documentation

<span id="a1bba3352bfc5efab0bd48ef1a47f5eac"></span>

## <span class="permalink">[◆ ](#a1bba3352bfc5efab0bd48ef1a47f5eac)</span>AnimationData()

<div class="memitem">

<div class="memproto">

|                                                    |     |                 |                                             |
|----------------------------------------------------|-----|-----------------|---------------------------------------------|
| Macgyver::Animations::AnimationData::AnimationData | (   | SDL_Renderer \* | <span class="paramname">*renderer*, </span> |
|                                                    |     | std::string     | <span class="paramname">*path*</span> )     |

</div>

<div class="memdoc">

Create <a href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="el">AnimationData</a> object from the animation file given at
path

</div>

</div>

<span id="a9fce43b3e7113a424934320c647b53a3"></span>

## <span class="permalink">[◆ ](#a9fce43b3e7113a424934320c647b53a3)</span>~AnimationData()

<div class="memitem">

<div class="memproto">

|                                                     |     |                                 |     |     |
|-----------------------------------------------------|-----|---------------------------------|-----|-----|
| Macgyver::Animations::AnimationData::~AnimationData | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Delete all Sprites in the sprite array

</div>

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following
files:

- MacGyver/<a href="_animation_data_8h_source.html" class="el">AnimationData.h</a>
- MacGyver/**AnimationData.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
