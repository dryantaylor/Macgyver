<div id="classdetail_1_1input__stream__adapter">

</div>

<span id="classdetail_1_1input__stream__adapter"
label="classdetail_1_1input__stream__adapter"></span>

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

<span id="classdetail_1_1input__stream__adapter_a796d902229ac65b6eec543cba4aff704"
label="classdetail_1_1input__stream__adapter_a796d902229ac65b6eec543cba4aff704"></span>
using **char_type** = char

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1input__stream__adapter_af54f59dab29bafc1a6816cd9076ed302"
label="classdetail_1_1input__stream__adapter_af54f59dab29bafc1a6816cd9076ed302"></span>
**input_stream_adapter** (std::istream &i)

<span id="classdetail_1_1input__stream__adapter_a7b698294f93654dd480578a8a6e4028a"
label="classdetail_1_1input__stream__adapter_a7b698294f93654dd480578a8a6e4028a"></span>
**input_stream_adapter** (const
[input_stream_adapter](#classdetail_1_1input__stream__adapter) &)=delete

<span id="classdetail_1_1input__stream__adapter_ac3b8c933b96a8386034a57b6fb075e3b"
label="classdetail_1_1input__stream__adapter_ac3b8c933b96a8386034a57b6fb075e3b"></span>
[input_stream_adapter](#classdetail_1_1input__stream__adapter) &
**operator=**
([input_stream_adapter](#classdetail_1_1input__stream__adapter)
&)=delete

<span id="classdetail_1_1input__stream__adapter_a08289400b7eb4700fbaa1281b5f4f0e8"
label="classdetail_1_1input__stream__adapter_a08289400b7eb4700fbaa1281b5f4f0e8"></span>
[input_stream_adapter](#classdetail_1_1input__stream__adapter) &
**operator=**
([input_stream_adapter](#classdetail_1_1input__stream__adapter)
&&)=delete

<span id="classdetail_1_1input__stream__adapter_a3176362cd962c1e530abe0a8e82b765b"
label="classdetail_1_1input__stream__adapter_a3176362cd962c1e530abe0a8e82b765b"></span>
**input_stream_adapter**
([input_stream_adapter](#classdetail_1_1input__stream__adapter) &&rhs)
noexcept

<span id="classdetail_1_1input__stream__adapter_a54e117ab89b2c2a09428e0205956ebc7"
label="classdetail_1_1input__stream__adapter_a54e117ab89b2c2a09428e0205956ebc7"></span>
std::char_traits$<$ char $>$::int_type **get_character** ()

</div>

Input adapter for a (caching) istream. Ignores a UFT Byte Order Mark at
beginning of input. Does not support changing the underlying
std::streambuf in mid-input. Maintains underlying std::istream and
std::streambuf to support subsequent use of standard std::istream
operations to process any input characters following those used in
parsing the JSON input. Clears the std::istream flags; any input errors
(e.g., EOF) will be detected by the first subsequent call for input from
the std::istream.

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
