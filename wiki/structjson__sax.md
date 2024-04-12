<div id="structjson__sax">

</div>

<span id="structjson__sax" label="structjson__sax"></span>

SAX interface.

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

<span id="structjson__sax_a5fd59c56514447ab1a7c5e7f0ab24601"
label="structjson__sax_a5fd59c56514447ab1a7c5e7f0ab24601"></span> using
**number_integer_t** = typename BasicJsonType::number_integer_t

<span id="structjson__sax_acbd02515ccdc3bfe940688fc96ac1359"
label="structjson__sax_acbd02515ccdc3bfe940688fc96ac1359"></span> using
**number_unsigned_t** = typename BasicJsonType::number_unsigned_t

<span id="structjson__sax_acb0bfbb3b0c6e9dc02cd6aab12c85654"
label="structjson__sax_acb0bfbb3b0c6e9dc02cd6aab12c85654"></span> using
**number_float_t** = typename BasicJsonType::number_float_t

<span id="structjson__sax_a62085d156a899aaf2913ac25ded93996"
label="structjson__sax_a62085d156a899aaf2913ac25ded93996"></span> using
**string_t** = typename BasicJsonType::string_t

<span id="structjson__sax_aeb5a583cc482d34e764d038a9c682e02"
label="structjson__sax_aeb5a583cc482d34e764d038a9c682e02"></span> using
**binary_t** = typename BasicJsonType::binary_t

</div>

<div class="DoxyCompactItemize">

