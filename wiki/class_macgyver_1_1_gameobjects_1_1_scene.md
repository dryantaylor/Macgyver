---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Gameobjects::Scene Class Reference"
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
- <a href="class_macgyver_1_1_gameobjects_1_1_scene.html"
  class="el">Scene</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](class_macgyver_1_1_gameobjects_1_1_scene-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Gameobjects::Scene Class Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_scene_8h_source.html" class="el"><code>Scene.h</code></a>`>`

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
<tr id="r_a889f0b8df198aad297ded0d4546a2aad"
class="even memitem:a889f0b8df198aad297ded0d4546a2aad">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a889f0b8df198aad297ded0d4546a2aad" class="el">Scene</a> ()</td>
</tr>
<tr class="odd separator:a889f0b8df198aad297ded0d4546a2aad">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aeb1721685fd2c0f4049f2d052a1cd84c"
class="even memitem:aeb1721685fd2c0f4049f2d052a1cd84c">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aeb1721685fd2c0f4049f2d052a1cd84c" class="el">addObject</a> (<a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="el">GameObject</a> *obj)</td>
</tr>
<tr class="odd separator:aeb1721685fd2c0f4049f2d052a1cd84c">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a58460843bde423dd9435dc69fd33f383"
class="even memitem:a58460843bde423dd9435dc69fd33f383">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::vector&lt; <a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> * &gt; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a58460843bde423dd9435dc69fd33f383"
class="el">getComponentsInWorldByType</a> (Components::COMPONENT_TYPES
type)</td>
</tr>
<tr class="odd separator:a58460843bde423dd9435dc69fd33f383">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa88683c13dc882a21d75bacd2ef4b8c4"
class="even memitem:aa88683c13dc882a21d75bacd2ef4b8c4">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa88683c13dc882a21d75bacd2ef4b8c4" class="el">update</a>
(unsigned int deltaTime)</td>
</tr>
<tr class="odd separator:aa88683c13dc882a21d75bacd2ef4b8c4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab639051b72eb45680720f0646972dd68"
class="even memitem:ab639051b72eb45680720f0646972dd68">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab639051b72eb45680720f0646972dd68" class="el">physicsUpdate</a>
(unsigned int deltaTime)</td>
</tr>
<tr class="odd separator:ab639051b72eb45680720f0646972dd68">
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
<tr id="r_a3fadb341532b9c8d259b05fa3d3f6c95"
class="even memitem:a3fadb341532b9c8d259b05fa3d3f6c95">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a3fadb341532b9c8d259b05fa3d3f6c95"></span>
SDL_Renderer * </td>
<td class="memItemRight"
data-valign="bottom"><strong>scene_RENDERER</strong></td>
</tr>
<tr class="odd memdesc:a3fadb341532b9c8d259b05fa3d3f6c95">
<td class="mdescLeft"> </td>
<td class="mdescRight">sdl renderer used for the scene<br />
</td>
</tr>
<tr class="even separator:a3fadb341532b9c8d259b05fa3d3f6c95">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Class to represent a group of objects in the world at once

</div>

## Constructor & Destructor Documentation

<span id="a889f0b8df198aad297ded0d4546a2aad"></span>

## <span class="permalink">[◆ ](#a889f0b8df198aad297ded0d4546a2aad)</span>Scene()

<div class="memitem">

<div class="memproto">

|                           |     |                                 |     |     |
|---------------------------|-----|---------------------------------|-----|-----|
| Gameobjects::Scene::Scene | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Default Contsructor

</div>

</div>

## Member Function Documentation

<span id="aeb1721685fd2c0f4049f2d052a1cd84c"></span>

## <span class="permalink">[◆ ](#aeb1721685fd2c0f4049f2d052a1cd84c)</span>addObject()

<div class="memitem">

<div class="memproto">

|                                    |     |                                                               |                                      |     |     |
|------------------------------------|-----|---------------------------------------------------------------|--------------------------------------|-----|-----|
| void Gameobjects::Scene::addObject | (   | <a href="class_macgyver_1_1_gameobjects_1_1_game_object.html" 
                                            class="el">GameObject</a> \*                                   | <span class="paramname">*obj*</span> | )   |     |

</div>

<div class="memdoc">

Adds a <a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="el">GameObject</a> instance to the scene

Parameters  
|     |                                                               |
|-----|---------------------------------------------------------------|
| obj | <a href="class_macgyver_1_1_gameobjects_1_1_game_object.html" 
       class="el">GameObject</a> instance to be added to this scene   |

</div>

</div>

<span id="a58460843bde423dd9435dc69fd33f383"></span>

## <span class="permalink">[◆ ](#a58460843bde423dd9435dc69fd33f383)</span>getComponentsInWorldByType()

<div class="memitem">

<div class="memproto">

|                                                                                            |     |                             |                                       |     |     |
|--------------------------------------------------------------------------------------------|-----|-----------------------------|---------------------------------------|-----|-----|
| std::vector\< <a href="class_macgyver_1_1_gameobjects_1_1_component.html"                  
 class="el">Gameobjects::Component</a> \* \> Gameobjects::Scene::getComponentsInWorldByType  | (   | Components::COMPONENT_TYPES | <span class="paramname">*type*</span> | )   |     |

</div>

<div class="memdoc">

Returns all Components in the scene which have a specific type

Parameters  
|      |                                                                 |
|------|-----------------------------------------------------------------|
| type | the <a href="class_macgyver_1_1_gameobjects_1_1_component.html" 
        class="el">Component</a> type flag to search for                 |

<!-- -->

Returns  
a vector containing pointers to all the Components in the scene which
match the flag given

</div>

</div>

<span id="ab639051b72eb45680720f0646972dd68"></span>

## <span class="permalink">[◆ ](#ab639051b72eb45680720f0646972dd68)</span>physicsUpdate()

<div class="memitem">

<div class="memproto">

|                                                  |     |              |                                            |     |     |
|--------------------------------------------------|-----|--------------|--------------------------------------------|-----|-----|
| void Macgyver::Gameobjects::Scene::physicsUpdate | (   | unsigned int | <span class="paramname">*deltaTime*</span> | )   |     |

</div>

<div class="memdoc">

physics update method for the scene.

NOTE: physics updates 50 times per second (every 20ms)

Parameters  
|           |                                           |
|-----------|-------------------------------------------|
| deltaTime | time in milliseconds since the last frame |

</div>

</div>

<span id="aa88683c13dc882a21d75bacd2ef4b8c4"></span>

## <span class="permalink">[◆ ](#aa88683c13dc882a21d75bacd2ef4b8c4)</span>update()

<div class="memitem">

<div class="memproto">

|                                 |     |              |                                            |     |     |
|---------------------------------|-----|--------------|--------------------------------------------|-----|-----|
| void Gameobjects::Scene::update | (   | unsigned int | <span class="paramname">*deltaTime*</span> | )   |     |

</div>

<div class="memdoc">

Update method for the scene to be called once in the main game loop
after updating input and clearing the renderer. Calls the update methods
of all GameObjects in the scene.

Parameters  
|           |                                                            |
|-----------|------------------------------------------------------------|
| deltaTime | time in milliseconds that has elapsed since the last frame |

</div>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

- MacGyver/<a href="_scene_8h_source.html" class="el">Scene.h</a>
- MacGyver/**Scene.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
