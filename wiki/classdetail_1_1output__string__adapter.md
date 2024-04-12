<div id="classdetail_1_1output__string__adapter">

</div>

<span id="classdetail_1_1output__string__adapter"
label="classdetail_1_1output__string__adapter"></span>

output adapter for basic_string

\#include $<$json.hpp$>$

Inheritance diagram for detail::output_string_adapter$<$ CharType,
StringType $>$:

<figure>
<div class="center">
<img src="classdetail_1_1output__string__adapter" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1output__string__adapter_a1de17d313223c70c8d30186a6e3eb07e"
label="classdetail_1_1output__string__adapter_a1de17d313223c70c8d30186a6e3eb07e"></span>
**output_string_adapter** (StringType &s) noexcept

void
[write_character](#classdetail_1_1output__string__adapter_a15ef2742beddbc80d2468755ecf0a21e)
(CharType c) override

void
[write_characters](#classdetail_1_1output__string__adapter_aae38554067dbef5006db25256a702416)
(const CharType $\ast$s, std::size_t length) override

</div>

<div class="DoxyCompactItemize">

**output_adapter_protocol** (const
[output_adapter_protocol](#structdetail_1_1output__adapter__protocol)
&)=default

**output_adapter_protocol**
([output_adapter_protocol](#structdetail_1_1output__adapter__protocol)
&&) noexcept=default

[output_adapter_protocol](#structdetail_1_1output__adapter__protocol) &
**operator=** (const
[output_adapter_protocol](#structdetail_1_1output__adapter__protocol)
&)=default

[output_adapter_protocol](#structdetail_1_1output__adapter__protocol) &
**operator=**
([output_adapter_protocol](#structdetail_1_1output__adapter__protocol)
&&) noexcept=default

</div>

### template$<$typename CharType, typename StringType = std::basic_string$<$CharType$>$$>$ class detail::output_string_adapter$<$ CharType, StringType $>$

output adapter for basic_string

<span id="classdetail_1_1output__string__adapter_a15ef2742beddbc80d2468755ecf0a21e"
label="classdetail_1_1output__string__adapter_a15ef2742beddbc80d2468755ecf0a21e"></span>

template$<$typename CharType , typename StringType =
std::basic_string$<$CharType$>$$>$  
void
[detail::output_string_adapter](#classdetail_1_1output__string__adapter)$<$
CharType, StringType $>$::write_character (

<div class="DoxyParamCaption">

c

</div>

), ,

Implements
[detail::output_adapter_protocol$<$ CharType $>$](#structdetail_1_1output__adapter__protocol).

<span id="classdetail_1_1output__string__adapter_aae38554067dbef5006db25256a702416"
label="classdetail_1_1output__string__adapter_aae38554067dbef5006db25256a702416"></span>

template$<$typename CharType , typename StringType =
std::basic_string$<$CharType$>$$>$  
void
[detail::output_string_adapter](#classdetail_1_1output__string__adapter)$<$
CharType, StringType $>$::write_characters (

<div class="DoxyParamCaption">

s,

length

</div>

), ,

Implements
[detail::output_adapter_protocol$<$ CharType $>$](#structdetail_1_1output__adapter__protocol).

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
