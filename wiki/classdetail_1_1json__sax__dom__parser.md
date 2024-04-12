<div id="classdetail_1_1json__sax__dom__parser">

</div>

<span id="classdetail_1_1json__sax__dom__parser"
label="classdetail_1_1json__sax__dom__parser"></span>

SAX implementation to create a JSON value from SAX events.

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__sax__dom__parser_a8a7ba3deeb48e47b4a7705602c9f8807"
label="classdetail_1_1json__sax__dom__parser_a8a7ba3deeb48e47b4a7705602c9f8807"></span>
using **number_integer_t** = typename BasicJsonType::number_integer_t

<span id="classdetail_1_1json__sax__dom__parser_a80d34b386ee1cbfe353f640bc4745317"
label="classdetail_1_1json__sax__dom__parser_a80d34b386ee1cbfe353f640bc4745317"></span>
using **number_unsigned_t** = typename BasicJsonType::number_unsigned_t

<span id="classdetail_1_1json__sax__dom__parser_af3fbbe21ea4ec3ae7ba8c9a5b8d736b3"
label="classdetail_1_1json__sax__dom__parser_af3fbbe21ea4ec3ae7ba8c9a5b8d736b3"></span>
using **number_float_t** = typename BasicJsonType::number_float_t

<span id="classdetail_1_1json__sax__dom__parser_a6616e04b1c1c9ecae11a49a5302720e6"
label="classdetail_1_1json__sax__dom__parser_a6616e04b1c1c9ecae11a49a5302720e6"></span>
using **string_t** = typename BasicJsonType::string_t

<span id="classdetail_1_1json__sax__dom__parser_ada36726394d0347cb9a08da4180d16de"
label="classdetail_1_1json__sax__dom__parser_ada36726394d0347cb9a08da4180d16de"></span>
using **binary_t** = typename BasicJsonType::binary_t

</div>

<div class="DoxyCompactItemize">

[json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser_a3ee72f78d1ebdd8f8573ccf2b8e3ea6f)
(BasicJsonType &r, const bool allow_exceptions\_=true)

<span id="classdetail_1_1json__sax__dom__parser_a16b31b6cfdc0eec28c485a48b2c58217"
label="classdetail_1_1json__sax__dom__parser_a16b31b6cfdc0eec28c485a48b2c58217"></span>
**json_sax_dom_parser** (const
[json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser) &)=delete

<span id="classdetail_1_1json__sax__dom__parser_a9e4e41ae2c56824ee768cfeceace30d3"
label="classdetail_1_1json__sax__dom__parser_a9e4e41ae2c56824ee768cfeceace30d3"></span>
**json_sax_dom_parser**
([json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser)
&&)=default

<span id="classdetail_1_1json__sax__dom__parser_a8c9b29ae6e5268d3d0884b6623ae3cae"
label="classdetail_1_1json__sax__dom__parser_a8c9b29ae6e5268d3d0884b6623ae3cae"></span>
[json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser) &
**operator=** (const
[json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser) &)=delete

<span id="classdetail_1_1json__sax__dom__parser_a3b3c5bbf633738217fd14d9e05a322f3"
label="classdetail_1_1json__sax__dom__parser_a3b3c5bbf633738217fd14d9e05a322f3"></span>
[json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser) &
**operator=**
([json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser)
&&)=default

<span id="classdetail_1_1json__sax__dom__parser_a414cc4f54b4a5d69504ae415e279a727"
label="classdetail_1_1json__sax__dom__parser_a414cc4f54b4a5d69504ae415e279a727"></span>
bool **null** ()

<span id="classdetail_1_1json__sax__dom__parser_aafe33f4ea1ae0a03242e6cbd8d380a52"
label="classdetail_1_1json__sax__dom__parser_aafe33f4ea1ae0a03242e6cbd8d380a52"></span>
bool **boolean** (bool val)

<span id="classdetail_1_1json__sax__dom__parser_a8362e0fba0cd0f96af11a94ed5f02d64"
label="classdetail_1_1json__sax__dom__parser_a8362e0fba0cd0f96af11a94ed5f02d64"></span>
bool **number_integer** (number_integer_t val)

