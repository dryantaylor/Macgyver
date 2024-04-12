---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: MacGyver/Messenger.h Source File"
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

Messenger.h

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

<span id="l00002"></span><span class="lineno"> 2</span>

</div>

<div class="line">

<span id="l00003"></span><span class="lineno">
3</span><span class="preprocessor">\#define getMessenger
Macgyver::Messenger::getInstance()</span>

</div>

<div class="line">

<span id="l00004"></span><span class="lineno"> 4</span>

</div>

<div class="line">

<span id="l00005"></span><span class="lineno">
5</span><span class="keyword">namespace </span>Macgyver {

</div>

<div id="foldopen00006" class="foldopen" data-start="{" end="};">

<div class="line">

<span id="l00006"></span><span class="lineno">
<a href="class_macgyver_1_1_messenger.html" class="line">6</a></span>
<span class="keyword">class
</span><a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a> {

</div>

<div class="line">

<span id="l00007"></span><span class="lineno"> 7</span>
<span class="keyword">public</span>:

</div>

<div class="line">

<span id="l00008"></span><span class="lineno"> 8</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a>& getInstance() {

</div>

<div class="line">

<span id="l00009"></span><span class="lineno"> 9</span>
<span class="keyword">static</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a> instance;

</div>

<div class="line">

<span id="l00010"></span><span class="lineno"> 10</span>
<span class="keywordflow">return</span> instance;

</div>

<div class="line">

<span id="l00011"></span><span class="lineno"> 11</span> }

</div>

<div class="line">

<span id="l00012"></span><span class="lineno"> 12</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a>(<span class="keyword">const</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a>&) =
<span class="keyword">delete</span>;

</div>

<div class="line">

<span id="l00013"></span><span class="lineno"> 13</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a>&
operator=(<span class="keyword">const</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a>&) =
<span class="keyword">delete</span>;

</div>

<div class="line">

<span id="l00014"></span><span class="lineno"> 14</span>

</div>

<div class="line">

<span id="l00015"></span><span class="lineno"> 15</span>
<span class="keywordtype">long</span>
<span class="keywordtype">long</span>&
operator\[\](<span class="keywordtype">size_t</span> idx) {
<span class="keywordflow">return</span> data\[idx\]; }

</div>

<div class="line">

<span id="l00016"></span><span class="lineno"> 16</span>
<span class="keyword">const</span> <span class="keywordtype">long</span>
<span class="keywordtype">long</span>&
operator\[\](<span class="keywordtype">size_t</span>
idx)<span class="keyword"> const </span>{
<span class="keywordflow">return</span> data\[idx\]; }

</div>

<div class="line">

<span id="l00017"></span><span class="lineno"> 17</span>
<span class="keywordtype">void</span>
setDataSize(<span class="keywordtype">size_t</span> newSize);

</div>

<div class="line">

<span id="l00018"></span><span class="lineno"> 18</span>
<span class="keywordtype">size_t</span> getDataSize()
<span class="keyword">const</span>;

</div>

<div class="line">

<span id="l00019"></span><span class="lineno"> 19</span>
<span class="keywordtype">long</span>
<span class="keywordtype">long</span>\* data;

</div>

<div class="line">

<span id="l00020"></span><span class="lineno"> 20</span>
<span class="keyword">private</span>:

</div>

<div class="line">

<span id="l00021"></span><span class="lineno"> 21</span>
<span class="keywordtype">size_t</span> size;

</div>

<div class="line">

<span id="l00022"></span><span class="lineno"> 22</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">Messenger</a>();

</div>

<div class="line">

<span id="l00023"></span><span class="lineno"> 23</span>
<a href="class_macgyver_1_1_messenger.html"
class="code hl_class">~Messenger</a>();

</div>

<div class="line">

<span id="l00024"></span><span class="lineno"> 24</span> };

</div>

</div>

<div class="line">

<span id="l00025"></span><span class="lineno"> 25</span>

</div>

<div class="line">

<span id="l00026"></span><span class="lineno"> 26</span>}

</div>

<div id="aclass_macgyver_1_1_messenger_html" class="ttc">

<div class="ttname">

[Macgyver::Messenger](class_macgyver_1_1_messenger.html)

</div>

<div class="ttdef">

**Definition** Messenger.h:6

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
