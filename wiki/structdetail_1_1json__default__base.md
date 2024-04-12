---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::json_default_base Struct Reference"
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
- <a href="structdetail_1_1json__default__base.html"
  class="el">json_default_base</a>

</div>

</div>

<div class="header">

<div class="headertitle">

<div class="title">

detail::json_default_base Struct Reference

</div>

</div>

</div>

<div class="contents">

Default base class of the
<a href="classbasic__json.html" class="el">basic_json</a> class.
[More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

<span id="details"></span>

## Detailed Description

<div class="textblock">

Default base class of the
<a href="classbasic__json.html" class="el">basic_json</a> class.

So that the correct implementations of the copy / move ctors / assign
operators of <a href="classbasic__json.html" class="el">basic_json</a>
do not require complex case distinctions (no base class / custom base
class used as customization point),
<a href="classbasic__json.html" class="el">basic_json</a> always has a
base class. By default, this class is used because it is empty and thus
has no effect on the behavior of
<a href="classbasic__json.html" class="el">basic_json</a>.

</div>

------------------------------------------------------------------------

The documentation for this struct was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