virtual bool [null](#structjson__sax_acbcc09c0ada2782cd73cc4135823181d)
()=0

<div class="DoxyCompactList">

*a null value was read*

</div>

virtual bool
[boolean](#structjson__sax_ab89f75382c0fd7fe81c95fc84cfa3150) (bool
val)=0

<div class="DoxyCompactList">

*a boolean value was read*

</div>

virtual bool
[number_integer](#structjson__sax_a46cc306b7677553d8f6bd8c9592eb1bd)
(number_integer_t val)=0

<div class="DoxyCompactList">

*an integer number was read*

</div>

virtual bool
[number_unsigned](#structjson__sax_a32f8a32794cb384f0de3d3a96a6bb696)
(number_unsigned_t val)=0

<div class="DoxyCompactList">

*an unsigned integer number was read*

</div>

virtual bool
[number_float](#structjson__sax_a19eafa3a92fc75e0258a842283396aa9)
(number_float_t val, const string_t &s)=0

<div class="DoxyCompactList">

*a floating-point number was read*

</div>

virtual bool
[string](#structjson__sax_a3da9ee0c61f1a37e6c6a3d2dccb16765) (string_t
&val)=0

<div class="DoxyCompactList">

*a string value was read*

</div>

virtual bool
[binary](#structjson__sax_a15d6c5d0dcaceb906405f427faf9b34e) (binary_t
&val)=0

<div class="DoxyCompactList">

*a binary value was read*

</div>

virtual bool
[start_object](#structjson__sax_a54a0883df64f40664395e3dad674aaa5)
(std::size_t elements)=0

<div class="DoxyCompactList">

*the beginning of an object was read*

</div>

virtual bool [key](#structjson__sax_a3355ecd7e3e9806dcb80b2f8842b82ce)
(string_t &val)=0

<div class="DoxyCompactList">

*an object key was read*

</div>

virtual bool
[end_object](#structjson__sax_ac34854cab5e023c5d0e8b381a11aba5b) ()=0

<div class="DoxyCompactList">

*the end of an object was read*

</div>

virtual bool
[start_array](#structjson__sax_afc4d5c0d123f2e3c939060a778c4f22c)
(std::size_t elements)=0

<div class="DoxyCompactList">

*the beginning of an array was read*

</div>

virtual bool
[end_array](#structjson__sax_a81fbddbf7dc96eab21ef916625ad5f3b) ()=0

<div class="DoxyCompactList">

*the end of an array was read*

</div>

virtual bool
[parse_error](#structjson__sax_af165920966b60b78e57a2e4d92a63897)
(std::size_t position, const std::string &last_token, const
[detail::exception](#classdetail_1_1exception) &ex)=0

<div class="DoxyCompactList">

*a parse error occurred*

</div>

<span id="structjson__sax_a978a4d26990f64d60686ef22568e76eb"
label="structjson__sax_a978a4d26990f64d60686ef22568e76eb"></span>
**json_sax** (const [json_sax](#structjson__sax) &)=default

<span id="structjson__sax_adb6b743b889faf0c050f80bfae890450"
label="structjson__sax_adb6b743b889faf0c050f80bfae890450"></span>
**json_sax** ([json_sax](#structjson__sax) &&) noexcept=default

<span id="structjson__sax_afff13171be3b416d8a6bcfa925883d9b"
label="structjson__sax_afff13171be3b416d8a6bcfa925883d9b"></span>
[json_sax](#structjson__sax) & **operator=** (const
[json_sax](#structjson__sax) &)=default

<span id="structjson__sax_a892558995c2ee775c9a3223282fd8733"
label="structjson__sax_a892558995c2ee775c9a3223282fd8733"></span>
[json_sax](#structjson__sax) & **operator=**
([json_sax](#structjson__sax) &&) noexcept=default

</div>

### template$<$typename BasicJsonType$>$ struct json_sax$<$ BasicJsonType $>$

SAX interface.

This class describes the SAX interface used by
nlohmann::json::sax_parse. Each function is called in different
situations while the input is parsed. The boolean return value informs
the parser whether to continue processing the input.

<span id="structjson__sax_a15d6c5d0dcaceb906405f427faf9b34e"
label="structjson__sax_a15d6c5d0dcaceb906405f427faf9b34e"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType $>$::binary (

<div class="DoxyParamCaption">

val

</div>

)

a binary value was read

<div class="DoxyParams">

Parameters ` in` & *val* & binary value  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<div class="DoxyNote">

Note It is safe to move the passed binary value.

</div>

<span id="structjson__sax_ab89f75382c0fd7fe81c95fc84cfa3150"
label="structjson__sax_ab89f75382c0fd7fe81c95fc84cfa3150"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType $>$::boolean
(

<div class="DoxyParamCaption">

val

</div>

)

a boolean value was read

<div class="DoxyParams">

Parameters ` in` & *val* & boolean value  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<span id="structjson__sax_a81fbddbf7dc96eab21ef916625ad5f3b"
label="structjson__sax_a81fbddbf7dc96eab21ef916625ad5f3b"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::end_array (

<div class="DoxyParamCaption">

</div>

)

the end of an array was read

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<span id="structjson__sax_ac34854cab5e023c5d0e8b381a11aba5b"
label="structjson__sax_ac34854cab5e023c5d0e8b381a11aba5b"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::end_object (

<div class="DoxyParamCaption">

</div>

)

the end of an object was read

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<span id="structjson__sax_a3355ecd7e3e9806dcb80b2f8842b82ce"
label="structjson__sax_a3355ecd7e3e9806dcb80b2f8842b82ce"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType $>$::key (

<div class="DoxyParamCaption">

val

</div>

)

an object key was read

<div class="DoxyParams">

Parameters ` in` & *val* & object key  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<div class="DoxyNote">

Note It is safe to move the passed string.

</div>

<span id="structjson__sax_acbcc09c0ada2782cd73cc4135823181d"
label="structjson__sax_acbcc09c0ada2782cd73cc4135823181d"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType $>$::null (

<div class="DoxyParamCaption">

</div>

)

a null value was read

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<span id="structjson__sax_a19eafa3a92fc75e0258a842283396aa9"
label="structjson__sax_a19eafa3a92fc75e0258a842283396aa9"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::number_float (

<div class="DoxyParamCaption">

val,

s

</div>

)

a floating-point number was read

<div class="DoxyParams">

Parameters ` in` & *val* & floating-point value  
` in` & *s* & raw token value  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<span id="structjson__sax_a46cc306b7677553d8f6bd8c9592eb1bd"
label="structjson__sax_a46cc306b7677553d8f6bd8c9592eb1bd"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::number_integer (

<div class="DoxyParamCaption">

val

</div>

)

an integer number was read

<div class="DoxyParams">

Parameters ` in` & *val* & integer value  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<span id="structjson__sax_a32f8a32794cb384f0de3d3a96a6bb696"
label="structjson__sax_a32f8a32794cb384f0de3d3a96a6bb696"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::number_unsigned (

<div class="DoxyParamCaption">

val

</div>

)

an unsigned integer number was read

<div class="DoxyParams">

Parameters ` in` & *val* & unsigned integer value  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<span id="structjson__sax_af165920966b60b78e57a2e4d92a63897"
label="structjson__sax_af165920966b60b78e57a2e4d92a63897"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::parse_error (

<div class="DoxyParamCaption">

position,

last_token,

ex

</div>

)

a parse error occurred

<div class="DoxyParams">

Parameters ` in` & *position* & the position in the input where the
error occurs  
` in` & *last_token* & the last read token  
` in` & *ex* & an exception object describing the error  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed (must return false)

</div>

<span id="structjson__sax_afc4d5c0d123f2e3c939060a778c4f22c"
label="structjson__sax_afc4d5c0d123f2e3c939060a778c4f22c"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::start_array (

<div class="DoxyParamCaption">

elements

</div>

)

the beginning of an array was read

<div class="DoxyParams">

Parameters ` in` & *elements* & number of array elements or -1 if
unknown  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<div class="DoxyNote">

Note binary formats may report the number of elements

</div>

<span id="structjson__sax_a54a0883df64f40664395e3dad674aaa5"
label="structjson__sax_a54a0883df64f40664395e3dad674aaa5"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType
$>$::start_object (

<div class="DoxyParamCaption">

elements

</div>

)

the beginning of an object was read

<div class="DoxyParams">

Parameters ` in` & *elements* & number of object elements or -1 if
unknown  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<div class="DoxyNote">

Note binary formats may report the number of elements

</div>

<span id="structjson__sax_a3da9ee0c61f1a37e6c6a3d2dccb16765"
label="structjson__sax_a3da9ee0c61f1a37e6c6a3d2dccb16765"></span>

template$<$typename BasicJsonType $>$  
virtual bool [json_sax](#structjson__sax)$<$ BasicJsonType $>$::string (

<div class="DoxyParamCaption">

val

</div>

)

a string value was read

<div class="DoxyParams">

Parameters ` in` & *val* & string value  

</div>

<div class="DoxyReturn">

Returns whether parsing should proceed

</div>

<div class="DoxyNote">

Note It is safe to move the passed string value.

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
