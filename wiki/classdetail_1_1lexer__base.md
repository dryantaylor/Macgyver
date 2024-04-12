---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::lexer_base\\< BasicJsonType \\> Class Template
  Reference"
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
- <a href="classdetail_1_1lexer__base.html" class="el">lexer_base</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Types](#pub-types) \| [Static Public Member
Functions](#pub-static-methods) \| [List of all
members](classdetail_1_1lexer__base-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::lexer_base\< BasicJsonType \> Class Template Reference

</div>

</div>

</div>

<div class="contents">

<div class="dynheader">

Inheritance diagram for detail::lexer_base\< BasicJsonType \>:

</div>

<div class="dyncontent">

<div class="center">

<img src="classdetail_1_1lexer__base.png"
usemap="#detail::lexer_5Fbase_3C_20BasicJsonType_20_3E_map" />

</div>

</div>

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
<tr id="r_add65fa7a85aa15052963809fbcc04540"
class="even memitem:add65fa7a85aa15052963809fbcc04540">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">enum class  </td>
<td class="memItemRight" data-valign="bottom"><a
href="#add65fa7a85aa15052963809fbcc04540" class="el">token_type</a>
{<br />
  <a
href="#add65fa7a85aa15052963809fbcc04540a42dd1a73d072bb6bf3f494f22b15db8e"
class="el">uninitialized</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a85cc1a37b0aaa52de40e72f0ed4e0c0d"
class="el">literal_true</a> , <a
href="#add65fa7a85aa15052963809fbcc04540afab1694b1b3937a079f4625fe0b6108b"
class="el">literal_false</a> , <a
href="#add65fa7a85aa15052963809fbcc04540ab7ae4c0e46d86f884677768160b26e9e"
class="el">literal_null</a> ,<br />
  <a
href="#add65fa7a85aa15052963809fbcc04540a2b490e8bf366b4cbe3ebd99b26ce15ce"
class="el">value_string</a> , <a
href="#add65fa7a85aa15052963809fbcc04540aaf1f040fcd2f674d2e5893d7a731078f"
class="el">value_unsigned</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a5064b6655d88a50ae16665cf7751c0ee"
class="el">value_integer</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a0d2671a6f81efb91e77f6ac3bdb11443"
class="el">value_float</a> ,<br />
  <a
href="#add65fa7a85aa15052963809fbcc04540a16c226b4425b68560fea322b46dabe01"
class="el">begin_array</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a9a9ffd53b6869d4eca271b1ed5b57fe8"
class="el">begin_object</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a2f3e68e7f111a1e5c7728742b3ca2b7f"
class="el">end_array</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a7d5b4427866814de4d8f132721d59c87"
class="el">end_object</a> ,<br />
  <a
href="#add65fa7a85aa15052963809fbcc04540acc3c64f8ae08c00de1b33f19a4d2913a"
class="el">name_separator</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a745373036100d7392ad62c617cab59af"
class="el">value_separator</a> , <a
href="#add65fa7a85aa15052963809fbcc04540a456e19aeafa334241c7ff3f589547f9d"
class="el">parse_error</a> , <a
href="#add65fa7a85aa15052963809fbcc04540aca11f56dd477c09e06583dbdcda0985f"
class="el">end_of_input</a> ,<br />
  <a
href="#add65fa7a85aa15052963809fbcc04540ad2a8e6f6721cccec0b466301dd9495a5"
class="el">literal_or_value</a><br />
}</td>
</tr>
<tr class="odd memdesc:add65fa7a85aa15052963809fbcc04540">
<td class="mdescLeft"> </td>
<td class="mdescRight">token types for the parser <a
href="#add65fa7a85aa15052963809fbcc04540">More...</a><br />
</td>
</tr>
<tr class="even separator:add65fa7a85aa15052963809fbcc04540">
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
<tr id="r_aadef66e89ad828e5f69479c85887fa6d"
class="even memitem:aadef66e89ad828e5f69479c85887fa6d">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="aadef66e89ad828e5f69479c85887fa6d"></span>
JSON_HEDLEY_RETURNS_NON_NULL static JSON_HEDLEY_CONST const char * </td>
<td class="memItemRight"
data-valign="bottom"><strong>token_type_name</strong> (const <a
href="#add65fa7a85aa15052963809fbcc04540" class="el">token_type</a> t)
noexcept</td>
</tr>
<tr class="odd memdesc:aadef66e89ad828e5f69479c85887fa6d">
<td class="mdescLeft"> </td>
<td class="mdescRight">return name of values of type token_type (only
used for errors)<br />
</td>
</tr>
<tr class="even separator:aadef66e89ad828e5f69479c85887fa6d">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

## Member Enumeration Documentation

<span id="add65fa7a85aa15052963809fbcc04540"></span>

## <span class="permalink">[◆ ](#add65fa7a85aa15052963809fbcc04540)</span>token_type

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType \>

</div>

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
<td class="memname">enum class <a
href="#add65fa7a85aa15052963809fbcc04540"
class="el">detail::lexer_base::token_type</a></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">strong</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

token types for the parser

| Enumerator                                                                                             |                                                                    |
|--------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------|
| <span id="add65fa7a85aa15052963809fbcc04540a42dd1a73d072bb6bf3f494f22b15db8e"></span>uninitialized     | indicating the scanner is uninitialized                            |
| <span id="add65fa7a85aa15052963809fbcc04540a85cc1a37b0aaa52de40e72f0ed4e0c0d"></span>literal_true      | the `true` literal                                                 |
| <span id="add65fa7a85aa15052963809fbcc04540afab1694b1b3937a079f4625fe0b6108b"></span>literal_false     | the `false` literal                                                |
| <span id="add65fa7a85aa15052963809fbcc04540ab7ae4c0e46d86f884677768160b26e9e"></span>literal_null      | the `null` literal                                                 |
| <span id="add65fa7a85aa15052963809fbcc04540a2b490e8bf366b4cbe3ebd99b26ce15ce"></span>value_string      | a string – use get_string() for actual value                       |
| <span id="add65fa7a85aa15052963809fbcc04540aaf1f040fcd2f674d2e5893d7a731078f"></span>value_unsigned    | an unsigned integer – use get_number_unsigned() for actual value   |
| <span id="add65fa7a85aa15052963809fbcc04540a5064b6655d88a50ae16665cf7751c0ee"></span>value_integer     | a signed integer – use get_number_integer() for actual value       |
| <span id="add65fa7a85aa15052963809fbcc04540a0d2671a6f81efb91e77f6ac3bdb11443"></span>value_float       | an floating point number – use get_number_float() for actual value |
| <span id="add65fa7a85aa15052963809fbcc04540a16c226b4425b68560fea322b46dabe01"></span>begin_array       | the character for array begin `[`                                  |
| <span id="add65fa7a85aa15052963809fbcc04540a9a9ffd53b6869d4eca271b1ed5b57fe8"></span>begin_object      | the character for object begin `{`                                 |
| <span id="add65fa7a85aa15052963809fbcc04540a2f3e68e7f111a1e5c7728742b3ca2b7f"></span>end_array         | the character for array end `]`                                    |
| <span id="add65fa7a85aa15052963809fbcc04540a7d5b4427866814de4d8f132721d59c87"></span>end_object        | the character for object end `}`                                   |
| <span id="add65fa7a85aa15052963809fbcc04540acc3c64f8ae08c00de1b33f19a4d2913a"></span>name_separator    | the name separator `:`                                             |
| <span id="add65fa7a85aa15052963809fbcc04540a745373036100d7392ad62c617cab59af"></span>value_separator   | the value separator `,`                                            |
| <span id="add65fa7a85aa15052963809fbcc04540a456e19aeafa334241c7ff3f589547f9d"></span>parse_error       | indicating a parse error                                           |
| <span id="add65fa7a85aa15052963809fbcc04540aca11f56dd477c09e06583dbdcda0985f"></span>end_of_input      | indicating the end of the input buffer                             |
| <span id="add65fa7a85aa15052963809fbcc04540ad2a8e6f6721cccec0b466301dd9495a5"></span>literal_or_value  | a literal or the begin of a value (only for diagnostics)           |

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
