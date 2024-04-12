---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::to_json_fn Struct Reference"
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

- <a href="namespacedetail.html" class="el">detail</a>
- <a href="structdetail_1_1to__json__fn.html" class="el">to_json_fn</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [List of all
members](structdetail_1_1to__json__fn-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::to_json_fn Struct Reference

</div>

</div>

</div>

<div class="contents">

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
<tr id="r_a1b7ab97a1aa13ec9123e2a4213ce2e31"
class="even memitem:a1b7ab97a1aa13ec9123e2a4213ce2e31">
<td colspan="2" class="memTemplParams"><span
id="a1b7ab97a1aa13ec9123e2a4213ce2e31"></span> template&lt;typename
BasicJsonType , typename T &gt;</td>
</tr>
<tr class="odd memitem:a1b7ab97a1aa13ec9123e2a4213ce2e31">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">auto </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>operator()</strong> (BasicJsonType &amp;j,
T &amp;&amp;val) const noexcept(noexcept(to_json(j, std::forward&lt; T
&gt;(val)))) -&gt; decltype(to_json(j, std::forward&lt; T &gt;(val)),
void())</td>
</tr>
<tr class="even separator:a1b7ab97a1aa13ec9123e2a4213ce2e31">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
