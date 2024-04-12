---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Macgyver::Gameobjects::Component Class Reference"
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
- <a href="class_macgyver_1_1_gameobjects_1_1_component.html"
  class="el">Component</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [List of all
members](class_macgyver_1_1_gameobjects_1_1_component-members.html)

</div>

<div class="headertitle">

<div class="title">

Macgyver::Gameobjects::Component Class Reference

</div>

</div>

</div>

<div class="contents">

`#include <`<a href="_component_8h_source.html"
class="el"><code>Component.h</code></a>`>`

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
<tr id="r_afcb07412715f07063168cc40f1a213c8"
class="even memitem:afcb07412715f07063168cc40f1a213c8">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#afcb07412715f07063168cc40f1a213c8" class="el">Component</a>
()</td>
</tr>
<tr class="odd separator:afcb07412715f07063168cc40f1a213c8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac6186df35dea96b00215fe8eb09cd1a8"
class="even memitem:ac6186df35dea96b00215fe8eb09cd1a8">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="el">GameObject</a> * </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac6186df35dea96b00215fe8eb09cd1a8" class="el">getParent</a>
()</td>
</tr>
<tr class="odd separator:ac6186df35dea96b00215fe8eb09cd1a8">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab56e2f9909e747e69fa08554418e2270"
class="even memitem:ab56e2f9909e747e69fa08554418e2270">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab56e2f9909e747e69fa08554418e2270" class="el">addData</a> (<a
href="struct_macgyver_1_1_components_1_1_component_data.html"
class="el">Components::ComponentData</a> *data, std::size_t
dataTypeHash)</td>
</tr>
<tr class="odd separator:ab56e2f9909e747e69fa08554418e2270">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae5f3db39ad5c8f64175b92e402bd7bf4"
class="even memitem:ae5f3db39ad5c8f64175b92e402bd7bf4">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="struct_macgyver_1_1_components_1_1_component_data.html"
class="el">Components::ComponentData</a> * </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae5f3db39ad5c8f64175b92e402bd7bf4" class="el">getData</a>
(std::size_t dataTypeHash)</td>
</tr>
<tr class="odd separator:ae5f3db39ad5c8f64175b92e402bd7bf4">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a6006ee28b1878a4889e0ca10c655675d"
class="even memitem:a6006ee28b1878a4889e0ca10c655675d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a6006ee28b1878a4889e0ca10c655675d"></span>
<a href="struct_macgyver_1_1_components_1_1_component_data.html"
class="el">Components::ComponentData</a> * </td>
<td class="memItemRight" data-valign="bottom"><strong>getData</strong>
(int index)</td>
</tr>
<tr class="odd separator:a6006ee28b1878a4889e0ca10c655675d">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a50c295e01fe69a2f43685e9890a5359f"
class="even memitem:a50c295e01fe69a2f43685e9890a5359f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">COMPONENT_TYPE </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a50c295e01fe69a2f43685e9890a5359f"
class="el">getComponentProperties</a> ()</td>
</tr>
<tr class="odd separator:a50c295e01fe69a2f43685e9890a5359f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a0123c164d78ecafbc08686b110997915"
class="even memitem:a0123c164d78ecafbc08686b110997915">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a0123c164d78ecafbc08686b110997915"
class="el">setComponentProperties</a> (COMPONENT_TYPE types)</td>
</tr>
<tr class="odd separator:a0123c164d78ecafbc08686b110997915">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae5d464e0bce97db3047dc42f66325d92"
class="even memitem:ae5d464e0bce97db3047dc42f66325d92">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="class_macgyver_1_1_math_1_1_vector3.html"
class="el">Macgyver::Math::Vector3</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ae5d464e0bce97db3047dc42f66325d92"
class="el">getWorldTransform</a> ()</td>
</tr>
<tr class="odd separator:ae5d464e0bce97db3047dc42f66325d92">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab3c9033561496927b4ad2fce2e651293"
class="even memitem:ab3c9033561496927b4ad2fce2e651293">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="class_macgyver_1_1_gameobjects_1_1_scene.html"
class="el">Scene</a> * </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab3c9033561496927b4ad2fce2e651293" class="el">getWorldScene</a>
()</td>
</tr>
<tr class="odd separator:ab3c9033561496927b4ad2fce2e651293">
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
<tr id="r_a8c731b26091d06f104caceec257a8127"
class="even memitem:a8c731b26091d06f104caceec257a8127">
<td class="memItemLeft" style="text-align: right;" data-valign="top"><a
href="class_macgyver_1_1_math_1_1_vector3.html"
class="el">Macgyver::Math::Vector3</a> </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a8c731b26091d06f104caceec257a8127"
class="el">localTransform</a></td>
</tr>
<tr class="odd separator:a8c731b26091d06f104caceec257a8127">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ab3329d1c3da95d5c0578f8ad08fd1570"
class="even memitem:ab3329d1c3da95d5c0578f8ad08fd1570">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::function&lt; void(<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> *, unsigned int) </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ab3329d1c3da95d5c0578f8ad08fd1570" class="el">update</a> )</td>
</tr>
<tr class="odd separator:ab3329d1c3da95d5c0578f8ad08fd1570">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a667da47a162a7c56e2f62458448e9f8e"
class="even memitem:a667da47a162a7c56e2f62458448e9f8e">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">std::function&lt; void(<a
href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> *) </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a667da47a162a7c56e2f62458448e9f8e" class="el">physicsUpdate</a>
)</td>
</tr>
<tr class="odd separator:a667da47a162a7c56e2f62458448e9f8e">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ad86fb273f0ca9fd4bd0d80b3dc3e6e46"
class="even memitem:ad86fb273f0ca9fd4bd0d80b3dc3e6e46">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="ad86fb273f0ca9fd4bd0d80b3dc3e6e46"></span>
bool </td>
<td class="memItemRight" data-valign="bottom"><strong>enabled</strong> =
true</td>
</tr>
<tr class="odd separator:ad86fb273f0ca9fd4bd0d80b3dc3e6e46">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

