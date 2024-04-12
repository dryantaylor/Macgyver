---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/SingletonSerialiser.h Source File"
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

SingletonSerialiser.h

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
2</span><span class="preprocessor">\#include \<string\></span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#include "json.hpp"</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno">
4</span><span class="preprocessor">\#include "iostream"</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="preprocessor">\#include "Messenger.h"</span>

</div>

<div class="line">

<span id="l00006"></span><span class="lineno">
6</span><span class="keyword">namespace </span>Macgyver::Serialisation {

</div>

<div id="foldopen00007" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00007"></span><span class="lineno">
<a href="class_macgyver_1_1_serialisation_1_1_singleton_serialiser.html"
class="line">7</a></span> <span class="keyword">class
</span><a href="class_macgyver_1_1_serialisation_1_1_singleton_serialiser.html"
class="code hl_class">SingletonSerialiser</a> {

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>
<span class="keyword">static</span> std::string serialiseMessenger();

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>
<span class="keyword">static</span>
<span class="keywordtype">void</span> deserialiseMessenger(std::string
serialised);

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span>

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span>
<span class="keyword">static</span> std::string serialiseAnimations();

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span> };

</div>

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span>}

</div>

<div id="aclass_macgyver_1_1_serialisation_1_1_singleton_serialiser_html"
class="ttc">

<div class="ttname">

[Macgyver::Serialisation::SingletonSerialiser](class_macgyver_1_1_serialisation_1_1_singleton_serialiser.html)

</div>

<div class="ttdef">

**Definition** SingletonSerialiser.h:7

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