<span id="classdetail_1_1json__sax__dom__parser_a82df1690cf1e76ee4b47da944f6bca70"
label="classdetail_1_1json__sax__dom__parser_a82df1690cf1e76ee4b47da944f6bca70"></span>
bool **number_unsigned** (number_unsigned_t val)

<span id="classdetail_1_1json__sax__dom__parser_ace74cb6adc6a0c386d9e45ba6cbd4329"
label="classdetail_1_1json__sax__dom__parser_ace74cb6adc6a0c386d9e45ba6cbd4329"></span>
bool **number_float** (number_float_t val, const string_t &)

<span id="classdetail_1_1json__sax__dom__parser_a3c989c4cbb0acd034f5cc31018830885"
label="classdetail_1_1json__sax__dom__parser_a3c989c4cbb0acd034f5cc31018830885"></span>
bool **string** (string_t &val)

<span id="classdetail_1_1json__sax__dom__parser_a9cda315021b356776bed7600f782abde"
label="classdetail_1_1json__sax__dom__parser_a9cda315021b356776bed7600f782abde"></span>
bool **binary** (binary_t &val)

<span id="classdetail_1_1json__sax__dom__parser_a7a3559ee198992550caad696a9c002ff"
label="classdetail_1_1json__sax__dom__parser_a7a3559ee198992550caad696a9c002ff"></span>
bool **start_object** (std::size_t len)

<span id="classdetail_1_1json__sax__dom__parser_af71738af6db40114169d3171a7cb1da0"
label="classdetail_1_1json__sax__dom__parser_af71738af6db40114169d3171a7cb1da0"></span>
bool **key** (string_t &val)

<span id="classdetail_1_1json__sax__dom__parser_acfee569536d31144551a9e37c0b07ee5"
label="classdetail_1_1json__sax__dom__parser_acfee569536d31144551a9e37c0b07ee5"></span>
bool **end_object** ()

<span id="classdetail_1_1json__sax__dom__parser_af6e857ad7aaf6eba2440c67d4b5f360e"
label="classdetail_1_1json__sax__dom__parser_af6e857ad7aaf6eba2440c67d4b5f360e"></span>
bool **start_array** (std::size_t len)

<span id="classdetail_1_1json__sax__dom__parser_abc555200fe32bcecc76d435a17ea732b"
label="classdetail_1_1json__sax__dom__parser_abc555200fe32bcecc76d435a17ea732b"></span>
bool **end_array** ()

<span id="classdetail_1_1json__sax__dom__parser_a3f26893075e90608c97b39d1e809cb60"
label="classdetail_1_1json__sax__dom__parser_a3f26893075e90608c97b39d1e809cb60"></span>
template$<$class Exception $>$   
bool **parse_error** (std::size_t, const std::string &, const Exception
&ex)

<span id="classdetail_1_1json__sax__dom__parser_ad6cfc4a7cc36b9d5b73fb7ddff6409cf"
label="classdetail_1_1json__sax__dom__parser_ad6cfc4a7cc36b9d5b73fb7ddff6409cf"></span>
constexpr bool **is_errored** () const

</div>

### template$<$typename BasicJsonType$>$ class detail::json_sax_dom_parser$<$ BasicJsonType $>$

SAX implementation to create a JSON value from SAX events.

This class implements the interface and processes the SAX events to
create a JSON value which makes it basically a DOM parser. The structure
or hierarchy of the JSON value is managed by the stack ref_stack which
contains a pointer to the respective array or object for each recursion
depth.

After successful parsing, the value that is passed by reference to the
constructor contains the parsed value.

<div class="DoxyTemplParams">

Template Parameters *BasicJsonType* & the JSON type  

</div>

<span id="classdetail_1_1json__sax__dom__parser_a3ee72f78d1ebdd8f8573ccf2b8e3ea6f"
label="classdetail_1_1json__sax__dom__parser_a3ee72f78d1ebdd8f8573ccf2b8e3ea6f"></span>

template$<$typename BasicJsonType $>$  
[detail::json_sax_dom_parser](#classdetail_1_1json__sax__dom__parser)$<$
BasicJsonType $>$::json_sax_dom_parser (

<div class="DoxyParamCaption">

r,

allow_exceptions\_ = true

</div>

),

<div class="DoxyParams">

Parameters ` in,out` & *r* & reference to a JSON value that is
manipulated while parsing  
` in` & *allow_exceptions\_* & whether parse errors yield exceptions  

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
