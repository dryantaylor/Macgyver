---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: Member List"
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

</div>

<div class="header">

<div class="headertitle">

<div class="title">

adl_serializer\< ValueType, typename \> Member List

</div>

</div>

</div>

<div class="contents">

This is the complete list of members for
<a href="structadl__serializer.html" class="el">adl_serializer&lt;
ValueType, typename &gt;</a>, including all inherited members.

|                                                                                                                                                                                                                                                                                     |                                                                    |                                                                      |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------|----------------------------------------------------------------------|
| <a href="structadl__serializer.html#a5645c63fe43bd9b4ebc9917f9c99d0fd"                                                                                                                                                                                                              
 class="el">from_json</a>(BasicJsonType &&j, TargetType &val) noexcept(noexcept(::nlohmann::from_json(std::forward\< BasicJsonType \>(j), val))) -\> decltype(::nlohmann::from_json(std::forward\< BasicJsonType \>(j), val), void())                                                 | <a href="structadl__serializer.html" class="el">adl_serializer&lt; 
                                                                                                                                                                                                                                                                                       ValueType, typename &gt;</a>                                        | <span class="mlabel">inline</span><span class="mlabel">static</span> |
| <a href="structadl__serializer.html#a1e06f0bcb63296fc306dbe4162a0f2a3"                                                                                                                                                                                                              
 class="el">from_json</a>(BasicJsonType &&j) noexcept(noexcept(::nlohmann::from_json(std::forward\< BasicJsonType \>(j), detail::identity_tag\< TargetType \> {}))) -\> decltype(::nlohmann::from_json(std::forward\< BasicJsonType \>(j), detail::identity_tag\< TargetType \> {}))  | <a href="structadl__serializer.html" class="el">adl_serializer&lt; 
                                                                                                                                                                                                                                                                                       ValueType, typename &gt;</a>                                        | <span class="mlabel">inline</span><span class="mlabel">static</span> |
| <a href="structadl__serializer.html#a0216149429fe899cf45cbf14e08e2166"                                                                                                                                                                                                              
 class="el">to_json</a>(BasicJsonType &j, TargetType &&val) noexcept(noexcept(::nlohmann::to_json(j, std::forward\< TargetType \>(val)))) -\> decltype(::nlohmann::to_json(j, std::forward\< TargetType \>(val)), void())                                                             | <a href="structadl__serializer.html" class="el">adl_serializer&lt; 
                                                                                                                                                                                                                                                                                       ValueType, typename &gt;</a>                                        | <span class="mlabel">inline</span><span class="mlabel">static</span> |

</div>

------------------------------------------------------------------------

<span class="small">Generated
by [<img src="doxygen.svg" class="footer" width="104" height="31"
alt="doxygen" />](https://www.doxygen.org/index.html) 1.10.0</span>
