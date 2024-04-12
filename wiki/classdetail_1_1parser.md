---
generator: Doxygen 1.10.0
lang: en-US
title: "Macgyver: detail::parser\\< BasicJsonType, InputAdapterType \\>
  Class Template Reference"
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

- <a href="namespacedetail.html" class="el">detail</a>
- <a href="classdetail_1_1parser.html" class="el">parser</a>

</div>

</div>

<div class="header">

<div class="summary">

[Public Member Functions](#pub-methods) \| [List of all
members](classdetail_1_1parser-members.html)

</div>

<div class="headertitle">

<div class="title">

detail::parser\< BasicJsonType, InputAdapterType \> Class Template
Reference

</div>

</div>

</div>

<div class="contents">

syntax analysis [More...](#details)

`#include <`<a href="json_8hpp_source.html" class="el"><code>json.hpp</code></a>`>`

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
<tr id="r_a4bb9ea1b0fddb8f46ff987bbf9e54045"
class="even memitem:a4bb9ea1b0fddb8f46ff987bbf9e54045">
<td class="memItemLeft" style="text-align: right;"
data-valign="top"><span id="a4bb9ea1b0fddb8f46ff987bbf9e54045"></span>
 </td>
<td class="memItemRight" data-valign="bottom"><strong>parser</strong>
(InputAdapterType &amp;&amp;adapter, const parser_callback_t&lt;
BasicJsonType &gt; cb=nullptr, const bool allow_exceptions_=true, const
bool skip_comments=false)</td>
</tr>
<tr class="odd memdesc:a4bb9ea1b0fddb8f46ff987bbf9e54045">
<td class="mdescLeft"> </td>
<td class="mdescRight">a parser reading from an input adapter<br />
</td>
</tr>
<tr class="even separator:a4bb9ea1b0fddb8f46ff987bbf9e54045">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_a59f4b745d4aa146bf7a60a30060f592f"
class="odd memitem:a59f4b745d4aa146bf7a60a30060f592f">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">void </td>
<td class="memItemRight" data-valign="bottom"><a
href="#a59f4b745d4aa146bf7a60a30060f592f" class="el">parse</a> (const
bool <a
href="namespacedetail.html#abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792"
class="el">strict</a>, BasicJsonType &amp;result)</td>
</tr>
<tr class="even memdesc:a59f4b745d4aa146bf7a60a30060f592f">
<td class="mdescLeft"> </td>
<td class="mdescRight">public parser interface<br />
</td>
</tr>
<tr class="odd separator:a59f4b745d4aa146bf7a60a30060f592f">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ac46da3262cbe66ade670c5b4782451e6"
class="even memitem:ac46da3262cbe66ade670c5b4782451e6">
<td class="memItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memItemRight" data-valign="bottom"><a
href="#ac46da3262cbe66ade670c5b4782451e6" class="el">accept</a> (const
bool <a
href="namespacedetail.html#abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792"
class="el">strict</a>=true)</td>
</tr>
<tr class="odd memdesc:ac46da3262cbe66ade670c5b4782451e6">
<td class="mdescLeft"> </td>
<td class="mdescRight">public accept interface<br />
</td>
</tr>
<tr class="even separator:ac46da3262cbe66ade670c5b4782451e6">
<td colspan="2" class="memSeparator"> </td>
</tr>
<tr id="r_ae9084759356689163fee9ae37e69b050"
class="odd memitem:ae9084759356689163fee9ae37e69b050">
<td colspan="2" class="memTemplParams"><span
id="ae9084759356689163fee9ae37e69b050"></span> template&lt;typename SAX
&gt;</td>
</tr>
<tr class="even memitem:ae9084759356689163fee9ae37e69b050">
<td class="memTemplItemLeft" style="text-align: right;"
data-valign="top">bool </td>
<td class="memTemplItemRight"
data-valign="bottom"><strong>sax_parse</strong> (SAX *sax, const bool <a
href="namespacedetail.html#abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792"
class="el">strict</a>=true)</td>
</tr>
<tr class="odd separator:ae9084759356689163fee9ae37e69b050">
<td colspan="2" class="memSeparator"> </td>
</tr>
</tbody>
</table>

<span id="details"></span>

## Detailed Description

<div class="textblock">

<div class="compoundTemplParams">

template\<typename BasicJsonType, typename InputAdapterType\>  
class detail::parser\< BasicJsonType, InputAdapterType \>

</div>

syntax analysis

This class implements a recursive descent parser.

</div>

## Member Function Documentation

<span id="ac46da3262cbe66ade670c5b4782451e6"></span>

## <span class="permalink">[◆ ](#ac46da3262cbe66ade670c5b4782451e6)</span>accept()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename InputAdapterType \>

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
<td class="memname">bool <a href="classdetail_1_1parser.html"
class="el">detail::parser</a>&lt; BasicJsonType, InputAdapterType
&gt;::accept</td>
<td>(</td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em><span
class="paramdefsep"> = </span><span
class="paramdefval">true</span></span></td>
<td>)</td>
<td></td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

public accept interface

Parameters  
|        |        |                                            |
|--------|--------|--------------------------------------------|
| \[in\] | strict | whether to expect the last token to be EOF |

<!-- -->

Returns  
whether the input is a proper JSON text

</div>

</div>

<span id="a59f4b745d4aa146bf7a60a30060f592f"></span>

## <span class="permalink">[◆ ](#a59f4b745d4aa146bf7a60a30060f592f)</span>parse()

<div class="memitem">

<div class="memproto">

<div class="memtemplate">

template\<typename BasicJsonType , typename InputAdapterType \>

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
<td class="memname">void <a href="classdetail_1_1parser.html"
class="el">detail::parser</a>&lt; BasicJsonType, InputAdapterType
&gt;::parse</td>
<td>(</td>
<td class="paramtype">const bool</td>
<td class="paramname"><span class="paramname"><em>strict</em>,
</span></td>
</tr>
<tr class="even">
<td class="paramkey"></td>
<td></td>
<td class="paramtype">BasicJsonType &amp;</td>
<td class="paramname"><span
class="paramname"><em>result</em></span> )</td>
</tr>
</tbody>
</table></td>
<td class="mlabels-right"><span class="mlabels"><span
class="mlabel">inline</span></span></td>
</tr>
</tbody>
</table>

</div>

<div class="memdoc">

public parser interface

Parameters  
|            |        |                                            |
|------------|--------|--------------------------------------------|
| \[in\]     | strict | whether to expect the last token to be EOF |
| \[in,out\] | result | parsed JSON value                          |

<!-- -->

Exceptions  
|                 |                                        |
|-----------------|----------------------------------------|
| parse_error.101 | in case of an unexpected token         |
| parse_error.102 | if to_unicode fails or surrogate error |
| parse_error.103 | if to_unicode fails                    |

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
