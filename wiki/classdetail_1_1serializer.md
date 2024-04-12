<div id="classdetail_1_1serializer">

</div>

<span id="classdetail_1_1serializer"
label="classdetail_1_1serializer"></span>

<div class="DoxyCompactItemize">

[serializer](#classdetail_1_1serializer_a3d025f3aa1e8661554858b8aaab08c3b)
([output_adapter_t](#namespacedetail_a558c0470e929e42aad8be2527da6c033)$<$
char $>$ s, const char ichar,
[error_handler_t](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298)
error_handler\_=[error_handler_t::strict](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792))

<span id="classdetail_1_1serializer_aee27a802605bff8959928c98c2d81e8f"
label="classdetail_1_1serializer_aee27a802605bff8959928c98c2d81e8f"></span>
**serializer** (const [serializer](#classdetail_1_1serializer) &)=delete

<span id="classdetail_1_1serializer_a603e3f19725d9703fe22e74a59be4a33"
label="classdetail_1_1serializer_a603e3f19725d9703fe22e74a59be4a33"></span>
[serializer](#classdetail_1_1serializer) & **operator=** (const
[serializer](#classdetail_1_1serializer) &)=delete

<span id="classdetail_1_1serializer_af84deb8c14f27012063e02ce6b7a9c86"
label="classdetail_1_1serializer_af84deb8c14f27012063e02ce6b7a9c86"></span>
**serializer** ([serializer](#classdetail_1_1serializer) &&)=delete

<span id="classdetail_1_1serializer_a9783d5ef7ff7234162e0253bbac50353"
label="classdetail_1_1serializer_a9783d5ef7ff7234162e0253bbac50353"></span>
[serializer](#classdetail_1_1serializer) & **operator=**
([serializer](#classdetail_1_1serializer) &&)=delete

void
[dump](#classdetail_1_1serializer_ae73c1bac64bcc810923b9f1261af8b09)
(const BasicJsonType &val, const bool pretty_print, const bool
ensure_ascii, const unsigned int indent_step, const unsigned int
current_indent=0)

<div class="DoxyCompactList">

*internal implementation of the serialization function*

</div>

<span id="classdetail_1_1serializer_a491abc2de2affbc9c3490bde110b7f07"
label="classdetail_1_1serializer_a491abc2de2affbc9c3490bde110b7f07"></span>
**for** (std::size_t i=0;i$<$ s.size();++i)

<span id="classdetail_1_1serializer_a167710da81ad08541c61bc5640d15688"
label="classdetail_1_1serializer_a167710da81ad08541c61bc5640d15688"></span>
**if** (JSON_HEDLEY_LIKELY(state==UTF8_ACCEPT))

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1serializer_aae0aca92f2f35e72aac9c7d22e01312b"
label="classdetail_1_1serializer_aae0aca92f2f35e72aac9c7d22e01312b"></span>
JSON_PRIVATE_UNLESS_TESTED : void dump_escaped(const string_t& s

JSON_PRIVATE_UNLESS_TESTED const bool
[ensure_ascii](#classdetail_1_1serializer_a414071fcc39c97fa8e64455a222d8d08)

<span id="classdetail_1_1serializer_a2db3d61cfc616f83763b6d4a03d0d772"
label="classdetail_1_1serializer_a2db3d61cfc616f83763b6d4a03d0d772"></span>
std::uint8_t **state** = UTF8_ACCEPT

<span id="classdetail_1_1serializer_ae08644483db303ce3d1580332ff0a458"
label="classdetail_1_1serializer_ae08644483db303ce3d1580332ff0a458"></span>
std::size_t **bytes** = 0

<span id="classdetail_1_1serializer_a3c23eca4cc58a835a0a08ff580dcaae0"
label="classdetail_1_1serializer_a3c23eca4cc58a835a0a08ff580dcaae0"></span>
std::size_t **bytes_after_last_accept** = 0

<span id="classdetail_1_1serializer_a44a05646a5ac7caec54f97ba17cb893b"
label="classdetail_1_1serializer_a44a05646a5ac7caec54f97ba17cb893b"></span>
std::size_t **undumped_chars** = 0

<span id="classdetail_1_1serializer_a1cef7f1e504d729887dc828910497cd2"
label="classdetail_1_1serializer_a1cef7f1e504d729887dc828910497cd2"></span>
**else**

<span id="classdetail_1_1serializer_ace18a55b8304310fee309d31e54a3e27"
label="classdetail_1_1serializer_ace18a55b8304310fee309d31e54a3e27"></span>
std::array$<$ char, 64 $>$ **number_buffer** {{}}

<div class="DoxyCompactList">

*a (hopefully) large enough character buffer*

</div>

<span id="classdetail_1_1serializer_a80ca90565eec446d377ab65a023297ab"
label="classdetail_1_1serializer_a80ca90565eec446d377ab65a023297ab"></span>
const std::lconv $\ast$ **loc** = nullptr

<div class="DoxyCompactList">

*the locale*

</div>

<span id="classdetail_1_1serializer_a5b75b99511362e4e5d011c8a961e96bb"
label="classdetail_1_1serializer_a5b75b99511362e4e5d011c8a961e96bb"></span>
const char **thousands_sep** = \0

<div class="DoxyCompactList">

*the locales thousand separator character*

</div>

<span id="classdetail_1_1serializer_a5f01fcbf64cb1e5f36d8853ebcd96412"
label="classdetail_1_1serializer_a5f01fcbf64cb1e5f36d8853ebcd96412"></span>
const char **decimal_point** = \0

<div class="DoxyCompactList">

*the locales decimal point character*

</div>

<span id="classdetail_1_1serializer_a27a61728ed0fbc65de009286531a6e70"
label="classdetail_1_1serializer_a27a61728ed0fbc65de009286531a6e70"></span>
std::array$<$ char, 512 $>$ **string_buffer** {{}}

<div class="DoxyCompactList">

*string buffer*

</div>

<span id="classdetail_1_1serializer_acf6f783e3299d8b18ce4b5d9746f39f6"
label="classdetail_1_1serializer_acf6f783e3299d8b18ce4b5d9746f39f6"></span>
const char **indent_char**

<div class="DoxyCompactList">

*the indentation character*

</div>

<span id="classdetail_1_1serializer_a7f6f1d36859514ab42984deb28d2521e"
label="classdetail_1_1serializer_a7f6f1d36859514ab42984deb28d2521e"></span>
string_t **indent_string**

<div class="DoxyCompactList">

*the indentation string*

</div>

<span id="classdetail_1_1serializer_a79d25c7416dd71a0db8b10988ec360f7"
label="classdetail_1_1serializer_a79d25c7416dd71a0db8b10988ec360f7"></span>
const
[error_handler_t](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298)
**error_handler**

<div class="DoxyCompactList">

*error_handler how to react on decoding errors*

</div>

</div>

<span id="classdetail_1_1serializer_a3d025f3aa1e8661554858b8aaab08c3b"
label="classdetail_1_1serializer_a3d025f3aa1e8661554858b8aaab08c3b"></span>

template$<$typename BasicJsonType $>$  
[detail::serializer](#classdetail_1_1serializer)$<$ BasicJsonType
$>$::serializer (

<div class="DoxyParamCaption">

s,

ichar,

error_handler\_ =
[error_handler_t::strict](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792)

</div>

)

<div class="DoxyParams">

Parameters ` in` & *s* & output stream to serialize to  
` in` & *ichar* & indentation character to use  
` in` & *error_handler\_* & how to react on decoding errors  

</div>

<span id="classdetail_1_1serializer_ae73c1bac64bcc810923b9f1261af8b09"
label="classdetail_1_1serializer_ae73c1bac64bcc810923b9f1261af8b09"></span>

template$<$typename BasicJsonType $>$  
void [detail::serializer](#classdetail_1_1serializer)$<$ BasicJsonType
$>$::dump (

<div class="DoxyParamCaption">

val,

pretty_print,

ensure_ascii,

indent_step,

current_indent =

</div>

)

internal implementation of the serialization function

This function is called by the public member function dump and organizes
the serialization internally. The indentation level is propagated as
additional parameter. In case of arrays and objects, the function is
called recursively.

<div class="DoxyItemize">

strings and object keys are escaped using escape_string()

integer numbers are converted implicitly via operator$<$$<$

floating-point numbers are converted to a string using "%g" format

binary values are serialized as objects containing the subtype and the
byte array

</div>

<div class="DoxyParams">

Parameters ` in` & *val* & value to serialize  
` in` & *pretty_print* & whether the output shall be pretty-printed  
` in` & *ensure_ascii* & If *ensure_ascii* is true, all non-ASCII
characters in the output are escaped with \uXXXX sequences, and the
result consists of ASCII characters only.  
` in` & *indent_step* & the indent level  
` in` & *current_indent* & the current indent level (only used
internally)  

</div>

<span id="classdetail_1_1serializer_a414071fcc39c97fa8e64455a222d8d08"
label="classdetail_1_1serializer_a414071fcc39c97fa8e64455a222d8d08"></span>
template$<$typename BasicJsonType $>$  
JSON_PRIVATE_UNLESS_TESTED const bool
[detail::serializer](#classdetail_1_1serializer)$<$ BasicJsonType
$>$::ensure_ascii

**Initial value:**

<div class="DoxyCode">

0

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
