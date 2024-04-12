<div id="classdetail_1_1output__stream__adapter">

</div>

<span id="classdetail_1_1output__stream__adapter"
label="classdetail_1_1output__stream__adapter"></span>

output adapter for output streams

\#include $<$json.hpp$>$

Inheritance diagram for detail::output_stream_adapter$<$ CharType $>$:

<figure>
<div class="center">
<img src="classdetail_1_1output__stream__adapter" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1output__stream__adapter_a1fcebb3df911763e1d92caa2a5416620"
label="classdetail_1_1output__stream__adapter_a1fcebb3df911763e1d92caa2a5416620"></span>
**output_stream_adapter** (std::basic_ostream$<$ CharType $>$ &s)
noexcept

void
[write_character](#classdetail_1_1output__stream__adapter_a4267cde53202637ff7d7b877fb9ac859)
(CharType c) override

void
[write_characters](#classdetail_1_1output__stream__adapter_a19fd5667f311a1dcd86469c25c21d13d)
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

### template$<$typename CharType$>$ class detail::output_stream_adapter$<$ CharType $>$

output adapter for output streams

<span id="classdetail_1_1output__stream__adapter_a4267cde53202637ff7d7b877fb9ac859"
label="classdetail_1_1output__stream__adapter_a4267cde53202637ff7d7b877fb9ac859"></span>

template$<$typename CharType $>$  
void
[detail::output_stream_adapter](#classdetail_1_1output__stream__adapter)$<$
CharType $>$::write_character (

<div class="DoxyParamCaption">

c

</div>

), ,

Implements
[detail::output_adapter_protocol$<$ CharType $>$](#structdetail_1_1output__adapter__protocol).

<span id="classdetail_1_1output__stream__adapter_a19fd5667f311a1dcd86469c25c21d13d"
label="classdetail_1_1output__stream__adapter_a19fd5667f311a1dcd86469c25c21d13d"></span>

template$<$typename CharType $>$  
void
[detail::output_stream_adapter](#classdetail_1_1output__stream__adapter)$<$
CharType $>$::write_characters (

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
