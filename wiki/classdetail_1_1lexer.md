<div id="classdetail_1_1lexer">

</div>

<span id="classdetail_1_1lexer" label="classdetail_1_1lexer"></span>

lexical analysis

\#include $<$json.hpp$>$

Inheritance diagram for detail::lexer$<$ BasicJsonType, InputAdapterType
$>$:

<figure>
<div class="center">
<img src="classdetail_1_1lexer" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1lexer_a74052693c02be1a1e245295b62e5fcb6"
label="classdetail_1_1lexer_a74052693c02be1a1e245295b62e5fcb6"></span>
using **token_type** = typename
[lexer_base](#classdetail_1_1lexer__base)$<$BasicJsonType$>$::token_type

</div>

<div class="DoxyCompactItemize">

enum class
[token_type](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540)
{
[uninitialized](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a42dd1a73d072bb6bf3f494f22b15db8e)
,
[literal_true](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a85cc1a37b0aaa52de40e72f0ed4e0c0d)
,
[literal_false](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540afab1694b1b3937a079f4625fe0b6108b)
,
[literal_null](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540ab7ae4c0e46d86f884677768160b26e9e)
,
[value_string](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a2b490e8bf366b4cbe3ebd99b26ce15ce)
,
[value_unsigned](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540aaf1f040fcd2f674d2e5893d7a731078f)
,
[value_integer](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a5064b6655d88a50ae16665cf7751c0ee)
,
[value_float](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a0d2671a6f81efb91e77f6ac3bdb11443)
,
[begin_array](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a16c226b4425b68560fea322b46dabe01)
,
[begin_object](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a9a9ffd53b6869d4eca271b1ed5b57fe8)
,
[end_array](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a2f3e68e7f111a1e5c7728742b3ca2b7f)
,
[end_object](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a7d5b4427866814de4d8f132721d59c87)
,
[name_separator](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540acc3c64f8ae08c00de1b33f19a4d2913a)
,
[value_separator](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a745373036100d7392ad62c617cab59af)
,
[parse_error](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540a456e19aeafa334241c7ff3f589547f9d)
,
[end_of_input](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540aca11f56dd477c09e06583dbdcda0985f)
,
[literal_or_value](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540ad2a8e6f6721cccec0b466301dd9495a5)
}

<div class="DoxyCompactList">

*token types for the parser*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1lexer_a384af885c37d58c963b902008c279fd6"
label="classdetail_1_1lexer_a384af885c37d58c963b902008c279fd6"></span>
**lexer** (InputAdapterType &&adapter, bool ignore_comments\_=false)
noexcept

<span id="classdetail_1_1lexer_a963dce44c9d66c9a7c9d3206e1cff2ed"
label="classdetail_1_1lexer_a963dce44c9d66c9a7c9d3206e1cff2ed"></span>
**lexer** (const [lexer](#classdetail_1_1lexer) &)=delete

<span id="classdetail_1_1lexer_a79ce2eb7f127977f1d2499a1f10aa262"
label="classdetail_1_1lexer_a79ce2eb7f127977f1d2499a1f10aa262"></span>
**lexer** ([lexer](#classdetail_1_1lexer) &&)=default

<span id="classdetail_1_1lexer_aa64ea2cdf34301e5d1280de82750cd83"
label="classdetail_1_1lexer_aa64ea2cdf34301e5d1280de82750cd83"></span>
[lexer](#classdetail_1_1lexer) & **operator=**
([lexer](#classdetail_1_1lexer) &)=delete

<span id="classdetail_1_1lexer_a8436bd7b1296151e8555c6f2b7bd2b2a"
label="classdetail_1_1lexer_a8436bd7b1296151e8555c6f2b7bd2b2a"></span>
[lexer](#classdetail_1_1lexer) & **operator=**
([lexer](#classdetail_1_1lexer) &&)=default

<span id="classdetail_1_1lexer_a4227de7d0382fb4d3e18b119f0cc87d7"
label="classdetail_1_1lexer_a4227de7d0382fb4d3e18b119f0cc87d7"></span>
constexpr number_integer_t **get_number_integer** () const noexcept

<div class="DoxyCompactList">

*return integer value*

</div>

<span id="classdetail_1_1lexer_a65495d5d60a279adb009efa728708441"
label="classdetail_1_1lexer_a65495d5d60a279adb009efa728708441"></span>
constexpr number_unsigned_t **get_number_unsigned** () const noexcept

<div class="DoxyCompactList">

*return unsigned integer value*

</div>

<span id="classdetail_1_1lexer_af2e903d32a7e3705c66539ea1e30ce59"
label="classdetail_1_1lexer_af2e903d32a7e3705c66539ea1e30ce59"></span>
constexpr number_float_t **get_number_float** () const noexcept

<div class="DoxyCompactList">

*return floating-point value*

</div>

<span id="classdetail_1_1lexer_aae63a63a83ae7e7bd5dc1a83669ba281"
label="classdetail_1_1lexer_aae63a63a83ae7e7bd5dc1a83669ba281"></span>
string_t & **get_string** ()

<div class="DoxyCompactList">

*return current string value (implicitly resets the token; useful only
once)*

</div>

<span id="classdetail_1_1lexer_a569266654a88a2dc6f0e9a587067fc9d"
label="classdetail_1_1lexer_a569266654a88a2dc6f0e9a587067fc9d"></span>
constexpr [position_t](#structdetail_1_1position__t) **get_position** ()
const noexcept

<div class="DoxyCompactList">

*return position of last read token*

</div>

std::string
[get_token_string](#classdetail_1_1lexer_a41481d87dc1bcaaf532f529fbc0e690b)
() const

<span id="classdetail_1_1lexer_a412c108d8b931630d54e42fbbf764fc4"
label="classdetail_1_1lexer_a412c108d8b931630d54e42fbbf764fc4"></span>
JSON_HEDLEY_RETURNS_NON_NULL constexpr const char $\ast$
**get_error_message** () const noexcept

<div class="DoxyCompactList">

*return syntax error message*

</div>

bool [skip_bom](#classdetail_1_1lexer_a04ae0c7807a761f4162ff42290be5490)
()

<div class="DoxyCompactList">

*skip the UTF-8 byte order mark*

</div>

<span id="classdetail_1_1lexer_a230468eb9130a7173e0636fc1fc5606b"
label="classdetail_1_1lexer_a230468eb9130a7173e0636fc1fc5606b"></span>
void **skip_whitespace** ()

<span id="classdetail_1_1lexer_a6497d12a0c35b355b3e22da69d6819f9"
label="classdetail_1_1lexer_a6497d12a0c35b355b3e22da69d6819f9"></span>
token_type **scan** ()

</div>

<div class="DoxyCompactItemize">

JSON_HEDLEY_RETURNS_NON_NULL static JSON_HEDLEY_CONST const char $\ast$
**token_type_name** (const
[token_type](#classdetail_1_1lexer__base_add65fa7a85aa15052963809fbcc04540)
t) noexcept

<div class="DoxyCompactList">

*return name of values of type token_type (only used for errors)*

</div>

</div>

### template$<$typename BasicJsonType, typename InputAdapterType$>$ class detail::lexer$<$ BasicJsonType, InputAdapterType $>$

lexical analysis

This class organizes the lexical analysis during JSON deserialization.

<span id="classdetail_1_1lexer_a41481d87dc1bcaaf532f529fbc0e690b"
label="classdetail_1_1lexer_a41481d87dc1bcaaf532f529fbc0e690b"></span>

template$<$typename BasicJsonType , typename InputAdapterType $>$  
std::string [detail::lexer](#classdetail_1_1lexer)$<$ BasicJsonType,
InputAdapterType $>$::get_token_string (

<div class="DoxyParamCaption">

</div>

) const

return the last read token (for errors only). Will never contain EOF (an
arbitrary value that is not a valid char value, often -1), because 255
may legitimately occur. May contain NUL, which should be escaped.
<span id="classdetail_1_1lexer_a04ae0c7807a761f4162ff42290be5490"
label="classdetail_1_1lexer_a04ae0c7807a761f4162ff42290be5490"></span>

template$<$typename BasicJsonType , typename InputAdapterType $>$  
bool [detail::lexer](#classdetail_1_1lexer)$<$ BasicJsonType,
InputAdapterType $>$::skip_bom (

<div class="DoxyParamCaption">

</div>

)

skip the UTF-8 byte order mark

<div class="DoxyReturn">

Returns true iff there is no BOM or the correct BOM has been skipped

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
