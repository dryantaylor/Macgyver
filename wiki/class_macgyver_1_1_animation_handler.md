---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::AnimationHandler Class Reference"
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
- <a href="class_macgyver_1_1_animation_handler.html"
  class="el">AnimationHandler</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Static Public Member
Functions](#pub-static-methods) \| [List of all
members](class_macgyver_1_1_animation_handler-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::AnimationHandler Class Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_animation_handler_8h_source.html"
class="el"><code>AnimationHandler.h</code></a>`>`

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
<tr id="r_a501210dbc0431a6d49db5ce24a5a5ecc"
class="even memitem:a501210dbc0431a6d49db5ce24a5a5ecc">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a501210dbc0431a6d49db5ce24a5a5ecc"></span>
 </td>
<td class="memItemRight"
data-valign="bottom"><strong>AnimationHandler</strong> (const <a
href="class_macgyver_1_1_animation_handler.html"
class="el">AnimationHandler</a> &amp;)=delete</td>
</tr>
<tr class="odd separator:a501210dbc0431a6d49db5ce24a5a5ecc">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae3a3c12c386e633a346614980739cde0"
class="even memitem:ae3a3c12c386e633a346614980739cde0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ae3a3c12c386e633a346614980739cde0"></span>
<a href="class_macgyver_1_1_animation_handler.html"
class="el">AnimationHandler</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><strong>operator=</strong>
(const <a href="class_macgyver_1_1_animation_handler.html"
class="el">AnimationHandler</a> &amp;)=delete</td>
</tr>
<tr class="odd separator:ae3a3c12c386e633a346614980739cde0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a367dc496d779b11d8d3e38bf9c0ace0b"
class="even memitem:a367dc496d779b11d8d3e38bf9c0ace0b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a367dc496d779b11d8d3e38bf9c0ace0b" class="el">attachRenderer</a>
(SDL_Renderer *renderer)</td>
</tr>
<tr class="odd separator:a367dc496d779b11d8d3e38bf9c0ace0b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab56e8354ac281aef131e2cef2d751c7f"
class="even memitem:ab56e8354ac281aef131e2cef2d751c7f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab56e8354ac281aef131e2cef2d751c7f" class="el">addAnimation</a>
(std::string name, std::string path)</td>
</tr>
<tr class="odd separator:ab56e8354ac281aef131e2cef2d751c7f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a02b91d7c0f27c300f963afe2b54a51b0"
class="even memitem:a02b91d7c0f27c300f963afe2b54a51b0">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a02b91d7c0f27c300f963afe2b54a51b0" class="el">addAnimation</a>
(std::string name, <a
href="struct_macgyver_1_1_animations_1_1_animation_data.html"
class="el">Animations::AnimationData</a> *animation)</td>
</tr>
<tr class="odd separator:a02b91d7c0f27c300f963afe2b54a51b0">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3069e1496b3c52a26b5ea9c47188035b"
class="even memitem:a3069e1496b3c52a26b5ea9c47188035b">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3069e1496b3c52a26b5ea9c47188035b"
class="el">closeAnimationData</a> (std::string name)</td>
</tr>
<tr class="odd separator:a3069e1496b3c52a26b5ea9c47188035b">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aa14ef2174adb148bf4981d02909ff7c9"
class="even memitem:aa14ef2174adb148bf4981d02909ff7c9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aa14ef2174adb148bf4981d02909ff7c9"
class="el">closeAllAnimationData</a> ()</td>
</tr>
<tr class="odd separator:aa14ef2174adb148bf4981d02909ff7c9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_af6317d69b1920a4c65bb2316006bd332"
class="even memitem:af6317d69b1920a4c65bb2316006bd332">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">unsigned int </td>
<td class="memItemRight" data-valign="bottom"><a
href="#af6317d69b1920a4c65bb2316006bd332" class="el">beginAnimation</a>
(<a href="struct_macgyver_1_1_components_1_1_renderable_data.html"
class="el">Components::RenderableData</a> *attachedRenderable,
std::string animName)</td>
</tr>
<tr class="odd separator:af6317d69b1920a4c65bb2316006bd332">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3ee78800ee93904ea16578a0612f4595"
class="even memitem:a3ee78800ee93904ea16578a0612f4595">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3ee78800ee93904ea16578a0612f4595"
class="el">changeActiveAnimation</a> (unsigned int id, std::string
animationName)</td>
</tr>
<tr class="odd separator:a3ee78800ee93904ea16578a0612f4595">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6e0a7159f7873c00466f7c7f1f381e77"
class="even memitem:a6e0a7159f7873c00466f7c7f1f381e77">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a6e0a7159f7873c00466f7c7f1f381e77"
class="el">changeCurrentFrame</a> (unsigned int id, unsigned int
frame)</td>
</tr>
<tr class="odd separator:a6e0a7159f7873c00466f7c7f1f381e77">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a9474aafdf72a30bbc1d0172b1c68d386"
class="even memitem:a9474aafdf72a30bbc1d0172b1c68d386">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a9474aafdf72a30bbc1d0172b1c68d386"
class="el">changeCurrentTick</a> (unsigned int id, unsigned int
tick)</td>
</tr>
<tr class="odd separator:a9474aafdf72a30bbc1d0172b1c68d386">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a2a58f9b4bec9540afd2b6ea20e985dc3"
class="even memitem:a2a58f9b4bec9540afd2b6ea20e985dc3">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a2a58f9b4bec9540afd2b6ea20e985dc3"
class="el">getCurrentFrameProperties</a> (unsigned int id, unsigned int
*outFrameNumber, unsigned int *outTick)</td>
</tr>
<tr class="odd separator:a2a58f9b4bec9540afd2b6ea20e985dc3">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a3ff3c3c57c83894f8371661c66c89879"
class="even memitem:a3ff3c3c57c83894f8371661c66c89879">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a3ff3c3c57c83894f8371661c66c89879"
class="el">closeActiveAnimation</a> (unsigned int id)</td>
</tr>
<tr class="odd separator:a3ff3c3c57c83894f8371661c66c89879">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0de546eeaafb90223fda419f6c904cb9"
class="even memitem:a0de546eeaafb90223fda419f6c904cb9">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a0de546eeaafb90223fda419f6c904cb9"
class="el">closeAllActiveAnimations</a> ()</td>
</tr>
<tr class="odd separator:a0de546eeaafb90223fda419f6c904cb9">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_aaed2122d1268881c37da014864dd777d"
class="even memitem:aaed2122d1268881c37da014864dd777d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#aaed2122d1268881c37da014864dd777d" class="el">update</a>
(unsigned int deltaTime)</td>
</tr>
<tr class="odd separator:aaed2122d1268881c37da014864dd777d">
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
<td colspan="2"><h2 id="static-public-member-functions"
class="groupheader"><span id="pub-static-methods"></span> Static Public
Member Functions</h2></td>
</tr>
<tr id="r_a47d6dc2ae1e4731dd83ad9dac28caa9f"
class="even memitem:a47d6dc2ae1e4731dd83ad9dac28caa9f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">static <a
href="class_macgyver_1_1_animation_handler.html"
class="el">AnimationHandler</a> &amp; </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a47d6dc2ae1e4731dd83ad9dac28caa9f" class="el">getInstance</a>
()</td>
</tr>
<tr class="odd separator:a47d6dc2ae1e4731dd83ad9dac28caa9f">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Stores a set of animations stored as a name e.g "Player/walk" mapped to
an AnimationData object. Methods within components can call to load new
Animation objects or close them. They can bind a RENDERABLE component to
a loaded animation which creates a new entry into a map which
corresponds to an ID to access that animation at any time. Each entry
will have a unique tick count/ frame and can change between animations
through method calls via this singleton handler class.

ADD A RENDERER TO THIS CLASS BEFORE LOADING ANY COMPONENTS.

</div>

## Member Function Documentation

<span id="a02b91d7c0f27c300f963afe2b54a51b0"></span>

## <span class="permalink">[◆ ](#a02b91d7c0f27c300f963afe2b54a51b0)</span>addAnimation() <span class="overload">\[1/2\]</span>

<div class="memitem">

<div class="memproto">

|                                               |     |                                                                  |                                              |
|-----------------------------------------------|-----|------------------------------------------------------------------|----------------------------------------------|
| bool Macgyver::AnimationHandler::addAnimation | (   | std::string                                                      | <span class="paramname">*name*, </span>      |
|                                               |     | <a href="struct_macgyver_1_1_animations_1_1_animation_data.html" 
                                                       class="el">Animations::AnimationData</a> \*                       | <span class="paramname">*animation*</span> ) |

</div>

<div class="memdoc">

Add an animation from already existing AnimationData\* Not sure why this
would be used but creating it just in case. WARNING: May be removed.

Parameters  
|           |                                                                                                                    |
|-----------|--------------------------------------------------------------------------------------------------------------------|
| name      | name the animation will be stored as and referenced by                                                             |
| animation | AnimationData reference to the Animation. This object should not be manually freed, lest bad things happen to you. |

<!-- -->

Returns  
true if animation could be added (no animation exists with the name
provided). False otherwise

</div>

</div>

<span id="ab56e8354ac281aef131e2cef2d751c7f"></span>

## <span class="permalink">[◆ ](#ab56e8354ac281aef131e2cef2d751c7f)</span>addAnimation() <span class="overload">\[2/2\]</span>

<div class="memitem">

<div class="memproto">

|                                               |     |             |                                         |
|-----------------------------------------------|-----|-------------|-----------------------------------------|
| bool Macgyver::AnimationHandler::addAnimation | (   | std::string | <span class="paramname">*name*, </span> |
|                                               |     | std::string | <span class="paramname">*path*</span> ) |

</div>

<div class="memdoc">

Load an animation from file and add it to the animations.

Parameters  
|      |                                                                              |
|------|------------------------------------------------------------------------------|
| name | name the animation will be stored as and referenced by                       |
| path | path relative to the working directory of the exe to find the animation data |

<!-- -->

Returns  
true if animation could be added (no animation exists with the name
provided). False otherwise

</div>

</div>

<span id="a367dc496d779b11d8d3e38bf9c0ace0b"></span>

## <span class="permalink">[◆ ](#a367dc496d779b11d8d3e38bf9c0ace0b)</span>attachRenderer()

<div class="memitem">

<div class="memproto">

|                                                 |     |                 |                                           |     |     |
|-------------------------------------------------|-----|-----------------|-------------------------------------------|-----|-----|
| void Macgyver::AnimationHandler::attachRenderer | (   | SDL_Renderer \* | <span class="paramname">*renderer*</span> | )   |     |

</div>

<div class="memdoc">

CALL ONLY ONCE IN MAIN LOOP attaches an SDL_Renderer\* for use when
creating new animations

</div>

</div>

<span id="af6317d69b1920a4c65bb2316006bd332"></span>

## <span class="permalink">[◆ ](#af6317d69b1920a4c65bb2316006bd332)</span>beginAnimation()

<div class="memitem">

<div class="memproto">

|                                                         |     |                                                                   |                                                       |
|---------------------------------------------------------|-----|-------------------------------------------------------------------|-------------------------------------------------------|
| unsigned int Macgyver::AnimationHandler::beginAnimation | (   | <a href="struct_macgyver_1_1_components_1_1_renderable_data.html" 
                                                                 class="el">Components::RenderableData</a> \*                       | <span class="paramname">*attachedRenderable*, </span> |
|                                                         |     | std::string                                                       | <span class="paramname">*animName*</span> )           |

</div>

<div class="memdoc">

begins animating a renderable component and sets the idle animation to
the animation stored with the name provided. Active animation will
defualt to this as well. WARNING: idle animation should always loop.
Undefined behaviour if it doesn't. Losing a returned ID will mean there
is no way to modify the animation, including freeing the memory. A full
flush of all managed animations would be required to stop the animation.

Parameters  
|                    |                                                                     |
|--------------------|---------------------------------------------------------------------|
| attachedRenderable | RenderableData reference to the Component to animate                |
| animName           | name of the animation to set as the idle and first active Animation |

<!-- -->

Returns  
unsigned int id of the animation used in all methods which require an id
to effect. Will return 0 if no more animations are available (currently
512 at once)

</div>

</div>

<span id="a3ee78800ee93904ea16578a0612f4595"></span>

## <span class="permalink">[◆ ](#a3ee78800ee93904ea16578a0612f4595)</span>changeActiveAnimation()

<div class="memitem">

<div class="memproto">

|                                                        |     |              |                                                  |
|--------------------------------------------------------|-----|--------------|--------------------------------------------------|
| void Macgyver::AnimationHandler::changeActiveAnimation | (   | unsigned int | <span class="paramname">*id*, </span>            |
|                                                        |     | std::string  | <span class="paramname">*animationName*</span> ) |

</div>

<div class="memdoc">

Given an id for an animation currently being managed, and a name of the
animation to change it to change the animation from the current
animation to the new one, and reset it's current frame and time along
that frame. If the new animation is the same as the old one, no changes
to frame will be made.

Parameters  
|      |                                                              |
|------|--------------------------------------------------------------|
| id   | id of the managed animation as given by the begin animation. |
| name | name as passed into addAnimation of the animation to swap to |

</div>

</div>

<span id="a6e0a7159f7873c00466f7c7f1f381e77"></span>

## <span class="permalink">[◆ ](#a6e0a7159f7873c00466f7c7f1f381e77)</span>changeCurrentFrame()

<div class="memitem">

<div class="memproto">

|                                                     |     |              |                                          |
|-----------------------------------------------------|-----|--------------|------------------------------------------|
| void Macgyver::AnimationHandler::changeCurrentFrame | (   | unsigned int | <span class="paramname">*id*, </span>    |
|                                                     |     | unsigned int | <span class="paramname">*frame*</span> ) |

</div>

<div class="memdoc">

Given an id for an animation currently being managed, change the current
frame of that animation to frame. WARNING: passing in a value higher
than the number of frames may cause issues. If you're unsure of how many
frames an animation has check with getCurrentFrameProperties. Does not
check for id being valid.

Parameters  
|       |                                                             |
|-------|-------------------------------------------------------------|
| id    | id of the managed animation as given by the beginAnimation. |
| frame | frame number to set the current frame to                    |

</div>

</div>

<span id="a9474aafdf72a30bbc1d0172b1c68d386"></span>

## <span class="permalink">[◆ ](#a9474aafdf72a30bbc1d0172b1c68d386)</span>changeCurrentTick()

<div class="memitem">

<div class="memproto">

|                                                    |     |              |                                         |
|----------------------------------------------------|-----|--------------|-----------------------------------------|
| void Macgyver::AnimationHandler::changeCurrentTick | (   | unsigned int | <span class="paramname">*id*, </span>   |
|                                                    |     | unsigned int | <span class="paramname">*tick*</span> ) |

</div>

<div class="memdoc">

Given an id for an animation currently being managed, change the current
tick of that animation (tick meaning how far into the frame it is). Does
not check for id being valid

Parameters  
|      |                                                        |
|------|--------------------------------------------------------|
| id   | id of the managed animation as given by beginAnimation |
| tick | tick value to change the current tick to               |

</div>

</div>

<span id="a3ff3c3c57c83894f8371661c66c89879"></span>

## <span class="permalink">[◆ ](#a3ff3c3c57c83894f8371661c66c89879)</span>closeActiveAnimation()

<div class="memitem">

<div class="memproto">

|                                                       |     |              |                                     |     |     |
|-------------------------------------------------------|-----|--------------|-------------------------------------|-----|-----|
| void Macgyver::AnimationHandler::closeActiveAnimation | (   | unsigned int | <span class="paramname">*id*</span> | )   |     |

</div>

<div class="memdoc">

Closes the active animation given by id, and frees the id to be used
again.

Parameters  
|     |                                                        |
|-----|--------------------------------------------------------|
| id  | id of the managed animation as given by beginAnimation |

</div>

</div>

<span id="a0de546eeaafb90223fda419f6c904cb9"></span>

## <span class="permalink">[◆ ](#a0de546eeaafb90223fda419f6c904cb9)</span>closeAllActiveAnimations()

<div class="memitem">

<div class="memproto">

|                                                           |     |                                 |     |     |
|-----------------------------------------------------------|-----|---------------------------------|-----|-----|
| void Macgyver::AnimationHandler::closeAllActiveAnimations | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

closes all active animations

</div>

</div>

<span id="aa14ef2174adb148bf4981d02909ff7c9"></span>

## <span class="permalink">[◆ ](#aa14ef2174adb148bf4981d02909ff7c9)</span>closeAllAnimationData()

<div class="memitem">

<div class="memproto">

|                                                        |     |                                 |     |     |
|--------------------------------------------------------|-----|---------------------------------|-----|-----|
| void Macgyver::AnimationHandler::closeAllAnimationData | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Closes all animation data objects stored in the class

</div>

</div>

<span id="a3069e1496b3c52a26b5ea9c47188035b"></span>

## <span class="permalink">[◆ ](#a3069e1496b3c52a26b5ea9c47188035b)</span>closeAnimationData()

<div class="memitem">

<div class="memproto">

|                                                     |     |             |                                       |     |     |
|-----------------------------------------------------|-----|-------------|---------------------------------------|-----|-----|
| void Macgyver::AnimationHandler::closeAnimationData | (   | std::string | <span class="paramname">*name*</span> | )   |     |

</div>

<div class="memdoc">

Closes the animation data of the animation given as name

Parameters  
|      |                                |
|------|--------------------------------|
| name | name of the animation to close |

</div>

</div>

<span id="a2a58f9b4bec9540afd2b6ea20e985dc3"></span>

## <span class="permalink">[◆ ](#a2a58f9b4bec9540afd2b6ea20e985dc3)</span>getCurrentFrameProperties()

<div class="memitem">

<div class="memproto">

|                                                            |     |                 |                                                   |
|------------------------------------------------------------|-----|-----------------|---------------------------------------------------|
| void Macgyver::AnimationHandler::getCurrentFrameProperties | (   | unsigned int    | <span class="paramname">*id*, </span>             |
|                                                            |     | unsigned int \* | <span class="paramname">*outFrameNumber*, </span> |
|                                                            |     | unsigned int \* | <span class="paramname">*outTick*</span> )        |

</div>

<div class="memdoc">

Gives the frame number and current tick of the animation given by id.

Parameters  
|                |                                                                                            |
|----------------|--------------------------------------------------------------------------------------------|
| id             | id of the managed animation as given by beginAnimation                                     |
| outFrameNumber | pointer to an unsigned int to write a copy of the frame number to, or NULL to not write it |
| outTick        | pointer to an unsigned int to write a copy of the current tick to, or NULL to not write it |

</div>

</div>

<span id="a47d6dc2ae1e4731dd83ad9dac28caa9f"></span>

## <span class="permalink">[◆ ](#a47d6dc2ae1e4731dd83ad9dac28caa9f)</span>getInstance()

<div class="memitem">

<div class="memproto">

<table class="mlabels">
<colgroup>
<col style="width: 50%" />
<col style="width: 50%" />
</colgroup>
<tbody>
<tr class="odd">
<td class="mlabels-left"><table class="memname">
<tbody>
<tr class="odd">
<td class="memname">static <a
href="class_macgyver_1_1_animation_handler.html"
class="el">AnimationHandler</a> &amp;
Macgyver::AnimationHandler::getInstance</td>
<td>(</td>
<td class="paramname"><span class="paramname"></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span><span
class="mlabel">static</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

Thread safe singleton. Gets the instance of the
<a href="class_macgyver_1_1_animation_handler.html"
class="el">AnimationHandler</a>. If one does not exist it creates one
and returns that.

</div>

</div>

<span id="aaed2122d1268881c37da014864dd777d"></span>

## <span class="permalink">[◆ ](#aaed2122d1268881c37da014864dd777d)</span>update()

<div class="memitem">

<div class="memproto">

|                                         |     |              |                                            |     |     |
|-----------------------------------------|-----|--------------|--------------------------------------------|-----|-----|
| void Macgyver::AnimationHandler::update | (   | unsigned int | <span class="paramname">*deltaTime*</span> | )   |     |

</div>

<div class="memdoc">

checks all active animations for any frame changes called by the main
game loop not individual objects

Parameters  
|           |                                                  |
|-----------|--------------------------------------------------|
| deltaTime | time in ms between last frame and current frame. |

</div>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

- MacGyver/<a href="_animation_handler_8h_source.html"
  class="el">AnimationHandler.h</a>
- MacGyver/**AnimationHandler.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
