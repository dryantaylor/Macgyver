<div id="classdetail_1_1binary__writer">

</div>

<span id="classdetail_1_1binary__writer"
label="classdetail_1_1binary__writer"></span>

serialization to CBOR and MessagePack values

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

[binary_writer](#classdetail_1_1binary__writer_a5b4f1bfcd0f3f7b57060c059e008c45b)
([output_adapter_t](#namespacedetail_a558c0470e929e42aad8be2527da6c033)$<$
CharType $>$ adapter)

<div class="DoxyCompactList">

*create a binary writer*

</div>

void
[write_bson](#classdetail_1_1binary__writer_a1aae361b7492825979cbb80245b9c0d6)
(const BasicJsonType &j)

void
[write_cbor](#classdetail_1_1binary__writer_ae6ab36b61e8ad346e75d9f9abc983d4c)
(const BasicJsonType &j)

void
[write_msgpack](#classdetail_1_1binary__writer_adc3dbefa80134d3530a1b3f1c9629586)
(const BasicJsonType &j)

void
[write_ubjson](#classdetail_1_1binary__writer_a972bec9688cbc5673bb482bbe9543e2a)
(const BasicJsonType &j, const bool use_count, const bool use_type,
const bool add_prefix=true, const bool use_bjdata=false)

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1binary__writer_a2822d4a58bbb0dc2198686da430e8906"
label="classdetail_1_1binary__writer_a2822d4a58bbb0dc2198686da430e8906"></span>
template$<$typename C = CharType, enable_if_t$<$ std::is_signed$<$ C
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
&&std::is_signed$<$ char
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
$>$ $\ast$ = nullptr$>$   
static constexpr CharType **to_char_type** (std::uint8_t x) noexcept

<span id="classdetail_1_1binary__writer_a4bc03434de56f9c9afd24702922a7ec8"
label="classdetail_1_1binary__writer_a4bc03434de56f9c9afd24702922a7ec8"></span>
template$<$typename C = CharType, enable_if_t$<$ std::is_signed$<$ C
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
&&std::is_unsigned$<$ char
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
$>$ $\ast$ = nullptr$>$   
static CharType **to_char_type** (std::uint8_t x) noexcept

<span id="classdetail_1_1binary__writer_a2822d4a58bbb0dc2198686da430e8906"
label="classdetail_1_1binary__writer_a2822d4a58bbb0dc2198686da430e8906"></span>
template$<$typename C = CharType, enable_if_t$<$ std::is_unsigned$<$ C
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
$>$ $\ast$ = nullptr$>$   
static constexpr CharType **to_char_type** (std::uint8_t x) noexcept

<span id="classdetail_1_1binary__writer_a91bfd3642a0f90c295f9ce79c9447be9"
label="classdetail_1_1binary__writer_a91bfd3642a0f90c295f9ce79c9447be9"></span>
template$<$typename InputCharType , typename C = CharType,
enable_if_t$<$ std::is_signed$<$ C
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
&&std::is_signed$<$ char
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
&&std::is_same$<$ char, typename std::remove_cv$<$ InputCharType
$>$::type
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
$>$ $\ast$ = nullptr$>$   
static constexpr CharType **to_char_type** (InputCharType x) noexcept

</div>

### template$<$typename BasicJsonType, typename CharType$>$ class detail::binary_writer$<$ BasicJsonType, CharType $>$

serialization to CBOR and MessagePack values

<span id="classdetail_1_1binary__writer_a5b4f1bfcd0f3f7b57060c059e008c45b"
label="classdetail_1_1binary__writer_a5b4f1bfcd0f3f7b57060c059e008c45b"></span>

template$<$typename BasicJsonType , typename CharType $>$  
[detail::binary_writer](#classdetail_1_1binary__writer)$<$
BasicJsonType, CharType $>$::binary_writer (

<div class="DoxyParamCaption">

adapter

</div>

),

create a binary writer

<div class="DoxyParams">

Parameters ` in` & *adapter* & output adapter to write to  

</div>

<span id="classdetail_1_1binary__writer_a1aae361b7492825979cbb80245b9c0d6"
label="classdetail_1_1binary__writer_a1aae361b7492825979cbb80245b9c0d6"></span>

template$<$typename BasicJsonType , typename CharType $>$  
void [detail::binary_writer](#classdetail_1_1binary__writer)$<$
BasicJsonType, CharType $>$::write_bson (

<div class="DoxyParamCaption">

j

</div>

)

<div class="DoxyParams">

Parameters ` in` & *j* & JSON value to serialize  

</div>

<div class="DoxyPrecond">

Precondition j.type() ==

</div>

<span id="classdetail_1_1binary__writer_ae6ab36b61e8ad346e75d9f9abc983d4c"
label="classdetail_1_1binary__writer_ae6ab36b61e8ad346e75d9f9abc983d4c"></span>

template$<$typename BasicJsonType , typename CharType $>$  
void [detail::binary_writer](#classdetail_1_1binary__writer)$<$
BasicJsonType, CharType $>$::write_cbor (

<div class="DoxyParamCaption">

j

</div>

)

<div class="DoxyParams">

Parameters ` in` & *j* & JSON value to serialize  

</div>

<span id="classdetail_1_1binary__writer_adc3dbefa80134d3530a1b3f1c9629586"
label="classdetail_1_1binary__writer_adc3dbefa80134d3530a1b3f1c9629586"></span>

template$<$typename BasicJsonType , typename CharType $>$  
void [detail::binary_writer](#classdetail_1_1binary__writer)$<$
BasicJsonType, CharType $>$::write_msgpack (

<div class="DoxyParamCaption">

j

</div>

)

<div class="DoxyParams">

Parameters ` in` & *j* & JSON value to serialize  

</div>

<span id="classdetail_1_1binary__writer_a972bec9688cbc5673bb482bbe9543e2a"
label="classdetail_1_1binary__writer_a972bec9688cbc5673bb482bbe9543e2a"></span>

template$<$typename BasicJsonType , typename CharType $>$  
void [detail::binary_writer](#classdetail_1_1binary__writer)$<$
BasicJsonType, CharType $>$::write_ubjson (

<div class="DoxyParamCaption">

j,

use_count,

use_type,

add_prefix = true,

use_bjdata = false

</div>

)

<div class="DoxyParams">

Parameters ` in` & *j* & JSON value to serialize  
` in` & *use_count* & whether to use \# prefixes (optimized format)  
` in` & *use_type* & whether to use \$ prefixes (optimized format)  
` in` & *add_prefix* & whether prefixes need to be used for this value  
` in` & *use_bjdata* & whether write in BJData format, default is
false  

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