Stores a <a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> of a
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="el">GameObject</a>

</div>

## Constructor & Destructor Documentation

<span id="afcb07412715f07063168cc40f1a213c8"></span>

## <span class="permalink">[◆ ](#afcb07412715f07063168cc40f1a213c8)</span>Component()

<div class="memitem">

<div class="memproto">

|                                   |     |                                 |     |     |
|-----------------------------------|-----|---------------------------------|-----|-----|
| Gameobjects::Component::Component | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Default Constructor, initialises everything to empty. Use when attaching
a component type to this object.

</div>

</div>

## Member Function Documentation

<span id="ab56e2f9909e747e69fa08554418e2270"></span>

## <span class="permalink">[◆ ](#ab56e2f9909e747e69fa08554418e2270)</span>addData()

<div class="memitem">

<div class="memproto">

|                                      |     |                                                                  |                                                 |
|--------------------------------------|-----|------------------------------------------------------------------|-------------------------------------------------|
| void Gameobjects::Component::addData | (   | <a href="struct_macgyver_1_1_components_1_1_component_data.html" 
                                              class="el">Components::ComponentData</a> \*                       | <span class="paramname">*data*, </span>         |
|                                      |     | std::size_t                                                      | <span class="paramname">*dataTypeHash*</span> ) |

</div>

<div class="memdoc">

Add a component data object to this
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a>

Parameters  
|              |                                                                            |
|--------------|----------------------------------------------------------------------------|
| data         | pointer to the data object casted to the generic ComponentData\* class     |
| dataTypeHash | hash of the original data type, obtained using std::typeinfo().hash_code() |

</div>

</div>

<span id="a50c295e01fe69a2f43685e9890a5359f"></span>

## <span class="permalink">[◆ ](#a50c295e01fe69a2f43685e9890a5359f)</span>getComponentProperties()

<div class="memitem">

<div class="memproto">

|                                                               |     |                                 |     |     |
|---------------------------------------------------------------|-----|---------------------------------|-----|-----|
| COMPONENT_TYPE Gameobjects::Component::getComponentProperties | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Gets the flags/properties/types this component has set as a Uint

Returns  
COMPONENT_TYPE/Uint representing the flags set

</div>

</div>

<span id="ae5f3db39ad5c8f64175b92e402bd7bf4"></span>

## <span class="permalink">[◆ ](#ae5f3db39ad5c8f64175b92e402bd7bf4)</span>getData()

<div class="memitem">

<div class="memproto">

|                                                                                       |     |             |                                               |     |     |
|---------------------------------------------------------------------------------------|-----|-------------|-----------------------------------------------|-----|-----|
| <a href="struct_macgyver_1_1_components_1_1_component_data.html"                      
 class="el">Components::ComponentData</a> \* Macgyver::Gameobjects::Component::getData  | (   | std::size_t | <span class="paramname">*dataTypeHash*</span> | )   |     |

</div>

<div class="memdoc">

Gets a pointer to an attached data object of the correct type. Or
nullptr if no data of the correct type exists. Data can be casted back
to the needed type after being returned from the function.

Parameters  
|              |                                                                            |
|--------------|----------------------------------------------------------------------------|
| dataTypeHash | hash of the original data type, obtained using std::typeinfo().hash_code() |

<!-- -->

Returns  
pointer to the data, casted to ComponentData\*

</div>

</div>

<span id="ac6186df35dea96b00215fe8eb09cd1a8"></span>

