---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: std::tuple_element\\< N,
  ::nlohmann::detail::iteration_proxy_value\\< IteratorType \\> \\> Class
  Template Reference"
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

- **std**
- <a
  href="classstd_1_1tuple__element_3_01_n_00_01_1_1nlohmann_1_1detail_1_1iteration__proxy__value_3_01_iterator_type_01_4_01_4.html"
  class="el">tuple_element&lt; N,
  ::nlohmann::detail::iteration_proxy_value&lt; IteratorType &gt; &gt;</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [List of all
members](classstd_1_1tuple__element_3_01_n_00_01_1_1nlohmann_1_1detail_1_1iteration__proxy__value_3_01_iterator_type_01_4_01_4-members.html)

</div>

<div class="headertitle">

<div class="title">

std::tuple_element\< N, ::nlohmann::detail::iteration_proxy_value\<
IteratorType \> \> Class Template Reference

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
<td colspan="2"><h2 id="public-types" class="groupheader"><span
id="pub-types"></span> Public Types</h2></td>
</tr>
<tr id="r_afb9842d693db711c44ee1dae9f67482f"
class="even memitem:afb9842d693db711c44ee1dae9f67482f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">using </td>
<td class="memItemRight" data-valign="bottom"><a
href="#afb9842d693db711c44ee1dae9f67482f" class="el">type</a></td>
</tr>
<tr class="odd separator:afb9842d693db711c44ee1dae9f67482f">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Typedef Documentation

<span id="afb9842d693db711c44ee1dae9f67482f"></span>

## <span class="permalink">[◆ ](#afb9842d693db711c44ee1dae9f67482f)</span>type

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<std::size_t N, typename IteratorType \>

</div>

|                                                                                                    |
|----------------------------------------------------------------------------------------------------|
| using std::tuple_element\< N, ::nlohmann::detail::iteration_proxy_value\< IteratorType \> \>::type |

</div>

<div class="memdoc">

**Initial value:**

<div class="fragment">

<div class="line">

<span class="keyword">decltype</span>(

</div>

<div class="line">

get\<N\>(std::declval \<

</div>

<div class="line">

::nlohmann::detail::iteration_proxy_value\<IteratorType \>\> ()))

</div>

</div>

</div>

</div>

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

- MacGyver/<a href="json_8hpp_source.html" class="el">json.hpp</a>

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
