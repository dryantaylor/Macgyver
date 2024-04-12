<div id="classdetail_1_1output__vector__adapter">

</div>

<span id="classdetail_1_1output__vector__adapter"
label="classdetail_1_1output__vector__adapter"></span>

output adapter for byte vectors

\#include $<$json.hpp$>$

Inheritance diagram for detail::output_vector_adapter$<$ CharType,
AllocatorType $>$:

<figure>
<div class="center">
<img src="classdetail_1_1output__vector__adapter" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1output__vector__adapter_a24c27c9c4437f007083ad40c1ca89924"
label="classdetail_1_1output__vector__adapter_a24c27c9c4437f007083ad40c1ca89924"></span>
**output_vector_adapter** (std::vector$<$ CharType, AllocatorType $>$
&vec) noexcept

void
[write_character](#classdetail_1_1output__vector__adapter_ab2f37bf696c716ddb6c0b88b30304da5)
(CharType c) override

void
[write_characters](#classdetail_1_1output__vector__adapter_a6744f381ec104be129327caadcede1f7)
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

### template$<$typename CharType, typename AllocatorType = std::allocator$<$CharType$>$$>$ class detail::output_vector_adapter$<$ CharType, AllocatorType $>$

output adapter for byte vectors

<span id="classdetail_1_1output__vector__adapter_ab2f37bf696c716ddb6c0b88b30304da5"
label="classdetail_1_1output__vector__adapter_ab2f37bf696c716ddb6c0b88b30304da5"></span>

template$<$typename CharType , typename AllocatorType =
std::allocator$<$CharType$>$$>$  
void
[detail::output_vector_adapter](#classdetail_1_1output__vector__adapter)$<$
CharType, AllocatorType $>$::write_character (

<div class="DoxyParamCaption">

c

</div>

), ,

Implements
[detail::output_adapter_protocol$<$ CharType $>$](#structdetail_1_1output__adapter__protocol).

<span id="classdetail_1_1output__vector__adapter_a6744f381ec104be129327caadcede1f7"
label="classdetail_1_1output__vector__adapter_a6744f381ec104be129327caadcede1f7"></span>

template$<$typename CharType , typename AllocatorType =
std::allocator$<$CharType$>$$>$  
void
[detail::output_vector_adapter](#classdetail_1_1output__vector__adapter)$<$
CharType, AllocatorType $>$::write_characters (

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