## <span class="permalink">[◆ ](#ac6186df35dea96b00215fe8eb09cd1a8)</span>getParent()

<div class="memitem">

<div class="memproto">

|                                                                             |     |                                 |     |     |
|-----------------------------------------------------------------------------|-----|---------------------------------|-----|-----|
| <a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"               
 class="el">Gameobjects::GameObject</a> \* Gameobjects::Component::getParent  | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Gets the parent
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="el">GameObject</a> of this component

Returns  
pointer to the parent
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="el">GameObject</a> instance

</div>

</div>

<span id="ab3c9033561496927b4ad2fce2e651293"></span>

## <span class="permalink">[◆ ](#ab3c9033561496927b4ad2fce2e651293)</span>getWorldScene()

<div class="memitem">

<div class="memproto">

|                                                                            |     |                                 |     |     |
|----------------------------------------------------------------------------|-----|---------------------------------|-----|-----|
| <a href="class_macgyver_1_1_gameobjects_1_1_scene.html"                    
 class="el">Gameobjects::Scene</a> \* Gameobjects::Component::getWorldScene  | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Gets the Scecne this
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> is in.

</div>

</div>

<span id="ae5d464e0bce97db3047dc42f66325d92"></span>

## <span class="permalink">[◆ ](#ae5d464e0bce97db3047dc42f66325d92)</span>getWorldTransform()

<div class="memitem">

<div class="memproto">

|                                                                        |     |                                 |     |     |
|------------------------------------------------------------------------|-----|---------------------------------|-----|-----|
| <a href="class_macgyver_1_1_math_1_1_vector3.html"                     
 class="el">Math::Vector3</a> Gameobjects::Component::getWorldTransform  | (   | <span class="paramname"></span> | )   |     |

</div>

<div class="memdoc">

Gets the absoloute transform of this
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a>. (Not the transform relative to it's parent
<a href="class_macgyver_1_1_gameobjects_1_1_game_object.html"
class="el">GameObject</a>)

</div>

</div>

<span id="a0123c164d78ecafbc08686b110997915"></span>

## <span class="permalink">[◆ ](#a0123c164d78ecafbc08686b110997915)</span>setComponentProperties()

<div class="memitem">

<div class="memproto">

|                                                     |     |                |                                        |     |     |
|-----------------------------------------------------|-----|----------------|----------------------------------------|-----|-----|
| void Gameobjects::Component::setComponentProperties | (   | COMPONENT_TYPE | <span class="paramname">*types*</span> | )   |     |

</div>

<div class="memdoc">

Sets the ComponentProperties/flags/types this component has

Parameters  
|       |                                |
|-------|--------------------------------|
| types | flags to set this component to |

</div>

</div>

## Member Data Documentation

<span id="a8c731b26091d06f104caceec257a8127"></span>

## <span class="permalink">[◆ ](#a8c731b26091d06f104caceec257a8127)</span>localTransform

<div class="memitem">

<div class="memproto">

|                                                                                         |
|-----------------------------------------------------------------------------------------|
| <a href="class_macgyver_1_1_math_1_1_vector3.html"                                      
 class="el">Macgyver::Math::Vector3</a> Macgyver::Gameobjects::Component::localTransform  |

</div>

<div class="memdoc">

Transform of the
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> relative to it's parent game object

</div>

</div>

<span id="a667da47a162a7c56e2f62458448e9f8e"></span>

## <span class="permalink">[◆ ](#a667da47a162a7c56e2f62458448e9f8e)</span>physicsUpdate

<div class="memitem">

<div class="memproto">

|                                                                                 |
|---------------------------------------------------------------------------------|
| std::function\<void(<a href="class_macgyver_1_1_gameobjects_1_1_component.html" 
 class="el">Component</a>\*) Macgyver::Gameobjects::Component::physicsUpdate)     |

</div>

<div class="memdoc">

physics update function of the
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> taking this component as an arguement (much
like a python method with a self argument)

</div>

</div>

<span id="ab3329d1c3da95d5c0578f8ad08fd1570"></span>

## <span class="permalink">[◆ ](#ab3329d1c3da95d5c0578f8ad08fd1570)</span>update

<div class="memitem">

<div class="memproto">

|                                                                                     |
|-------------------------------------------------------------------------------------|
| std::function\<void(<a href="class_macgyver_1_1_gameobjects_1_1_component.html"     
 class="el">Component</a>\*, unsigned int) Macgyver::Gameobjects::Component::update)  |

</div>

<div class="memdoc">

update function of the
<a href="class_macgyver_1_1_gameobjects_1_1_component.html"
class="el">Component</a> taking this component and a deltaTime argument
(function is called much like a python method with a self argument)

</div>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

- MacGyver/<a href="_component_8h_source.html" class="el">Component.h</a>
- MacGyver/**Component.cpp**

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
