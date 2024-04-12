---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Gameobjects::GameObject Class Reference"
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
- **Gameobjects**
- <a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
  class="el">GameObject</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](class_macgyver_1_1_gameobjects_1_1_game_object-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Gameobjects::GameObject Class Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_game_object_8h_source.html"
class="el"><code>GameObject.h</code></a>`>`

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
<tr id="r_a0273c889cea933c2fd9eaba9104f8cb8"
class="even memitem:a0273c889cea933c2fd9eaba9104f8cb8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a0273c889cea933c2fd9eaba9104f8cb8" class="el">GameObject</a> (int
x=0, int y=0, int z=0)</td>
</tr>
<tr class="odd separator:a0273c889cea933c2fd9eaba9104f8cb8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa2748c9b76c5d316ebea2731cc2ddcbf"
class="even memitem:aa2748c9b76c5d316ebea2731cc2ddcbf">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa2748c9b76c5d316ebea2731cc2ddcbf" class="el">addComponent</a>
(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> *comp)</td>
</tr>
<tr class="odd separator:aa2748c9b76c5d316ebea2731cc2ddcbf">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6947bfb7c95b76e590a285c39b29f91d"
class="even memitem:a6947bfb7c95b76e590a285c39b29f91d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::vector&lt; <a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> * &gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6947bfb7c95b76e590a285c39b29f91d"
class="el">getComponentsWithProperty</a> (Components::COMPONENT_TYPES
type)</td>
</tr>
<tr class="odd separator:a6947bfb7c95b76e590a285c39b29f91d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6ffd10b6c9510d1f9ea502017d6d92ef"
class="even memitem:a6ffd10b6c9510d1f9ea502017d6d92ef">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6ffd10b6c9510d1f9ea502017d6d92ef" class="el">update</a>
(unsigned int deltaTime)</td>
</tr>
<tr class="odd separator:a6ffd10b6c9510d1f9ea502017d6d92ef">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6be9d2a46c2b8432494ded09f7c93e06"
class="even memitem:a6be9d2a46c2b8432494ded09f7c93e06">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="el">Scene</a> * </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6be9d2a46c2b8432494ded09f7c93e06" class="el">getParentScene</a>
()</td>
</tr>
<tr class="odd separator:a6be9d2a46c2b8432494ded09f7c93e06">
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
<tr id="r_adad86c5feb1cd727e4919727348b659c"
class="even memitem:adad86c5feb1cd727e4919727348b659c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="adad86c5feb1cd727e4919727348b659c"></span>
<a href="class_macgyver_1_1_math_1_1_vector3.html"
class="el">Math::Vector3</a> </td>
<td class="memItemRight"
data-valign="bottom"><strong>transform</strong></td>
</tr>
<tr class="odd memdesc:adad86c5feb1cd727e4919727348b659c">
<td class="mdescLeft"> </td>
<td class="mdescRight">Represents the position of the object in world
space.<br />
</td>
</tr>
<tr class="even separator:adad86c5feb1cd727e4919727348b659c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a526e591b65196a1af90d294db7306c39"
class="odd memitem:a526e591b65196a1af90d294db7306c39">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a526e591b65196a1af90d294db7306c39"></span>
std::vector&lt; <a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Macgyver::Gameobjects::Component</a> * &gt; </td>
<td class="memItemRight"
data-valign="bottom"><strong>components</strong> = {}</td>
</tr>
<tr class="even memdesc:a526e591b65196a1af90d294db7306c39">
<td class="mdescLeft"> </td>
<td class="mdescRight">Stores all the components of the object.<br />
</td>
</tr>
<tr class="odd separator:a526e591b65196a1af90d294db7306c39">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a05e878d991b30cd3f01efd7142bef25f"
class="even memitem:a05e878d991b30cd3f01efd7142bef25f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a05e878d991b30cd3f01efd7142bef25f"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>enabled</strong> =
true</td>
</tr>
<tr class="odd separator:a05e878d991b30cd3f01efd7142bef25f">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Class which represents a single object in the world

</div>

## Constructor & Destructor Documentation

<span id="a0273c889cea933c2fd9eaba9104f8cb8"></span>

## <span class="permalink">[◆ ](#a0273c889cea933c2fd9eaba9104f8cb8)</span>GameObject()

<div class="memitem">

<div class="memproto">

|                                     |     |     |                                                                                                            |
|-------------------------------------|-----|-----|------------------------------------------------------------------------------------------------------------|
| Gameobjects::GameObject::GameObject | (   | int | <span class="paramname">*x*<span class="paramdefsep"> = </span><span class="paramdefval">0</span>, </span> |
|                                     |     | int | <span class="paramname">*y*<span class="paramdefsep"> = </span><span class="paramdefval">0</span>, </span> |
|                                     |     | int | <span class="paramname">*z*<span class="paramdefsep"> = </span><span class="paramdefval">0</span></span> ) |

</div>

<div class="memdoc">

Initialises an object and sets its position

Parameters  
|     |                                               |
|-----|-----------------------------------------------|
| x   | horizontal position in world space, defualt 0 |
| y   | vertical position in world space, defualt 0   |
| z   | layer height (used for the camera), defualt 0 |

</div>

</div>

## Member Function Documentation

<span id="aa2748c9b76c5d316ebea2731cc2ddcbf"></span>

## <span class="permalink">[◆ ](#aa2748c9b76c5d316ebea2731cc2ddcbf)</span>addComponent()

<div class="memitem">

<div class="memproto">

|                                            |     |                                                             |                                       |     |     |
|--------------------------------------------|-----|-------------------------------------------------------------|---------------------------------------|-----|-----|
| void Gameobjects::GameObject::addComponent | (   | <a href="class_macgyver_1_1_gameobjects_1_1_component.html" 
                                                    class="el">Component</a> \*                                  | <span class="paramname">*comp*</span> | )   |     |

</div>

<div class="memdoc">

Adds a <a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> to the object

Parameters  
|      |                                 |
|------|---------------------------------|
| comp | pointer to the component to add |

</div>

</div>

<span id="a6947bfb7c95b76e590a285c39b29f91d"></span>

## <span class="permalink">[◆ ](#a6947bfb7c95b76e590a285c39b29f91d)</span>getComponentsWithProperty()

<div class="memitem">

<div class="memproto">

|                                                                                                |     |                             |                                       |     |     |
|------------------------------------------------------------------------------------------------|-----|-----------------------------|---------------------------------------|-----|-----|
| std::vector\< <a href="class_macgyver_1_1_gameobjects_1_1_component.html"                      
 class="el">Gameobjects::Component</a> \* \> Gameobjects::GameObject::getComponentsWithProperty  | (   | Components::COMPONENT_TYPES | <span class="paramname">*type*</span> | )   |     |

</div>

<div class="memdoc">

Gets all components attached to the object which have the given flag
set.

Parameters  
|      |                        |
|------|------------------------|
| type | the flag to search for |

<!-- -->

Returns  
a vector of pointers to all components which are attached to the object
and have the selected flag

</div>

</div>

<span id="a6be9d2a46c2b8432494ded09f7c93e06"></span>

## <span class="permalink">[◆ ](#a6be9d2a46c2b8432494ded09f7c93e06)</span>getParentScene()

<div class="memitem">

<div class="memproto">

|                                                                              |     |                                 |     |     |
|------------------------------------------------------------------------------|-----|---------------------------------|-----|-----|
| <a href="class_macgyver_1_1_gameobjects_1_1_scene.html"                      
 class="el">Gameobjects::Scene</a> \* Gameobjects::GameObject::getParentScene  | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Gets a pointer to the Objects parent
<a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="el">Scene</a>

Returns  
pointer to parent
<a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="el">Scene</a> object

</div>

</div>

<span id="a6ffd10b6c9510d1f9ea502017d6d92ef"></span>

## <span class="permalink">[◆ ](#a6ffd10b6c9510d1f9ea502017d6d92ef)</span>update()

<div class="memitem">

<div class="memproto">

|                                      |     |              |                                            |     |     |
|--------------------------------------|-----|--------------|--------------------------------------------|-----|-----|
| void Gameobjects::GameObject::update | (   | unsigned int | <span class="paramname">*deltaTime*</span> | )   |     |

</div>

<div class="memdoc">

Objects update method. Calls the update method of all attached
components

Parameters  
|           |                                            |
|-----------|--------------------------------------------|
| deltaTime | time between the last frame and this frame |

</div>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

- MacGyver/<a href="_game_object_8h_source.html" class="el">GameObject.h</a>
- MacGyver/**GameObject.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>